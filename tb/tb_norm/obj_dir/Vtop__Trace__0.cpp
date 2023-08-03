// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp);

void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtop___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+0,((((IData)(vlSelf->top__DOT__adder__DOT__result_sign) 
                                 << 0x1fU) | (((IData)(vlSelf->top__DOT__adder__DOT__postnor_exp) 
                                               << 0x17U) 
                                              | (0x7fffffU 
                                                 & (vlSelf->top__DOT__adder__DOT__postnor_mant 
                                                    >> 2U))))),32);
        bufp->chgCData(oldp+1,(vlSelf->top__DOT__grs),3);
        bufp->chgCData(oldp+2,(vlSelf->top__DOT__adder__DOT__a_exponent),8);
        bufp->chgCData(oldp+3,(vlSelf->top__DOT__adder__DOT__b_exponent),8);
        bufp->chgCData(oldp+4,(vlSelf->top__DOT__adder__DOT__result_exponent),8);
        bufp->chgIData(oldp+5,(vlSelf->top__DOT__adder__DOT__a_mantissa),24);
        bufp->chgIData(oldp+6,(vlSelf->top__DOT__adder__DOT__b_mantissa),24);
        bufp->chgIData(oldp+7,(vlSelf->top__DOT__adder__DOT__result_mantissa),25);
        bufp->chgBit(oldp+8,(vlSelf->top__DOT__adder__DOT__a_sign));
        bufp->chgBit(oldp+9,(vlSelf->top__DOT__adder__DOT__b_sign));
        bufp->chgBit(oldp+10,(vlSelf->top__DOT__adder__DOT__result_sign));
        bufp->chgIData(oldp+11,(vlSelf->top__DOT__adder__DOT__tmp_mantissa),24);
        bufp->chgCData(oldp+12,(vlSelf->top__DOT__adder__DOT__diff),8);
        bufp->chgCData(oldp+13,(vlSelf->top__DOT__adder__DOT__postnor_exp),8);
        bufp->chgIData(oldp+14,(vlSelf->top__DOT__adder__DOT__postnor_mant),25);
        bufp->chgIData(oldp+15,((vlSelf->top__DOT__adder__DOT__result_mantissa 
                                 << 7U)),32);
        bufp->chgCData(oldp+16,(vlSelf->top__DOT__adder__DOT__norm__DOT__shift),5);
        bufp->chgCData(oldp+17,((0x1fU & (~ (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__shift)))),8);
        bufp->chgBit(oldp+18,((1U & ((vlSelf->top__DOT__adder__DOT__result_mantissa 
                                      | (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__s0)) 
                                     | (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__s0)))));
        bufp->chgCData(oldp+19,((((IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__s0) 
                                  << 3U) | ((((IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__v1) 
                                              | (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_0__DOT__s1)) 
                                             << 2U) 
                                            | (((((IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0) 
                                                  | ((~ (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__v1)) 
                                                     & (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0))) 
                                                 | (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_0__DOT__s1)) 
                                                << 1U) 
                                               | (1U 
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
                                                     | (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_0__DOT__s1))))))),4);
        bufp->chgCData(oldp+20,((((IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__s0) 
                                  << 3U) | ((((IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__v1) 
                                              | ((~ (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__s0)) 
                                                 & (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__v1))) 
                                             << 2U) 
                                            | (((((IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0) 
                                                  | ((~ (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__v1)) 
                                                     & (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0))) 
                                                 | ((~ (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__s0)) 
                                                    & ((IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_1__DOT__s0) 
                                                       | ((~ (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__v1)) 
                                                          & (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s0))))) 
                                                << 1U) 
                                               | (1U 
                                                  & ((((vlSelf->top__DOT__adder__DOT__result_mantissa 
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
                                                                       >> 0xaU)))))))))))),4);
        bufp->chgBit(oldp+21,((1U & (vlSelf->top__DOT__adder__DOT__result_mantissa 
                                     | (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__s0)))));
        bufp->chgBit(oldp+22,(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__s0));
        bufp->chgBit(oldp+23,((1U & ((~ (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__s0)) 
                                     & ((((vlSelf->top__DOT__adder__DOT__result_mantissa 
                                           >> 8U) | 
                                          ((~ (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0)) 
                                           & (vlSelf->top__DOT__adder__DOT__result_mantissa 
                                              >> 6U))) 
                                         | ((~ (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__v1)) 
                                            & ((vlSelf->top__DOT__adder__DOT__result_mantissa 
                                                >> 4U) 
                                               | ((~ (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0)) 
                                                  & (vlSelf->top__DOT__adder__DOT__result_mantissa 
                                                     >> 2U))))) 
                                        | (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_0__DOT__s1))))));
        bufp->chgBit(oldp+24,((1U & (((((vlSelf->top__DOT__adder__DOT__result_mantissa 
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
                                           | (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_0__DOT__s1)))))));
        bufp->chgBit(oldp+25,(((~ (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__s0)) 
                               & (((IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0) 
                                   | ((~ (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__v1)) 
                                      & (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0))) 
                                  | (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_0__DOT__s1)))));
        bufp->chgBit(oldp+26,(((((IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0) 
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
                                     | (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_0__DOT__s1))))));
        bufp->chgBit(oldp+27,(((~ (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__s0)) 
                               & ((IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__v1) 
                                  | (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_0__DOT__s1)))));
        bufp->chgBit(oldp+28,((((IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__v1) 
                                | ((~ (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__s0)) 
                                   & (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__v1))) 
                               | ((~ (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__s0)) 
                                  & ((IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__v1) 
                                     | (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_0__DOT__s1))))));
        bufp->chgBit(oldp+29,(((~ (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__s0)) 
                               & (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__s0))));
        bufp->chgBit(oldp+30,(((IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__s0) 
                               | ((~ (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__s0)) 
                                  & (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__s0)))));
        bufp->chgSData(oldp+31,((0xff80U & (vlSelf->top__DOT__adder__DOT__result_mantissa 
                                            << 7U))),16);
        bufp->chgCData(oldp+32,(((4U & (vlSelf->top__DOT__adder__DOT__result_mantissa 
                                        << 2U)) | (3U 
                                                   & (- (IData)(
                                                                (1U 
                                                                 & vlSelf->top__DOT__adder__DOT__result_mantissa)))))),3);
        bufp->chgCData(oldp+33,((((IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__v1) 
                                  << 2U) | ((((IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0) 
                                              | ((~ (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__v1)) 
                                                 & (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0))) 
                                             << 1U) 
                                            | (1U & 
                                               (((vlSelf->top__DOT__adder__DOT__result_mantissa 
                                                  >> 8U) 
                                                 | ((~ (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0)) 
                                                    & (vlSelf->top__DOT__adder__DOT__result_mantissa 
                                                       >> 6U))) 
                                                | ((~ (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__v1)) 
                                                   & ((vlSelf->top__DOT__adder__DOT__result_mantissa 
                                                       >> 4U) 
                                                      | ((~ (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0)) 
                                                         & (vlSelf->top__DOT__adder__DOT__result_mantissa 
                                                            >> 2U))))))))),3);
        bufp->chgBit(oldp+34,((1U & vlSelf->top__DOT__adder__DOT__result_mantissa)));
        bufp->chgBit(oldp+35,(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__s0));
        bufp->chgBit(oldp+36,(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_0__DOT__s1));
        bufp->chgBit(oldp+37,((1U & ((((vlSelf->top__DOT__adder__DOT__result_mantissa 
                                        >> 8U) | ((~ (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0)) 
                                                  & (vlSelf->top__DOT__adder__DOT__result_mantissa 
                                                     >> 6U))) 
                                      | ((~ (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__v1)) 
                                         & ((vlSelf->top__DOT__adder__DOT__result_mantissa 
                                             >> 4U) 
                                            | ((~ (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0)) 
                                               & (vlSelf->top__DOT__adder__DOT__result_mantissa 
                                                  >> 2U))))) 
                                     | (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_0__DOT__s1)))));
        bufp->chgBit(oldp+38,((((IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0) 
                                | ((~ (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__v1)) 
                                   & (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0))) 
                               | (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_0__DOT__s1))));
        bufp->chgBit(oldp+39,(((IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__v1) 
                               | (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_0__DOT__s1))));
        bufp->chgCData(oldp+40,((0x80U & (vlSelf->top__DOT__adder__DOT__result_mantissa 
                                          << 7U))),8);
        bufp->chgCData(oldp+41,((3U & (- (IData)((1U 
                                                  & vlSelf->top__DOT__adder__DOT__result_mantissa))))),2);
        bufp->chgCData(oldp+42,((8U & (vlSelf->top__DOT__adder__DOT__result_mantissa 
                                       << 3U))),4);
        bufp->chgCData(oldp+43,((0xffU & (vlSelf->top__DOT__adder__DOT__result_mantissa 
                                          >> 1U))),8);
        bufp->chgCData(oldp+44,((((IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0) 
                                  << 1U) | (1U & ((vlSelf->top__DOT__adder__DOT__result_mantissa 
                                                   >> 4U) 
                                                  | ((~ (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0)) 
                                                     & (vlSelf->top__DOT__adder__DOT__result_mantissa 
                                                        >> 2U)))))),2);
        bufp->chgCData(oldp+45,((((IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0) 
                                  << 1U) | (1U & ((vlSelf->top__DOT__adder__DOT__result_mantissa 
                                                   >> 8U) 
                                                  | ((~ (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0)) 
                                                     & (vlSelf->top__DOT__adder__DOT__result_mantissa 
                                                        >> 6U)))))),2);
        bufp->chgBit(oldp+46,(((IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0) 
                               | (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s1))));
        bufp->chgBit(oldp+47,(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__v1));
        bufp->chgBit(oldp+48,((1U & ((~ (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__v1)) 
                                     & ((vlSelf->top__DOT__adder__DOT__result_mantissa 
                                         >> 4U) | (
                                                   (~ (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0)) 
                                                   & (vlSelf->top__DOT__adder__DOT__result_mantissa 
                                                      >> 2U)))))));
        bufp->chgBit(oldp+49,((1U & (((vlSelf->top__DOT__adder__DOT__result_mantissa 
                                       >> 8U) | ((~ (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0)) 
                                                 & (vlSelf->top__DOT__adder__DOT__result_mantissa 
                                                    >> 6U))) 
                                     | ((~ (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__v1)) 
                                        & ((vlSelf->top__DOT__adder__DOT__result_mantissa 
                                            >> 4U) 
                                           | ((~ (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0)) 
                                              & (vlSelf->top__DOT__adder__DOT__result_mantissa 
                                                 >> 2U))))))));
        bufp->chgBit(oldp+50,(((~ (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__v1)) 
                               & (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0))));
        bufp->chgBit(oldp+51,(((IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0) 
                               | ((~ (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__v1)) 
                                  & (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0)))));
        bufp->chgCData(oldp+52,((0xfU & (vlSelf->top__DOT__adder__DOT__result_mantissa 
                                         >> 1U))),4);
        bufp->chgBit(oldp+53,((1U & (vlSelf->top__DOT__adder__DOT__result_mantissa 
                                     >> 1U))));
        bufp->chgBit(oldp+54,((1U & (vlSelf->top__DOT__adder__DOT__result_mantissa 
                                     >> 2U))));
        bufp->chgBit(oldp+55,((1U & (vlSelf->top__DOT__adder__DOT__result_mantissa 
                                     >> 3U))));
        bufp->chgBit(oldp+56,((1U & (vlSelf->top__DOT__adder__DOT__result_mantissa 
                                     >> 4U))));
        bufp->chgBit(oldp+57,(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0));
        bufp->chgBit(oldp+58,(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s1));
        bufp->chgBit(oldp+59,(((IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s1) 
                               | (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0))));
        bufp->chgBit(oldp+60,((1U & ((~ (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0)) 
                                     & (vlSelf->top__DOT__adder__DOT__result_mantissa 
                                        >> 2U)))));
        bufp->chgBit(oldp+61,((1U & ((vlSelf->top__DOT__adder__DOT__result_mantissa 
                                      >> 4U) | ((~ (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0)) 
                                                & (vlSelf->top__DOT__adder__DOT__result_mantissa 
                                                   >> 2U))))));
        bufp->chgCData(oldp+62,((0xfU & (vlSelf->top__DOT__adder__DOT__result_mantissa 
                                         >> 5U))),4);
        bufp->chgBit(oldp+63,((1U & (vlSelf->top__DOT__adder__DOT__result_mantissa 
                                     >> 5U))));
        bufp->chgBit(oldp+64,((1U & (vlSelf->top__DOT__adder__DOT__result_mantissa 
                                     >> 6U))));
        bufp->chgBit(oldp+65,((1U & (vlSelf->top__DOT__adder__DOT__result_mantissa 
                                     >> 7U))));
        bufp->chgBit(oldp+66,((1U & (vlSelf->top__DOT__adder__DOT__result_mantissa 
                                     >> 8U))));
        bufp->chgBit(oldp+67,(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0));
        bufp->chgBit(oldp+68,(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s1));
        bufp->chgBit(oldp+69,(((IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s1) 
                               | (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0))));
        bufp->chgBit(oldp+70,((1U & ((~ (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0)) 
                                     & (vlSelf->top__DOT__adder__DOT__result_mantissa 
                                        >> 6U)))));
        bufp->chgBit(oldp+71,((1U & ((vlSelf->top__DOT__adder__DOT__result_mantissa 
                                      >> 8U) | ((~ (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0)) 
                                                & (vlSelf->top__DOT__adder__DOT__result_mantissa 
                                                   >> 6U))))));
        bufp->chgSData(oldp+72,((0xffffU & (vlSelf->top__DOT__adder__DOT__result_mantissa 
                                            >> 9U))),16);
        bufp->chgCData(oldp+73,((((IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__v1) 
                                  << 2U) | ((((IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_1__DOT__s0) 
                                              | ((~ (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__v1)) 
                                                 & (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s0))) 
                                             << 1U) 
                                            | (1U & 
                                               (((vlSelf->top__DOT__adder__DOT__result_mantissa 
                                                  >> 0x10U) 
                                                 | ((~ (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_1__DOT__s0)) 
                                                    & (vlSelf->top__DOT__adder__DOT__result_mantissa 
                                                       >> 0xeU))) 
                                                | ((~ (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__v1)) 
                                                   & ((vlSelf->top__DOT__adder__DOT__result_mantissa 
                                                       >> 0xcU) 
                                                      | ((~ (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s0)) 
                                                         & (vlSelf->top__DOT__adder__DOT__result_mantissa 
                                                            >> 0xaU))))))))),3);
        bufp->chgCData(oldp+74,((((IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__v1) 
                                  << 2U) | ((((IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0) 
                                              | ((~ (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__v1)) 
                                                 & (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0))) 
                                             << 1U) 
                                            | (1U & 
                                               (((vlSelf->top__DOT__adder__DOT__result_mantissa 
                                                  >> 0x18U) 
                                                 | ((~ (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0)) 
                                                    & (vlSelf->top__DOT__adder__DOT__result_mantissa 
                                                       >> 0x16U))) 
                                                | ((~ (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__v1)) 
                                                   & ((vlSelf->top__DOT__adder__DOT__result_mantissa 
                                                       >> 0x14U) 
                                                      | ((~ (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0)) 
                                                         & (vlSelf->top__DOT__adder__DOT__result_mantissa 
                                                            >> 0x12U))))))))),3);
        bufp->chgBit(oldp+75,((((IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s0) 
                                | (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s1)) 
                               | (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__v1))));
        bufp->chgBit(oldp+76,(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__s0));
        bufp->chgBit(oldp+77,((1U & ((~ (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__s0)) 
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
                                                    >> 0xaU)))))))));
        bufp->chgBit(oldp+78,((1U & ((((vlSelf->top__DOT__adder__DOT__result_mantissa 
                                        >> 0x18U) | 
                                       ((~ (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0)) 
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
                                                       >> 0xaU))))))))));
        bufp->chgBit(oldp+79,(((~ (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__s0)) 
                               & ((IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_1__DOT__s0) 
                                  | ((~ (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__v1)) 
                                     & (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s0))))));
        bufp->chgBit(oldp+80,((((IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0) 
                                | ((~ (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__v1)) 
                                   & (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0))) 
                               | ((~ (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__s0)) 
                                  & ((IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_1__DOT__s0) 
                                     | ((~ (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__v1)) 
                                        & (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s0)))))));
        bufp->chgBit(oldp+81,(((~ (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__s0)) 
                               & (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__v1))));
        bufp->chgBit(oldp+82,(((IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__v1) 
                               | ((~ (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__s0)) 
                                  & (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__v1)))));
        bufp->chgCData(oldp+83,((0xffU & (vlSelf->top__DOT__adder__DOT__result_mantissa 
                                          >> 9U))),8);
        bufp->chgCData(oldp+84,((((IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s0) 
                                  << 1U) | (1U & ((vlSelf->top__DOT__adder__DOT__result_mantissa 
                                                   >> 0xcU) 
                                                  | ((~ (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s0)) 
                                                     & (vlSelf->top__DOT__adder__DOT__result_mantissa 
                                                        >> 0xaU)))))),2);
        bufp->chgCData(oldp+85,((((IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_1__DOT__s0) 
                                  << 1U) | (1U & ((vlSelf->top__DOT__adder__DOT__result_mantissa 
                                                   >> 0x10U) 
                                                  | ((~ (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_1__DOT__s0)) 
                                                     & (vlSelf->top__DOT__adder__DOT__result_mantissa 
                                                        >> 0xeU)))))),2);
        bufp->chgBit(oldp+86,(((IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s0) 
                               | (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s1))));
        bufp->chgBit(oldp+87,(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__v1));
        bufp->chgBit(oldp+88,((1U & ((~ (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__v1)) 
                                     & ((vlSelf->top__DOT__adder__DOT__result_mantissa 
                                         >> 0xcU) | 
                                        ((~ (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s0)) 
                                         & (vlSelf->top__DOT__adder__DOT__result_mantissa 
                                            >> 0xaU)))))));
        bufp->chgBit(oldp+89,((1U & (((vlSelf->top__DOT__adder__DOT__result_mantissa 
                                       >> 0x10U) | 
                                      ((~ (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_1__DOT__s0)) 
                                       & (vlSelf->top__DOT__adder__DOT__result_mantissa 
                                          >> 0xeU))) 
                                     | ((~ (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__v1)) 
                                        & ((vlSelf->top__DOT__adder__DOT__result_mantissa 
                                            >> 0xcU) 
                                           | ((~ (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s0)) 
                                              & (vlSelf->top__DOT__adder__DOT__result_mantissa 
                                                 >> 0xaU))))))));
        bufp->chgBit(oldp+90,(((~ (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__v1)) 
                               & (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s0))));
        bufp->chgBit(oldp+91,(((IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_1__DOT__s0) 
                               | ((~ (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__v1)) 
                                  & (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s0)))));
        bufp->chgCData(oldp+92,((0xfU & (vlSelf->top__DOT__adder__DOT__result_mantissa 
                                         >> 9U))),4);
        bufp->chgBit(oldp+93,((1U & (vlSelf->top__DOT__adder__DOT__result_mantissa 
                                     >> 9U))));
        bufp->chgBit(oldp+94,((1U & (vlSelf->top__DOT__adder__DOT__result_mantissa 
                                     >> 0xaU))));
        bufp->chgBit(oldp+95,((1U & (vlSelf->top__DOT__adder__DOT__result_mantissa 
                                     >> 0xbU))));
        bufp->chgBit(oldp+96,((1U & (vlSelf->top__DOT__adder__DOT__result_mantissa 
                                     >> 0xcU))));
        bufp->chgBit(oldp+97,(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s0));
        bufp->chgBit(oldp+98,(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s1));
        bufp->chgBit(oldp+99,(((IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s1) 
                               | (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s0))));
        bufp->chgBit(oldp+100,((1U & ((~ (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s0)) 
                                      & (vlSelf->top__DOT__adder__DOT__result_mantissa 
                                         >> 0xaU)))));
        bufp->chgBit(oldp+101,((1U & ((vlSelf->top__DOT__adder__DOT__result_mantissa 
                                       >> 0xcU) | (
                                                   (~ (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s0)) 
                                                   & (vlSelf->top__DOT__adder__DOT__result_mantissa 
                                                      >> 0xaU))))));
        bufp->chgCData(oldp+102,((0xfU & (vlSelf->top__DOT__adder__DOT__result_mantissa 
                                          >> 0xdU))),4);
        bufp->chgBit(oldp+103,((1U & (vlSelf->top__DOT__adder__DOT__result_mantissa 
                                      >> 0xdU))));
        bufp->chgBit(oldp+104,((1U & (vlSelf->top__DOT__adder__DOT__result_mantissa 
                                      >> 0xeU))));
        bufp->chgBit(oldp+105,((1U & (vlSelf->top__DOT__adder__DOT__result_mantissa 
                                      >> 0xfU))));
        bufp->chgBit(oldp+106,((1U & (vlSelf->top__DOT__adder__DOT__result_mantissa 
                                      >> 0x10U))));
        bufp->chgBit(oldp+107,(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_1__DOT__s0));
        bufp->chgBit(oldp+108,(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_1__DOT__s1));
        bufp->chgBit(oldp+109,(((IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_1__DOT__s1) 
                                | (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_1__DOT__s0))));
        bufp->chgBit(oldp+110,((1U & ((~ (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_1__DOT__s0)) 
                                      & (vlSelf->top__DOT__adder__DOT__result_mantissa 
                                         >> 0xeU)))));
        bufp->chgBit(oldp+111,((1U & ((vlSelf->top__DOT__adder__DOT__result_mantissa 
                                       >> 0x10U) | 
                                      ((~ (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_1__DOT__s0)) 
                                       & (vlSelf->top__DOT__adder__DOT__result_mantissa 
                                          >> 0xeU))))));
        bufp->chgCData(oldp+112,((0xffU & (vlSelf->top__DOT__adder__DOT__result_mantissa 
                                           >> 0x11U))),8);
        bufp->chgCData(oldp+113,((((IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0) 
                                   << 1U) | (1U & (
                                                   (vlSelf->top__DOT__adder__DOT__result_mantissa 
                                                    >> 0x14U) 
                                                   | ((~ (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0)) 
                                                      & (vlSelf->top__DOT__adder__DOT__result_mantissa 
                                                         >> 0x12U)))))),2);
        bufp->chgCData(oldp+114,((((IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0) 
                                   << 1U) | (1U & (
                                                   (vlSelf->top__DOT__adder__DOT__result_mantissa 
                                                    >> 0x18U) 
                                                   | ((~ (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0)) 
                                                      & (vlSelf->top__DOT__adder__DOT__result_mantissa 
                                                         >> 0x16U)))))),2);
        bufp->chgBit(oldp+115,(((IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0) 
                                | (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s1))));
        bufp->chgBit(oldp+116,(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__v1));
        bufp->chgBit(oldp+117,((1U & ((~ (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__v1)) 
                                      & ((vlSelf->top__DOT__adder__DOT__result_mantissa 
                                          >> 0x14U) 
                                         | ((~ (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0)) 
                                            & (vlSelf->top__DOT__adder__DOT__result_mantissa 
                                               >> 0x12U)))))));
        bufp->chgBit(oldp+118,((1U & (((vlSelf->top__DOT__adder__DOT__result_mantissa 
                                        >> 0x18U) | 
                                       ((~ (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0)) 
                                        & (vlSelf->top__DOT__adder__DOT__result_mantissa 
                                           >> 0x16U))) 
                                      | ((~ (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__v1)) 
                                         & ((vlSelf->top__DOT__adder__DOT__result_mantissa 
                                             >> 0x14U) 
                                            | ((~ (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0)) 
                                               & (vlSelf->top__DOT__adder__DOT__result_mantissa 
                                                  >> 0x12U))))))));
        bufp->chgBit(oldp+119,(((~ (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__v1)) 
                                & (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0))));
        bufp->chgBit(oldp+120,(((IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0) 
                                | ((~ (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__v1)) 
                                   & (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0)))));
        bufp->chgCData(oldp+121,((0xfU & (vlSelf->top__DOT__adder__DOT__result_mantissa 
                                          >> 0x11U))),4);
        bufp->chgBit(oldp+122,((1U & (vlSelf->top__DOT__adder__DOT__result_mantissa 
                                      >> 0x11U))));
        bufp->chgBit(oldp+123,((1U & (vlSelf->top__DOT__adder__DOT__result_mantissa 
                                      >> 0x12U))));
        bufp->chgBit(oldp+124,((1U & (vlSelf->top__DOT__adder__DOT__result_mantissa 
                                      >> 0x13U))));
        bufp->chgBit(oldp+125,((1U & (vlSelf->top__DOT__adder__DOT__result_mantissa 
                                      >> 0x14U))));
        bufp->chgBit(oldp+126,(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0));
        bufp->chgBit(oldp+127,(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s1));
        bufp->chgBit(oldp+128,(((IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s1) 
                                | (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0))));
        bufp->chgBit(oldp+129,((1U & ((~ (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0)) 
                                      & (vlSelf->top__DOT__adder__DOT__result_mantissa 
                                         >> 0x12U)))));
        bufp->chgBit(oldp+130,((1U & ((vlSelf->top__DOT__adder__DOT__result_mantissa 
                                       >> 0x14U) | 
                                      ((~ (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0)) 
                                       & (vlSelf->top__DOT__adder__DOT__result_mantissa 
                                          >> 0x12U))))));
        bufp->chgCData(oldp+131,((0xfU & (vlSelf->top__DOT__adder__DOT__result_mantissa 
                                          >> 0x15U))),4);
        bufp->chgBit(oldp+132,((1U & (vlSelf->top__DOT__adder__DOT__result_mantissa 
                                      >> 0x15U))));
        bufp->chgBit(oldp+133,((1U & (vlSelf->top__DOT__adder__DOT__result_mantissa 
                                      >> 0x16U))));
        bufp->chgBit(oldp+134,((1U & (vlSelf->top__DOT__adder__DOT__result_mantissa 
                                      >> 0x17U))));
        bufp->chgBit(oldp+135,((1U & (vlSelf->top__DOT__adder__DOT__result_mantissa 
                                      >> 0x18U))));
        bufp->chgBit(oldp+136,(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0));
        bufp->chgBit(oldp+137,(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s1));
        bufp->chgBit(oldp+138,(((IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s1) 
                                | (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0))));
        bufp->chgBit(oldp+139,((1U & ((~ (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0)) 
                                      & (vlSelf->top__DOT__adder__DOT__result_mantissa 
                                         >> 0x16U)))));
        bufp->chgBit(oldp+140,((1U & ((vlSelf->top__DOT__adder__DOT__result_mantissa 
                                       >> 0x18U) | 
                                      ((~ (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0)) 
                                       & (vlSelf->top__DOT__adder__DOT__result_mantissa 
                                          >> 0x16U))))));
        bufp->chgIData(oldp+141,((0x7fffffU & (vlSelf->top__DOT__adder__DOT__postnor_mant 
                                               >> 2U))),23);
        bufp->chgBit(oldp+142,((1U & (vlSelf->top__DOT__adder__DOT__postnor_mant 
                                      >> 2U))));
        bufp->chgBit(oldp+143,((1U & (vlSelf->top__DOT__adder__DOT__postnor_mant 
                                      >> 1U))));
        bufp->chgBit(oldp+144,(vlSelf->top__DOT__rounder__DOT__sticky));
    }
    bufp->chgBit(oldp+145,(vlSelf->clk_i));
    bufp->chgIData(oldp+146,(vlSelf->operand_a),32);
    bufp->chgIData(oldp+147,(vlSelf->operand_b),32);
    bufp->chgCData(oldp+148,(vlSelf->rmode),3);
    bufp->chgIData(oldp+149,(vlSelf->result_o),32);
    bufp->chgIData(oldp+150,((0x7fffffU & ((4U & (IData)(vlSelf->rmode))
                                            ? ((2U 
                                                & (IData)(vlSelf->rmode))
                                                ? (vlSelf->top__DOT__adder__DOT__postnor_mant 
                                                   >> 2U)
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelf->rmode))
                                                    ? 
                                                   (vlSelf->top__DOT__adder__DOT__postnor_mant 
                                                    >> 2U)
                                                    : 
                                                   ((IData)(1U) 
                                                    + 
                                                    (vlSelf->top__DOT__adder__DOT__postnor_mant 
                                                     >> 2U))))
                                            : ((2U 
                                                & (IData)(vlSelf->rmode))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelf->rmode))
                                                    ? 
                                                   ((vlSelf->top__DOT__adder__DOT__postnor_mant 
                                                     >> 2U) 
                                                    + 
                                                    ((~ (IData)(vlSelf->top__DOT__adder__DOT__result_sign)) 
                                                     & (IData)(vlSelf->top__DOT__rounder__DOT____VdfgTmp_h028a8c76__0)))
                                                    : 
                                                   ((vlSelf->top__DOT__adder__DOT__postnor_mant 
                                                     >> 2U) 
                                                    + 
                                                    ((IData)(vlSelf->top__DOT__adder__DOT__result_sign) 
                                                     & (IData)(vlSelf->top__DOT__rounder__DOT____VdfgTmp_h028a8c76__0))))
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelf->rmode))
                                                    ? 
                                                   (vlSelf->top__DOT__adder__DOT__postnor_mant 
                                                    >> 2U)
                                                    : 
                                                   ((1U 
                                                     & ((vlSelf->top__DOT__adder__DOT__postnor_mant 
                                                         >> 2U) 
                                                        & (IData)(
                                                                  ((0U 
                                                                    != 
                                                                    (6U 
                                                                     & vlSelf->top__DOT__adder__DOT__postnor_mant)) 
                                                                   | (IData)(vlSelf->top__DOT__rounder__DOT__sticky)))))
                                                     ? 
                                                    ((IData)(1U) 
                                                     + 
                                                     (vlSelf->top__DOT__adder__DOT__postnor_mant 
                                                      >> 2U))
                                                     : 
                                                    (vlSelf->top__DOT__adder__DOT__postnor_mant 
                                                     >> 2U))))))),23);
    bufp->chgIData(oldp+151,((((IData)(vlSelf->top__DOT__adder__DOT__result_sign) 
                               << 0x1fU) | (((IData)(vlSelf->top__DOT__adder__DOT__postnor_exp) 
                                             << 0x17U) 
                                            | (0x7fffffU 
                                               & ((4U 
                                                   & (IData)(vlSelf->rmode))
                                                   ? 
                                                  ((2U 
                                                    & (IData)(vlSelf->rmode))
                                                    ? 
                                                   (vlSelf->top__DOT__adder__DOT__postnor_mant 
                                                    >> 2U)
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->rmode))
                                                     ? 
                                                    (vlSelf->top__DOT__adder__DOT__postnor_mant 
                                                     >> 2U)
                                                     : 
                                                    ((IData)(1U) 
                                                     + 
                                                     (vlSelf->top__DOT__adder__DOT__postnor_mant 
                                                      >> 2U))))
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSelf->rmode))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->rmode))
                                                     ? 
                                                    ((vlSelf->top__DOT__adder__DOT__postnor_mant 
                                                      >> 2U) 
                                                     + 
                                                     ((~ (IData)(vlSelf->top__DOT__adder__DOT__result_sign)) 
                                                      & (IData)(vlSelf->top__DOT__rounder__DOT____VdfgTmp_h028a8c76__0)))
                                                     : 
                                                    ((vlSelf->top__DOT__adder__DOT__postnor_mant 
                                                      >> 2U) 
                                                     + 
                                                     ((IData)(vlSelf->top__DOT__adder__DOT__result_sign) 
                                                      & (IData)(vlSelf->top__DOT__rounder__DOT____VdfgTmp_h028a8c76__0))))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->rmode))
                                                     ? 
                                                    (vlSelf->top__DOT__adder__DOT__postnor_mant 
                                                     >> 2U)
                                                     : 
                                                    ((1U 
                                                      & ((vlSelf->top__DOT__adder__DOT__postnor_mant 
                                                          >> 2U) 
                                                         & (IData)(
                                                                   ((0U 
                                                                     != 
                                                                     (6U 
                                                                      & vlSelf->top__DOT__adder__DOT__postnor_mant)) 
                                                                    | (IData)(vlSelf->top__DOT__rounder__DOT__sticky)))))
                                                      ? 
                                                     ((IData)(1U) 
                                                      + 
                                                      (vlSelf->top__DOT__adder__DOT__postnor_mant 
                                                       >> 2U))
                                                      : 
                                                     (vlSelf->top__DOT__adder__DOT__postnor_mant 
                                                      >> 2U))))))))),32);
}

void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_cleanup\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
