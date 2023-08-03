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
    CData/*0:0*/ top__DOT__divider__DOT__a_sign;
    CData/*0:0*/ top__DOT__divider__DOT__b_sign;
    CData/*7:0*/ top__DOT__divider__DOT__a_exponent;
    CData/*7:0*/ top__DOT__divider__DOT__b_exponent;
    CData/*0:0*/ __Vtrigrprev__TOP__clk_i;
    CData/*0:0*/ __VactContinue;
    VL_IN(operand_a,31,0);
    VL_IN(operand_b,31,0);
    VL_OUT(div_result,31,0);
    IData/*23:0*/ top__DOT__divider__DOT__a_mantissa;
    IData/*23:0*/ top__DOT__divider__DOT__b_mantissa;
    IData/*23:0*/ top__DOT__divider__DOT__quotein;
    IData/*23:0*/ top__DOT__divider__DOT__remainder;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
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
