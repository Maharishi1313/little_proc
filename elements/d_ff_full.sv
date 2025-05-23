module d_ff_full(                          //asynchronous dff
    input logic d,
    input logic clk,
    input logic reset,
    input logic en,
    output logic q
);
always_ff @(posedge clk , negedge reset) begin        //async identifired by negedge reset
    if(!reset) begin
        q<=0;
    end else if (en) begin
        q<=d;
        
    end
end
    
endmodule;
