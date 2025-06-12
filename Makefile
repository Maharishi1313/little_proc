and_gate_sim:
	@verilator -Wall --cc --trace --timing ./tb/and_gate_tb.sv ./rtl/and_gate.sv --top-module and_gate_tb --exe ./verilator/and_gate.cpp 2>&1 > /dev/null
	@make -j -C obj_dir -f Vand_gate_tb.mk Vand_gate_tb 2>&1 > /dev/null
	./obj_dir/Vand_gate_tb

full_adder_sim:
	@verilator -Wall --cc --trace --timing ./tb/full_adder_tb.sv ./rtl/full_adder.sv ./rtl/half_adder.sv --top-module full_adder_tb --exe ./verilator/full_adder.cpp 2>&1 > /dev/null
	@make -j -C obj_dir -f Vfull_adder_tb.mk Vfull_adder_tb 2>&1 > /dev/null
	./obj_dir/Vfull_adder_tb

lls_sim:
	@verilator -Wall --cc --trace --timing ./tb/lls_tb.sv ./rtl/lls.sv --top-module lls_tb --exe ./verilator/lls.cpp 2>&1 > /dev/null	
	@make -j -C obj_dir -f Vlls_tb.mk Vlls_tb 2>&1 > /dev/null
	./obj_dir/Vlls_tb

rs_sim:
	@verilator -Wall --cc --trace --timing ./tb/rs_tb.sv ./rtl/rls.sv ./rtl/ras.sv --top-module rs_tb --exe ./verilator/rs.cpp 2>&1 > /dev/null
	@make -j -C obj_dir -f Vrs_tb.mk Vrs_tb 2>&1 > /dev/null
	./obj_dir/Vrs_tb

alu_sim:
	@verilator -Wall --cc --trace --timing ./tb/alu_tb.sv ./rtl/alu.sv --top-module alu_tb --exe ./verilator/alu.cpp 2>&1 > /dev/null
	@make -j -C obj_dir -f Valu_tb.mk Valu_tb 2>&1 > /dev/null
	./obj_dir/Valu_tb

d_ff_full_sim:
	@verilator -Wall --cc --trace --timing ./tb/d_ff_full_tb.sv ./rtl/d_ff_full.sv --top-module d_ff_full_tb --exe ./verilator/d_ff_full.cpp 2>&1 > /dev/null
	@make -j -C obj_dir -f Vd_ff_full_tb.mk Vd_ff_full_tb 2>&1 > /dev/null
	./obj_dir/Vd_ff_full_tb

dff_rst_en_flush_sim:
	@verilator -Wall --cc --trace --timing ./tb/dff_rst_en_flush_tb.sv ./rtl/lib/beh_lib.sv --top-module dff_rst_en_flush_tb --exe ./verilator/dff_rst_en_flush.cpp 2>&1 > /dev/null
	@make -j -C obj_dir -f Vdff_rst_en_flush_tb.mk Vdff_rst_en_flush_tb 2>&1 > /dev/null
	./obj_dir/Vdff_rst_en_flush_tb



