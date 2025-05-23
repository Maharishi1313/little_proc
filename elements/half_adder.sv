module half_adder (
    input logic x,
    input logic y,
    output logic sum,
    output logic carry

);  

assign sum = x^y;
assign carry = x&y;
    
endmodule;
