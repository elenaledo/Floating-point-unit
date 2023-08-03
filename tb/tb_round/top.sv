
`default_nettype none

module top
(
  input  logic        clk_i,
  input  logic [31:0] data_i,
  input  logic [2 :0] grs,
  input  logic [2 :0] rmode,
  output logic [31:0] data_o
);

  round rounder (
    .clk_i(clk_i),
    .data_i(data_i),
    .grs(grs),
    .rmode(rmode),
    .data_o(data_o)
  );
endmodule : top

