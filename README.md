# RV32IM Core: A Pipelined 32-bit RISC-V Processor Core

This repository contains the SystemVerilog implementation of a 32-bit RISC-V processor core. It features a pipelined architecture designed for efficient instruction execution, supporting the RV32I base integer instruction set along with the standard 'M' extension for multiplication and division. The core is capable of handling unaligned memory accesses and incorporates data hazard prevention through operand forwarding.

## Key Features

*   **Architecture:** 32-bit RISC-V (XLEN=32)
*   **Pipeline:** 4-stage pipeline:
    1.  **IF (Instruction Fetch)**
    2.  **ID0 (Instruction Decode 0)**
    3.  **ID1 (Instruction Decode 1)**
    4.  **EX & WB (Execute & Write-Back)**
  
*   **ISA Support:** RV32IM (Base Integer Instructions + Standard Multiply/Divide Extension)
*   **Memory System:**
    *   Instruction Closely Coupled Memory (ICCM)
    *   Data Closely Coupled Memory (DCCM) - implied by LSU
*   **Unaligned Access:** Supports unaligned load and store operations.
*   **Hazard Management:** Implements operand forwarding to mitigate data hazards.
*   **Branch Handling:** Currently assumes branches are not taken; flushes pipeline on taken branches.
*   **Simulation:** Rigorously tested using Verilator.
*   **Test Automation:** Python-based simulation manager for streamlined testing.
*   **Debugging:** GTKWave for waveform analysis.

## Core Architecture

The processor core is structured around a 4-stage pipeline to maximize instruction throughput.

### 1. Instruction Fetch Unit (IFU)
*   **Function:** Fetches 32-bit instructions from the ICCM.
*   **Program Counter (PC):** Maintains the address of the next instruction to be fetched.
*   **ICCM Interface:** Interacts with the Instruction Closely Coupled Memory.

### 2. Instruction Decode Units (IDU0 & IDU1)
The instruction decoding process is split into two stages for balanced pipeline depth and complexity management:

*   **IDU0 (Instruction Decode Unit 0):**
    *   Decodes the instruction's opcode.
    *   Determines the operation to be performed.
*   **IDU1 (Instruction Decode Unit 1):**
    *   Decodes operands and immediate data values.
    *   Accesses the Register File.
    *   Passes decoded information down the pipeline.
    *   **Register File:**
        *   Contains 32 general-purpose registers (x0-x31).
        *   Each register is 32 bits wide.
        *   Register `x0` is hardwired to zero, as per RISC-V standards.

### 3. Execution Unit (EXU) & Write Back
The EXU performs the actual computations and consists of four specialized sub-units:

*   **Arithmetic Logic Unit (ALU):**
    *   Single clock cycle latency.
    *   Handles arithmetic (add, subtract) and logical (AND, OR, XOR) operations, as well as shift operations.
*   **Multiplier Unit (MUL):**
    *   Multi-stage design, completing multiplication operations over three clock cycles.
    *   Implements instructions from the 'M' extension.
*   **Division Unit (DIV):**
    *   Variable multi-cycle latency, pipelined unit for division operations.
    *   Implements instructions from the 'M' extension.
*   **Load Store Unit (LSU):**
    *   Handles load and store operations, moving data between the Register File and the DCCM.
    *   Supports unaligned load and store operations.
    *   Features a 3-stage internal pipeline to manage unaligned accesses smoothly.
#### Write-Back (WB)
*   **Function:** Writes the results from the EXU (ALU, MUL, DIV, or LSU for loads) back to the Register File.

## Memory System

*   **Instruction Closely Coupled Memory (ICCM):**
    *   **Word Size:** 32 bits (4 bytes)
    *   **Overall Size:** 4KB
    *   **Read Ports:** Two read ports, enabling unaligned reading of instructions.
*   **Data Closely Coupled Memory (DCCM):**
    *   Accessed by the LSU for load and store operations.
    *   **Word Size:** 32 bits (4 bytes)
    *   **Overall Size:** 4KB
    *   **Read and Write Ports:** One read port and One write port

