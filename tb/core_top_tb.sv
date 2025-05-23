`timescale 1ns / 1ps

`ifndef GLOBAL_SVH
`include "global.svh"
`endif

module core_top_tb;

  localparam string ICCM_INIT_FILE = `ICCM_INIT_FILE;
  localparam string DCCM_INIT_FILE = `DCCM_INIT_FILE;

  logic            clk = 0;
  logic            rst_n;
  logic [XLEN-1:0] reset_vector = `RESET_VECTOR;

  logic       [31:0] cycle_count = 0;

  int              fd;

  core_top #(.ICCM_INIT_FILE(ICCM_INIT_FILE), 
             .DCCM_INIT_FILE(DCCM_INIT_FILE)) 
             core_top_i (.*);

  always #5 clk = ~clk;  //100 MHz clock

  initial begin  // initial block runs only once in the beginning at t=0
    $timeformat(-9, 3, "ns", 10);
    fd = $fopen("rtl.log", "w");
    rst_n = 0;
    for (int i = 0; i < 10; i++) begin
      @(negedge clk);
    end
    rst_n = 1;
    for (int i = 0; i < 100; i++) begin
      @(negedge clk);
    end
    $finish;
  end

  always_ff @(posedge clk) begin
    if (rst_n) begin
      cycle_count <= cycle_count + 1;
    end
  end

  

  /* Use the monitor to log the log file */
  always_ff @(posedge clk) begin
    /* Log everytime we touch the state of our core: Write to the register file, change the PC and store to memory */
    if (core_top_i.exu_wb_rd_wr_en) begin  /* Hierarchical naming */
      $fdisplay(fd, "%5d;0x%H;0x%H;x%0D=0x%H", cycle_count, core_top_i.exu_instr_tag_out,
                core_top_i.exu_instr_out, core_top_i.exu_wb_rd_addr, core_top_i.exu_wb_data);
    end

    // if (core_top_i.exu_inst.lsu_inst.dc1_legal & core_top_i.exu_inst.lsu_inst.dc1_load) begin
    //   $fdisplay(fd, "%5d;0x%H;0x%H;mem[0x%8H]=0x%H", cycle_count,
    //             core_top_i.exu_inst.lsu_inst.dc1_lsu_instr_tag_out, core_top_i.exu_inst.lsu_inst.dc1_lsu_instr_out,
    //             core_top_i.exu_inst.lsu_inst.dc1_computed_addr, core_top_i.exu_inst.lsu_inst.load_buffer[XLEN-1:0]);
    // end

    // if (core_top_i.exu_inst.lsu_inst.dc3_legal & core_top_i.exu_inst.lsu_inst.dc3_store & core_top_i.exu_inst.lsu_inst.dc3_unaligned_addr) begin
    //   $fdisplay(fd, "%5d;0x%H;0x%H;mem[0x%8H]=0x%H", cycle_count,
    //             core_top_i.exu_inst.lsu_inst.dc3_lsu_instr_tag_out, core_top_i.exu_inst.lsu_inst.dc3_lsu_instr_out,
    //             core_top_i.exu_inst.lsu_inst.dc3_computed_addr, core_top_i.exu_inst.lsu_inst.dc3_store_buffer[XLEN-1:0] & core_top_i.exu_inst.lsu_inst.dc3_wb_data_mask[XLEN-1:0]);
    // end

    // if (core_top_i.exu_inst.lsu_inst.dc2_legal & core_top_i.exu_inst.lsu_inst.dc2_store) begin
    //   $fdisplay(fd, "%5d;0x%H;0x%H;mem[0x%8H]=0x%H", cycle_count,
    //             core_top_i.exu_inst.lsu_inst.dc2_lsu_instr_tag_out, core_top_i.exu_inst.lsu_inst.dc2_lsu_instr_out,
    //             core_top_i.exu_inst.lsu_inst.dc2_computed_addr, core_top_i.exu_inst.lsu_inst.dc2_store_buffer[XLEN-1:0] & core_top_i.exu_inst.lsu_inst.dc2_store_mask_base[XLEN-1:0]);
    // end

    // if (core_top_i.exu_inst.lsu_inst.dc3_legal & core_top_i.exu_inst.lsu_inst.dc3_store & core_top_i.exu_inst.lsu_inst.dc3_unaligned_addr) begin
    //   $fdisplay(fd, "%5d;0x%H;0x%H;mem[0x%8H]=0x%H", cycle_count,
    //             core_top_i.exu_inst.lsu_inst.dc3_lsu_instr_tag_out, core_top_i.exu_inst.lsu_inst.dc3_lsu_instr_out,
    //             core_top_i.exu_inst.lsu_inst.dc3_computed_addr, core_top_i.exu_inst.lsu_inst.dc3_store_buffer[XLEN-1:0] & core_top_i.exu_inst.lsu_inst.dc3_wb_data_mask[XLEN-1:0]);
    // end
  end


endmodule
