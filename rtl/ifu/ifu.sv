`ifndef GLOBAL_SVH
`include "global.svh"
`endif


module ifu (
    input logic            clk,
    input logic            rst_n,
    input logic [XLEN-1:0] reset_vector,

    //intruction memory interface
    output logic [INSTR_MEM_ADDR_WIDTH-1:0] instr_mem_addr,
    output logic                            instr_mem_addr_valid,
    output logic [                XLEN-1:0] instr_mem_tag_out,
    input  logic [     INSTR_MEM_WIDTH-1:0] instr_mem_rdata,
    input  logic                            instr_mem_rdata_valid,
    input  logic [ INSTR_MEM_TAG_WIDTH-1:0] instr_mem_tag_in,

    //contol signals
    input logic                  pipe_stall,
    output logic [INSTR_LEN-1:0] instr,
    output logic                 instr_valid,
    output logic [     XLEN-1:0] instr_tag
);

  logic [XLEN-1:0] pc_out;

  assign instr_mem_addr = pc_out[INSTR_MEM_ADDR_WIDTH-1:0];

  assign instr_mem_tag_out = pc_out;

  //pc inst
  pc pc_inst (
      .clk(clk),
      .rst_n(rst_n),
      .reset_vector(reset_vector),
      .stall(pipe_stall),
      .load(1'b0),
      .inc(1'b1),
      .pc_in(32'h00000000),
      .pc_out(pc_out),
      .pc_out_valid(instr_mem_addr_valid)
  );
  //generate the outputs
  dff_rst_en #(INSTR_LEN + 1 + XLEN) instr_dff_inst (
      .clk  (clk),
      .rst_n(rst_n),
      .din  ({instr_mem_rdata_valid, instr_mem_rdata, instr_mem_tag_in}),
      .dout ({instr_valid, instr, instr_tag}),
      .en(~pipe_stall)
  );

endmodule
