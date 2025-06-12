`timescale 1ns/1ps

module twob_ctr_tb;
logic [1:0] present;
logic [1:0] future;

logic x;
logic clk =0;
logic reset =0;

twob_ctr counter (
    .clk(clk),
    .rst_n(reset),
    .ctr(x),
    .crnt_stt(present),
    .next_stt(future)
);

always #5 clk<=~clk;

initial
    begin
        reset = 0;
        #10;
        reset =1;
        #10;
        @(negedge clk);
            present[1:0] = {1'b0,1'b0};
            x = 0;

        @(posedge clk);
        $display("crnt state =  (%b%b), input = %b, output = (%b%b)", 
                 present[1], present[0], x, future[1], future[0]);
    
       
        @(negedge clk);
            present[1:0] = {1'b0,1'b0};
            x = 1;

        @(posedge clk);
        $display("crnt state =  (%b%b), input = %b, output = (%b%b)", 
                 present[1], present[0], x, future[1], future[0]);

        @(negedge clk);
            present[1:0] = {1'b0,1'b0};
            x = 0;

        @(posedge clk);
        $display("crnt state =  (%b%b), input = %b, output = (%b%b)", 
                 present[1], present[0], x, future[1], future[0]);
        
        
        @(negedge clk);
            present[1:0] = {1'b0,1'b1};
            x = 0;

        @(posedge clk);
        $display("crnt state =  (%b%b), input = %b, output = (%b%b)", 
                 present[1], present[0], x, future[1], future[0]);
        
       
        @(negedge clk);
            present[1:0] = {1'b0,1'b1};
            x = 1;

        @(posedge clk);
        $display("crnt state =  (%b%b), input = %b, output = (%b%b)", 
                 present[1], present[0], x, future[1], future[0]);

        @(negedge clk);
            present[1:0] = {1'b0,1'b0};
            x = 0;

        @(posedge clk);
        $display("crnt state =  (%b%b), input = %b, output = (%b%b)", 
                 present[1], present[0], x, future[1], future[0]);
        
        
        @(negedge clk);
            present[1:0] = {1'b1,1'b0};
            x = 0;

        @(posedge clk);
        $display("crnt state =  (%b%b), input = %b, output = (%b%b)", 
                 present[1], present[0], x, future[1], future[0]);
        
        
        @(negedge clk);
            present[1:0] = {1'b1,1'b0};
            x = 1;

        @(posedge clk);
        $display("crnt state =  (%b%b), input = %b, output = (%b%b)", 
                 present[1], present[0], x, future[1], future[0]);

        @(negedge clk);
            present[1:0] = {1'b0,1'b0};
            x = 0;

        @(posedge clk);
        $display("crnt state =  (%b%b), input = %b, output = (%b%b)", 
                 present[1], present[0], x, future[1], future[0]);
        
       
        @(negedge clk);
            present[1:0] = {1'b1,1'b1};
            x = 0;

        @(posedge clk);
        $display("crnt state =  (%b%b), input = %b, output = (%b%b)", 
                 present[1], present[0], x, future[1], future[0]);
        
        
        @(negedge clk);
            present[1:0] = {1'b1,1'b1};
            x = 1;

        @(posedge clk);
        $display("crnt state =  (%b%b), input = %b, output = (%b%b)", 
                 present[1], present[0], x, future[1], future[0]);

        @(negedge clk);
            present[1:0] = {1'b0,1'b0};
            x = 0;

        @(posedge clk);
        $display("crnt state =  (%b%b), input = %b, output = (%b%b)", 
                 present[1], present[0], x, future[1], future[0]);
        #10;
        
        
    
    $finish;
    end

endmodule