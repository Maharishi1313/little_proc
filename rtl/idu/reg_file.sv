`ifndef GLOBAL_SVH
`include "global.svh"
`endif



module reg_file (
    input logic clk,
    input logic rst_n,

    // read ports (two read ports)
    input  logic [     4:0] rs1_addr,
    input  logic [     4:0] rs2_addr,
    input  logic            rs1_rd_en,
    input  logic            rs2_rd_en,
    output logic [XLEN-1:0] rs1_data,
    output logic [XLEN-1:0] rs2_data,

    //write ports
    input logic [4:0] rd_addr,
    input logic [XLEN-1:0] rd_data,
    input logic rd_wr_en

);
  logic [XLEN-1:0] reg_file[32];

  genvar i;
  generate
    ;
    for (i = 0; i < 32; i++) begin : g_reg_file
      if (i == 0) begin : g_reg_zero
        assign reg_file[i] = 0;
      end else begin : g_reg_file_gen
        dff_rst_en #(
            .WIDTH(XLEN)  // Named parameter override (optional but clearer)
        ) reg_i (
            .clk  (clk),
            .rst_n(rst_n),
            .en   (rd_wr_en & (rd_addr == i)),
            .din  (rd_data),
            .dout (reg_file[i])
        );
      end
    end

  endgenerate
  assign rs1_data = (rs1_rd_en) ? reg_file[rs1_addr] : {XLEN{1'b0}};
  assign rs2_data = (rs2_rd_en) ? reg_file[rs2_addr] : {XLEN{1'b0}};

endmodule
