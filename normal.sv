module normal(
 // input  logic         clk_i,
  input  logic  [7 :0] exp_i,
  input  logic  [24:0] mant_i,
  output logic  [7 :0] exp_o,
  output logic  [24:0] mant_o
);
/* verilator lint_off PINCONNECTEMPTY */
/* verilator lint_off WIDTH */
logic [31:0] tmp_mant;
logic [4 :0] shift;
logic [7 :0] diff;

assign tmp_mant = {mant_i,7'b0};

lzc_32 lzc32(
  .a(tmp_mant),
  .c(shift),
  .v()
);

//always_ff@(posedge(clk_i)) begin
  assign diff    = {3'b0,~(shift)};
  assign exp_o   = exp_i - diff;
  assign mant_o  = mant_i << diff;
//end

endmodule
