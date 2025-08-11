`ifndef GLOBAL_SVH
`include "global.svh"
`endif

`ifndef TYPES_SVH
`include "types.svh"
`endif


module mul (
    input  logic                 clk,
    input  logic                 rst_n,
    input  idu1_out_t            mul_ctrl,
    input  logic                 freeze,
    output logic      [XLEN-1:0] out,
    output logic      [     4:0] out_rd_addr,
    output logic                 out_rd_wr_en,
    output logic      [XLEN-1:0] instr_tag_out,
    output logic      [    31:0] instr_out,
    output logic                 mul_busy

);

  logic valid_e1, valid_e2;
  logic mul_c1_e1_clken, mul_c1_e2_clken, mul_c1_e3_clken;
  logic exu_mul_c1_e1_clk, exu_mul_c1_e2_clk, exu_mul_c1_e3_clk;

  logic [XLEN-1:0] a_ff_e1, a_e1;
  logic [XLEN-1:0] b_ff_e1, b_e1;
  logic rs1_sign_e1, rs1_neg_e1;
  logic rs2_sign_e1, rs2_neg_e1;
  logic signed [XLEN:0] a_ff_e2, b_ff_e2;
  logic signed [2*XLEN:0] prod_e3;
  logic low_e1, low_e2, low_e3;

  logic [XLEN-1:0] a, b;
  logic [4:0] out_rd_addr_e1, out_rd_addr_e2, out_rd_addr_e3;
  logic out_rd_wr_en_e1, out_rd_wr_en_e2, out_rd_wr_en_e3;

  logic [XLEN-1:0] instr_tag_e1, instr_tag_e2, instr_tag_e3;
  logic [XLEN-1:0] instr_e1, instr_e2, instr_e3;

  assign a = mul_ctrl.rs1_data;
  assign b = mul_ctrl.rs2_data;

  // --------------------------- Input flops    ----------------------------------

  dff_rst_en #(1) valid_e1_ff (
      .din (mul_ctrl.legal & mul_ctrl.mul),
      .dout(valid_e1),
      .en  (~freeze),
      .*
  );

  dff_rst #(1) rs1_sign_e1_ff (
      .din (mul_ctrl.rs1_sign),
      .dout(rs1_sign_e1),
      .*
  );

  dff_rst #(1) rs2_sign_e1_ff (
      .din (mul_ctrl.rs2_sign),
      .dout(rs2_sign_e1),
      .*
  );

  dff_rst #(1) low_e1_ff (
      .din (mul_ctrl.low),
      .dout(low_e1),
      .*
  );

  dff_rst #(XLEN) a_e1_ff (
      .din (a[XLEN-1:0]),
      .dout(a_ff_e1[XLEN-1:0]),
      .*
  );

  dff_rst #(XLEN) b_e1_ff (
      .din (b[XLEN-1:0]),
      .dout(b_ff_e1[XLEN-1:0]),
      .*
  );

  dff_rst #(5) out_rd_addr_ff (
      .din (mul_ctrl.rd_addr),
      .dout(out_rd_addr_e1),
      .*
  );

  dff_rst #(1) out_rd_wr_en_ff (
      .din (mul_ctrl.legal & mul_ctrl.mul),
      .dout(out_rd_wr_en_e1),
      .*
  );

  dff_rst #(XLEN + 32) instr_tag_ff (
      .din ({mul_ctrl.instr_tag, mul_ctrl.instr}),
      .dout({instr_tag_e1, instr_e1}),
      .*
  );

  //-------------------------E1 STAGE ----------------------------//
  assign a_e1[XLEN-1:0] = a_ff_e1[XLEN-1:0];
  assign b_e1[XLEN-1:0] = b_ff_e1[XLEN-1:0];

  assign rs1_neg_e1 = rs1_sign_e1 & a_e1[XLEN-1];
  assign rs2_neg_e1 = rs2_sign_e1 & b_e1[XLEN-1];

  dff_rst_en #(1) valid_e2_ff (
      .din (valid_e1),
      .dout(valid_e2),
      .en  (~freeze),
      .*
  );

  dff_rst #(1) low_e2_ff (
      .din (low_e1),
      .dout(low_e2),
      .*
  );

  dff_rst #(XLEN + 1) a_e2_ff (
      .din ({rs1_neg_e1, a_e1[XLEN-1:0]}),
      .dout(a_ff_e2[XLEN:0]),
      .*
  );

  dff_rst #(XLEN + 1) b_e2_ff (
      .din ({rs2_neg_e1, b_e1[XLEN-1:0]}),
      .dout(b_ff_e2[XLEN:0]),
      .*
  );

  dff_rst #(5) out_rd_addr_e2_ff (
      .din (out_rd_addr_e1),
      .dout(out_rd_addr_e2),
      .*
  );

  dff_rst #(1) out_rd_wr_en_e2_ff (
      .din (out_rd_wr_en_e1),
      .dout(out_rd_wr_en_e2),
      .*
  );

  dff_rst #(XLEN + 32) instr_tag_e2_ff (
      .din ({instr_tag_e1, instr_e1}),
      .dout({instr_tag_e2, instr_e2}),
      .*
  );

  //----------------------------E2 LOGIC STAGE -------------------------

  logic signed [2*XLEN+1:0] prod_e2;

  assign prod_e2[2*XLEN+1:0] = a_ff_e2 * b_ff_e2;

  dff_rst #(1) low_e3_ff (
      .din (low_e2),
      .dout(low_e3),
      .*
  );

  dff_rst #(2 * XLEN + 1) prod_e3_ff (
      .din (prod_e2[2*XLEN:0]),
      .dout(prod_e3[2*XLEN:0]),
      .*
  );

  dff_rst #(5) out_rd_addr_e3_ff (
      .din (out_rd_addr_e2),
      .dout(out_rd_addr_e3),
      .*
  );

  dff_rst #(1) out_rd_wr_en_e3_ff (
      .din (out_rd_wr_en_e2),
      .dout(out_rd_wr_en_e3),
      .*
  );

  dff_rst #(XLEN + 32) instr_tag_e3_ff (
      .din ({instr_tag_e2, instr_e2}),
      .dout({instr_tag_e3, instr_e3}),
      .*
  );

  //--------------------------- E3 LOGIC STAGE ------------------------------------

  assign out[XLEN-1:0] = low_e3 ? prod_e3[XLEN-1:0] : prod_e3[2*XLEN-1:XLEN];
  assign out_rd_addr = out_rd_addr_e3;
  assign out_rd_wr_en = out_rd_wr_en_e3;

  assign instr_tag_out = instr_tag_e3;
  assign instr_out = instr_e3;
  assign mul_busy = out_rd_wr_en_e1 | out_rd_wr_en_e2;



endmodule
