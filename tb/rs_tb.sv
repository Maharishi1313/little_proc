`timescale 1ns / 1ns

module rs_tb;

  localparam OPERAND_WIDTH = 4;

  logic [OPERAND_WIDTH-1:0] x;
  logic [$clog2(OPERAND_WIDTH)-1:0] y;
  logic [OPERAND_WIDTH-1:0] z_logical, z_arithmetic;

  rls #(
      .OPERAND_WIDTH(OPERAND_WIDTH)
  ) rls_inst (
      x,
      y,
      z_logical
  );

  ras #(
      .OPERAND_WIDTH(OPERAND_WIDTH)
  ) ras_inst (
      x,
      y,
      z_arithmetic
  );

  initial begin
    x = 4'h0;
    y = 2'h0;
    #10;
    $display("x = %b, y = %b, z_logical = %b, z_arithmetic = %b", x, y, z_logical, z_arithmetic);
    x = 4'h1;
    y = 2'h1;
    #10;
    $display("x = %b, y = %b, z_logical = %b, z_arithmetic = %b", x, y, z_logical, z_arithmetic);
    x = 4'h2;
    y = 2'h2;
    #10;
    $display("x = %b, y = %b, z_logical = %b, z_arithmetic = %b", x, y, z_logical, z_arithmetic);
    x = 4'h3;
    y = 2'h3;
    #10;
    $display("x = %b, y = %b, z_logical = %b, z_arithmetic = %b", x, y, z_logical, z_arithmetic);
    x = 4'hF;
    y = 2'h2;
    #10;
    $display("x = %b, y = %b, z_logical = %b, z_arithmetic = %b", x, y, z_logical, z_arithmetic);
    #10;
    $finish;
  end

endmodule;
