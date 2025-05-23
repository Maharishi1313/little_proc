#include "Vand_gate_tb.h"
#include "verilated_vcd_c.h"

int main(int argc, char **argv, char **env) {
    Verilated::commandArgs(argc, argv);
    Vand_gate_tb* top = new Vand_gate_tb;
    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top-> trace(tfp, 99);
    tfp->open("and_gate.vcd");

    printf("******* START OF THE AND GATE TEST ******** \n ");

    while (!Verilated::gotFinish()) {
        top->eval();
        tfp->dump(Verilated::time());
        Verilated::timeInc(1);
    }
    tfp->close();
    printf("***** END OF AND GATE TEST ***** \n ");
    delete top;
    return 0;
}