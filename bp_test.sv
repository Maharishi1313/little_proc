`timescale 1ns / 1ps
`ifndef GLOBAL_SVH
`include "global.svh"
`endif
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 02.08.2025 16:22:31
// Design Name: 
// Module Name: bp_test
// Project Name: 
// Target Devices: 
// Tool Versions: 
// Description: 
// 
// Dependencies: 
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
//////////////////////////////////////////////////////////////////////////////////


module bp_test(
        input logic clk_og,
        input logic rst_n,
        
        output logic clk_dip,
        
        output logic bp_pc_vld,
        output logic bp_dir,
        output logic bp_pc_out_valid,
        output logic [7-1:0] bp_instr_tag_out
        
        
    );
    
    logic reset_vector = 32'h100000;
    
    logic                            instr_mem_addr_valid;
    logic [10-1:0] instr_mem_addr;
    logic [32-1:0]                 instr_mem_rdata;
    
    logic [32-1:0]                 instr_ifu;
    logic                            pipe_stall;
    logic                            instr_valid;
    logic [32-1:0]                 instr_tag;
    logic [7-1:0]         instr_tag_ifu;
    logic                            instr_tag_ifu_valid;
    
    logic [32-1:0]                 bp_pc_out;
//    logic                            bp_dir;
//    logic                            bp_pc_out_valid;
//    logic [BP_ADDR_SIZE-1:0]         bp_instr_tag_out;
    
    logic                            branch_taken;
    logic                            exu_br_dir;
    
    logic [32-1:0]                 pc_out;
    logic                            pc_load;
    
    logic                            bp_true;
    
    logic [7-1:0]         instr_tag_exu;
    
    logic                            exu_bp_strobe;
    
  clk_gen #(.OP_CLK(1)) clk_gen_inst(
    .clk_in(clk_og),
    .rst_n(rst_n),
    .clk_out(clk_dip)
  );
  
  blk_mem_gen_0 iccm_inst (
    .clka(clk_dip),
    .ena(instr_mem_addr_valid),
    .addra(instr_mem_addr),
    .douta(instr_mem_rdata)
   
   );
   
   ifu ifu_inst (
      .clk                  (clk_dip),
      .rst_n                (rst_n),
      .reset_vector         (reset_vector),
      .instr_mem_addr       (instr_mem_addr),
      .instr_mem_addr_valid (instr_mem_addr_valid),
      .instr_mem_rdata      (instr_mem_rdata),
      .instr                (instr_ifu),
      .pipe_stall           (pipe_stall),
      .instr_valid          (instr_valid),
      .instr_tag            (instr_tag),
      .instr_tag_ifu        (instr_tag_ifu),
      .instr_tag_ifu_valid  (instr_tag_ifu_valid),
      .bp_pc_out            (bp_pc_out),
      .bp_dir               (bp_dir),
      .bp_pc_out_valid      (bp_pc_out_valid),
      .bp_instr_tag_out     (bp_instr_tag_out),
      .branch_taken         (branch_taken),
      .exu_br_dir           (exu_br_dir),
      .pc_exu               (pc_out),
      .pc_load              (pc_load),
     
      .bp_true              (bp_true)

  );
  
  assign bp_pc_vld = |bp_pc_out;
  
  twob_predictor bp_inst(
    .clk(clk_dip),
    .rst_n(rst_n),
    .instr_tag_ifu(instr_tag_ifu),
    .instr_tag_ifu_valid(instr_tag_ifu_valid),
    .bp_pc_out(bp_pc_out),
    .bp_dir(bp_dir),
    .bp_pc_out_valid(bp_pc_out_valid),
    .bp_instr_tag_out(bp_instr_tag_out),
    .instr_tag_exu(instr_tag_exu),
    .exu_br_dir(exu_br_dir),
    .exu_pc_in(pc_out),
    .exu_bp_strobe(exu_bp_strobe)
    
  );
  
endmodule
