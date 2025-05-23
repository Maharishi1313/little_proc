`ifndef GLOBAL_SVH
`include "global.svh"
`endif 

module iccm #(
    parameter int WIDTH = 32,
    parameter int DEPTH = 1024,
    parameter string INIT_FILE = ""
) (
    input logic clk,
    input logic rst_n,

    //read port
    input  logic [($clog2(DEPTH * WIDTH/8))-1:0] raddr,      //read address
    input  logic                                 rvalid_in,
    input  logic [INSTR_MEM_TAG_WIDTH-1:0]     rtag_in,

    output logic [                    WIDTH-1:0] rdata,
    output logic                                 rvalid_out,
    output logic [INSTR_MEM_TAG_WIDTH-1:0]     rtag_out

);
  logic [WIDTH-1:0] mem[DEPTH];

  logic [$clog2(DEPTH)-1:0] line_idx;

  logic [(2*WIDTH)-1:0] line_data, line_data_shift;

  assign line_idx = raddr[$clog2(DEPTH*WIDTH/8)-1:$clog2(WIDTH/8)];

  //initilization of memory will be done here
  initial begin
    $readmemh(INIT_FILE, mem);
  end

  always_ff @(posedge clk) begin
    if (!rst_n) begin
      rvalid_out <= 0;
      line_data  <= 0;
      rtag_out <= 0;
    end else begin
      if (rvalid_in) begin
        rvalid_out <= 1;
        line_data <= {mem[line_idx+1], mem[line_idx]};
        rtag_out <= rtag_in;
      end
    end

  end

  assign line_data_shift = line_data >> (raddr[$clog2(WIDTH/8)-1:0]);
  assign rdata = line_data_shift[WIDTH-1:0];

endmodule

module dccm #(
  parameter int WIDTH = 32,
  parameter int DEPTH = 1024,
  parameter string INIT_FILE = ""
) (
  input logic     clk,
  input logic     rst_n,

  //read port
  input logic [$clog2(DEPTH)-1:0] raddr,
  input logic                             rvalid_in,
  output logic [WIDTH-1:0]                rdata,
  output logic                 rvalid_out,

  // write port
  input logic [$clog2(DEPTH)-1:0] waddr,
  input logic                             wen,
  input logic [WIDTH-1:0]                wdata
  
);

  logic [WIDTH-1:0] mem[DEPTH];

  //initializing memory
  initial begin
    $readmemh(INIT_FILE, mem);
  end

  //read_port
  always_ff @(posedge clk) begin
    if(!rst_n) begin
      rvalid_out <= 0;
      rdata <= 0;
    end else begin
      rvalid_out <= rvalid_in;
      rdata <= mem[raddr];
    end
  end

  //write port
  always_ff @(posedge clk) begin
    
    if (wen) begin
      mem[waddr] <= wdata;
    end
  end
  
endmodule
