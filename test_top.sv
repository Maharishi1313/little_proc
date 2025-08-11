`timescale 1ns / 1ps

`ifndef GLOBAL_SVH
`include "global.svh"
`endif

`ifndef TYPES_SVH
`include "types.svh"
`endif


//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 19.07.2025 16:02:28
// Design Name: 
// Module Name: test_top
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
/////////////////////////////////////////////////////////////////////////////

module test_top(

    input logic clk_og,
    input logic rst_n,
    
    
    output logic clk_dip,
    
    
   
   
//    output logic [        XLEN-1:0] exu_wb_data,
//    output logic [$clog2(XLEN)-1:0] exu_wb_rd_addr,
//    output logic                    exu_wb_rd_wr_en,
//    output logic                    exu_mul_busy,
//    output logic                    exu_div_busy,
//    output logic                    exu_lsu_stall,
//    output logic                    exu_lsu_busy

    
    output  logic [     4:0] exu_wb_rd_addr,
    output logic        instr_valid,
    output logic        exu_wb_rd_wr_en,
//    output logic        instr_mem_data_debug,
    
    output logic [3:0] anode_activate,
    
//    output logic [BP_ADDR_SIZE-1:0] bp_instr_tag_out,
//    output logic                    bp_dir,
    output logic                    pc_load,
    output logic                    branch_taken,
    output logic                    pc_out_debug,
    output logic                    bp_true_out,
    output logic                    bp_pc_out_debug,
    
//    output logic [6:0] wb_data_debug,
//    output logic [3:0]   debug
//    output logic an0,
//    output logic an1,
//    output logic an2,
//    output logic an3
    output logic [6:0] output_data
//    output  logic [XLEN-1:0] exu_wb_data,
    
//    output logic           pipe_stall

//    output idu1_out_t idu1_out
     
//    output logic [XLEN-1:0] instr
//    output logic instr_valid,
//   output logic [XLEN-1:0] instr_tag,
//    output logic [ INSTR_MEM_TAG_WIDTH-1:0] instr_mem_tag_out,
    
//    output  logic      [INSTR_MEM_ADDR_WIDTH-1:0] instr_mem_addr,
//    output  logic      [     INSTR_MEM_WIDTH-1:0] instr_mem_rdata,
//    output  logic      [ INSTR_MEM_TAG_WIDTH-1:0] instr_mem_tag_in




    );
    
//    logic clk_dip;
    
    logic [XLEN-1:0] reset_vector = 32'h100000;
    
    
//    assign an0 = 1;
//    assign an0 = 0;
//    assign an0 = 0;
//    assign an0 = 0;
//    assign an0 = anode_activate == 2'b00;
//    assign an1 = anode_activate == 2'b01;
//    assign an2 = anode_activate == 2'b10;
//    assign an3 = anode_activate == 2'b11;
    
    
    /* Instruction Memory <-> IFU Interface */
//  logic      [INSTR_MEM_ADDR_WIDTH-1:0] instr_mem_addr;
    logic                                 instr_mem_addr_valid;
//  logic      [ INSTR_MEM_TAG_WIDTH-1:0] instr_mem_tag_out;
//  logic      [     INSTR_MEM_WIDTH-1:0] instr_mem_rdata;
//  logic                                 instr_mem_rdata_valid;
//  logic      [ INSTR_MEM_TAG_WIDTH-1:0] instr_mem_tag_in;

    logic      [INSTR_MEM_ADDR_WIDTH-1:0] instr_mem_addr;
    logic      [     INSTR_MEM_WIDTH-1:0] instr_mem_rdata;
    logic      [           INSTR_LEN-1:0] instr_ifu;
//    logic      [           INSTR_LEN-1:0] instr_exu;
    logic      [           INSTR_LEN-1:0] instr_exu;
// logic [$clog2(XLEN)-1:0] exu_wb_rd_addr;
// logic [        XLEN-1:0] exu_wb_data;
 
//    logic pipe_stall;

    idu0_out_t idu0_out;
    idu1_out_t idu1_out;
    
    
//     logic [     4:0] exu_wb_rd_addr;
     logic [XLEN-1:0] exu_wb_data;
//     logic            exu_wb_rd_wr_en;
     logic            exu_mul_busy;
     logic            exu_div_busy;
     logic            exu_lsu_busy;
     logic            exu_lsu_stall;
    
    //dccm interface
      logic [XLEN-1:0] dccm_raddr;           
      logic            dccm_rvalid_in;
      logic [XLEN-1:0] dccm_rdata;
      logic            dccm_rvalid_out;
      logic [XLEN-1:0] dccm_waddr;
      logic            dccm_wen;
      logic [XLEN-1:0] dccm_wdata;
      
      logic      [                XLEN-1:0] exu_instr_tag_out;
      logic      [                XLEN-1:0] exu_instr_out;
      
   // IFU <-> Branch pred interface
      logic [BP_ADDR_SIZE-1:0] instr_tag_ifu;
      logic instr_tag_ifu_valid;
      logic [XLEN-1:0] bp_pc_out;
      logic bp_dir;
      logic bp_pc_out_valid;
      logic [BP_ADDR_SIZE-1:0] bp_instr_tag_out;
      
   //EXU -> BP Interface
      logic [BP_ADDR_SIZE-1:0] instr_tag_exu;
      logic exu_br_dir;
      logic [XLEN-1:0] exu_pc_in;
      logic exu_bp_strobe;
    
   //test
//      logic branch_dir;
      logic bp_true;
      
   //pc_interface
      logic [XLEN-1:0] pc_out;
//      logic            pc_load;
      
  
  
//  logic      [           INSTR_LEN-1:0] instr;
//  logic                                 instr_valid;
      logic      [                XLEN-1:0] instr_tag;
//      logic                                 branch_taken;
      logic                                 pipe_stall;
  
  
  clk_gen #(.OP_CLK(50000000)) clk_gen_inst(
    .clk_in(clk_og),
    .rst_n(rst_n),
    .clk_out(clk_dip)
  );
  
  seven_seg seven_seg_op_inst (
    .clk(clk_og),
    .rst_n(rst_n),
    .exu_wb_data(exu_wb_data),
    .anode_activate(anode_activate),
    .output_data(output_data)
  
  );
    
   blk_mem_gen_0 iccm_inst (
    .clka(clk_dip),
    .ena(instr_mem_addr_valid),
    .addra(instr_mem_addr),
    .douta(instr_mem_rdata)
   
   );
   
//   assign instr_mem_data_debug = |(instr_mem_rdata);
    
    
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
  
  //branch predictor
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
      
  
  idu0 idu0_inst(
      .clk        (clk_dip),
      .rst_n      (rst_n),
      .instr      (instr_ifu),
      .instr_valid(instr_valid),
      .instr_tag  (instr_tag),
      .pipe_stall (pipe_stall),
      .idu0_out   (idu0_out),
      .pipe_flush(pc_load),
      .branch_taken(branch_taken),
      
      .bp_true(bp_true)
  
  );
  
  idu1 idu1_inst (
    .clk(clk_dip),
    .rst_n(rst_n),
    .idu0_out(idu0_out),
    .idu1_out(idu1_out), 
    .pipe_stall(pipe_stall),
    .exu_wb_rd_addr(exu_wb_rd_addr),
    .exu_wb_data(exu_wb_data),
    .exu_wb_rd_wr_en(exu_wb_rd_wr_en),
    .exu_mul_busy(exu_mul_busy),
    .exu_div_busy(exu_div_busy),
    .exu_lsu_busy(exu_lsu_busy),
    .exu_lsu_stall(exu_lsu_stall),
    .pipe_flush(pc_load)
    
    
    );
    // (* keep_hierarchy = "true" *)
     exu exu_inst(
      .clk(clk_dip),
      .rst_n(rst_n),
      .idu1_out(idu1_out),
      .instr_tag_out  (exu_instr_tag_out),
      .instr_out(exu_instr_out),
      .exu_wb_data(exu_wb_data),
      .exu_wb_rd_addr(exu_wb_rd_addr),
      .exu_wb_rd_wr_en(exu_wb_rd_wr_en),
      .exu_mul_busy(exu_mul_busy),
      .exu_div_busy(exu_div_busy),
      .exu_lsu_stall(exu_lsu_stall),
      .exu_lsu_busy(exu_lsu_busy),
      .dccm_raddr(dccm_raddr),
      .dccm_rvalid_in(dccm_rvalid_in),
      .dccm_rdata(dccm_rdata),
      .dccm_rvalid_out(dccm_rvalid_out),
      .dccm_waddr(dccm_waddr),
      .dccm_wen(dccm_wen),
      .dccm_wdata(dccm_wdata),
      .pc_out(pc_out),
      .pc_load(pc_load),
      
      .instr_tag_exu        (instr_tag_exu),
      .exu_br_dir           (exu_br_dir),
      .exu_bp_strobe        (exu_bp_strobe),
      
      .bp_true_out          (bp_true_out)
      
    );
    
    
 
    
    assign bp_pc_out_debug = |bp_pc_out;
    assign pc_out_debug = |pc_out;
    
    blk_mem_gen_1 dccm_inst(
      .clka(clk_dip),
      .clkb(clk_dip),
      .wea(dccm_wen),
      .addra({dccm_waddr[DATA_MEM_ADDR_WIDTH-3:2], 2'b00}),
      .dina(dccm_wdata),
      .enb(dccm_rvalid_in),
      .addrb({dccm_raddr[DATA_MEM_ADDR_WIDTH-3:2], 2'b00}),
      .doutb(dccm_rdata)
          
    );
endmodule
