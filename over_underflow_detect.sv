module over_underflow_detect(
  input  logic [31:0] fp_input,
  output logic        overflow,
  output logic        underflow
);

logic       sign;
logic [7:0] exponent;
logic [22:0]mantissa;
logic       is_nan;
logic       is_inf;
logic       is_zero;
logic       is_denormal;


assign sign     = fp_input[31];
assign exponent = fp_input[30:23];
assign mantissa = fp_input[22:0];


assign is_nan      = (exponent == 255) && (mantissa != 0);
assign is_zero     = (exponent == 0)   && (mantissa == 0);
assign is_inf      = (exponent == 255) && (mantissa == 0);
assign is_denormal = (exponent == 0)   && (mantissa !=0);

assign overflow    = is_nan  | is_inf ;
assign underflow   = is_zero | is_denormal;
endmodule
