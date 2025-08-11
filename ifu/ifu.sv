`ifndef GLOBAL_SVH
`include "global.svh"
`endif


module ifu (
    input logic            clk,
    input logic            rst_n,
    input logic [XLEN-1:0] reset_vector = 0,

    //intruction memory interface
    output logic [INSTR_MEM_ADDR_WIDTH-1:0] instr_mem_addr,
    output logic                            instr_mem_addr_valid,
//    output logic [                XLEN-1:0] instr_mem_tag_out,
    input  logic [     INSTR_MEM_WIDTH-1:0] instr_mem_rdata,
    
    //Branch predictor interface
    output logic [BP_ADDR_SIZE-1:0] instr_tag_ifu,
    output logic                    instr_tag_ifu_valid,
    input logic  [        XLEN-1:0] bp_pc_out,
    input logic                     bp_dir,
    input logic                     bp_pc_out_valid,
    input logic  [BP_ADDR_SIZE-1:0] bp_instr_tag_out, 
    
    
    
    //control signals
    input logic                  pipe_stall,
   
    input logic [XLEN-1:0] pc_exu,
    input logic            pc_load,
    input logic            exu_br_dir,
 
    //idu0 interface
    output logic [INSTR_LEN-1:0] instr,
    output logic                 instr_valid,
    output logic [     XLEN-1:0] instr_tag,
    output logic                 branch_taken,
    
    //test 
    output logic                 bp_true
    
);

  logic [XLEN-1:0] pc_out;
  logic pc_out_valid;
  
  logic [ INSTR_MEM_TAG_WIDTH-1:0] instr_mem_tag_in;
  logic                            instr_mem_rdata_valid;
  logic                            instr_mem_addr_valid_1;
  logic [ INSTR_MEM_TAG_WIDTH-1:0] instr_mem_tag_in_1;
  logic [ INSTR_MEM_TAG_WIDTH-1:0] instr_mem_tag_out;
  
  logic branch_taken_i;
  logic branch_taken_i2;
  
  logic pc_load_next;
  
  logic load;
  logic [XLEN-1:0] pc_in;
  
  assign instr_tag_ifu = pc_out[BP_ADDR_SIZE+1:2];
  assign instr_tag_ifu_valid = ~pc_load;
  
  
  assign instr_mem_addr = (bp_dir & bp_pc_out_valid & ~pc_load ) ? bp_pc_out[INSTR_MEM_ADDR_WIDTH+1:2] : pc_out[INSTR_MEM_ADDR_WIDTH+1:2];
  assign instr_mem_tag_out =  (bp_dir & bp_pc_out_valid & ~pc_load ) ? bp_pc_out : pc_out;
  
  
  assign load = pc_load ? exu_br_dir : (bp_dir & bp_pc_out_valid);
//  assign load = pc_load ? exu_br_dir : (bp_dir & bp_pc_out_valid);
  assign pc_in = ({XLEN{pc_load}} & pc_exu) | ({XLEN{(bp_dir & bp_pc_out_valid & ~pc_load)}} & (bp_pc_out + 32'd4));

  assign bp_true = bp_dir & bp_pc_out_valid;

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

  assign instr_mem_addr_valid = (pc_out_valid & ~pc_load) | (pc_out_valid & (bp_dir & bp_pc_out_valid));//pc_out_valid & ~load;
  
  dff_rst #(.WIDTH(1)) pc_flop(
    .clk(clk),
    .rst_n(rst_n),
    .din(pc_load),
    .dout(pc_load_next)
  
  );
  
  //generate the outputs
  dff_rst_en_flush #(.WIDTH($bits({instr_mem_rdata, instr_mem_rdata_valid, instr_mem_tag_in}))) instr_dff_inst (
      .clk  (clk),
      .rst_n(rst_n),
      .din  ({instr_mem_rdata, instr_mem_rdata_valid, instr_mem_tag_in}),
      .dout ({instr, instr_valid, instr_tag}),
      .en(~pipe_stall),
      .flush(pc_load)
  );
  
  dff_rst_en_flush #(.WIDTH($bits({instr_mem_rdata_valid, instr_mem_tag_in, bp_dir}))) mem_dff1_inst(
    .clk(clk),
    .rst_n(rst_n),
    .din({instr_mem_addr_valid, instr_mem_tag_out, (bp_dir & bp_pc_out_valid)}),
    .dout({instr_mem_addr_valid_1, instr_mem_tag_in_1, branch_taken_i}),
    .en(~pipe_stall),
    .flush(pc_load) 
  
  );
  
  dff_rst_en_flush #(.WIDTH($bits({instr_mem_rdata_valid, instr_mem_tag_in, branch_taken_i}))) mem_dff2_inst(
    .clk(clk),
    .rst_n(rst_n),
    .din({instr_mem_addr_valid_1, instr_mem_tag_in_1, branch_taken_i}),
    .dout({instr_mem_rdata_valid, instr_mem_tag_in, branch_taken}),
    .en(~pipe_stall),
    .flush(pc_load) 
  
  );

endmodule
