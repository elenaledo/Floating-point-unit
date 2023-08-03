/* verilator lint_off UNUSEDSIGNAL */
module fadd_top(
  input logic         clk_i,
  input logic  [31:0] operand_a,
  input logic  [31:0] operand_b,
  output logic [31:0] result_o
);
/* verilator lint_off UNUSEDSIGNAL */
/* verilator lint_off LATCH */
logic [33:0] tmp_result;
logic [24:0] tmp_mantissa;

adder adder(
  .operand_a(operand_a),
  .operand_b(operand_b),
  .result_o(tmp_result)
);

add_normalizer normal(
  .exponent_i(tmp_result[32:25]),
  .mantissa_i(tmp_result[24:0]),
  .exponent_o(result_o[30:23]),
  .mantissa_o(tmp_mantissa)
);

assign result_o[31]   = tmp_result[33];
assign result_o[22:0] = tmp_mantissa[22:0];

endmodule


