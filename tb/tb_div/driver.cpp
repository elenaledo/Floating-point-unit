#define MAX_SIM 100
#include <math.h>
void set_random(Vtop *dut, vluint64_t sim_unit) {
  long int x = pow(2,25);
  dut->operand_a = rand()%x;
  dut->operand_b = rand()%x;
}
