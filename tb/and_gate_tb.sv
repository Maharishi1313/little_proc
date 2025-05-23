`timescale 1ns/1ps

module and_gate_tb;
    logic x,y,z;
    and_gate and_gate_inst(
        .x(x),
        .y(y),
        .z(z)
    );
    initial begin 
        x = 1'b0;
        y = 1'b0;
        #10;
        $display("x = %b, y = %b, z = %b", x,y,z);
        x = 1'b0;
        y = 1'b1;
        #10;
        $display("x = %b, y = %b, z = %b", x,y,z);
        x = 1'b1;
        y = 1'b0;
        #10;
        $display("x = %b, y = %b, z = %b", x,y,z);
        x = 1'b1;
        y = 1'b1;
        #10;
        $display("x = %b, y = %b, z = %b", x,y,z);
        #10;
        $finish;
    end
endmodule

