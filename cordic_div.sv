module cordic_div(
  input  logic         clk_i,
//  input  logic         en,
  input  logic [7:-24] y,
  input  logic [7:-24] x,
  output logic [7:-24] out);
//    parameter FLOAT_SIZE = 24;
//    parameter INT_SIZE = 8;
//
//    input wire CLK;
//    input wire EN;
//    input wire signed [INT_SIZE-1:-FLOAT_SIZE] y;
//    input wire signed [INT_SIZE-1:-FLOAT_SIZE] x;
//    output reg signed [INT_SIZE-1:-FLOAT_SIZE] out;

//parameter MAX_ITERATION = FLOAT_SIZE+1;
//reg signed [INT_SIZE-1:-FLOAT_SIZE] y_;
//reg signed [INT_SIZE-1:-FLOAT_SIZE] z_;
//reg [4:0] i;
 logic [4:0] i;
 logic [7:-24] y_;
 logic [7:-24] z_;

always @(posedge CLK)
  begin
  //  if (EN) //  Like Reset
  //  begin
  //      out <= 32'h00_000000;
  //      z_ <= 32'h00_000000;
  //      y_ <= y;
  //      i <= 5'b0000;
  //  end
  //  else
  //  begin
        if (i < 25 && |y_)
        begin
            y_ <= y_[7] ? y_ + (x >>> i) : y_ - (x >>> i);
            z_ <= y_[7] ? z_ - $signed(32'h01_000000 >> i) : z_ + $signed(32'h01_000000 >> i);
            i <= i + 1;
        end
        out <= z_;
  //  end
  end
endmodule
