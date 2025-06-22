`ifndef GLOBAL_SVH
`include "global.svh"
`endif 

module twob_predictor #(
    parameter int addr_size = 8,
    parameter int cache_depth = 256
) (
    input logic clk,
    input logic rst_n,

    //IFU interface
    input logic [addr_size-1:0] instr_tag_ifu,
    output logic [XLEN-1:0] bp_pc_out,
    output logic bp_dir,
    output logic bp_pc_out_valid,
    

    //EXU interface
    input logic [addr_size-1:0] instr_tag_exu,
    input logic exu_br_dir,                      // 1-> Taken, 0-> Not taken
    input logic [XLEN-1:0] exu_pc_in,
    input logic exu_bp_strobe                    // high when there is a branch instruction

    
);

logic [XLEN+2:0] cache [cache_depth-1:0];            // word size of cache = XLEN + 2(counter) + 1 (cache valid) bits
logic warmed_up = 0;
logic [$clog2(addr_size)-1:0] valid_ctr;
logic [1:0] exu_ctr_stt;
logic load_exu_pc;
logic [addr_size-1:0] instr_tag_load;
logic ctr_update;
logic [XLEN-1:0] bp_pc_out_i;
logic bp_dir_i;
logic bp_pc_out_valid_i;

logic load_ctr;
logic [addr_size-1:0] instr_tag_ctr;
logic [1:0] ctr_nxt_stt;
logic [1:0] cache_stt;


//for debug
logic cache_loaded;
logic ctr_updated;

initial begin
    for (int i = 0; i<addr_size ;i++) begin
        cache[i] = {XLEN+3{1'b0}};
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

assign bp_pc_out_i = cache[instr_tag_ifu][XLEN+2:3];
assign bp_dir_i = (cache[instr_tag_ifu][0]) & (cache[instr_tag_ifu][2]);
        

assign bp_pc_out_valid_i = cache[instr_tag_ifu][0];


always_ff @(posedge clk) begin
    if(rst_n) begin
        if (exu_bp_strobe) begin
            if (~(|(cache[instr_tag_exu][2:1]))) begin
                cache[instr_tag_exu][XLEN+2:3] <= exu_pc_in;
                cache[instr_tag_exu][0] <= 1;
                cache_loaded <= 1;
                ctr_update <= 1;
            end 
             
        end else begin
            cache_loaded <= 0;
        end
        if (load_ctr) begin
                cache[instr_tag_ctr][2:1] <= ctr_nxt_stt;
                
                ctr_updated <= 1;
        end 
        else begin
                
                ctr_update <= 0;
            end



    end
end



assign cache_stt = cache[instr_tag_exu][2:1];

twob_ctr counter (
    .clk(clk),
    .rst_n(rst_n),
    .strobe(exu_bp_strobe),
    .ctr(exu_br_dir),
    .crnt_stt(cache[instr_tag_exu][2:1]),
    .next_stt(ctr_nxt_stt)
);

dff_rst #(.WIDTH(1 + addr_size)) load_flop (
    .clk(clk),
    .rst_n(rst_n),
    .din({exu_bp_strobe, instr_tag_exu}),
    .dout({load_ctr, instr_tag_ctr})
);

dff_rst #(.WIDTH(XLEN+2)) ifu_flop (
    .clk(clk),
    .rst_n(rst_n),
    .din({bp_pc_out_i, bp_dir_i, bp_pc_out_valid_i}),
    .dout({bp_pc_out, bp_dir, bp_pc_out_valid})
);

    
endmodule
