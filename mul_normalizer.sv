//-------------------------------------------------------------------------------------
// Module name: MUL-NORMALIZER
// Description: Normalize/ Rounding for Multiplication Operand
// Author: Elena Le
// Project: Capstone 2
//-------------------------------------------------------------------------------------
module mul_normalizer(
  input logic [7:0]   exponent_i,
  input logic [47:0]  mantissa_i,
  output logic[7:0]   exponent_o,
  output logic[47:0]  mantissa_o
);
always_latch
  begin
    if (mantissa_i[46:41] == 6'b000001)
      begin
			  exponent_o = exponent_i - 5;
			  mantissa_o = mantissa_i << 5;
		  end
    else if (mantissa_i[46:42] == 5'b00001)
      begin
			  exponent_o = exponent_i - 4;
			  mantissa_o = mantissa_i << 4;
		  end
    else if (mantissa_i[46:43] == 4'b0001)
      begin
			  exponent_o = exponent_i - 3;
			  mantissa_o = mantissa_i << 3;
		  end
    else if (mantissa_i[46:44] == 3'b001)
      begin
			  exponent_o = exponent_i - 2;
			  mantissa_o = mantissa_i << 2;
		  end
    else if (mantissa_i[46:45] == 2'b01)
      begin
			  exponent_o = exponent_i - 1;
			  mantissa_o = mantissa_i << 1;
		  end
  end
endmodule
