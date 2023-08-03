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
        bufp->chgBit(oldp+0,(vlSelf->top__DOT__divider__DOT__a_sign));
        bufp->chgBit(oldp+1,(vlSelf->top__DOT__divider__DOT__b_sign));
        bufp->chgCData(oldp+2,(vlSelf->top__DOT__divider__DOT__a_exponent),8);
        bufp->chgCData(oldp+3,(vlSelf->top__DOT__divider__DOT__b_exponent),8);
        bufp->chgIData(oldp+4,(vlSelf->top__DOT__divider__DOT__a_mantissa),24);
        bufp->chgIData(oldp+5,(vlSelf->top__DOT__divider__DOT__b_mantissa),24);
        bufp->chgBit(oldp+6,(((IData)(vlSelf->top__DOT__divider__DOT__a_sign) 
                              ^ (IData)(vlSelf->top__DOT__divider__DOT__b_sign))));
        bufp->chgCData(oldp+7,((0xffU & ((IData)(0x7fU) 
                                         + ((IData)(vlSelf->top__DOT__divider__DOT__a_exponent) 
                                            - (IData)(vlSelf->top__DOT__divider__DOT__b_exponent))))),8);
        bufp->chgIData(oldp+8,((0xffffffU & VL_DIV_III(24, vlSelf->top__DOT__divider__DOT__a_mantissa, vlSelf->top__DOT__divider__DOT__b_mantissa))),24);
    }
    bufp->chgBit(oldp+9,(vlSelf->clk_i));
    bufp->chgIData(oldp+10,(vlSelf->operand_a),32);
    bufp->chgIData(oldp+11,(vlSelf->operand_b),32);
    bufp->chgIData(oldp+12,(vlSelf->div_result),32);
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
