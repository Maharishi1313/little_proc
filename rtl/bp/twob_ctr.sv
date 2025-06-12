`timescale 1ns/1ps

module twob_ctr (
    input logic clk,
    input logic rst_n,

    //control signal
    input logic strobe;
    
    //input
    input logic ctr,
    input logic [1:0] crnt_stt,

    //output 
    output logic [1:0] next_stt
);
logic [1:0] din_i;
assign din_i[1] = (crnt_stt[1] & crnt_stt[0]) | ((crnt_stt[1] ^ crnt_stt[0]) & ctr);
assign din_i[0] = (crnt_stt[1] & ~crnt_stt[0]) | ((crnt_stt[1] ^ ~crnt_stt[0]) & ctr);

dff_rst_en #(.WIDTH(2)) flop (
    .clk(clk),
    .rst_n(rst_n),
    .en(strobe),
    .din(din_i),
    .dout(next_stt)
);
    
endmodule