module alu #(
    parameter op_w = 32
) (
    input logic [op_w-1:0] src1,
    input logic [op_w-1:0] src2,
    input logic [3:0] alu_op,
    
    output logic [op_w-1:0] result

);
always_comb begin
    casez(alu_op)
    4'b0000: result = $signed(src1) + $signed(src2);
    4'b0001: result = $signed(src1) - $signed(src2);
    4'b0010: result = src1 & src2;
    4'b0011: result = src1 | src2;
    4'b0100: result = src1 ^ src2;
    4'b0101: result = src1 << src2;
    4'b0110: result = src1 >> src2;
    4'b0111: result = $signed(src1) >>> src2;
    4'b1000: result = {31'b0, $signed(src1) < $signed(src2)};
    4'b1001: result = {31'b0, src1 < src2};
    4'b1010: result = ~(src1 ^ src2);
    default: result = 32'b0;
    endcase
end
    
endmodule
