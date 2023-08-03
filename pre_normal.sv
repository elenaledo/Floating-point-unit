module pre_normal(
  input  logic clk_i,
  input  logic [31:0] operand_a_i,
  input  logic [31:0] operand_b_i,
  output logic [2 :0] grs        ,
  output logic [31:0] operand_a_o,
  output logic [31:0] operand_b_o
);

  logic        a_sign;
  logic        b_sign;
  logic [23:0] a_mantissa_i;
  logic [23:0] b_mantissa_i;
  logic [23:0] a_mantissa_o;
  logic [23:0] b_mantissa_o;
  logic [7 :0] a_exponent_i;
  logic [7 :0] b_exponent_i;
  logic [7 :0] a_exponent_o;
  logic [7 :0] b_exponent_o;
  logic [7 :0] diff;
  logic [25:0] tmp_mantissa;

assign a_sign = operand_a_i[31];
assign b_sign = operand_b_i[31];
assign a_exponent_i = operand_a_i[30:23];
assign b_exponent_i = operand_b_i[30:23];
assign a_mantissa_i = (operand_a_i[30:23]!=0)?{1'b1,operand_a_i[30:23]}:{1'b0,operand_a_i[30:23]};
assign b_mantissa_i = (operand_b_i[30:23]!=0)?{1'b1,operand_b_i[30:23]}:{1'b0,operand_b_i[30:23]};
assign diff         = (operand_a_i[30:23]>=operand_b_i[30:23])? operand_a_i[30:23] - operand_b_i[30:23]: operand_b_i[30:23] - operand_a_i[30:23];


always_ff@(posedge(clk_i)) begin
  if(a_exponent_i >= b_exponent) begin
    a_exponent_o <= a_exponent_i;
    b_exponent_o <= a_exponent_i;
    
  end
end


endmodule
