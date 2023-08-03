
/* verilator lint_off WIDTH */
/* verilator lint_off UNUSEDSIGNAL */
/* verilator lint_off UNOPTFLAT */
module fmul(
  input logic        clk_i,
  input logic [31:0] operand_a, operand_b,
  output logic[31:0] mul_result_o
);
logic        a_sign,b_sign;
logic [23:0] a_mantissa, b_mantissa;
logic [7:0]  a_exponent, b_exponent;
logic        mul_sign;
logic [7:0]  mul_exponent;
logic [24:0] mul_mantissa;
logic [47:0] product;
logic        guard;
logic        round;
logic        sticky;
logic [7:0]  in_e, out_e;
logic [47:0] in_m, out_m;
//mul_normalizer normalizer(
// .exponent_i(in_e),
// .mantissa_i(in_m),
// .exponent_o(out_e),
// .mantissa_o(out_m)
//);


always_ff@(posedge(clk_i))
  begin
    a_sign <= operand_a[31];
    b_sign <= operand_b[31];
  if(operand_a[30:23]==0)
    begin
      a_exponent <= (operand_a[22:0] != 0)? 8'b00000001 : 8'b00000000;
      a_mantissa <= {1'b0,operand_a[22:0]};
    end
  else
    begin
      a_exponent <= operand_a[30:23];
      a_mantissa <= {1'b1,operand_a[22:0]};
    end
  if(operand_b[30:23]==0)
    begin
      b_exponent <= (operand_b[22:0] != 0)? 8'b00000001 : 8'b00000000;
      b_mantissa <= {1'b0,operand_b[22:0]};
    end
  else
    begin
      b_exponent <= operand_b[30:23];
      b_mantissa <= {1'b1,operand_b[22:0]};
    end
    product      <= a_mantissa * b_mantissa;
 // end
//  always_latch begin
//  if(product[47]==1)
//    begin
//      mul_exponent = mul_exponent +1;
//      mul_mantissa = mul_mantissa >> 1;
//    end
//   else
//     begin
//       in_e         = mul_exponent;
//       in_m         = product;
//      // mul_exponent = out_e;
//      // product      = out_m;
//     end
  mul_mantissa <= product[47:23];
  guard        <= product[23];
  round        <= product[22];
  sticky       <= |product[21:0];
    mul_sign     <= a_sign^b_sign;
    mul_exponent <= a_exponent + b_exponent - 127;
    mul_result_o <= {mul_sign,mul_exponent,mul_mantissa[22:0]};
end
endmodule
