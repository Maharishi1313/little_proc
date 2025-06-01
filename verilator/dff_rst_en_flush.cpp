#include "Vdff_rst_en_flush_tb.h"
#include "verilated_vcd_c.h"

int main(int argc, char **argv, char **env) {
    Verilated::commandArgs(argc, argv);
    Vdff_rst_en_flush_tb* top = new Vdff_rst_en_flush_tb;
    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace(tfp, 99);
    tfp->open("dff_rst_en_flush.vcd");

    printf("****** START of FLOPS TEST ****** \n");

    while (!Verilated::gotFinish()) {
        top->eval();
        tfp->dump(Verilated::time());
        Verilated::timeInc(1);
    }
    tfp->close();
    printf("****** END of FLOPS TEST ****** \n");
    delete top;
    return 0;
}