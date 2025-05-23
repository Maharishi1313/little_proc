module full_adder (
    input logic x,
    input logic y,
    input logic c_in,
    output logic sum,
    output logic carry

);

logic sum_a, c_a, sum_b, c_b;
half_adder ha1(x, y, sum_a, c_a);
half_adder ha2(sum_a, c_in, sum_b, c_b);

assign sum = sum_b;
assign carry = c_a | c_b;

    
endmodule;
