module ras #(
    parameter OPERAND_WIDTH = 4
) (
    input logic [OPERAND_WIDTH-1:0] x,
    input logic [$clog2(OPERAND_WIDTH)-1:0] y,
    output logic [OPERAND_WIDTH-1:0] z
);
assign z = $signed(x) >>>y ;
    
endmodule;
