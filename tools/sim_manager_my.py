#!/usr/bin/env python3

import argparse
import sys
import os
from typing import List, Optional
from elftools.elf.elffile import ELFFile
import subprocess
import shutil
import concurrent.futures
import multiprocessing
import traceback



IMEM_DEPTH = 1024

def run_gen (test: str) -> None:
    os.makedirs(f"work/{test}", exist_ok=True)
    test_path = test.split(".")
    extension = ""
    if test_path[0] == "asm":
        extension = ".s"
    try:    
        res = subprocess.run(f"riscv64-unknown-elf-gcc -march=rv32im -mabi=ilp32 -o work/{test}/test.elf -nostdlib -Ttext 0x100000 {os.path.join('tests', test_path[0], test_path[1] + extension)}", shell=True, check=True)
    except subprocess.CalledProcessError as e:
        print(f"[Error] Compilation failed for test {test}")
        print(f"Error output: {e.stderr}")
    
    except Exception as e:
        print(f"Error compiling test {test} : {e}")
        sys.exit(1)

def run_iss (test: str) -> None:

    elf_path = os.path.join("work", test, "test.elf")
    # Check if I have a memory initialization file for this test
    test_path = test.split(".")
    dmem_path = os.path.join("tests", test_path[0], test_path[1], ".mem")
    has_dmem = os.path.exists(dmem_path)
    if has_dmem:
        shutil.copy(dmem_path, os.path.join("work", test, "dmem.hex"))
    try:
        if has_dmem:
            res1 = subprocess.run(f"./tools/riscv_sim {elf_path} -o {os.path.join("work", test, "iss.log")} -m {os.path.join("work", test, "dmem.hex")}", shell=True, check=True)
        else:
            res2 = subprocess.run(f"./tools/riscv_sim {elf_path} -o {os.path.join("work", test, "iss.log")}", shell=True, check=True)

    except Exception as e:
        print(f"Error running ISS for test {test}: {e}")
        sys.exit(1)

def prepare_imem(test: str) -> None:
    imem_path = os.path.join("work", test, "imem.hex")
    elf_path = os.path.join("work", test, "test.elf")

    # read the elf file using elf tools
    with open(elf_path, 'rb') as f:
        elf = ELFFile(f)
        # get text section from the elf
        text_section = elf.get_section_by_name(".text")
        if not text_section:
            print("Error: No text section in the elf file")
            sys.exit(1)
        #get data from text section
        imem_data = text_section.data()
        if len(imem_data) > IMEM_DEPTH :
            print(f"Warning: Instruction data truncated to {IMEM_DEPTH} bytes")
            imem_data = imem_data[:IMEM_DEPTH]

        if len(imem_data) < IMEM_DEPTH:
            imem_data = imem_data + b'\x00' * (IMEM_DEPTH - len(imem_data))    # b'' denotes byte string   \x denotes hexadecimal

    with open(imem_path, 'w') as f:
        for i in range (0, IMEM_DEPTH, 4):
            word = imem_data[i:i+4]

            hex_str = '{:08x}'.format(int.from_bytes(word, byteorder='little'))
            f.write(f"{hex_str}\n")
# from the repo

def read_task_list(filename: str) -> List[str]:
    """Read and return list of tests from file."""
    try:
        with open(filename, 'r') as f:
            return [line.strip() for line in f if line.strip()]
    except Exception as e:
        print(f"Error reading task list file: {e}")
        return []

def run_verilator(test: str) -> None:
    """Execute Verilator simulation."""
    has_dmem = os.path.exists(os.path.join("work", test, "dmem.hex"))
    verilator_cmd = f"export PROJ=$(pwd) && cd {os.path.join('work', test)} && verilator --cc --trace --trace-structs --build --timing --top-module core_top_tb --exe $PROJ/verilator/core_top_tb.cpp -f $PROJ/rtl/core_top.flist -DICCM_INIT_FILE='\"imem.hex\"' -DRESET_VECTOR=32\\'h100000 -I$PROJ/rtl/include"
    if has_dmem:
        verilator_cmd += f" -DDCCM_INIT_FILE='\"dmem.hex\"'"
    else:
        verilator_cmd += f" -DDCCM_INIT_FILE='\"\"'"
    verilator_cmd += f" && make -j -C obj_dir -f Vcore_top_tb.mk Vcore_top_tb"
    verilator_cmd += f" && ./obj_dir/Vcore_top_tb"
    
    # Redirect both stdout and stderr to sim.log
    sim_log_path = os.path.join('work', test, 'sim.log')
    with open(sim_log_path, 'w') as sim_log:
        process = subprocess.Popen(verilator_cmd, shell=True, stdout=sim_log, stderr=subprocess.STDOUT)
        process.wait()
        # Get the exit code
        exit_code = process.returncode
        if exit_code != 0:
            print(f"Error: Verilator returned exit code {exit_code}")
            sim_log.close()
            sys.exit(1)
    
