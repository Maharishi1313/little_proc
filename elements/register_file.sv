module register_file #(
    parameter integer WIDTH = 32,
    parameter integer N = 4
) (
    input logic clk,
    input logic reset,
    input logic write_en,
    input logic read_en,
    input logic [$clog2(N)-1:0] read_adr,
    input logic [$clog2(N)-1:0] write_adr,
    input logic [WIDTH-1:0] data_in,
    input logic [WIDTH-1:0] data_out,

);
    logic [WIDTH-1:0] registers[N];
    always_ff @(posedge clk) begin
        if (!reset) begin
            for(int i=0;i<N; i++) begin
                registers[i]<=0;
            end
        end else if(write_en) begin
            registers[write_adr]<=data_in;
        end
    end
    // assigning data_out out of the always_ff block coz data_out is a combinational output 
    // and not a clocked one
    assign data_out = read_en? registers[read_adr]: 0;
 
endmodule;
