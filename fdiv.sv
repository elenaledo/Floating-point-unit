module fdiv(
  input logic        clk_i,
  input logic [31:0] operand_a,
  input logic [31:0] operand_b,
  output logic[31:0] div_result
);
/* verilator lint_off UNUSEDSIGNAL */

logic        a_sign, b_sign;
logic [7:0]  a_exponent, b_exponent;
logic [23:0] a_mantissa, b_mantissa;
logic        div_sign;
logic [7:0]  div_exponent;
logic [23:0] div_mantissa;
logic [23:0] quotein;
logic [23:0] remainder;

assign div_result = {div_sign, div_exponent, div_mantissa[22:0]};

always_ff@(posedge(clk_i))
  begin
    a_sign <= operand_a[31];
    b_sign <= operand_b[31];
    if(operand_a[30:23]==0)
      begin
        a_exponent <= 8'b00000001;
        a_mantissa <= {1'b0,operand_a[22:0]};
      end
    else
      begin
        a_exponent <= operand_a[30:23];
        a_mantissa <= {1'b1,operand_a[22:0]};
      end
    if(operand_b[30:23]==0)
      begin
        b_exponent <= 8'b00000001;
        b_mantissa <= {1'b0,operand_b[22:0]};
      end
    else
      begin
        b_exponent <= operand_b[30:23];
        b_mantissa <= {1'b1,operand_b[22:0]};
      end
  end
always_comb
  begin
    div_sign     = a_sign ^ b_sign;
    div_exponent = a_exponent - b_exponent + 127;
    div_mantissa = a_mantissa/b_mantissa ;
  end
endmodule
