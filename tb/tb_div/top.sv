
`default_nettype none

module top
(
  input logic        clk_i,
  input logic [31:0] operand_a,
  input logic [31:0] operand_b,
  output logic[31:0] div_result
);

  fdiv divider (
    .clk_i(clk_i),
    .operand_a(operand_a),
    .operand_b(operand_b),
    .div_result(div_result)
    );
endmodule : top

