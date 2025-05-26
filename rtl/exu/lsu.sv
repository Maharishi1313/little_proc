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
logic [XLEN-1:0] dc1_computed_addr;
logic            dc1_unaligned_addr;
logic dc1_snl;

logic [XLEN-1:0] dc1_lsu_instr_tag_out;
logic [XLEN-1:0] dc1_lsu_instr_out;


//dc2
logic dc2_by, dc2_half, dc2_word, dc2_load, dc2_store, dc2_unsign, dc2_legal;
logic [XLEN-1:0] dc2_rs2_data;
logic [4:0] dc2_rd_addr;
logic [XLEN-1:0] dc2_computed_addr;
logic            dc2_unaligned_addr;

logic [XLEN-1:0] dc2_lsu_instr_tag_out;
logic [XLEN-1:0] dc2_lsu_instr_out;

//dc3
logic dc3_by, dc3_half, dc3_word, dc3_load, dc3_store, dc3_unsign, dc3_legal;
logic [XLEN-1:0] dc3_rs2_data;
logic [4:0] dc3_rd_addr;
logic [XLEN-1:0] dc3_computed_addr;
logic            dc3_unaligned_addr;

logic [XLEN-1:0] dc3_lsu_instr_tag_out;
logic [XLEN-1:0] dc3_lsu_instr_out;

logic [XLEN-1:0] dc1_load_buffer, dc2_load_buffer, dc3_load_buffer;

logic lsu_stall_q;



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
assign dc1_unaligned_addr = lsu_stall_q ? 'b0 : (&dc1_computed_addr[1:0] & dc1_half) | (|dc1_computed_addr[1:0] & dc1_word);
// assign dc1_snl = dc1_store & (dc1_by | dc1_half | dc1_unaligned_addr);  //snl -> store needs load

// assign dc1_unaligned_addr = (dc1_half & (&(dc1_computed_addr[1:0]))) | (dc1_word & (|(dc1_computed_addr[1:0])));

//dc2 stage
dff_rst #(.WIDTH($bits({
    dc1_by,
    dc1_half,
    dc1_word,
    dc1_load,
    dc1_store,
    dc1_unsign,
    dc1_legal
    
}))) dc2_control_reg (
    .clk(clk),
    .rst_n(rst_n),
    .din({
        dc1_by,
        dc1_half,
        dc1_word,
        dc1_load,
        dc1_store,
        dc1_unsign,
        dc1_legal
    }),
    .dout({
        dc2_by,
        dc2_half,
        dc2_word,
        dc2_load,
        dc2_store,
        dc2_unsign,
        dc2_legal
    })
);

dff_rst #(.WIDTH($bits({
    dc1_rs2_data,
    dc1_computed_addr,
    dc1_rd_addr,
    dc1_unaligned_addr 
   
    }))) dc2_data_ff(
    .clk(clk),
    .rst_n(rst_n),
    .din({dc1_rs2_data, dc1_computed_addr, dc1_rd_addr, dc1_unaligned_addr}),
    .dout({dc2_rs2_data, dc2_computed_addr, dc2_rd_addr, dc2_unaligned_addr})
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

//dc3 stage
dff_rst #(.WIDTH($bits({
    dc2_by,
    dc2_half,
    dc2_word,
    dc2_load,
    dc2_store,
    dc2_unsign,
    dc2_legal
    
}))) dc3_control_reg (
    .clk(clk),
    .rst_n(rst_n),
    .din({
        dc2_by,
        dc2_half,
        dc2_word,
        dc2_load,
        dc2_store,
        dc2_unsign,
        dc2_legal
    }),
    .dout({
        dc3_by,
        dc3_half,
        dc3_word,
        dc3_load,
        dc3_store,
        dc3_unsign,
        dc3_legal
    })
);

dff_rst #(.WIDTH($bits({
    dc2_rs2_data,
    dc2_computed_addr,
    dc2_rd_addr,
    dc2_unaligned_addr,
    dc1_load_buffer 
   
    
    }))) dc3_data_ff(
    .clk(clk),
    .rst_n(rst_n),
    .din({dc2_rs2_data, dc2_computed_addr, dc2_rd_addr, dc2_unaligned_addr, dc1_load_buffer}),
    .dout({dc3_rs2_data, dc3_computed_addr, dc3_rd_addr, dc3_unaligned_addr, dc2_load_buffer})
);

dff_rst #(.WIDTH(XLEN)) dc3_instr_tag_ff (
    .clk(clk),
    .rst_n(rst_n),
    .din(dc2_lsu_instr_tag_out),
    .dout(dc3_lsu_instr_tag_out)
);