def run_xsim(test: str) -> None:
    """Execute XSim simulation."""
    has_dmem = os.path.exists(os.path.join("work", test, "dmem.hex"))
    xsim_cmd = f"export PROJ=$(pwd) && cd {os.path.join('work', test)} && xvlog -sv -f $PROJ/rtl/core_top.flist --define ICCM_INIT_FILE='\"imem.hex\"' --define RESET_VECTOR=32\\'h100000"
    if has_dmem:
        xsim_cmd += f" --define DCCM_INIT_FILE='\"dmem.hex\"'"
    else:
        xsim_cmd += f" --define DCCM_INIT_FILE='\"\"'"
    xsim_cmd += f" && xelab -top core_top_tb -snapshot sim --debug wave && xsim sim --runall"
    
    # Redirect both stdout and stderr to sim.log
    sim_log_path = os.path.join('work', test, 'sim.log')
    with open(sim_log_path, 'w') as sim_log:
        process = subprocess.Popen(xsim_cmd, shell=True, stdout=sim_log, stderr=subprocess.STDOUT)
        process.wait()
        # Get the exit code
        exit_code = process.returncode
        if exit_code != 0:
            print(f"Error: XSim returned exit code {exit_code}")
            sim_log.close()
            sys.exit(1)

def compare_results(test: str) -> None:
    sim_log_path = os.path.join('work', test, 'sim.log')
    # Open the ISS log file
    with open(os.path.join("work", test, "iss.log"), "r") as f:
        iss_log = f.read()
    # Open the XSim log file
    with open(os.path.join("work", test, "rtl.log"), "r") as f:
        rtl_log = f.read()
    iss_exe = []
    rtl_exe = []
    for line in iss_log.split("\n"):
        if line != "":
            line = line.split(";") 
            iss_exe.append({
            'pc': line[0],
            'instr': line[1],
            'mnemonic': line[2],
            'touch': line[3]
        })
    for line in rtl_log.split("\n"):
        if line != "":
            line = line.split(";")
            rtl_exe.append({
                'pc': line[1],
                'instr': line[2],
                'touch': line[3]              #MODIFIED
            })
    # with open(sim_log_path, 'w') as s:
    #     for idx in range (len(iss_exe)):
    #         s.write(f"PC (ISS): {str(iss_exe[idx]['pc'])}\n")
    #         s.write(f"instr (ISS): {str(iss_exe[idx]['instr'])}\n")
    #         s.write(f"touch (ISS): {str(iss_exe[idx]['touch'])}\n")
    #     for idx in range (len(rtl_exe)):
    #         s.write(f"PC (rtl): {str(rtl_exe[idx]['pc'])}\n")
    #         s.write(f"instr (rtl): {str(rtl_exe[idx]['instr'])}\n")
    #         s.write(f"touch (rtl): {str(rtl_exe[idx]['touch'])}\n")
        

    
    # Remove last instruction from both logs
    iss_exe.pop()
    rtl_exe.pop()

    # Compare the logs
    test_passed = True
    sim_log_path = os.path.join('work', test, 'sim.log')
    with open(sim_log_path, 'a') as sim_log:
        for iss_idx in range(len(iss_exe)):
            if str(iss_exe[iss_idx]['pc']).upper() != str(rtl_exe[iss_idx]['pc']).upper():
                sim_log.write(f"Error: PC Mismatch at PC {iss_exe[iss_idx]['pc']}\n")
                sim_log.write(f"ISS: {iss_exe[iss_idx]['pc']}\n")
                sim_log.write(f"RTL: {rtl_exe[iss_idx]['pc']}\n")
                test_passed = False
            elif str(iss_exe[iss_idx]['instr']).upper() != str(rtl_exe[iss_idx]['instr']).upper():
                sim_log.write(f"Error: Instruction mismatch at PC {iss_exe[iss_idx]['pc']}\n")
                sim_log.write(f"ISS: {iss_exe[iss_idx]['instr']}\n")
                sim_log.write(f"RTL: {rtl_exe[iss_idx]['instr']}\n")
                test_passed = False
            elif str(iss_exe[iss_idx]['touch']).upper() != str(rtl_exe[iss_idx]['touch']).upper():
                sim_log.write(f"Error: Result mismatch at PC {iss_exe[iss_idx]['pc']} for instruction --> {iss_exe[iss_idx]['mnemonic']}\n")
                sim_log.write(f"ISS: {iss_exe[iss_idx]['touch']}\n")
                sim_log.write(f"RTL: {rtl_exe[iss_idx]['touch']}\n")
                test_passed = False
    if test_passed:
        print(f"{test} {'.' * (50 - len(test))}. PASSED")
    else:
        print(f"{test} {'.' * (50 - len(test))}. FAILED")

