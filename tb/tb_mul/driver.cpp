#define MAX_SIM 60
#include <math.h>
void set_random(Vtop *dut, vluint64_t sim_unit) {
  long int x = pow(2,27);
  dut->A = rand()%x;
  dut->B = rand()%x;
  dut->opcode = rand()%4;
}
