// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___eval_static(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    Vtop___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[0U] = 1U;
    vlSelf->__Vtrigrprev__TOP__clk_i = vlSelf->clk_i;
    vlSelf->__Vtrigrprev__TOP__rst_ni = vlSelf->rst_ni;
}

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial__TOP\n"); );
    // Body
    vlSelf->top__DOT__cordic_dut__DOT__lut__DOT__beta[0U] = 0x3243f6a9U;
    vlSelf->top__DOT__cordic_dut__DOT__lut__DOT__beta[1U] = 0x1dac6705U;
    vlSelf->top__DOT__cordic_dut__DOT__lut__DOT__beta[2U] = 0xfadbafdU;
    vlSelf->top__DOT__cordic_dut__DOT__lut__DOT__beta[3U] = 0x7f56ea7U;
    vlSelf->top__DOT__cordic_dut__DOT__lut__DOT__beta[4U] = 0x3feab77U;
    vlSelf->top__DOT__cordic_dut__DOT__lut__DOT__beta[5U] = 0x1ffd55cU;
    vlSelf->top__DOT__cordic_dut__DOT__lut__DOT__beta[6U] = 0xfffaabU;
    vlSelf->top__DOT__cordic_dut__DOT__lut__DOT__beta[7U] = 0x7fff55U;
    vlSelf->top__DOT__cordic_dut__DOT__lut__DOT__beta[8U] = 0x3fffebU;
    vlSelf->top__DOT__cordic_dut__DOT__lut__DOT__beta[9U] = 0x1ffffdU;
    vlSelf->top__DOT__cordic_dut__DOT__lut__DOT__beta[0xaU] = 0x100000U;
    vlSelf->top__DOT__cordic_dut__DOT__lut__DOT__beta[0xbU] = 0x80000U;
    vlSelf->top__DOT__cordic_dut__DOT__lut__DOT__beta[0xcU] = 0x40000U;
    vlSelf->top__DOT__cordic_dut__DOT__lut__DOT__beta[0xdU] = 0x20000U;
    vlSelf->top__DOT__cordic_dut__DOT__lut__DOT__beta[0xeU] = 0x10000U;
    vlSelf->top__DOT__cordic_dut__DOT__lut__DOT__beta[0xfU] = 0x8000U;
    vlSelf->top__DOT__cordic_dut__DOT__lut__DOT__beta[0x10U] = 0x4000U;
    vlSelf->top__DOT__cordic_dut__DOT__lut__DOT__beta[0x11U] = 0x2000U;
    vlSelf->top__DOT__cordic_dut__DOT__lut__DOT__beta[0x12U] = 0x1000U;
    vlSelf->top__DOT__cordic_dut__DOT__lut__DOT__beta[0x13U] = 0x800U;
    vlSelf->top__DOT__cordic_dut__DOT__lut__DOT__beta[0x14U] = 0x400U;
    vlSelf->top__DOT__cordic_dut__DOT__lut__DOT__beta[0x15U] = 0x200U;
    vlSelf->top__DOT__cordic_dut__DOT__lut__DOT__beta[0x16U] = 0x100U;
    vlSelf->top__DOT__cordic_dut__DOT__lut__DOT__beta[0x17U] = 0x80U;
    vlSelf->top__DOT__cordic_dut__DOT__lut__DOT__beta[0x18U] = 0x40U;
    vlSelf->top__DOT__cordic_dut__DOT__lut__DOT__beta[0x19U] = 0x20U;
    vlSelf->top__DOT__cordic_dut__DOT__lut__DOT__beta[0x1aU] = 0x10U;
    vlSelf->top__DOT__cordic_dut__DOT__lut__DOT__beta[0x1bU] = 8U;
    vlSelf->top__DOT__cordic_dut__DOT__lut__DOT__beta[0x1cU] = 4U;
    vlSelf->top__DOT__cordic_dut__DOT__lut__DOT__beta[0x1dU] = 2U;
    vlSelf->top__DOT__cordic_dut__DOT__lut__DOT__beta[0x1eU] = 1U;
    vlSelf->top__DOT__cordic_dut__DOT__lut__DOT__beta[0x1fU] = 0U;
}

VL_ATTR_COLD void Vtop___024root___eval_final(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vtop___024root___eval_triggers__stl(Vtop___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Vtop___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("top.sv", 4, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Vtop___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VstlTriggered.at(0U)) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        Vtop___024root___ico_sequent__TOP__0(vlSelf);
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VicoTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VicoTriggered.at(0U)) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VactTriggered.at(0U)) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk_i or negedge rst_ni)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk_i or negedge rst_ni)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk_i = VL_RAND_RESET_I(1);
    vlSelf->mode = VL_RAND_RESET_I(1);
    vlSelf->rst_ni = VL_RAND_RESET_I(1);
    vlSelf->stage = VL_RAND_RESET_I(5);
    vlSelf->x = VL_RAND_RESET_I(32);
    vlSelf->y = VL_RAND_RESET_I(32);
    vlSelf->z = VL_RAND_RESET_I(32);
    vlSelf->x_out = VL_RAND_RESET_I(32);
    vlSelf->y_out = VL_RAND_RESET_I(32);
    vlSelf->z_out = VL_RAND_RESET_I(32);
    vlSelf->mode_out = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cordic_dut__DOT__atan = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->top__DOT__cordic_dut__DOT__lut__DOT__beta[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->__VstlIterCount = 0;
    vlSelf->__VicoIterCount = 0;
    vlSelf->__Vtrigrprev__TOP__clk_i = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigrprev__TOP__rst_ni = VL_RAND_RESET_I(1);
    vlSelf->__VactIterCount = 0;
    vlSelf->__VactContinue = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