## Hazard Management and Branching

*   **Data Hazards:** Operand forwarding is implemented from later pipeline stages (EX, WB) to earlier stages (ID1/EX) to reduce stalls caused by data dependencies.
*   **Control Hazards (Branches):** The current version employs a simple branch handling strategy:
    *   Branches are predicted as "not taken."
    *   If a branch is actually taken, the pipeline is flushed, and fetching resumes from the correct branch target address. This incurs a performance penalty.

## Simulation and Verification Workflow

The core's functionality is verified using a robust simulation flow:

1.  **Assembly Code:** Test programs are written in RISC-V assembly language.
2.  **Compilation:** The GNU RISC-V toolchain compiles the assembly code into an ELF (Executable and Linkable Format) file.
3.  **Hex Dump:** Relevant data sections (typically `.text` and `.data`) from the ELF file are dumped into a hexadecimal (`.hex`) file format suitable for memory initialization.
4.  **ICCM Initialization:** The ICCM of the processor core is initialized with the contents of this `.hex` file.
5.  **Simulation:** A SystemVerilog testbench (`Core_top_tb.sv`) drives the simulation using Verilator, a two-state simulator. 
6.  **Log Generation:** The simulation process generates several log files for analysis and debugging:
    *   `sim.log`: Contains general simulation messages and processor state traces.
    *   `rtl.log`: Detailed log of microarchitectural changes like write back to register file, memory store or PC load in case of branching
    *   `iss.log`: Instruction Set Simulator log, used for co-simulation and verifying instruction execution against a standard model.

### Test Automation

This potentially laborious testing process is streamlined by a Python script:
*   **`tools/sim_manager.py`**: This script automates the entire flow, from compilation and hex generation to running the Verilator simulation and organizing the output logs. It significantly simplifies regression testing and debugging.

### Debugging

*   **GTKWave:** Waveform viewer used to analyze signal traces generated during Verilator simulations, aiding in visual debugging of the hardware design.

## Getting Started
1.  **Prerequisites:**
    *   Verilator (refer to Verilator documentation for installation)
    *   RISC-V GNU Toolchain (for compiling assembly tests)
    *   Python 3 
    *   GTKWave (optional, for waveform viewing)
2.  **Building and Running a Test:**
    *   Navigate to the project directory.
    *   Use the `tools/sim_manager.py` script with appropriate arguments to compile a test case and run the simulation.
    *   For example:
    *   Write your assembly code and save it in the `tests/asm/` directory and then run
        ```bash
        python3 tools/sim_manager.py -n <asm.test_name> -s verilator
        ```
    * Ex-
        ```bash
        python3 tools/sim_manager.py -n asm.basic_bge -s verilator
        ```
    *   Check the generated `.log` files in the `work/test_name` directory for results.

## Future Work

The current core provides a solid foundation. Planned enhancements include:

*   **Branch Prediction:**
    *   Implement a 2-bit saturating counter based branch predictor to improve performance by reducing pipeline flushes on taken branches.
*   **Floating Point Unit (FPU):**
    *   Integrate an FPU to support the RISC-V 'F' (single-precision floating-point) and potentially 'D' (double-precision floating-point) standard extensions. This will involve adding new instructions, a floating-point register file, and dedicated execution units.
*   **Interrupt and Exception Handling:**
    *   Implement a comprehensive interrupt and exception handling mechanism (Control and Status Registers - CSRs, trap handlers) for robust system operation.
*   **Advanced Memory System:**
    *   Explore adding caches (I-Cache, D-Cache) beyond the tightly coupled memories for improved performance with larger applications.
    *   Bus Interface: Add a standard bus interface (e.g., AXI4) to allow connection to external peripherals and memory controllers.
*   **Debug Support:**
    *   Integrate a RISC-V debug module for enhanced debugging capabilities, compliant with the RISC-V debug specification.
*   **Support for 'C' Extension (Compressed Instructions):**
    *   Modify the IFU and IDU stages to handle 16-bit compressed instructions, improving code density.

## References
* [Siliscale](https://github.com/siliscale/Tiny-Vedas)
