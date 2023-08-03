// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk_i,0,0);
    CData/*7:0*/ top__DOT__adder__DOT__a_exponent;
    CData/*7:0*/ top__DOT__adder__DOT__b_exponent;
    CData/*7:0*/ top__DOT__adder__DOT__result_exponent;
    CData/*0:0*/ top__DOT__adder__DOT__a_sign;
    CData/*0:0*/ top__DOT__adder__DOT__b_sign;
    CData/*0:0*/ top__DOT__adder__DOT__result_sign;
    CData/*7:0*/ top__DOT__adder__DOT__in_e;
    CData/*7:0*/ top__DOT__adder__DOT__out_e;
    CData/*7:0*/ top__DOT__adder__DOT__diff;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk_i__0;
    CData/*0:0*/ __VactContinue;
    VL_IN(operand_a,31,0);
    VL_IN(operand_b,31,0);
    VL_OUT(result_o,31,0);
    IData/*23:0*/ top__DOT__adder__DOT__a_mantissa;
    IData/*23:0*/ top__DOT__adder__DOT__b_mantissa;
    IData/*24:0*/ top__DOT__adder__DOT__result_mantissa;
    IData/*23:0*/ top__DOT__adder__DOT__tmp_mantissa;
    IData/*24:0*/ top__DOT__adder__DOT__in_m;
    IData/*24:0*/ top__DOT__adder__DOT__out_m;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* v__name);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
