//-------------------------------------------------------------------------------------
// Module name: LZC_4
// Description: Leading zeros counter for 4 bits number
// Author: Elena Le
// Project: Capstone 2
//-------------------------------------------------------------------------------------
module lzc_4(
  input  logic [3:0] a,                                                     // input data  (4 bits)
  output logic [1:0] c,                                                     // leading zero count
  output logic       v                                                      // flag if all input are zero v = 1
);
/* verilator lint_off UNUSEDSIGNAL */
logic a0;
logic a1;
logic a2;
logic a3;

logic s0;
logic s1;
logic s2;
logic s3;
logic s4;

assign a0 = a[0];
assign a1 = a[1];
assign a2 = a[2];
assign a3 = a[3];

assign s0 = a3 | a2;
assign s1 = a1 | a0;
assign s2 = s1 | s0;
assign s3 = (~ s0) & a1;
assign s4 = a3 | s3;

assign v    = s0 | s1;
assign c[0] = s4;
assign c[1] = s0;

endmodule
