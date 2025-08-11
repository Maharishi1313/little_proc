`timescale 1ns / 1ps

//`ifndef GLOBAL_SVH
`include "global.svh"
//`endif
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 01.08.2025 13:27:39
// Design Name: 
// Module Name: bp_test_wrapper
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


module bp_test_wrapper;

    logic clk = 0;
    logic rst_n = 0;
    
    logic instr_mem_addr_valid;
    logic [9:0] instr_mem_addr;
    logic [31:0] instr_mem_rdata;
    
    logic [31:0] reset_vector = 32'h100000;
    
    logic [31:0] instr_ifu;
    logic     pipe_stall;
    logic     instr_valid;
    logic     instr_tag;
    logic     pc_out;
    logic     pc_load;
    
    logic [7-1:0] instr_tag_ifu;
     logic  [        32-1:0] bp_pc_out;
     logic                     bp_dir;
     logic                     bp_pc_out_valid;
     logic  [7-1:0] bp_instr_tag_out; 
     
     logic branch_taken;
     
     logic [7-1:0] instr_tag_exu;
     logic exu_br_dir;                      // 1-> Taken, 0-> Not taken
     logic [32-1:0] exu_pc_in;
     logic exu_bp_strobe;  
    

    
    
    
    
   blk_mem_gen_0 iccm_inst (
    .clka(clk),
    .ena(instr_mem_addr_valid),
    .addra(instr_mem_addr),
    .douta(instr_mem_rdata)
   
   );
   
   ifu ifu_inst (
      .clk                  (clk),
      .rst_n                (rst_n),
      .reset_vector         (reset_vector),
      .instr_mem_addr       (instr_mem_addr),
      .instr_mem_addr_valid (instr_mem_addr_valid),
      .instr_mem_rdata      (instr_mem_rdata),
      .instr                (instr_ifu),
      .pipe_stall           (pipe_stall),
      .instr_valid          (instr_valid),
      .instr_tag            (instr_tag),
      .pc_exu               (pc_out),
      .pc_load              (pc_load),
      
      .instr_tag_ifu        (),
      .bp_dir               (bp_dir),
      .bp_pc_out            (bp_pc_out),
      .bp_pc_out_valid      (bp_pc_out_valid),
      .bp_instr_tag_out(),
      .branch_taken         (branch_taken)
     
      

  );
  
  twob_predictor bp_inst(
    .clk(clk),
    .rst_n(rst_n),
    .instr_tag_ifu(instr_tag_ifu),
    .bp_pc_out(bp_pc_out),
    .bp_dir(bp_dir),
    .bp_pc_out_valid(bp_pc_out_valid),
    .bp_instr_tag_out(),
    .instr_tag_exu(instr_tag_exu),
    .exu_br_dir(exu_br_dir),
    .exu_pc_in(exu_pc_in),
    .exu_bp_strobe(exu_bp_strobe)
  );

always #5 clk = ~clk;

    initial begin
        rst_n = 0;
        #10;
        rst_n = 1;
        pc_load = 0;
        pipe_stall = 0;
        instr_tag_exu = 08;
        exu_br_dir = 1;
        exu_pc_in = 32'h0c;
        exu_bp_strobe = 1;
        #10;
        
        instr_tag_exu = 0;
        exu_br_dir = 0;
        exu_pc_in = 32'h00;
        exu_bp_strobe = 0;
        #10;
        
        instr_tag_exu = 08;
        exu_br_dir = 1;
        exu_pc_in = 32'h0c;
        exu_bp_strobe = 1;
        #10;
        
        instr_tag_exu = 0;
        exu_br_dir = 0;
        exu_pc_in = 32'h00;
        exu_bp_strobe = 0;
        #10;
        
        instr_tag_ifu = 08;
        #20ns;
        instr_tag_ifu = 0;
        #60;
        $finish;
        
        
        
        
    
    
    end


endmodule
