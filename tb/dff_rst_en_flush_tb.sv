`timescale 1ns/1ps

module dff_rst_en_flush_tb;
    logic d =0;
    logic clk = 0;
    logic reset =0;
    logic en = 0;
    logic flush = 0;
    logic q;

dff_rst_en_flush dff_flush_inst(
    .din (d),
    .clk (clk),
    .rst_n (reset),
    .flush(flush),
    .en (en),
    .dout (q)

);
always #5ns clk<=~clk;   /* 100MHz clock with 50 % duty cycle*/
always #10ns reset<=1;

    initial begin
    @(negedge clk);
    d= 0;
    en = 0;
    flush = 0;
    
    @(posedge clk);
    $display("d = %b, clk = %b, reset = %b, en = %b, flush = %b, q = %b", d,clk,reset,en,flush,q);
    @(negedge clk);
    d= 1;
    en = 1;
    flush = 0;

    @(posedge clk);
    $display("d = %b, clk = %b, reset = %b, en = %b, flush = %b, q = %b", d,clk,reset,en,flush,q);
    @(negedge clk);
    d= 1;
    en = 1;
    flush = 0;

    @(posedge clk);
    $display("d = %b, clk = %b, reset = %b, en = %b, flush = %b, q = %b", d,clk,reset,en,flush,q);
    @(negedge clk);
    d= 1;
    en = 1;
    flush = 0;


    @(posedge clk);
    $display("d = %b, clk = %b, reset = %b, en = %b, flush = %b, q = %b", d,clk,reset,en,flush,q);
    @(negedge clk);
    d= 1;
    en = 1;
    flush = 1;

    @(posedge clk);
    $display("d = %b, clk = %b, reset = %b, en = %b, flush = %b, q = %b", d,clk,reset,en,flush,q);
    @(negedge clk);
    d= 1;
    en = 1;
    flush = 0;

    @(posedge clk);
    $display("d = %b, clk = %b, reset = %b, en = %b, flush = %b, q = %b", d,clk,reset,en,flush,q);
    @(negedge clk);
    d= 1;
    en = 1;
    flush = 0;

    

    // @(posedge clk);
    // $display("d = %b, clk = %b, reset = %b, en = %b, flush = %b, q = %b", d,clk,reset,en,flush,q);
    // @(negedge clk);
    // d= 1;
    // en = 0;
    // flush = 0;

    // @(posedge clk);
    // $display("d = %b, clk = %b, reset = %b, en = %b, flush = %b, q = %b", d,clk,reset,en,flush,q);
    // @(negedge clk);
    // d= 1;
    // en = 1;
    // flush = 0;
    // #5;

    // @(posedge clk);
    // $display("d = %b, clk = %b, reset = %b, en = %b, flush = %b, q = %b", d,clk,reset,en,flush,q);
    // @(negedge clk);
    // d= 1;
    // en = 1;
    // flush = 1;
    // #5;

    // @(posedge clk);
    // $display("d = %b, clk = %b, reset = %b, en = %b, flush = %b, q = %b", d,clk,reset,en,flush,q);
    // @(negedge clk);
    // d= 0;
    // en = 1;
    // flush = 0;

    // @(posedge clk);
    // $display("d = %b, clk = %b, reset = %b, en = %b, flush = %b, q = %b", d,clk,reset,en,flush,q);
    // @(negedge clk);
    // d= 1;
    // en = 0;
    // flush = 0;
    
    // @(posedge clk);
    // $display("d = %b, clk = %b, reset = %b, en = %b, flush = %b, q = %b", d,clk,reset,en,flush,q);
    // @(negedge clk);
    // d= 1;
    // en = 1;
    // flush = 1;

    
    @(posedge clk);
    $display("d = %b, clk = %b, reset = %b, en = %b, flush = %b, q = %b", d,clk,reset,en,flush,q);
    
    $finish;
    end
    
endmodule
