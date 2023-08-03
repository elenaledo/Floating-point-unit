//-------------------------------------------------------------------------------------
// Module name: Fadd_sub
// Description: Addition & Subtraction Floating point
// Author: Elena Le
// Project: Capstone 2
//-------------------------------------------------------------------------------------
/* verilator lint_off UNUSEDSIGNAL */
module adder(
  input  logic        clk_i,
  input  logic [31:0] operand_a,
  input  logic [31:0] operand_b,
  output logic        sign_o,
  output logic
);
  logic [7 :0]  a_exponent, b_exponent;            //  exponent operand_a, operand_b, result
  logic [7 :0]  result_exponent;
  logic [23:0]  a_mantissa, b_mantissa;            //  mantissa operand_a, operand_b,  result
  logic [24:0]  result_mantissa;
  logic         a_sign, b_sign, result_sign;       //  sign bit operand_a, operand_b, result
  logic [23:0]  tmp_mantissa;
  logic [7:0]   diff;

  logic [7 :0]  prenor_exp ;
  logic [24:0]  prenor_mant;
  logic [7 :0]  postnor_exp ;
  logic [24:0]  postnor_mant;
assign  prenor_exp  = result_exponent;
assign  prenor_mant = result_mantissa;
assign  result_o    = {result_sign, postnor_exp, postnor_mant[24:2]};
assign  grs         = postnor_mant[2:0];
normal norm(
//  .clk_i(clk_i),
  .exp_i(prenor_exp),
  .mant_i(prenor_mant),
  .exp_o(postnor_exp),
  .mant_o(postnor_mant)
);

initial begin
  grs = 3'b0;
end

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
end
always_ff@(posedge(clk_i))
begin
  //----------------------------------------------------- CASE: A_EXPONENT == B_EXPONENT ----------------------------------------------------------------------
  if(a_exponent == b_exponent)
    begin
      result_exponent <= a_exponent;
      if(a_sign == b_sign)                                                    // sign equal -> add
        begin
          result_sign           <= a_sign;
          result_mantissa       <= a_mantissa + b_mantissa;
//          result_mantissa[24]   = 1'b1;                                          // flag to shift (normalize)
        end
      else                                                                   // sign not equal ->sub
        begin
          if(a_mantissa > b_mantissa)
            begin
              result_sign     <= a_sign;
              result_mantissa <= a_mantissa - b_mantissa;
            end
          else
            begin
              result_sign     <= b_sign;
              result_mantissa <= b_mantissa - a_mantissa;
            end
        end
    end
  //----------------------------------------------------- CASE: A_EXPONENT != B_EXPONENT ----------------------------------------------------------------------
  else                                                                              // different in exponent -> normalize to get same exponent
    begin
      if(a_exponent > b_exponent)
        begin
          result_sign     <= a_sign;
          result_exponent <= a_exponent;
          diff            <= a_exponent - b_exponent ;
          tmp_mantissa    <= b_mantissa >> diff;
          if(a_sign == b_sign)
            result_mantissa <= a_mantissa + tmp_mantissa;
          else
            result_mantissa <= a_mantissa - tmp_mantissa;
        end
      else
        begin
          result_sign      <= b_sign;
          result_exponent  <= b_exponent;
          diff             <= b_exponent - a_exponent ;
          tmp_mantissa     <= a_mantissa >> diff;
          if(a_sign == b_sign)
            result_mantissa  <= b_mantissa + tmp_mantissa;
          else
            result_mantissa  <= b_mantissa - tmp_mantissa;
        end
    end
  if(result_mantissa[24]==1)
    begin
      result_exponent <= result_exponent + 1;
      result_mantissa <= result_mantissa >> 1;
    end
// else if((result_mantissa[23]!=1) && (result_exponent !=0))
//   begin
//     in_e                  = result_exponent;
//     in_m                  = result_mantissa;
//   end
//  result_o = {result_sign, result_exponent, result_mantissa[22:0]};
end
endmodule
