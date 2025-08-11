`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 27.07.2025 08:17:41
// Design Name: 
// Module Name: seven_seg
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


module seven_seg(

    input logic clk,
    input logic rst_n,

    
    input logic [31:0] exu_wb_data,
    
    output logic [3:0] anode_activate,
    output logic [6:0] output_data

    );
    
    logic [1:0] digit_select;
    logic up =0;
    logic [$clog2(100000)-1:0] ctr1;
    logic [1:0] ctr2;
    logic [3:0] led_hex;
    
//    logic [6:0] exu_wb_data = 32'hfab22005;
    
    
   
    
    
    parameter logic[6:0] ZERO = 7'b1000000;
    parameter logic[6:0] ONE = 7'b1111001;
    parameter logic[6:0] TWO = 7'b0100100;
    parameter logic[6:0] THREE = 7'b0110000;
    parameter logic[6:0] FOUR = 7'b0011001;
    parameter logic[6:0] FIVE = 7'b0010010;
    parameter logic[6:0] SIX = 7'b0000010;
    parameter logic[6:0] SEVEN = 7'b1111000;
    parameter logic[6:0] EIGHT = 7'b0000000;
    parameter logic[6:0] NINE = 7'b0010000;
    parameter logic[6:0] A = 7'b0001000;
    parameter logic[6:0] B = 7'b0000011;
    parameter logic[6:0] C = 7'b1000110;
    parameter logic[6:0] D = 7'b0100001;
    parameter logic[6:0] E = 7'b0000110;
    parameter logic[6:0] F = 7'b0001110;
    
always_ff @(posedge clk) begin
    if (!rst_n) begin
        ctr1 <= 0;
        digit_select <= 0;
        
        
    end else begin
        if (ctr1 == 99_999) begin
            ctr1 <= 0;
            digit_select <= digit_select + 1;
            
        end else begin
            ctr1 <= ctr1 + 1;
        end
    end
end
    
logic [25:0] slow_ctr;  // Enough for up to ~670 ms at 100 MHz

always_ff @(posedge clk) begin
    if (!rst_n) begin
        slow_ctr <= 0;
        up <= 0;
    end else begin
        if (slow_ctr == 49_999_999) begin // ~0.5s at 100 MHz
            slow_ctr <= 0;
            up <= ~up;
        end else begin
            slow_ctr <= slow_ctr + 1;
        end
    end
end


    
    logic [31:0] write_data;
    assign write_data = exu_wb_data;
    
    always @(*) begin
    output_data = 7'b1111111;
    anode_activate = 4'b1111;

    case(digit_select)
        2'b00: begin
            anode_activate = 4'b1110;
            output_data = hex_to_7seg(up ? write_data[19:16] : write_data[3:0]);
        end
        2'b01: begin
            anode_activate = 4'b1101;
            output_data = hex_to_7seg(up ? write_data[23:20] : write_data[7:4]);
        end
        2'b10: begin
            anode_activate = 4'b1011;
            output_data = hex_to_7seg(up ? write_data[27:24] : write_data[11:8]);
        end
        2'b11: begin
            anode_activate = 4'b0111;
            output_data = hex_to_7seg(up ? write_data[31:28] : write_data[15:12]);
        end
    endcase
end

    
    function automatic logic [6:0] hex_to_7seg(input logic [3:0] nibble);
    case(nibble)
        4'h0: hex_to_7seg = ZERO;
        4'h1: hex_to_7seg = ONE;
        4'h2: hex_to_7seg = TWO;
        4'h3: hex_to_7seg = THREE;
        4'h4: hex_to_7seg = FOUR;
        4'h5: hex_to_7seg = FIVE;
        4'h6: hex_to_7seg = SIX;
        4'h7: hex_to_7seg = SEVEN;
        4'h8: hex_to_7seg = EIGHT;
        4'h9: hex_to_7seg = NINE;
        4'hA: hex_to_7seg = A;
        4'hB: hex_to_7seg = B;
        4'hC: hex_to_7seg = C;
        4'hD: hex_to_7seg = D;
        4'hE: hex_to_7seg = E;
        4'hF: hex_to_7seg = F;
        default: hex_to_7seg = 7'b1111111;
    endcase
endfunction
    
    
    
    
    
endmodule
