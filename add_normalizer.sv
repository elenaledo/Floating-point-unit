module add_normalizer(
  input logic [7:0]   exponent_i,
  input logic [24:0]  mantissa_i,
  output logic[7:0]   exponent_o,
  output logic[24:0]  mantissa_o
);
/* verilator lint_off LATCH */
always_comb begin
    if (mantissa_i[23:3] == 21'b000000000000000000001)
      begin
			  exponent_o = exponent_i - 20;
			  mantissa_o = mantissa_i << 20;
		  end
    else if (mantissa_i[23:4] == 20'b00000000000000000001)
      begin
			  exponent_o = exponent_i - 19;
			  mantissa_o = mantissa_i << 19;
		  end
    else if (mantissa_i[23:5] == 19'b0000000000000000001)
      begin
			  exponent_o = exponent_i - 18;
			  mantissa_o = mantissa_i << 18;
		  end
    else if (mantissa_i[23:6] == 18'b000000000000000001)
      begin
			  exponent_o = exponent_i - 17;
			  mantissa_o = mantissa_i << 17;
		  end
    else if (mantissa_i[23:7] == 17'b00000000000000001)
      begin
			  exponent_o = exponent_i - 16;
			  mantissa_o = mantissa_i << 16;
	  	end
    else if (mantissa_i[23:8] == 16'b0000000000000001)
      begin
			  exponent_o = exponent_i - 15;
			  mantissa_o = mantissa_i << 15;
		  end
    else if (mantissa_i[23:9] == 15'b000000000000001)
      begin
			  exponent_o = exponent_i - 14;
			  mantissa_o = mantissa_i << 14;
		  end
    else if (mantissa_i[23:10] == 14'b00000000000001)
      begin
			  exponent_o = exponent_i - 13;
			  mantissa_o = mantissa_i << 13;
		  end
    else if (mantissa_i[23:11] == 13'b0000000000001)
      begin
			  exponent_o = exponent_i - 12;
			  mantissa_o = mantissa_i << 12;
		  end
    else if (mantissa_i[23:12] == 12'b000000000001)
      begin
			  exponent_o = exponent_i - 11;
			  mantissa_o = mantissa_i << 11;
		  end
    else if (mantissa_i[23:13] == 11'b00000000001)
      begin
			  exponent_o = exponent_i - 10;
			  mantissa_o = mantissa_i << 10;
		  end
    else if (mantissa_i[23:14] == 10'b0000000001)
      begin
			  exponent_o = exponent_i - 9;
			  mantissa_o = mantissa_i << 9;
		  end
    else if (mantissa_i[23:15] == 9'b000000001)
      begin
			  exponent_o = exponent_i - 8;
			  mantissa_o = mantissa_i << 8;
		  end
    else if (mantissa_i[23:16] == 8'b00000001)
      begin
			  exponent_o = exponent_i - 7;
			  mantissa_o = mantissa_i << 7;
		  end
    else if (mantissa_i[23:17] == 7'b0000001)
      begin
			  exponent_o = exponent_i - 6;
			  mantissa_o = mantissa_i << 6;
		  end
    else if (mantissa_i[23:18] == 6'b000001)
      begin
			  exponent_o = exponent_i - 5;
			  mantissa_o = mantissa_i << 5;
		  end
    else if (mantissa_i[23:19] == 5'b00001)
      begin
			  exponent_o = exponent_i - 4;
			  mantissa_o = mantissa_i << 4;
		  end
    else if (mantissa_i[23:20] == 4'b0001)
      begin
			  exponent_o = exponent_i - 3;
			  mantissa_o = mantissa_i << 3;
		  end
    else if (mantissa_i[23:21] == 3'b001)
      begin
			  exponent_o = exponent_i - 2;
			  mantissa_o = mantissa_i << 2;
		  end
    else if (mantissa_i[23:22] == 2'b01)
      begin
			  exponent_o = exponent_i - 1;
			  mantissa_o = mantissa_i << 1;
		  end
  end
endmodule
