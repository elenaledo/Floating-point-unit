#define MAX_SIM 100
#include <math.h>
void set_random(Vtop *dut, vluint64_t sim_unit) {
  long int x  = pow(2,27);
  dut->data_i = rand()%x;
  dut->grs    = rand()%8;
  dut->rmode  = rand()%5;
}
