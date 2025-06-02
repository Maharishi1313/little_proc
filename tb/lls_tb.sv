`timescale 1ns / 1ns

module lls_tb;

  localparam OPERAND_WIDTH = 4;

  logic [OPERAND_WIDTH-1:0] x;
  logic [$clog2(OPERAND_WIDTH)-1:0] y;
  logic [OPERAND_WIDTH-1:0] z;

  lls #(
      .OPERAND_WIDTH(OPERAND_WIDTH)
  ) lls_inst (
      x,
      y,
      z
  );

  initial begin
    x = 4'h0;
    y = 2'h0;
    #10;
    $display("x = %b, y = %b, z = %b", x, y, z);
    x = 4'h1;
    y = 2'h1;
    #10;
    $display("x = %b, y = %b, z = %b", x, y, z);
    x = 4'h2;
    y = 2'h2;
    #10;
    $display("x = %b, y = %b, z = %b", x, y, z);
    x = 4'h3;
    y = 2'h3;
    #10;
    $display("x = %b, y = %b, z = %b", x, y, z);
    #10;
    $finish;
  end

endmodule
