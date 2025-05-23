module adder_4bit(
    input logic[3:0] x,
    input logic[3:0] y,
    output logic[4:0] z,
    
);

logic[4:0] z_ov;
assign z_ov = $unsigned(x) + $unsigned(y);
assign z = z_ov;
    
endmodule