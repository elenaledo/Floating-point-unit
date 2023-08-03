#define MAX_SIM 40
#include <math.h>
void set_random(Vtop *dut, vluint64_t sim_unit) {
  long int x = pow(2,25);
  long int y = pow(2,31);
  dut->operand_a = rand()%x;
  dut->operand_b = (-1)*rand()%y;
}
