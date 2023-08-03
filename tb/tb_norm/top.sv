
`default_nettype none

module top
(
  input logic        clk_i,
  input logic [31:0] operand_a,
  input logic [31:0] operand_b,
  input logic [2 :0] rmode,
  output logic[31:0] result_o
);

  logic [31:0] round;
  logic [2 :0] grs;

  adder adder (
    .clk_i(clk_i),
    .operand_a(operand_a),
    .operand_b(operand_b),
    .grs(grs),
    .result_o (round)
    );

    round rounder (
      .clk_i(clk_i),
      .data_i(round),
      .rmode(rmode),
      .grs(grs),
      .data_o(result_o)
    );
endmodule : top

