`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 27.07.2025 09:00:16
// Design Name: 
// Module Name: clk_gen
// Project Name: 
// Target Devices: 
// Tool Versions: 
// Description: 
// 
// Dependencies: 
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
//////////////////////////////////////////////////////////////////////////////////


module clk_gen #(
    parameter int OP_CLK = 1  // 1hz o/p clk by default, parameter is in hz
)(
    input logic clk_in,
    input logic rst_n,
    
    output logic clk_out
    
    );
    
 logic [$clog2(100000000/(2*OP_CLK))-1:0] ctr_reg;
 logic clk_out_reg = 0;
 
 always_ff @(posedge clk_in)begin
    if(!rst_n)begin
        ctr_reg <= 0;
        clk_out_reg <= 0;
    end else begin
        if (ctr_reg == (100000000/(2*OP_CLK))-1) begin
            ctr_reg <= 0;
            clk_out_reg = ~clk_out_reg;
        end else begin
            ctr_reg <= ctr_reg + 1;
        end
    end
 
 end 
 assign clk_out = clk_out_reg;
endmodule
