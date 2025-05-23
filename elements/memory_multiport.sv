module memory_multiport #(
    parameter integer WIDTH = 32,
                          N = 4,
               N_READ_PORTS = 2,
               N_WRITE_PORTS = 1
) (
    input logic             clk,
    input logic             reset,
    input logic [N_READ_PORTS-1:0] read_en,
    input logic [N_WRITE_PORTS-1:0] write_en,
    input logic [    $clog2(N)-1:0] read_adr [N_READ_PORTS],
    input logic [    $clog2(N)-1:0] write_adr [N_WRITE_PORTS],
    input logic [        WIDTH-1:0] data_in [N_WRITE_PORTS],
    output logic [       WIDTH-1:0] data_out [N_READ_PORTS]

);
logic [WIDTH-1:0] memory[N];
always_ff @(posedge clk) begin
    if(!reset) begin
        for (int i=0; i<N; i++) begin
            memory[i] <= 0;
        end
        
    end else begin
    for (int i=0; i< N_WRITE_PORTS; i++) begin
            if(write_en[i]) begin
                memory[write_adr[i]]<= data_in[i];
            end
        end
    for(int i=0;i<N_READ_PORTS;i++) begin
        if (read_en[i]) begin
        data_out[i] <= memory[read_adr[i]];
        end
    end
    end
end


    
endmodule;
