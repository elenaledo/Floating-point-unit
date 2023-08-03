
`default_nettype none

module top
(
  input logic        clk_i,
  input logic [31:0] A, B,
  input logic [1 :0] opcode,
  output logic[31:0] O
);

  fpu fpu_dut (
    .clk_i(clk_i),
    .A(A),
    .B(B),
    .opcode(opcode),
    .O(O)
    );
endmodule : top

