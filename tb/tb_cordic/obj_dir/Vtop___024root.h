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
    VL_IN8(rst_ni,0,0);
    VL_IN8(mode,0,0);
    VL_IN8(stage,4,0);
    VL_OUT8(mode_out,0,0);
    CData/*0:0*/ __Vtrigrprev__TOP__clk_i;
    CData/*0:0*/ __Vtrigrprev__TOP__rst_ni;
    CData/*0:0*/ __VactContinue;
    VL_IN(x,31,0);
    VL_IN(y,31,0);
    VL_IN(z,31,0);
    VL_OUT(x_out,31,0);
    VL_OUT(y_out,31,0);
    VL_OUT(z_out,31,0);
    IData/*31:0*/ top__DOT__cordic_dut__DOT__atan;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<IData/*31:0*/, 32> top__DOT__cordic_dut__DOT__lut__DOT__beta;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
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
