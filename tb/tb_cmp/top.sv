
`default_nettype none

module top
(
  input logic        clk_i,
  input logic [31:0] operand_a,
  input logic [31:0] operand_b,
  output logic[31:0] min,
  output logic[31:0] max,
  output logic       equal,
  output logic       less,
  output logic       less_equal
);

fcmp test_cmp(
 .clk_i(clk_i),
 .operand_a(operand_a),
 .operand_b(operand_b),
 .min(min),
 .max(max),
 .equal(equal),
 .less(less),
 .less_equal(less_equal)
 );
endmodule
