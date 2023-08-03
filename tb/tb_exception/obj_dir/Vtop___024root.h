// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"

class Vtop__Syms;

class Vtop___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk_i,0,0);
    VL_IN8(opcode,4,0);
    VL_OUT8(overflow,0,0);
    VL_OUT8(underflow,0,0);
    VL_OUT8(invalid,0,0);
    VL_OUT8(div_zero,0,0);
    VL_OUT8(inexact,0,0);
    CData/*0:0*/ top__DOT__exception_dut__DOT__a_nan;
    CData/*0:0*/ top__DOT__exception_dut__DOT__a_zero;
    CData/*0:0*/ top__DOT__exception_dut__DOT__a_inf;
    CData/*0:0*/ top__DOT__exception_dut__DOT__b_nan;
    CData/*0:0*/ top__DOT__exception_dut__DOT__b_zero;
    CData/*0:0*/ top__DOT__exception_dut__DOT__b_inf;
    CData/*0:0*/ top__DOT__exception_dut__DOT__f_ab_inf;
    CData/*0:0*/ top__DOT__exception_dut__DOT__f_ab_dnr;
    CData/*0:0*/ top__DOT__exception_dut__DOT__c_nan;
    CData/*0:0*/ top__DOT__exception_dut__DOT__c_inf;
    CData/*0:0*/ __Vtrigrprev__TOP__clk_i;
    CData/*0:0*/ __VactContinue;
    VL_IN(fp_operand_a,31,0);
    VL_IN(fp_operand_b,31,0);
    VL_IN(fp_operand_c,31,0);
    VL_IN(fp_f_ab,31,0);
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* name);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
