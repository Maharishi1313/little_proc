/* verilator lint_off DECLFILENAME */


module dff #(
    parameter int WIDTH = 1
) (
    input logic [WIDTH-1:0] din,
    input logic             clk,

    output logic [WIDTH-1:0] dout
);

  always_ff @(posedge clk) begin
    dout[WIDTH-1:0] <= din[WIDTH-1:0];
  end

endmodule

module dff_rst #(                                // synchronous dff
    parameter int WIDTH = 1,
    parameter logic [WIDTH-1:0] RST_VAL = 0
) (
    input logic             clk,
    input logic             rst_n,
    input logic [WIDTH-1:0] din,

    output logic [WIDTH-1:0] dout
);
  always_ff @(posedge clk) begin
    if (!rst_n) dout[WIDTH-1:0] <= RST_VAL[WIDTH-1:0];
    else dout[WIDTH-1:0] <= din[WIDTH-1:0];
  end

endmodule

module dff_rst_en #(
    parameter int WIDTH = 1,
    parameter logic [WIDTH-1:0] RESET_VAL = 0
) (
    input logic [WIDTH-1:0] din,
    input logic             clk,
    input logic             rst_n,
    input logic             en,

    output logic [WIDTH-1:0] dout
);

  dff_rst #(WIDTH, RESET_VAL) dff_rst_inst (
      .din((en) ? din[WIDTH-1:0] : dout[WIDTH-1:0]),
      .*
  );

endmodule

module dff_rst_vector #(
    parameter int WIDTH = 1,
    parameter logic [WIDTH-1:0] RST_VAL = 0
) (
    input logic             clk,
    input logic             rst_n,
    input logic [WIDTH-1:0] reset_val,
    input logic [WIDTH-1:0] din,

    output logic [WIDTH-1:0] dout
);

  always_ff @(posedge clk) begin
    if (!rst_n) dout[WIDTH-1:0] <= reset_val[WIDTH-1:0];
    else dout[WIDTH-1:0] <= din[WIDTH-1:0];
  end

endmodule

module dff_rst_en_vector #(
    parameter int WIDTH = 1,
    parameter logic [WIDTH-1:0] RST_VAL = 0
) (
    input logic clk,
    input logic rst_n,
    input logic en,

    input logic [WIDTH-1:0] reset_val,
    input logic [WIDTH-1:0] din,

    output logic [WIDTH-1:0] dout
);
  dff_rst_vector #(WIDTH, RST_VAL) dff_rst_vector_inst (
      .din((en) ? din : dout),
      .*
  );
endmodule

module dff_rst_flush #(
  parameter int WIDTH = 1,
  parameter logic [WIDTH-1:0] RESET_VAL = 0
) (
  input logic [WIDTH-1:0] din,
  input logic             clk,
  input logic rst_n,
  input logic flush,

  output logic [WIDTH-1:0] dout 
);

// logic [WIDTH-1:0] din_i;
// logic [WIDTH-1:0] dout_i;

// assign din_i[WIDTH-1:0] = (flush) ? RESET_VAL[WIDTH-1:0] : din[WIDTH-1:0];
// assign dout[WIDTH-1:0] = (flush) ? RESET_VAL[WIDTH-1:0] : dout_i[WIDTH-1:0];
  
dff_rst_en #(WIDTH, RESET_VAL) ff_inst (
  .clk(clk),
  .rst_n(rst_n),
  .din((flush) ? RESET_VAL : din),
  .dout(dout),
  .en(1'b1)
);

endmodule

module dff_rst_en_flush #(
    parameter int WIDTH = 1,
    parameter logic [WIDTH-1:0] RESET_VAL = 0
) (
    input logic [WIDTH-1:0] din,
    input logic             clk,
    input logic             rst_n,
    input logic             en,
    input logic flush,

    output logic [WIDTH-1:0] dout
);
  logic [WIDTH-1:0] din_i;
  logic [WIDTH-1:0] dout_i;


  assign din_i = (flush) ? RESET_VAL[WIDTH-1:0] : din[WIDTH-1:0];
  assign dout = (flush) ? RESET_VAL[WIDTH-1:0] : dout_i[WIDTH-1:0];

  dff_rst_en #(WIDTH, RESET_VAL) dff_rst_en_inst (
      .clk(clk),
      .rst_n(rst_n),
      .en(en),
      .din(din_i[WIDTH-1:0]),
      .dout(dout_i[WIDTH-1:0])
  );

endmodule

//program counter

module pc #(
    parameter int PC_WIDTH = 32,
    parameter logic [PC_WIDTH-1:0] INC_AMOUNT = 4
) (
    input logic                clk,
    input logic                rst_n,
    input logic [PC_WIDTH-1:0] reset_vector,

    //control signals
    input logic load,
    input logic inc,
    input logic stall,

    //data signals
    input  logic [PC_WIDTH-1:0] pc_in,
    output logic [PC_WIDTH-1:0] pc_out,
    output logic                pc_out_valid
);

  logic [PC_WIDTH-1:0] pc_d, pc_q;
  logic update_pc;

  dff_rst_en_vector #(PC_WIDTH) dff_rst_en_vector_inst (
      .reset_val(reset_vector[PC_WIDTH-1:0]),
      .din(pc_d[PC_WIDTH-1:0]),
      .dout(pc_q[PC_WIDTH-1:0]),
      .en(update_pc),
      .*

  );

  always_comb begin
    unique casez ({
      load, inc, stall
    })
      3'b1?0: begin  //load
        pc_d = pc_in;
        pc_out_valid = 1'b1;
        update_pc = 1'b1;
      end
      3'b010: begin  // inc
        pc_d = pc_q + INC_AMOUNT;
        pc_out_valid = 1'b1;
        update_pc = 1'b1;
      end
      3'b??1: begin  // stall
        pc_d = 'b0;
        pc_out_valid = 1'b0;
        update_pc = 1'b0;
      end
      default: begin
        pc_d = 'b0;
        pc_out_valid = 1'b0;
        update_pc = 1'b0;
      end
    endcase
  end

  assign pc_out[PC_WIDTH-1:0] = pc_q[PC_WIDTH-1:0];

endmodule

module twoscomp #(
    parameter WIDTH = 32
) (
    input logic [WIDTH-1:0] din,

    output logic [WIDTH-1:0] dout
);

  logic [WIDTH-1:1] dout_temp;  // holding for all other bits except for the lsb. LSB is always din

  genvar i;

  for (i = 1; i < WIDTH; i++) begin : flip_after_first_one  // in two's complement, flipping only after 1st one occurs, is an efficient manner,
    assign dout_temp[i] = (|din[i-1:0]) ? ~din[i] : din[i]; // as it results correct and requires less hardware 
  end : flip_after_first_one

  assign dout[WIDTH-1:0] = {dout_temp[WIDTH-1:1], din[0]};

endmodule  // 2'scomp
