/* verilator lint_off UNUSEDSIGNAL */
module rnd(
  input  logic        clk_i,
  input  logic [56:0] data_i,
  input  logic [2 :0] rmode,
  input  logic [2 :0] grs,
  output logic [31:0] data_o
);

logic        sign;
logic [47:0] mantissa_i;
//logic [30:0] tmp_mantissa;
logic [7 :0] exponent;
logic [22:0] mantissa;
logic [47:0] mantissa_o;
logic        guard;
logic        roundb;
logic        sticky;
logic [31:0] roundnum;

//assign mantissa_i   = data_i[47:0];                     //mantissa before normalise
//assign grs          = {guard, roundb, sticky};
//assign tmp_mantissa = {7'b0,1,mantissa >> 8};
assign sign         =  data_i[56];
assign exponent     =  data_i[55:48];
assign mantissa     =  data_i[47:0];
assign guard        =  grs[2];                                 // tmp_mantissa[2];
assign roundb       =  grs[1];                                 // tmp_mantissa[1];
assign sticky       =  grs[0];                                 // tmp_mantissa[0];
assign roundnum     =  {sign,exponent,mantissa_o[47:25]};
//assign data_o       = roundnum;

//always_ff@(posedge(clk_i)) begin
//  genvar i
//end

//always_ff@(posedge(clk_i)) begin
always_comb begin
  case(rmode)
    3'b000:begin                       // round to nearest tie to even
    if(guard&(roundb|sticky) || guard&data_i[0])
      mantissa_o = mantissa + 1;
    else
      mantissa_o = mantissa;
    end
    3'b001:begin                     // round toward zero
      mantissa_o = mantissa;
    end
    3'b010:begin                       // round down, toward -inf
    if((sign==1) & (guard|roundb|sticky))
      mantissa_o = mantissa + 1;
    else
      mantissa_o = mantissa;
    end
    3'b011:begin                       // round up, toward +inf
    if((sign==0)& (guard|roundb|sticky))
      mantissa_o = mantissa + 1;
    else
      mantissa_o = mantissa;
    end
    3'b100:begin                     // round toward nearest tie max magnitude
      mantissa_o = mantissa + 1;
    end
    default: begin                     // reserved
      mantissa_o = mantissa;
    end
  endcase
end

always_ff@(posedge(clk_i)) begin
 data_o <= roundnum;
end
endmodule
