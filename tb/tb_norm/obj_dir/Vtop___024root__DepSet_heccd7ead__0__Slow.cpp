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
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    vlSelf->__Vtrigrprev__TOP__clk_i = vlSelf->clk_i;
}

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial__TOP\n"); );
    // Body
    vlSelf->top__DOT__grs = 0U;
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

VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___stl_sequent__TOP__0\n"); );
    // Body
    vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s1 
        = (IData)((0U != (0x600U & vlSelf->top__DOT__adder__DOT__result_mantissa)));
    vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s0 
        = (IData)((0U != (0x1800U & vlSelf->top__DOT__adder__DOT__result_mantissa)));
    vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s1 
        = (IData)((0U != (6U & vlSelf->top__DOT__adder__DOT__result_mantissa)));
    vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_1__DOT__s1 
        = (IData)((0U != (0x6000U & vlSelf->top__DOT__adder__DOT__result_mantissa)));
    vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s1 
        = (IData)((0U != (0x60000U & vlSelf->top__DOT__adder__DOT__result_mantissa)));
    vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0 
        = (IData)((0U != (0x18U & vlSelf->top__DOT__adder__DOT__result_mantissa)));
    vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_1__DOT__s0 
        = (IData)((0U != (0x18000U & vlSelf->top__DOT__adder__DOT__result_mantissa)));
    vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0 
        = (IData)((0U != (0x180000U & vlSelf->top__DOT__adder__DOT__result_mantissa)));
    vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s1 
        = (IData)((0U != (0x60U & vlSelf->top__DOT__adder__DOT__result_mantissa)));
    vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s1 
        = (IData)((0U != (0x600000U & vlSelf->top__DOT__adder__DOT__result_mantissa)));
    vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0 
        = (IData)((0U != (0x180U & vlSelf->top__DOT__adder__DOT__result_mantissa)));
    vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0 
        = (IData)((0U != (0x1800000U & vlSelf->top__DOT__adder__DOT__result_mantissa)));
    vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__v1 
        = ((IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_1__DOT__s0) 
           | (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_1__DOT__s1));
    vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__v1 
        = ((IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0) 
           | (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s1));
    vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__v1 
        = ((IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0) 
           | (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s1));
    vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__s0 
        = (((IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0) 
            | (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s1)) 
           | (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__v1));
    vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__s0 
        = (((IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0) 
            | (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s1)) 
           | (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__v1));
    vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_0__DOT__s1 
        = (1U & ((~ (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__s0)) 
                 & vlSelf->top__DOT__adder__DOT__result_mantissa));
    vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__s0 
        = ((((IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s0) 
             | (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s1)) 
            | (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__v1)) 
           | (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__s0));
    vlSelf->top__DOT__adder__DOT__norm__DOT__shift 
        = (((IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__s0) 
            << 4U) | ((((IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__s0) 
                        | ((~ (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__s0)) 
                           & (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__s0))) 
                       << 3U) | (((((IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__v1) 
                                    | ((~ (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__s0)) 
                                       & (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__v1))) 
                                   | ((~ (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__s0)) 
                                      & ((IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__v1) 
                                         | (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_0__DOT__s1)))) 
                                  << 2U) | ((((((IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0) 
                                                | ((~ (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__v1)) 
                                                   & (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0))) 
                                               | ((~ (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__s0)) 
                                                  & ((IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_1__DOT__s0) 
                                                     | ((~ (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__v1)) 
                                                        & (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s0))))) 
                                              | ((~ (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__s0)) 
                                                 & (((IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0) 
                                                     | ((~ (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__v1)) 
                                                        & (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0))) 
                                                    | (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_0__DOT__s1)))) 
                                             << 1U) 
                                            | (1U & 
                                               (((((vlSelf->top__DOT__adder__DOT__result_mantissa 
                                                    >> 0x18U) 
                                                   | ((~ (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0)) 
                                                      & (vlSelf->top__DOT__adder__DOT__result_mantissa 
                                                         >> 0x16U))) 
                                                  | ((~ (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__v1)) 
                                                     & ((vlSelf->top__DOT__adder__DOT__result_mantissa 
                                                         >> 0x14U) 
                                                        | ((~ (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0)) 
                                                           & (vlSelf->top__DOT__adder__DOT__result_mantissa 
                                                              >> 0x12U))))) 
                                                 | ((~ (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__s0)) 
                                                    & (((vlSelf->top__DOT__adder__DOT__result_mantissa 
                                                         >> 0x10U) 
                                                        | ((~ (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_1__DOT__s0)) 
                                                           & (vlSelf->top__DOT__adder__DOT__result_mantissa 
                                                              >> 0xeU))) 
                                                       | ((~ (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__v1)) 
                                                          & ((vlSelf->top__DOT__adder__DOT__result_mantissa 
                                                              >> 0xcU) 
                                                             | ((~ (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s0)) 
                                                                & (vlSelf->top__DOT__adder__DOT__result_mantissa 
                                                                   >> 0xaU))))))) 
                                                | ((~ (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__s0)) 
                                                   & ((((vlSelf->top__DOT__adder__DOT__result_mantissa 
                                                         >> 8U) 
                                                        | ((~ (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0)) 
                                                           & (vlSelf->top__DOT__adder__DOT__result_mantissa 
                                                              >> 6U))) 
                                                       | ((~ (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__v1)) 
                                                          & ((vlSelf->top__DOT__adder__DOT__result_mantissa 
                                                              >> 4U) 
                                                             | ((~ (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0)) 
                                                                & (vlSelf->top__DOT__adder__DOT__result_mantissa 
                                                                   >> 2U))))) 
                                                      | (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_0__DOT__s1)))))))));
    vlSelf->top__DOT__grs = (7U & (vlSelf->top__DOT__adder__DOT__result_mantissa 
                                   << (0x1fU & (~ (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__shift)))));
    vlSelf->top__DOT__adder__DOT__postnor_exp = (0xffU 
                                                 & ((IData)(vlSelf->top__DOT__adder__DOT__result_exponent) 
                                                    - 
                                                    (0x1fU 
                                                     & (~ (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__shift)))));
    vlSelf->top__DOT__adder__DOT__postnor_mant = (0x1ffffffU 
                                                  & (vlSelf->top__DOT__adder__DOT__result_mantissa 
                                                     << 
                                                     (0x1fU 
                                                      & (~ (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__shift)))));
    vlSelf->top__DOT__rounder__DOT__sticky = (1U & 
                                              (vlSelf->top__DOT__adder__DOT__result_mantissa 
                                               << (0x1fU 
                                                   & (~ (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__shift)))));
    vlSelf->top__DOT__rounder__DOT____VdfgTmp_h028a8c76__0 
        = (1U & (IData)(((0U != (6U & vlSelf->top__DOT__adder__DOT__postnor_mant)) 
                         | (IData)(vlSelf->top__DOT__rounder__DOT__sticky))));
}

VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        Vtop___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

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
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk_i)\n");
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
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk_i)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk_i = VL_RAND_RESET_I(1);
    vlSelf->operand_a = VL_RAND_RESET_I(32);
    vlSelf->operand_b = VL_RAND_RESET_I(32);
    vlSelf->rmode = VL_RAND_RESET_I(3);
    vlSelf->result_o = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__grs = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__adder__DOT__a_exponent = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__adder__DOT__b_exponent = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__adder__DOT__result_exponent = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__adder__DOT__a_mantissa = VL_RAND_RESET_I(24);
    vlSelf->top__DOT__adder__DOT__b_mantissa = VL_RAND_RESET_I(24);
    vlSelf->top__DOT__adder__DOT__result_mantissa = VL_RAND_RESET_I(25);
    vlSelf->top__DOT__adder__DOT__a_sign = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__adder__DOT__b_sign = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__adder__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__adder__DOT__tmp_mantissa = VL_RAND_RESET_I(24);
    vlSelf->top__DOT__adder__DOT__diff = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__adder__DOT__postnor_exp = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__adder__DOT__postnor_mant = VL_RAND_RESET_I(25);
    vlSelf->top__DOT__adder__DOT__norm__DOT__shift = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_0__DOT__s1 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__v1 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__s0 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s1 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s1 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__s0 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__v1 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s0 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s1 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_1__DOT__s0 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_1__DOT__s1 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__v1 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__s0 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s1 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s1 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__rounder__DOT__mantissa_i = VL_RAND_RESET_I(23);
    vlSelf->top__DOT__rounder__DOT__sticky = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__rounder__DOT____VdfgTmp_h028a8c76__0 = 0;
    vlSelf->__VstlIterCount = 0;
    vlSelf->__Vtrigrprev__TOP__clk_i = VL_RAND_RESET_I(1);
    vlSelf->__VactIterCount = 0;
    vlSelf->__VactContinue = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
