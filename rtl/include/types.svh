`ifndef TYPES_SVH
`define TYPES_SVH

typedef struct packed {

  logic [31:0]             instr;
  logic [XLEN-1:0]         instr_tag;
  logic [4:0]              rs1_addr;
  logic [4:0]              rs2_addr;
  logic [XLEN-1:0]         imm;
  logic                    imm_valid;
  logic [4:0]              rd_addr;
  logic [$clog2(XLEN)-1:0] shamt;

  /* Automatically generated */
  logic alu;
  logic rs1;
  logic rs2;
  logic imm12;
  logic rd;
  logic shimm5;
  logic imm20;
  logic pc;
  logic load;
  logic store;
  logic lsu;
  logic add;
  logic sub;
  logic land;
  logic lor;
  logic lxor;
  logic sll;
  logic sra;
  logic srl;
  logic slt;
  logic unsign;
  logic condbr;
  logic beq;
  logic bne;
  logic bge;
  logic blt;
  logic jal;
  logic by;
  logic half;
  logic word;
  logic mul;
  logic rs1_sign;
  logic rs2_sign;
  logic low;
  logic div;
  logic rem;
  logic nop;
  logic legal;
} idu0_out_t;

typedef struct packed {

  logic alu;
  logic rs1;
  logic rs2;
  logic imm12;
  logic rd;
  logic shimm5;
  logic imm20;
  logic pc;
  logic load;
  logic store;
  logic lsu;
  logic add;
  logic sub;
  logic land;
  logic lor;
  logic lxor;
  logic sll;
  logic sra;
  logic srl;
  logic slt;
  logic unsign;
  logic condbr;
  logic beq;
  logic bne;
  logic bge;
  logic blt;
  logic jal;
  logic by;
  logic half;
  logic word;
  logic mul;
  logic rs1_sign;
  logic rs2_sign;
  logic low;
  logic div;
  logic rem;
  logic nop;
  logic legal;
} decode_out_t;

typedef struct packed {

  logic [31:0]             instr;
  logic [XLEN-1:0]         instr_tag;
  logic [XLEN-1:0]         rs1_data;
  logic [XLEN-1:0]         rs2_data;
  logic [4:0]              rs1_addr;
  logic [4:0]              rs2_addr;
  logic [XLEN-1:0]         imm;
  logic                    imm_valid;
  logic [4:0]              rd_addr;
  logic [$clog2(XLEN)-1:0] shamt;

  /* Automatically generated */
  logic alu;
  logic rs1;
  logic rs2;
  logic imm12;
  logic rd;
  logic shimm5;
  logic imm20;
  logic pc;
  logic load;
  logic store;
  logic lsu;
  logic add;
  logic sub;
  logic land;
  logic lor;
  logic lxor;
  logic sll;
  logic sra;
  logic srl;
  logic slt;
  logic unsign;
  logic condbr;
  logic beq;
  logic bne;
  logic bge;
  logic blt;
  logic jal;
  logic by;
  logic half;
  logic word;
  logic mul;
  logic rs1_sign;
  logic rs2_sign;
  logic low;
  logic div;
  logic rem;
  logic nop;
  logic legal;
} idu1_out_t;

typedef struct packed {
  logic [31:0] instr;
  logic [XLEN-1:0] instr_tag;
  logic [4:0] rs1_addr;
  logic [4:0] rs2_addr;
  logic [4:0] rd_addr;
  logic mul;
  logic alu;
  logic div;
  logic lsu;
} last_issued_instr_t;

typedef enum logic [2:0] {
  LSU_IDLE,
  LSU_LOAD_1,
  LSU_LOAD_2,
  LSU_DONE
} lsu_state_t;

`endif
