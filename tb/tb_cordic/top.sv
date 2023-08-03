
`default_nettype none

module top
(
  input  logic        clk_i,
  input  logic        mode,
  input  logic        rst_ni,
  input  logic [4 :0] stage,
  input  logic [31:0] x,
  input  logic [31:0] y,
  input  logic [31:0] z,
  output logic [31:0] x_out,
  output logic [31:0] y_out,
  output logic [31:0] z_out,
  output logic        mode_out
);

  cordic cordic_dut (
    .clk_i(clk_i),
    .mode(mode),
    .rst_ni(rst_ni),
    .stage(stage),
    .x(x),
    .y(y),
    .z(z),
    .x_out(x_out),
    .y_out(x_out),
    .z_out(x_out),
    .mode_out(mode_out)
    );
endmodule : top

