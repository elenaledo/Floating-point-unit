module fcmp(
  input logic        clk_i,
  input logic [31:0] operand_a,
  input logic [31:0] operand_b,
  output logic[31:0] min,
  output logic[31:0] max,
  output logic       equal,
  output logic       less,
  output logic       less_equal
);
logic        a_sign, b_sign;
logic [22:0] a_mantissa, b_mantissa;
logic [7:0]  a_exponent, b_exponent;

assign a_sign     = operand_a[31];
assign b_sign     = operand_b[31];
assign a_mantissa = operand_a[22:0];
assign b_mantissa = operand_b[22:0];
assign a_exponent = operand_a[30:23];
assign b_exponent = operand_b[30:23];

always_latch@(posedge(clk_i))
  begin
    if(a_exponent == b_exponent)
      begin
        if(a_mantissa == b_mantissa)
          begin
            case(a_sign ^ b_sign)
              0:                            // a=b
                begin
                  min         <= {a_sign, a_exponent, a_mantissa};
                  max         <= {a_sign, a_exponent, a_mantissa};
                  less        <= 1'b0;
                  equal       <= 1'b1;
                  less_equal  <= 1'b1;
                end
              1:                          // a=-b
                begin
                  min         <= (a_sign)?{a_sign, a_exponent, a_mantissa}:{b_sign, b_exponent, b_mantissa};
                  max         <= (a_sign)?{b_sign, b_exponent, b_mantissa}:{a_sign, a_exponent, a_mantissa};
                  less        <= a_sign;
                  equal       <= 1'b0;
                  less_equal  <= a_sign;
                end
            endcase
          end
      end
    else                                                        // a_exponent != b_exponent
      begin
        if(a_exponent > b_exponent)
          begin
            min        <= (a_sign)?{a_sign, a_exponent, a_mantissa}:{b_sign, b_exponent, b_mantissa};
            max        <= (a_sign)?{b_sign, b_exponent, b_mantissa}:{a_sign, a_exponent, a_mantissa};
            less       <= a_sign;
            equal      <= 1'b0;
            less_equal <= a_sign;
          end
        else                                  // a_exponent < b_exponent
          begin
            min        <= (a_sign)?{b_sign, b_exponent, b_mantissa}:{a_sign, a_exponent, a_mantissa};
            max        <= (a_sign)?{a_sign, a_exponent, a_mantissa}:{b_sign, b_exponent, b_mantissa};
            less       <= ~b_sign;
            equal      <= 1'b0;
            less_equal <= ~b_sign;
          end
      end
  end
endmodule
