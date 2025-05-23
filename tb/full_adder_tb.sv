`timescale 1ns / 1ns

module full_adder_tb;

  logic x, y, cin, sum, cout;

  full_adder full_adder_inst (
      x,
      y,
      cin,
      sum,
      cout
  );

  initial begin
    x   = 0;
    y   = 0;
    cin = 0;
    #10;
    $display("x = %b, y = %b, cin = %b, sum = %b, cout = %b", x, y, cin, sum, cout);
    x   = 0;
    y   = 0;
    cin = 1;
    #10;
    $display("x = %b, y = %b, cin = %b, sum = %b, cout = %b", x, y, cin, sum, cout);
    x   = 0;
    y   = 1;
    cin = 0;
    #10;
    $display("x = %b, y = %b, cin = %b, sum = %b, cout = %b", x, y, cin, sum, cout);
    x   = 0;
    y   = 1;
    cin = 1;
    #10;
    $display("x = %b, y = %b, cin = %b, sum = %b, cout = %b", x, y, cin, sum, cout);
    x   = 1;
    y   = 0;
    cin = 0;
    #10;
    $display("x = %b, y = %b, cin = %b, sum = %b, cout = %b", x, y, cin, sum, cout);
    x   = 1;
    y   = 0;
    cin = 1;
    #10;
    $display("x = %b, y = %b, cin = %b, sum = %b, cout = %b", x, y, cin, sum, cout);
    x   = 1;
    y   = 1;
    cin = 0;
    #10;
    $display("x = %b, y = %b, cin = %b, sum = %b, cout = %b", x, y, cin, sum, cout);
    x   = 1;
    y   = 1;
    cin = 1;
    #10;
    $display("x = %b, y = %b, cin = %b, sum = %b, cout = %b", x, y, cin, sum, cout);
    #10;
    $finish;
  end
endmodule
