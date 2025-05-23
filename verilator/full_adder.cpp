#include "Vfull_adder_tb.h"
#include "verilated_vcd_c.h"

int main(int argc, char **argv, char **env) {
    Verilated::commandArgs(argc, argv);
    Vfull_adder_tb* top = new Vfull_adder_tb;
    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace(tfp, 99);
    tfp->open("full_adder.vcd");

    printf("****** START of FULL ADDER TEST ****** \n");

    while (!Verilated::gotFinish()) {
        top->eval();
        tfp->dump(Verilated::time());
        Verilated::timeInc(1);
    }
    tfp->close();
    printf("****** END of FULL ADDER TEST ****** \n");
    delete top;
    return 0;
}