dff_rst #(.WIDTH(XLEN)) dc3_instr_ff (
    .clk(clk),
    .rst_n(rst_n),
    .din(dc2_lsu_instr_out),
    .dout(dc3_lsu_instr_out)
);

dff_rst #(.WIDTH(1)) stall_reg (
    .clk(clk),
    .rst_n(rst_n),
    .din(lsu_stall),
    .dout(lsu_stall_q)
);


logic [2*XLEN-1:0] load_buffer;
logic [4:0] dc3_shift;
logic [2*XLEN-1:0] load_shifted;
logic [XLEN-1:0] load_mask;
logic [XLEN-1:0] load_sext_mask;

// logic [XLEN-1:0] dc2_store_buffer;

assign dc1_load_buffer = ({XLEN{dc2_load}} & lsu_dccm_rdata);

assign dc3_load_buffer = ({XLEN{dc3_load}} & lsu_dccm_rdata & {XLEN{dc2_unaligned_addr}});

assign load_buffer = {dc3_load_buffer, dc2_load_buffer};
assign dc3_shift = {dc3_computed_addr[1:0], 3'b000};
assign load_shifted = load_buffer >> dc3_shift;

// assign dc2_store_buffer = ({XLEN{dc2_store & dc2_legal}} & dc2_rs2_data);

assign load_mask = ({XLEN{(dc3_load & dc3_by & dc3_legal) | (dc2_load & ~dc3_load & dc2_legal & dc2_by & ~dc2_unaligned_addr)}} & (32'h000000FF)) | 
                   ({XLEN{(dc3_load & dc3_half & dc3_legal) | (dc2_load & ~dc3_load & dc2_legal & dc2_half & ~dc2_unaligned_addr)}} & (32'h0000FFFF)) |
                   ({XLEN{(dc3_load & dc3_word & dc3_legal) | (dc2_load & ~dc3_load & dc2_legal & dc2_word & ~dc2_unaligned_addr)}} & (32'hFFFFFFFF)) ;


assign load_sext_mask = {{XLEN-8{(dc3_load & dc3_legal & dc3_by & ~dc3_unsign & load_shifted[7])| (dc2_load & dc2_legal & dc2_by & ~dc2_unsign & load_shifted[7] & ~dc2_unaligned_addr)}}, 8'b0} |
                        {{XLEN-16{(dc3_load & dc3_legal & dc3_half & ~dc3_unsign & load_shifted[15])| (dc2_load & dc2_legal & dc2_half & ~dc2_unsign & load_shifted[15] & ~dc2_unaligned_addr)}}, 16'b0};

//dccm read
assign lsu_dccm_raddr = (({XLEN{dc1_load & ~dc2_unaligned_addr}}) & dc1_computed_addr) |
                        (({XLEN{dc2_load & dc2_unaligned_addr}}) & {dc2_computed_addr[XLEN-1:2] + 30'd1, 2'b00});

assign lsu_dccm_rvalid_in = (dc1_load & dc1_legal) | (dc2_load & dc2_legal);

//dccm write
// assign lsu_dccm_waddr = dc2_computed_addr;

// assign lsu_dccm_wdata = dc2_store_buffer;

// assign lsu_dccm_wen = dc2_store & dc2_legal;


//write back
assign lsu_wb_data = (load_shifted[XLEN-1:0] & load_mask) | load_sext_mask;

assign lsu_wb_rd_addr = ({5{dc2_load & ~dc2_unaligned_addr & ~dc3_load}} & dc2_rd_addr) | ({5{dc3_load}} & dc3_rd_addr);

assign lsu_wb_rd_wr_en =  (dc2_load & dc2_legal & ~dc2_unaligned_addr & ~dc3_load) | (dc3_load & dc3_legal );





assign lsu_stall = dc1_unaligned_addr & ~dc2_unaligned_addr;
assign lsu_busy = (dc1_load & dc1_legal) | (dc2_load & dc2_legal) ;


assign instr_tag_out = 
                       ({XLEN{dc2_load & ~dc2_unaligned_addr & ~dc3_load}} & dc2_lsu_instr_tag_out) |
                       ({XLEN{dc3_load}} & dc3_lsu_instr_tag_out); 

assign instr_out =  
                   ({XLEN{dc2_load & ~dc2_unaligned_addr & ~dc3_load}} & dc2_lsu_instr_out) |
                   ({XLEN{dc3_load}} & dc3_lsu_instr_out); 


endmodule