def process_rtl_log(test: str):
    """Process the RTL log file."""
    with open(os.path.join("work", test, "rtl.log"), "r") as f:
        rtl_log = f.read()
    line_idx = 0
    while line_idx < len(rtl_log.split("\n"))-2:
        line = rtl_log.split("\n")[line_idx].split(";")
        nxt_line = rtl_log.split("\n")[line_idx + 1].split(";")
        if line not in ["", " "] and nxt_line not in ["", " "] and line[1] == nxt_line[1] and line[2] == nxt_line[2]: # Merge them
            effect = line[3]
            nxt_effect = nxt_line[3]
            # Get the memory address
            mem_addr = effect.split("[")[1].split("]")[0]
            alignment = int(mem_addr, 16) % 4
            # For unaligned stores, we need to merge the two parts
            # First part is the lower bytes (at higher address)
            # Second part is the higher bytes (at lower address)
            # For example, storing 0xCAFEBABE at 0xE:
            # First store: mem[0xE]=0xBABE (lower 2 bytes)
            # Second store: mem[0x10]=0xCAFE (higher 2 bytes)
            # We need to merge them to get: mem[0xE]=0xCAFEBABE
            lower_bytes = effect.split("=")[1].lstrip("0x")[8-alignment*2:]
            higher_bytes = nxt_effect.split("=")[1].lstrip("0x")[:8-alignment*2]
            # Combine them to get the full value
            merged_value = higher_bytes + lower_bytes
            # Remove nxt line from rtl_log
            rtl_log = rtl_log.replace(rtl_log.split("\n")[line_idx + 1], "")
            # Replace the line with the merged value
            rtl_log = rtl_log.replace(rtl_log.split("\n")[line_idx], f"{line[0]};{line[1]};{line[2]};mem[{mem_addr}]=0x{merged_value}")
            line_idx += 1
        line_idx += 1
    # Write the updated rtl_log
    with open(os.path.join("work", test, "rtl.log"), "w") as f:
        f.write(rtl_log)

def run_e2e(test: str, simulator: str):
    """Run a test through the entire pipeline."""
    try:
        run_gen(test)
        run_iss(test)
        prepare_imem(test)
        if simulator == "verilator":
            run_verilator(test)
        else:
            run_xsim(test)
        process_rtl_log(test)
        compare_results(test)
    except Exception as e:
        print(f"Error running test {test}: {e}")
        print(traceback.format_exc())
        sys.exit(1)

def main():
    # Parse arguments
    parser = argparse.ArgumentParser(
        description="Simulation Manager for running tests with different simulators"
    )
    
    group = parser.add_mutually_exclusive_group(required=True)
    group.add_argument("-t", "--task-list", help="Path to the task list file")
    group.add_argument("-n", "--test-name", help="Name of the test to run")
    
    parser.add_argument(
        "-s", "--simulator",
        required=True,
        choices=["verilator", "xsim"],
        help="Name of the simulator to use"
    )
    
    args = parser.parse_args()
    
    # Create work directory
    os.makedirs("work", exist_ok=True)
    
    # Get list of tests to run
    tests = []
    if args.task_list:
        if not os.path.exists(args.task_list):
            print(f"Error: Task list file '{args.task_list}' not found")
            sys.exit(1)
        tests = read_task_list(args.task_list)
        if not tests:
            print("Error: No valid tests found in task list")
            sys.exit(1)
    else:
        tests = [args.test_name]
    
    # Get number of CPU cores
    num_cores = multiprocessing.cpu_count()
    
    # Run tests in parallel using thread pool
    with concurrent.futures.ThreadPoolExecutor(max_workers=num_cores) as executor:
        # Submit all tasks to the thread pool
        future_to_test = {executor.submit(run_e2e, test, args.simulator): test for test in tests}
        
        # Process completed tasks
        for future in concurrent.futures.as_completed(future_to_test):
            test = future_to_test[future]
            try:
                future.result()  # This will raise any exceptions that occurred
                # Print a detailed tracebacki on exception
            except Exception as e:
                print(f"Error running test {test}: {e}")
                continue

if __name__ == "__main__":
    try:
        main()
    except Exception as e:
        print(f"Fatal error: {e}")
        sys.exit(1)