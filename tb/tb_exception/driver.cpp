#define MAX_SIM 10
#include <math.h>
void set_random(Vtop *dut, vluint64_t sim_unit) {
  long int x = pow(2,25);
  dut->fp_operand_a = rand()%x;
  dut->fp_operand_b = rand()%x;
  dut->fp_operand_c = rand()%x;
  dut->fp_f_ab      = rand()%x;
  dut->opcode       = rand()%10;
}
