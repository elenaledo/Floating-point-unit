module exception
import mypkg::*;
( input  logic         clk_i,
  input  logic [31:0]  fp_operand_a,
  input  logic [31:0]  fp_operand_b,
  input  logic [31:0]  fp_operand_c,
  input  logic [31:0]  fp_f_ab,
  input  fpu_op_e      opcode,
  output logic         overflow,
  output logic         underflow,
  output logic         invalid,
  output logic         div_zero,
  output logic         inexact
);
/* verilator lint_off UNUSEDSIGNAL */

logic        a_sign;
logic        b_sign;
logic        c_sign;
logic        f_ab_sign;
logic [7:0]  a_exp;
logic [7:0]  b_exp;
logic [7:0]  c_exp;
logic [7:0]  f_ab_exp;
logic [22:0] a_mantissa;
logic [22:0] b_mantissa;
logic [22:0] c_mantissa;
logic [22:0] f_ab_mantissa;
logic a_nan;
logic a_zero;
logic a_inf;
logic a_dnr;
logic b_nan;
logic b_zero;
logic b_inf;
logic b_dnr;
logic f_ab_nan;
logic f_ab_zero;
logic f_ab_inf;
logic f_ab_dnr;
logic c_nan;
logic c_zero;
logic c_inf;
logic c_dnr;

assign a_sign        = fp_operand_a[31];
assign a_exp         = fp_operand_a[30:23];
assign a_mantissa    = fp_operand_a[22:0];
assign b_sign        = fp_operand_b[31];
assign b_exp         = fp_operand_b[30:23];
assign b_mantissa    = fp_operand_b[22:0];
assign f_ab_sign     = fp_f_ab[31];
assign f_ab_exp      = fp_f_ab[30:23];
assign f_ab_mantissa = fp_f_ab[22:0];
assign c_sign        = fp_operand_c[31];
assign c_exp         = fp_operand_c[30:23];
assign c_mantissa    = fp_operand_c[22:0];


assign a_nan  = (a_exp == 255) && (a_mantissa != 0);
assign a_zero = (a_exp == 0  ) && (a_mantissa == 0);
assign a_inf  = (a_exp == 255) && (a_mantissa == 0);
assign a_dnr  = (a_exp == 0)   && (a_mantissa != 0);

assign b_nan  = (b_exp == 255) && (b_mantissa != 0);
assign b_zero = (b_exp == 0  ) && (b_mantissa == 0);
assign b_inf  = (b_exp == 255) && (b_mantissa == 0);
assign b_dnr  = (b_exp == 0)   && (b_mantissa != 0);

assign f_ab_nan  = (f_ab_exp == 255) && (f_ab_mantissa != 0);
assign f_ab_zero = (f_ab_exp == 0  ) && (f_ab_mantissa == 0);
assign f_ab_inf  = (f_ab_exp == 255) && (f_ab_mantissa == 0);
assign f_ab_dnr  = (f_ab_exp == 0)   && (f_ab_mantissa != 0);

assign c_nan  = (c_exp == 255) && (c_mantissa != 0);
assign c_zero = (c_exp == 0  ) && (c_mantissa == 0);
assign c_inf  = (c_exp == 255) && (c_mantissa == 0);
assign c_dnr  = (c_exp == 0)   && (c_mantissa != 0);

always_ff@(posedge(clk_i)) begin
  case(opcode)
    FADD: begin
      overflow   <= f_ab_inf | (!(f_ab_sign^c_sign) && f_ab_inf && c_inf);
      underflow  <= f_ab_dnr;
      invalid    <= a_nan | b_nan | c_nan | ((f_ab_sign^c_sign) && f_ab_inf && c_inf);
      underflow  <= f_ab_dnr;
      div_zero   <= 0;
      inexact    <= 1;
    end
    FSUB: begin
      overflow   <= f_ab_inf | (!(f_ab_sign^c_sign) && f_ab_inf && c_inf);
      underflow  <= f_ab_dnr;
      invalid    <= a_nan | b_nan | c_nan | ((f_ab_sign^c_sign) && f_ab_inf && c_inf);
      underflow  <= f_ab_dnr;
      div_zero   <= 0;
      inexact    <= 1;
    end
    FMUL: begin
      overflow   <= f_ab_inf;
      underflow  <= f_ab_dnr;
      invalid    <= a_nan | b_nan | c_nan | (a_inf && b_zero) | (a_zero && b_inf);
      div_zero   <= 0;
      inexact    <= 1;
    end
    FDIV: begin
      overflow   <= f_ab_inf;
      underflow  <= f_ab_dnr;
      invalid    <= a_nan | b_nan | c_nan | (a_zero && b_zero) | (a_inf && b_inf);
      div_zero   <= b_zero;
      inexact    <= 1;
    end
    FSQURT: begin
      overflow   <= f_ab_inf;
      underflow  <= f_ab_dnr;
      invalid    <= a_sign | a_nan;
      div_zero   <= 0;
      inexact    <= 1;
    end
    FMADD: begin
      overflow   <= f_ab_inf | (!(f_ab_sign^c_sign) && f_ab_inf && c_inf);
      underflow  <= 0;
      invalid    <= (a_inf && b_zero) | (a_zero && b_inf) | a_nan | b_nan | c_nan;
      div_zero   <= 0;
      inexact    <= 1;
    end
    FMSUB: begin
      overflow   <= f_ab_inf | (!(f_ab_sign^c_sign) && f_ab_inf && c_inf);
      underflow  <= 0;
      invalid    <= (a_inf && b_zero) | (a_zero && b_inf) | a_nan | b_nan | c_nan;
      div_zero   <= 0;
      inexact    <= 1;
    end
    FNMADD: begin
      overflow   <= f_ab_inf | (!(f_ab_sign^c_sign) && f_ab_inf && c_inf);
      underflow  <= 0;
      invalid    <= (a_inf && b_zero) | (a_zero && b_inf) | a_nan | b_nan | c_nan;
      div_zero   <= 0;
      inexact    <= 1;
    end
    FNMSUB: begin
      overflow   <= f_ab_inf | (!(f_ab_sign^c_sign) && f_ab_inf && c_inf);
      underflow  <= 0;
      invalid    <= (a_inf && b_zero) | (a_zero && b_inf) | a_nan | b_nan | c_nan;
      div_zero   <= 0;
      inexact    <= 1;
    end
    default: begin
      overflow   <= 0;
      underflow  <= 0;
      invalid    <= a_nan | b_nan | c_nan;
      div_zero   <= 0;
      inexact    <= 0;
    end
  endcase
end
endmodule
