// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vtop__Syms.h"


VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+11,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+12,"fp_operand_a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+13,"fp_operand_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+14,"fp_operand_c",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+15,"fp_f_ab",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    {
        const char* __VenumItemNames[]
        = {"FADD", "FSUB", "FMUL", "FDIV", "FSQURT", 
                                "FSIGNJ", "FSIGNJN", 
                                "FSIGNJX", "FMIN", 
                                "FMAX", "FEQ", "FLT", 
                                "FLE", "FMADD", "FMSUB", 
                                "FNMSUB", "FNMADD"};
        const char* __VenumItemValues[]
        = {"1", "10", "11", "100", "101", "110", "111", 
                                "1000", "1001", "1010", 
                                "1011", "1100", "1101", 
                                "1110", "1111", "10000", 
                                "10001"};
        tracep->declDTypeEnum(1, "mypkg::fpu_op_e", 17, 5, __VenumItemNames, __VenumItemValues);
    }
    tracep->declBus(c+16,"opcode",1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBit(c+17,"overflow",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+18,"underflow",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+19,"invalid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+20,"div_zero",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+21,"inexact",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->pushNamePrefix("top ");
    tracep->declBit(c+11,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+12,"fp_operand_a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+13,"fp_operand_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+14,"fp_operand_c",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+15,"fp_f_ab",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+16,"opcode",1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBit(c+17,"overflow",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+18,"underflow",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+19,"invalid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+20,"div_zero",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+21,"inexact",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->pushNamePrefix("exception_dut ");
    tracep->declBit(c+11,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+12,"fp_operand_a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+13,"fp_operand_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+14,"fp_operand_c",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+15,"fp_f_ab",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+16,"opcode",1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBit(c+17,"overflow",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+18,"underflow",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+19,"invalid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+20,"div_zero",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+21,"inexact",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+22,"a_sign",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+23,"b_sign",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+24,"c_sign",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+25,"f_ab_sign",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+26,"a_exp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+27,"b_exp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+28,"c_exp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+29,"f_ab_exp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+30,"a_mantissa",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 22,0);
    tracep->declBus(c+31,"b_mantissa",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 22,0);
    tracep->declBus(c+32,"c_mantissa",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 22,0);
    tracep->declBus(c+33,"f_ab_mantissa",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 22,0);
    tracep->declBit(c+1,"a_nan",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+2,"a_zero",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+3,"a_inf",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+34,"a_dnr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+4,"b_nan",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+5,"b_zero",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+6,"b_inf",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+35,"b_dnr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+36,"f_ab_nan",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+37,"f_ab_zero",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+7,"f_ab_inf",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+8,"f_ab_dnr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+9,"c_nan",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+38,"c_zero",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+10,"c_inf",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+39,"c_dnr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vtop___024root__trace_init_top(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_top\n"); );
    // Body
    Vtop___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/);

VL_ATTR_COLD void Vtop___024root__trace_register(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vtop___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vtop___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vtop___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->top__DOT__exception_dut__DOT__a_nan));
    bufp->fullBit(oldp+2,(vlSelf->top__DOT__exception_dut__DOT__a_zero));
    bufp->fullBit(oldp+3,(vlSelf->top__DOT__exception_dut__DOT__a_inf));
    bufp->fullBit(oldp+4,(vlSelf->top__DOT__exception_dut__DOT__b_nan));
    bufp->fullBit(oldp+5,(vlSelf->top__DOT__exception_dut__DOT__b_zero));
    bufp->fullBit(oldp+6,(vlSelf->top__DOT__exception_dut__DOT__b_inf));
    bufp->fullBit(oldp+7,(vlSelf->top__DOT__exception_dut__DOT__f_ab_inf));
    bufp->fullBit(oldp+8,(vlSelf->top__DOT__exception_dut__DOT__f_ab_dnr));
    bufp->fullBit(oldp+9,(vlSelf->top__DOT__exception_dut__DOT__c_nan));
    bufp->fullBit(oldp+10,(vlSelf->top__DOT__exception_dut__DOT__c_inf));
    bufp->fullBit(oldp+11,(vlSelf->clk_i));
    bufp->fullIData(oldp+12,(vlSelf->fp_operand_a),32);
    bufp->fullIData(oldp+13,(vlSelf->fp_operand_b),32);
    bufp->fullIData(oldp+14,(vlSelf->fp_operand_c),32);
    bufp->fullIData(oldp+15,(vlSelf->fp_f_ab),32);
    bufp->fullCData(oldp+16,(vlSelf->opcode),5);
    bufp->fullBit(oldp+17,(vlSelf->overflow));
    bufp->fullBit(oldp+18,(vlSelf->underflow));
    bufp->fullBit(oldp+19,(vlSelf->invalid));
    bufp->fullBit(oldp+20,(vlSelf->div_zero));
    bufp->fullBit(oldp+21,(vlSelf->inexact));
    bufp->fullBit(oldp+22,((vlSelf->fp_operand_a >> 0x1fU)));
    bufp->fullBit(oldp+23,((vlSelf->fp_operand_b >> 0x1fU)));
    bufp->fullBit(oldp+24,((vlSelf->fp_operand_c >> 0x1fU)));
    bufp->fullBit(oldp+25,((vlSelf->fp_f_ab >> 0x1fU)));
    bufp->fullCData(oldp+26,((0xffU & (vlSelf->fp_operand_a 
                                       >> 0x17U))),8);
    bufp->fullCData(oldp+27,((0xffU & (vlSelf->fp_operand_b 
                                       >> 0x17U))),8);
    bufp->fullCData(oldp+28,((0xffU & (vlSelf->fp_operand_c 
                                       >> 0x17U))),8);
    bufp->fullCData(oldp+29,((0xffU & (vlSelf->fp_f_ab 
                                       >> 0x17U))),8);
    bufp->fullIData(oldp+30,((0x7fffffU & vlSelf->fp_operand_a)),23);
    bufp->fullIData(oldp+31,((0x7fffffU & vlSelf->fp_operand_b)),23);
    bufp->fullIData(oldp+32,((0x7fffffU & vlSelf->fp_operand_c)),23);
    bufp->fullIData(oldp+33,((0x7fffffU & vlSelf->fp_f_ab)),23);
    bufp->fullBit(oldp+34,((IData)(((0U == (0x7f800000U 
                                            & vlSelf->fp_operand_a)) 
                                    & (0U != (0x7fffffU 
                                              & vlSelf->fp_operand_a))))));
    bufp->fullBit(oldp+35,((IData)(((0U == (0x7f800000U 
                                            & vlSelf->fp_operand_b)) 
                                    & (0U != (0x7fffffU 
                                              & vlSelf->fp_operand_b))))));
    bufp->fullBit(oldp+36,((IData)(((0x7f800000U == 
                                     (0x7f800000U & vlSelf->fp_f_ab)) 
                                    & (0U != (0x7fffffU 
                                              & vlSelf->fp_f_ab))))));
    bufp->fullBit(oldp+37,((IData)((0U == (0x7fffffffU 
                                           & vlSelf->fp_f_ab)))));
    bufp->fullBit(oldp+38,((IData)((0U == (0x7fffffffU 
                                           & vlSelf->fp_operand_c)))));
    bufp->fullBit(oldp+39,((IData)(((0U == (0x7f800000U 
                                            & vlSelf->fp_operand_c)) 
                                    & (0U != (0x7fffffU 
                                              & vlSelf->fp_operand_c))))));
}
