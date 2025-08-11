`timescale 1ns / 1ps

`ifndef GLOBAL_SVH
`include "global.svh"
`endif

module test_top_tb;
//  int XLEN = 32;
  

  logic            clk = 0;
  logic            rst_n = 0;
//  logic [31:0] reset_vector = 32'b0;

  logic            clk_dip;
  logic     [4:0]  exu_wb_rd_addr;

  logic       [31:0] cycle_count = 0;

  int              fd;

  test_top test_top_i (
    .clk_og(clk),
    .rst_n(rst_n),
    .clk_dip(clk_dip),
    .exu_wb_rd_addr(exu_wb_rd_addr)
  );

  always #5 clk = ~clk;  //100 MHz clock

  initial begin  // initial block runs only once in the beginning at t=0
    $timeformat(-9, 3, "ns", 10);
    fd = $fopen("rtl.log", "w");
    rst_n = 0;
    for (int i = 0; i < 10; i++) begin
      @(negedge clk);
    end
    rst_n = 1;
    for (int i = 0; i < 200; i++) begin
      @(negedge clk);
    end
    $finish;
  end

  always_ff @(posedge clk) begin
    if (rst_n) begin
      cycle_count <= cycle_count + 1;
    end
  end

  /* Finish Sequence Detector */
  logic finish_seq_detected;
  always_ff @(posedge clk) begin
    if (test_top_i.dccm_wen & test_top_i.dccm_waddr == 32'h10000000) begin
      finish_seq_detected <= 1;
    end
  end

  always_ff @(posedge clk) begin
    if (finish_seq_detected) begin
      $finish;
    end
  end

  /* Use the monitor to log the log file */
  always_ff @(posedge clk) begin
    /* Log everytime we touch the state of our core: Write to the register file, change the PC and store to memory */
    if (test_top_i.exu_wb_rd_wr_en) begin  /* Hierarchical naming */
      $fdisplay(fd, "%5d;0x%H;0x%H;x%0D=0x%H", cycle_count, test_top_i.exu_instr_tag_out,
                test_top_i.exu_instr_out, test_top_i.exu_wb_rd_addr, test_top_i.exu_wb_data);
    end
//    if (test_top_i.exu_wb_rd_wr_en & test_top_i.ifu_inst.pc_load) begin  /* JAL/JALR */
//      $fdisplay(fd, "%5d;0x%H;0x%H;x%0D=0x%H;pc=0x%H", cycle_count, test_top_i.exu_instr_tag_out,
//                test_top_i.exu_instr_out, test_top_i.exu_wb_rd_addr, test_top_i.exu_wb_data,
//                test_top_i.ifu_inst.pc_exu);
//    end

//    if (~test_top_i.exu_inst.alu_wb_rd_wr_en & test_top_i.ifu_inst.pc_load & test_top_i.ifu_inst.exu_br_dir) begin  /* BEQ/BNE/BGE/BLT/BLTU/BGEU taken */
//      $fdisplay(fd, "%5d;0x%H;0x%H;taken=true;pc=0x%H", cycle_count,
//                test_top_i.exu_inst.alu_instr_tag_out, test_top_i.exu_inst.alu_instr_out,
//                test_top_i.ifu_inst.pc_exu);
//    end

//    if (test_top_i.exu_inst.alu_inst.alu_ctrl.condbr & ~test_top_i.exu_inst.alu_inst.brn_taken & test_top_i.exu_inst.alu_inst.alu_ctrl.legal) begin  /* BEQ/BNE/BGE/BLT/BLTU/BGEU not taken */
//      $fdisplay(fd, "%5d;0x%H;0x%H;taken=false", cycle_count,
//                test_top_i.exu_inst.alu_inst.alu_ctrl.instr_tag,
//                test_top_i.exu_inst.alu_inst.alu_ctrl.instr);
//    end
   
    if (test_top_i.exu_inst.lsu_inst.dc2_legal & test_top_i.exu_inst.lsu_inst.dc2_store) begin
      $fdisplay(fd, "%5d;0x%H;0x%H;mem[0x%8H]=0x%H", cycle_count,
                test_top_i.exu_inst.lsu_inst.dc2_lsu_instr_tag_out, test_top_i.exu_inst.lsu_inst.dc2_lsu_instr_out,
                test_top_i.exu_inst.lsu_inst.dc2_computed_addr, test_top_i.exu_inst.lsu_inst.dc2_store_buffer[XLEN-1:0] & test_top_i.exu_inst.lsu_inst.dc2_store_mask_base[XLEN-1:0]);
    end

    if (test_top_i.exu_inst.lsu_inst.dc3_legal & test_top_i.exu_inst.lsu_inst.dc3_store & test_top_i.exu_inst.lsu_inst.dc3_unaligned_addr) begin
      $fdisplay(fd, "%5d;0x%H;0x%H;mem[0x%8H]=0x%H", cycle_count,
                test_top_i.exu_inst.lsu_inst.dc3_lsu_instr_tag_out, test_top_i.exu_inst.lsu_inst.dc3_lsu_instr_out,
                test_top_i.exu_inst.lsu_inst.dc3_computed_addr, test_top_i.exu_inst.lsu_inst.dc3_store_buffer[XLEN-1:0] & test_top_i.exu_inst.lsu_inst.dc3_wb_data_mask[XLEN-1:0]);
    end
  end


endmodule
