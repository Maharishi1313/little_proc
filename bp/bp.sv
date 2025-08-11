`ifndef GLOBAL_SVH
`include "global.svh"
`endif 

module twob_predictor #(
    parameter int addr_size = 7,
    parameter int cache_depth = 2**addr_size
) (
    input logic clk,
    input logic rst_n,

    //IFU interface
    input logic [addr_size-1:0] instr_tag_ifu,
    input logic                 instr_tag_ifu_valid,
    output logic [XLEN-1:0] bp_pc_out,
    output logic bp_dir,
    output logic bp_pc_out_valid,
    output logic [addr_size-1:0] bp_instr_tag_out,
    

    //EXU interface
    input logic [addr_size-1:0] instr_tag_exu,
    input logic exu_br_dir,                      // 1-> Taken, 0-> Not taken
    input logic [XLEN-1:0] exu_pc_in,
    input logic exu_bp_strobe                    // high when there is a branch instruction
    
//    output logic cache_loaded
    
);

logic [BP_PC_WIDTH+2:0] cache [cache_depth-1:0];            // word size of cache = XLEN + 2(counter) + 1 (cache valid) bits

//logic warmed_up = 0;
//logic [$clog2(addr_size)-1:0] valid_ctr;

logic [1:0] exu_ctr_stt;
//logic load_exu_pc;
logic [addr_size-1:0] instr_tag_load;
logic ctr_update;
logic [XLEN-1:0] bp_pc_out_i;
logic bp_dir_i;
logic bp_pc_out_valid_i;
logic [addr_size-1:0] bp_instr_tag_out_i;

logic load_ctr;
logic [addr_size-1:0] instr_tag_ctr;
logic [1:0] ctr_nxt_stt;
logic [1:0] cache_stt;


//for debug
logic cache_loaded;
logic ctr_updated;


//always_ff @(posedge clk)begin
//    if(!rst_n)begin
//        for (int i = 0; i<cache_depth ;i++) begin
//         cache[i] = {XLEN+3{1'b0}};
//        end
//    end
//end

  assign bp_pc_out_i = instr_tag_ifu_valid ? {{(XLEN - BP_PC_WIDTH){1'b0}},cache[instr_tag_ifu][BP_PC_WIDTH+2:3]} : 0;
  assign bp_dir_i =  instr_tag_ifu_valid ? (cache[instr_tag_ifu][0]) & (cache[instr_tag_ifu][2]) : 0;
  assign bp_pc_out_valid_i =  instr_tag_ifu_valid ? cache[instr_tag_ifu][0] : 0;
  assign bp_instr_tag_out_i = instr_tag_ifu_valid ? instr_tag_ifu : 0;



//always_ff @(posedge clk) begin
//    if(rst_n) begin
//        if (exu_bp_strobe) begin
//            if (~(|(cache[instr_tag_exu][2:1]))) begin
//                cache[instr_tag_exu][XLEN+2:3] <= exu_pc_in;
//                cache[instr_tag_exu][0] <= 1;
//                cache_loaded <= 1;
//                ctr_update <= 1;
//            end 
//        end else begin
//            cache_loaded <= 0;
//        end
        
//        if (load_ctr) begin
//            cache[instr_tag_ctr][2:1] <= ctr_nxt_stt;
//            ctr_updated <= 1;
//        end else begin
//            ctr_updated <= 0;
//        end



//    end else begin
//        for (int i = 0; i<cache_depth ;i++) begin
//         cache[i] = {XLEN+3{1'b0}};
//        end
//    end
    
//end

//always_ff @(posedge clk) begin
//    if(!rst_n)begin
//       for (int i = 0; i<cache_depth ;i++) begin
//         cache[i] = {BP_PC_WIDTH+3{1'b0}};
//        end 
//    end else begin
//         if (exu_bp_strobe) begin
//            if (~(|(cache[instr_tag_exu][2:1]))) begin
//                cache[instr_tag_exu][BP_PC_WIDTH+2:3] <= exu_pc_in[BP_PC_WIDTH-1:0];
//                cache[instr_tag_exu][0] <= 1;
//                cache_loaded <= 1;
//                ctr_update <= 1;
//            end 
//        end else begin
//            cache_loaded <= 0;
//        end
//    end

//end

 genvar i;
 generate
    for (i = 0; i < cache_depth; i++) begin : gen_btb
    dff_rst_en_vector #(.WIDTH(BP_PC_WIDTH+3)) btb_i (
        .clk(clk),
        .rst_n(rst_n),
        .reset_val({(BP_PC_WIDTH+3){1'b0}}),
        .en(exu_bp_strobe & ~(|(cache[i][2:1])) & (instr_tag_exu == i)),
        .din({exu_pc_in[BP_PC_WIDTH-1:0], cache[i][2:1], 1'b1}),
        .dout({cache[i][BP_PC_WIDTH+2:3], cache[i][2:1], cache[i][0]})
    );
    end
  endgenerate

always_ff @(posedge clk) begin
    if(!rst_n) begin
       ctr_updated <= 0;
    end else begin
       if (load_ctr) begin
            cache[instr_tag_ctr][2:1] <= ctr_nxt_stt;
            ctr_updated <= 1;
       end else begin
            ctr_updated <= 0;
       end 
    end

end


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

dff_rst_vector #(.WIDTH(XLEN + 2 + addr_size)) ifu_flop (
    .clk(clk),
    .rst_n(rst_n),
    .reset_val({XLEN+2 + addr_size{1'b0}}),
    .din({bp_pc_out_i, bp_dir_i, bp_pc_out_valid_i,bp_instr_tag_out_i}),
    .dout({bp_pc_out, bp_dir, bp_pc_out_valid, bp_instr_tag_out})
);

    
endmodule
