

`ifndef GLOBAL_SVH
`define GLOBAL_SVH

localparam XLEN = 32;
localparam XLEN_BYTES = XLEN / 8;

localparam RESET_VECTOR = 32'h00000000;

localparam INSTR_LEN = 32;
localparam INSTR_LEN_BYTES = INSTR_LEN / 8;

localparam DATA_LEN = XLEN;
localparam DATA_LEN_BYTES = DATA_LEN / 8;

localparam INSTR_MEM_WIDTH = XLEN;
localparam INSTR_MEM_DEPTH = 1024;
localparam INSTR_MEM_ADDR_WIDTH = $clog2(INSTR_MEM_DEPTH * INSTR_MEM_WIDTH / 8);
localparam INSTR_MEM_TAG_WIDTH = XLEN;

localparam DATA_MEM_WIDTH = XLEN;
localparam DATA_MEM_DEPTH = 1024;
localparam DATA_MEM_ADDR_WIDTH = $clog2(DATA_MEM_DEPTH * DATA_MEM_WIDTH / 8);

localparam REG_FILE_DEPTH = 32;
localparam REG_FILE_ADDR_WIDTH = $clog2(REG_FILE_DEPTH);

`endif
