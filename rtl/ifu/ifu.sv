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

    //Branch predictor interface
    output logic [BP_ADDR_SIZE-1:0] instr_tag_ifu_out,
    input logic [XLEN-1:0] bp_pc_in,
    input logic bp_dir,
    input logic bp_pc_out_valid,
    
    //idu0 interface
    output logic branch_taken,

    //control signals
    input logic                  pipe_stall,
    output logic [INSTR_LEN-1:0] instr,

    input logic [XLEN-1:0] pc_exu,
    input logic            pc_load,


    output logic                 instr_valid,
    output logic [     XLEN-1:0] instr_tag
    
);

  logic [XLEN-1:0] pc_out;
  logic pc_out_valid;
  // logic [XLEN-1:0] bp_pc;
  logic load;
  logic [XLEN-1:0] pc_in;

  assign instr_mem_addr = (bp_dir & bp_pc_out_valid & ~pc_load) ? bp_pc_in[INSTR_MEM_ADDR_WIDTH-1:0] : pc_out[INSTR_MEM_ADDR_WIDTH-1:0];
  assign instr_mem_tag_out = (bp_dir & bp_pc_out_valid & ~pc_load) ? bp_pc_in : pc_out;

  assign instr_tag_ifu_out = pc_out[BP_ADDR_SIZE-1:0];
//   assign bp_pc = bp_pc_in;
  
  assign load = pc_load | (bp_dir & bp_pc_out_valid);
  assign pc_in = ({XLEN{pc_load}} & pc_exu) | ({XLEN{bp_dir}} & (bp_pc_in + 32'd4));


  //pc inst
  pc pc_inst (
      .clk(clk),
      .rst_n(rst_n),
      .reset_vector(reset_vector),
      .stall(pipe_stall),
      .load(load),
      .inc(~load),
      .pc_in(pc_in),
      .pc_out(pc_out),
      .pc_out_valid(pc_out_valid)
  );

  assign instr_mem_addr_valid = (pc_out_valid & ~pc_load) | (pc_out_valid & (bp_dir & bp_pc_out_valid))  ;
  
  //generate the outputs
  dff_rst_en_flush #(.WIDTH(INSTR_LEN + 1 + XLEN + 1)) instr_dff_inst (
      .clk  (clk),
      .rst_n(rst_n),
      .din  ({instr_mem_rdata_valid, instr_mem_rdata, instr_mem_tag_in, (bp_dir & bp_pc_out_valid)}),
      .dout ({instr_valid, instr, instr_tag, branch_taken}),
      .en(~pipe_stall),
      .flush(pc_load)
  );

endmodule
