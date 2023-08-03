module fcsr(
  input  logic         clk_i  ,
  input  logic         rst_ni ,
  input  logic  [31:0] wdata  ,
  input  logic         wren   ,
  output logic  [31:0] rdata
);

logic [31:0] mem;

always_ff@(posedge(clk_i)) begin
  if(wren) begin
    mem <= wdata;
    $writememh("../../memory/fcsr",mem);
  end
end

always_comb begin
  rdata = mem;
end

endmodule
