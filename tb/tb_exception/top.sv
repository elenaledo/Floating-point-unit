
`default_nettype none
module top
import mypkg::*;
( input  logic         clk_i,
  input  logic [31:0]  fp_operand_a,
  input  logic [31:0]  fp_operand_b,
  input  logic [31:0]  fp_operand_c,
  input  logic [31:0]  fp_f_ab,
  fpu_op_e             opcode,
  output logic         overflow,
  output logic         underflow,
  output logic         invalid,
  output logic         div_zero,
  output logic         inexact
);

exception exception_dut(
    .clk_i(clk_i),
    .fp_operand_a(fp_operand_a),
    .fp_operand_b(fp_operand_b),
    .fp_operand_c(fp_operand_c),
    .fp_f_ab(fp_f_ab),
    .opcode(opcode),
    .overflow(overflow),
    .underflow(underflow),
    .invalid(invalid),
    .div_zero(div_zero),
    .inexact(inexact)
    );
endmodule : top

