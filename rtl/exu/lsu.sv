`timescale 1ns / 1ps

`ifndef GLOBAL_SVH
`include "global.svh"
`endif 

`ifndef TYPES_SVH
`include "types.svh"
`endif 

module lsu (
    input logic             clk,
    input logic             rst_n,

    //control signals
    input idu1_out_t lsu_ctrl,
    output logic lsu_stall,
    output logic lsu_busy,

    // DCCM INTERFACE
    //read port
    output logic [XLEN-1:0] lsu_dccm_raddr,
    output logic        lsu_dccm_rvalid_in,
    input logic [XLEN-1:0] lsu_dccm_rdata,
    input logic lsu_dccm_rvalid_out,

    //write port
    output logic [XLEN-1:0] lsu_dccm_waddr,
    output logic        lsu_dccm_wen,
    output logic [XLEN-1:0] lsu_dccm_wdata,

    //exu write back interface
    output logic [4:0] lsu_wb_rd_addr,
    output logic [XLEN-1:0] lsu_wb_data,
    output logic             lsu_wb_rd_wr_en,

    //debug
    output logic [XLEN-1:0] instr_tag_out,
    output logic [31:0]     instr_out
);
logic dc1_by, dc1_half, dc1_word, dc1_load, dc1_store, dc1_unsign, dc1_legal;
logic [XLEN-1:0] dc1_rs1_data, dc1_rs2_data, dc1_imm;
logic [4:0] dc1_rd_addr;
logic [XLEN-1:0] dc1_computed_addr, dc2_computed_addr;
logic            dc1_unaligned_addr;

logic [XLEN-1:0] dc1_lsu_instr_tag_out;
logic [XLEN-1:0] dc1_lsu_instr_out;


logic dc2_by, dc2_half, dc2_word, dc2_load, dc2_store, dc2_unsign, dc2_legal;
logic [4:0] dc2_rd_addr;
logic [XLEN-1:0] dc2_lsu_instr_tag_out;
logic [XLEN-1:0] dc2_lsu_instr_out;


dff_rst #(.WIDTH($bits({
    dc1_by,
    dc1_half,
    dc1_word,
    dc1_load,
    dc1_store,
    dc1_unsign,
    dc1_legal
    
}))) dc1_control_reg (
    .clk(clk),
    .rst_n(rst_n),
    .din({
        lsu_ctrl.by,
        lsu_ctrl.half,
        lsu_ctrl.word,
        lsu_ctrl.load,
        lsu_ctrl.store,
        lsu_ctrl.unsign,
        lsu_ctrl.legal
    }),
    .dout({
        dc1_by,
        dc1_half,
        dc1_word,
        dc1_load,
        dc1_store,
        dc1_unsign,
        dc1_legal
    })
);

dff_rst #(.WIDTH($bits({
    dc1_rs1_data,
    dc1_rs2_data,
    dc1_imm,
    dc1_rd_addr
}))) dc1_data_ff (
    .clk(clk),
    .rst_n(rst_n),
    .din({
        lsu_ctrl.rs1_data,
        lsu_ctrl.rs2_data,
        lsu_ctrl.imm,
        lsu_ctrl.rd_addr
        }),
    .dout({
        dc1_rs1_data,
        dc1_rs2_data,
        dc1_imm,
        dc1_rd_addr
    })
);

dff_rst #(.WIDTH(XLEN)) instr_tag_ff (
    .clk(clk),
    .rst_n(rst_n),
    .din(lsu_ctrl.instr_tag),
    .dout(dc1_lsu_instr_tag_out)
);

dff_rst #(.WIDTH(XLEN)) instr_ff (
    .clk(clk),
    .rst_n(rst_n),
    .din(lsu_ctrl.instr),
    .dout(dc1_lsu_instr_out)
);

assign dc1_computed_addr = dc1_rs1_data +  {{XLEN-12{1'b0}},dc1_imm[11:0]};
// assign dc1_unaligned_addr = (dc1_half & (&(dc1_computed_addr[1:0]))) | (dc1_word & (|(dc1_computed_addr[1:0])));

dff_rst #(.WIDTH($bits({
    dc1_computed_addr,
    dc2_load,
    dc2_legal,
    dc1_rd_addr 
   
    
    }))) dc2_addr_ff(
    .clk(clk),
    .rst_n(rst_n),
    .din({dc1_computed_addr, dc1_load, dc1_legal, dc1_rd_addr}),
    .dout({dc2_computed_addr, dc2_load, dc2_legal, dc2_rd_addr})
);

dff_rst #(.WIDTH(XLEN)) dc2_instr_tag_ff (
    .clk(clk),
    .rst_n(rst_n),
    .din(dc1_lsu_instr_tag_out),
    .dout(dc2_lsu_instr_tag_out)
);

dff_rst #(.WIDTH(XLEN)) dc2_instr_ff (
    .clk(clk),
    .rst_n(rst_n),
    .din(dc1_lsu_instr_out),
    .dout(dc2_lsu_instr_out)
);



//dccm read
assign lsu_dccm_raddr = ({XLEN{dc1_load}}) & dc1_computed_addr;
assign lsu_dccm_rvalid_in = dc1_load & dc1_legal;

assign lsu_wb_data = ({XLEN{dc2_load}} & lsu_dccm_rdata);

assign lsu_busy = dc1_load & dc1_legal;

assign lsu_wb_rd_addr = ({5{dc1_load}} & dc1_rd_addr) | ({5{dc2_load}} & dc2_rd_addr);
assign lsu_wb_rd_wr_en = dc1_load | dc2_load;
assign instr_tag_out = ({XLEN{dc1_load}} & dc1_lsu_instr_tag_out) | ({XLEN{dc2_load}} & dc2_lsu_instr_tag_out); 
assign instr_out = ({XLEN{dc1_load}} & dc1_lsu_instr_out) | ({XLEN{dc2_load}} & dc2_lsu_instr_out);


endmodule
