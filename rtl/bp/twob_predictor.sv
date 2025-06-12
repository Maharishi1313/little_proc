`ifndef GLOBAL_SVH
`include "global.svh"
`endif 

module twob_predictor #(
    parameter int addr_size = 8
) (
    input logic clk,
    input logic rst_n,

    //IFU interface
    input logic [addr_size-1:0] instr_tag_ifu,
    output logic [XLEN-1:0] bp_pc_out,
    output logic bp_dir,
    

    //EXU interface
    input logic [addr_size-1:0] instr_tag_exu,
    input logic exu_br_dir,                      // 1-> Taken, 0-> Not taken
    input logic [XLEN-1:0] exu_pc_in,
    input logic exu_bp_strobe,

    
);

logic [XLEN+2:0] cache [addr_size-1:0];            // word size of cache = XLEN + 2(counter) + 1 (cache valid) bits
logic warmed_up = 0;
logic [$clog2(addr_size)-1:0] valid_ctr;
logic [1:0] exu_ctr_stt;
logic load_exu_pc;


initial begin
    for (int i = 0; i<addr_size ;i++) begin
        cache[i] <= (XLEN+3)'b0;
    end
end

always_ff @(posedge clk) begin
    if(!rst_n) begin
        valid_ctr <= 0;
        warmed_up <= 0;
    end
    else if (exu_br_dir) begin
        valid_ctr <= valid_ctr + 1;
    end

    if (valid_ctr > 0) begin
        warmed_up <= 1;
    end
    
end

assign bp_pc_out = cache[instr_tag_ifu][XLEN+2:3];
assign bp_dir = (cache[instr_tag_ifu][0]) & (cache[instr_tag_ifu][2]);
        
assign load_exu_pc = exu_br_dir & ~(|cache[instr_tag_exu][2:1]);


always_ff @(posedge clk) begin
    if(rst_n) begin
        cache[instr_tag_exu][XLEN+2:3] <= (load_exu_pc) ?  exu_pc_in : cache[instr_tag_exu][XLEN+2:3] ;
    end
end

twob_ctr counter (
    .clk(clk),
    .rst_n(rst_n),
    .strobe(exu_bp_strobe),
    .ctr(exu_br_dir),
    .crnt_stt(cache[instr_tag_exu][2:1]),
    .next_stt(exu_ctr_stt)
);


    
endmodule