`timescale 1ns/1ps

module d_ff_full_tb;
    logic d =0;
    logic clk = 0;
    logic reset =0;
    logic en = 0;
    logic q;

d_ff_full d_ff_full_inst(
    .d (d),
    .clk (clk),
    .reset (reset),
    .en (en),
    .q (q)

);
always #5ns clk<=~clk;   /* 100MHz clock with 50 % duty cycle*/
always #10ns reset<=~reset;

    initial begin
    @(negedge clk);
    d= 0;
    en = 0;
    
    @(posedge clk);
    $display("d = %b, clk = %b, reset = %b, en = %b, q = %b", d,clk,reset,en,q);
    @(negedge clk);
    d= 1;
    en = 0;
    
    @(posedge clk);
    $display("d = %b, clk = %b, reset = %b, en = %b, q = %b", d,clk,reset,en,q);
    @(negedge clk);
    d= 1;
    en = 1;
    
    @(posedge clk);
    $display("d = %b, clk = %b, reset = %b, en = %b, q = %b", d,clk,reset,en,q);
    @(negedge clk);
    d= 0;
    en = 1;
    
    @(posedge clk);
    $display("d = %b, clk = %b, reset = %b, en = %b, q = %b", d,clk,reset,en,q);
    @(negedge clk);
    d= 0;
    en = 0;
    
    @(posedge clk);
    $display("d = %b, clk = %b, reset = %b, en = %b, q = %b", d,clk,reset,en,q);
    @(negedge clk);
    d= 1;
    en = 0;
    
    @(posedge clk);
    $display("d = %b, clk = %b, reset = %b, en = %b, q = %b", d,clk,reset,en,q);
    @(negedge clk);
    d= 1;
    en = 1;
    #20;
    @(posedge clk);
    $display("d = %b, clk = %b, reset = %b, en = %b, q = %b", d,clk,reset,en,q);
    @(negedge clk);
    d= 0;
    en = 1;
    
    @(posedge clk);
    $display("d = %b, clk = %b, reset = %b, en = %b, q = %b", d,clk,reset,en,q);
    
    $finish;
    end
    
endmodule
