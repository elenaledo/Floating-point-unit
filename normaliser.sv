module normaliser(
  input  logic [31:0] fp_in,
  output logic [31:0] fp_out,
);

logic [30:0] mantissa;
logic [7:0 ] exponent;
logic        sign;

assign sign     = fp_in[46];
assign exponent = fp_in[46:23]
assign over     = fp_in[22];
assign under    = fp_in[21];
assign denr     = fp_in[21];

if (fp_in[30:23] != 0) begin
  mantissa = fp_in[22:0];
  exponent = fp_in[30:23] - 127;
end else if (fp_in[22:0] != 0) begin
  mantissa = fp_in[22:0] << 1;
  exponent =  - 127;
end else begin
  mantissa = 0;
  exponent = 0;
end

// normalize mantissa
while (mantissa[30] == 0 && exponent > -127) begin
  mantissa = {mantissa[29:0], 1'b0};
  exponent--;
end

// check for overflow and underflow
if (exponent < -126) begin
  mantissa = 0;
  exponent = -127;
end else if (exponent > 127) begin
  mantissa = 0;
  exponent = 128;
end

// construct normalized float
fp_out = {sign, exponent + 127, mantissa[29:0]};

endmodule

