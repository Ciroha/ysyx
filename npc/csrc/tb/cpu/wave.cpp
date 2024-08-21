#include <common.h>
#include "cpu.h"

VerilatedContext* contextp = NULL;
VerilatedVcdC* tfp = NULL;

void init_wave() {
	Verilated::traceEverOn(true);
	contextp = new VerilatedContext;
	tfp = new VerilatedVcdC;
	cpu.trace(tfp, 5);
	tfp->open("builds/waveform.vcd");
}

void open_wave() {
	tfp->open("builds/waveform.vcd");
}

void wave_dump() {
    // tfp->dump(contextp->time());
    // contextp->timeInc(1);
}

void close_wave() {
    tfp->close();
}
