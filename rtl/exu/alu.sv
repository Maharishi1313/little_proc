`ifdef GLOBAL_SVH
`include "global.svh"
`endif

`ifndef TYPES_SVH
`include "types.svh"
`endif

module alu (
    input logic clk,
    input logic rst_n,

    //IDU1 -> ALU interface
    input idu1_out_t alu_ctrl,

    output logic [    31:0] instr_out,
    output logic [XLEN-1:0] instr_tag_out,

    output logic [XLEN-1:0] alu_wb_data,
    output logic [     4:0] alu_wb_rd_addr,
    output logic            alu_wb_rd_wr_en,

    output logic [XLEN-1:0] pc_out,
    output logic            pc_load,

    output logic pc_vld,
    output logic branch
);

  logic [XLEN-1:0] alu_wb_data_i;
  logic [     4:0] alu_wb_rd_addr_i;
  logic            alu_wb_rd_wr_en_i;

  logic [XLEN-1:0] a, b;

  logic [XLEN-1:0] aout, bm;
  logic cout, ov, neg;
  logic [3:1] logic_sel;
  logic [XLEN-1:0] lout;
  logic [XLEN-1:0] sout;

  logic pc_cout;
  logic [XLEN-1:0] pc;
//   logic pc_vld;
  logic brn_taken;

  logic sel_logic, sel_shift, sel_adder;
  logic            slt_one;
  logic [XLEN-1:0] pcout;
  logic [XLEN-1:0] ashift;
  logic eq, ne, lt, ge;

  assign a = (alu_ctrl.jal | (alu_ctrl.pc & alu_ctrl.add)) ? alu_ctrl.instr_tag : alu_ctrl.rs1_data;
  
  assign b = ({XLEN{alu_ctrl.imm_valid}} & alu_ctrl.imm) | 
             ({XLEN{alu_ctrl.shimm5}} & {{(XLEN-5){1'b0}}, alu_ctrl.shamt[$clog2(
      XLEN
  )-1:0]}) | ({XLEN{alu_ctrl.rs2}} & alu_ctrl.rs2_data) | ({XLEN{alu_ctrl.jal}} & 32'h00000004);

  assign bm = (alu_ctrl.sub) ? ~b[XLEN-1:0] : b[XLEN-1:0];  // modified b = if sub-> ~b(1's comp) otherwise-> b

  // add/sub --> {carry, sum} = a + bm + sub,   sub_sig ==1 if subtraction, --> sub_res = a + b(modified) + sub_sig 
  assign {cout, aout[XLEN-1:0]} = {1'b0, a[XLEN-1:0]} + {1'b0, bm[XLEN-1:0]} + {32'b0, alu_ctrl.sub};

  assign ov = (~a[31] & ~bm[31] & aout[31]) | (a[31] & bm[31] & ~aout[31]);   // signed overflow detection (+ + -> -) | (- - -> +) both of them result in overflow

  assign neg = aout[XLEN-1];

  assign eq = a == b;

  assign ne = ~eq;

  assign {pc_cout, pc} = ({XLEN+1{(alu_ctrl.jal & alu_ctrl.pc) | alu_ctrl.condbr}} & (alu_ctrl.imm + alu_ctrl.instr_tag[XLEN-1:0])) |
                         ({XLEN+1{(alu_ctrl.jal & ~alu_ctrl.pc) }} & (alu_ctrl.imm + alu_ctrl.rs1_data[XLEN-1:0]));

  assign brn_taken = (alu_ctrl.beq & eq) | (alu_ctrl.bne & ne) | (alu_ctrl.bge & ge) | (alu_ctrl.blt & lt);

  assign pc_vld = (alu_ctrl.jal | (alu_ctrl.condbr & brn_taken)) & alu_ctrl.legal & ~alu_ctrl.nop & alu_ctrl.alu;
  assign branch = alu_ctrl.jal | alu_ctrl.condbr;
  // mux implementation for logic operations
  assign logic_sel[3] = alu_ctrl.land | alu_ctrl.lor;  // true for AND , OR
  assign logic_sel[2] = alu_ctrl.lor | alu_ctrl.lxor;  // true for OR, XOR
  assign logic_sel[1] = alu_ctrl.lor | alu_ctrl.lxor;  // true for OR, XOR

  // AND -> 3, OR -> 3,2,1 , XOR -> 2,1
  assign lout = (a[XLEN-1:0] & b[XLEN-1:0] & {XLEN{logic_sel[3]}}) |  // AB + 0 + 0 = AB
      (a[XLEN-1:0] & ~b[XLEN-1:0] & {XLEN{logic_sel[2]}}) |  // AB + AB' + A'B = A + B
      (~a[XLEN-1:0] & b[XLEN-1:0] & {XLEN{logic_sel[1]}});  // 0 + AB' + A'B = A ^ B

  assign ashift[XLEN-1:0] = $signed(a) >>> b[$clog2(XLEN)-1:0];

  assign sout[XLEN-1:0] = ({XLEN{alu_ctrl.sll}} & (a[XLEN-1:0] << b[$clog2(
      XLEN
  )-1:0])) | ({XLEN{alu_ctrl.srl}} & (a[XLEN-1:0] >> b[$clog2(
      XLEN
  )-1:0])) | ({XLEN{alu_ctrl.sra}} & ashift[XLEN-1:0]);

  assign sel_logic = |{alu_ctrl.land, alu_ctrl.lor, alu_ctrl.lxor};  // sets sel_logic if any one of the bits is 1

  assign sel_shift = |{alu_ctrl.sll, alu_ctrl.srl, alu_ctrl.sra};

  assign sel_adder = (alu_ctrl.add | alu_ctrl.sub | alu_ctrl.jal) & ~alu_ctrl.slt;  //slt-> set less than

  assign lt = (~alu_ctrl.unsign & (neg ^ ov)) | (alu_ctrl.unsign & ~cout);

  assign ge = ~lt;

  assign slt_one = (alu_ctrl.slt & lt);

  assign alu_wb_data_i[XLEN-1:0] = ({XLEN{sel_logic}} & lout[XLEN-1:0]) |
                                 ({XLEN{sel_shift}} & sout[XLEN-1:0]) | 
                                 ({XLEN{sel_adder }} & aout[XLEN-1:0]) |
                                 ({XLEN{slt_one}} & {{(XLEN-1){1'b0}}, 1'b1}) ;      // replication operator - {N{val}}, repeats val N times


  assign alu_wb_rd_addr_i = alu_ctrl.rd_addr;
  assign alu_wb_rd_wr_en_i = alu_ctrl.rd & alu_ctrl.legal & alu_ctrl.alu & ~alu_ctrl.nop;

  dff_rst #(
      .WIDTH($bits({alu_wb_data, alu_wb_rd_addr, alu_wb_rd_wr_en}))
  ) alu_wb_data_ff (
      .clk  (clk),
      .rst_n(rst_n),
      .din  ({alu_wb_data_i, alu_wb_rd_addr_i, alu_wb_rd_wr_en_i}),
      .dout ({alu_wb_data, alu_wb_rd_addr, alu_wb_rd_wr_en})
  );

  dff_rst #(
      .WIDTH(XLEN + 32)
  ) instr_tag_ff (
      .clk  (clk),
      .rst_n(rst_n),
      .din  ({alu_ctrl.instr_tag, alu_ctrl.instr}),
      .dout ({instr_tag_out, instr_out})
  );

  dff_rst #(.WIDTH(XLEN + 1)) pc_ff (
    .clk(clk),
    .rst_n(rst_n),
    .din({pc, pc_vld}),
    .dout({pc_out, pc_load})
  );
endmodule
