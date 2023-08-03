module cordic(
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

`define rotate 0

//  logic [4 :0] stage;
  logic [4 :0] stage_out;
  logic [31:0] atan;

assign stage_out = stage + 1;

atan lut(
  .angle(stage_out),
  .atan(atan)
);

always_ff @(posedge clk_i or negedge rst_ni) begin
	if (~rst_ni) begin
		x_out <= 0;
		y_out <= 0;
		z_out <= 0;
		mode_out <= 0;
	end
	else begin
		mode_out <= mode;
		if (mode == `rotate) begin
      if (z[31] == 0) begin
				case (x[31]^y[31])        // FIRST QUADRANT
					1'b0 : x_out <= (x[30:0] > (y[30:0] >> stage) ) ? {x[31], x[30:0] - (y[30:0] >> stage)} :
                {~x[31],(y[30:0] >> stage) - x[30:0]} ;
					1'b1 : x_out <= {x[31], x[30:0] + (y[30:0] >> stage)};
				endcase
				case (x[31]^y[31])
					1'b1 : y_out <= (y[30:0] > (x[30:0] >> stage) ) ? {y[31], y[30:0] - (x[30:0] >> stage)} :
                                                            {~y[31],(x[30:0] >> stage) - y[30:0]} ;
					1'b0 : y_out <= {y[31], y[30:0] + (x[30:0] >> stage)};
				endcase
				         z_out <= (z[30:0] > atan[30:0]) ? z - atan : {~z[31],atan[30:0] - z[30:0]};
			end

			else begin
				case (x[31]^y[31])        // SECOND QUADRANT
					1'b1 : x_out <= (x[30:0] > (y[30:0] >> stage) ) ? {x[31], x[30:0] - (y[30:0] >> stage)} :
                                                            {~x[31],(y[30:0] >> stage) - x[30:0]} ;
					1'b0 : x_out <= {x[31], x[30:0] + (y[30:0] >> stage)};
				endcase
				case (x[31]^y[31])
					1'b0 : y_out <= (y[30:0] > (x[30:0] >> stage) ) ? {y[31], y[30:0] - (x[30:0] >> stage)} :
                                                            {~y[31],(x[30:0] >> stage) - y[30:0]} ;
					1'b1 : y_out <= {y[31], y[30:0] + (x[30:0] >> stage)};
				endcase
				         z_out <= (z[30:0] > atan[30:0]) ? z - atan : {~z[31],atan[30:0] - z[30:0]};
			end
		end
		else begin
			if (y[31] == 1) begin
				case (x[31]^y[31])
					1'b0 : x_out <= (x[30:0] > (y[30:0] >> stage) ) ? {x[31], x[30:0] - (y[30:0] >> stage)} :
                                                            {~x[31],(y[30:0] >> stage) - x[30:0]} ;
					1'b1 : x_out <= {x[31], x[30:0] + (y[30:0] >> stage)};
				endcase
				case (x[31]^y[31])
					1'b1 : y_out <= (y[30:0] > (x[30:0] >> stage) ) ? {y[31], y[30:0] - (x[30:0] >> stage)} :
                                                            {~y[31],(x[30:0] >> stage) - y[30:0]} ;
					1'b0 : y_out <= {y[31], y[30:0] + (x[30:0] >> stage)};
				endcase
				case (z[31])
					1'b0 : z_out <= (z[30:0] > atan[30:0]) ?          {z[31], z[30:0] - atan[30:0]} :
					                                              		{~z[31],atan[30:0] - z[30:0]} ;
					1'b1 : z_out <= {z[31], z[30:0] + atan[30:0]};
				endcase
				x_out <= x - (y >> stage);
				y_out <= y + (x >> stage);
				z_out <= z - atan;
			end
			else begin
				case (x[31]^y[31])
					1'b1 : x_out <= (x[30:0] > (y[30:0] >> stage) ) ? {x[31], x[30:0] - (y[30:0] >> stage)} :
							                                              {~x[31],(y[30:0] >> stage) - x[30:0]} ;
					1'b0 : x_out <= {x[31], x[30:0] + (y[30:0] >> stage)};
				endcase
				case (x[31]^y[31])
					1'b0 : y_out <= (y[30:0] > (x[30:0] >> stage) ) ? {y[31], y[30:0] - (x[30:0] >> stage)} :
							                                              {~y[31],(x[30:0] >> stage) - y[30:0]} ;
					1'b1 : y_out <= {y[31], y[30:0] + (x[30:0] >> stage)};
				endcase
				case (z[31])
					1'b1 : z_out <= (z[30:0] > atan[30:0]) ?	{z[31], z[30:0] - atan[30:0]} :
							                                      {~z[31],atan[30:0] - z[30:0]} ;
					1'b0 : z_out <= {z[31], z[30:0] + atan[30:0]};
				endcase
				x_out <= x + (y >> stage);
				y_out <= y - (x >> stage);
				z_out <= z + atan;
			end
		end
	end
end
endmodule
