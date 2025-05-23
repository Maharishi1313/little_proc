module register #(
    parameter integer WIDTH = 32
) (
    input logic clk,
    input logic reset,
    input logic en,
    input logic[WIDTH-1:0] d,
    output logic[WIDTH-1:0] q
);
always_ff @(posedge clk) begin
    if (!reset) begin
        q<=32'b0;
    end else if (en) begin
        q<=d;
    end 

    
end
    
endmodule;
