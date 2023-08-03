module multiplier(
  input  logic [31:0] operand_a,
  input  logic [31:0] operand_b,
  output logic [2 :0] grs,
  output logic [31:0] mul_result
);

logic a_sign;
logic b_sign;
logic [23:0] a_mant;
logic [23:0] b_mant;

