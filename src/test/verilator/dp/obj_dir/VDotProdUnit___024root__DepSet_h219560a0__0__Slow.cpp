// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VDotProdUnit.h for the primary calling header

#include "verilated.h"

#include "VDotProdUnit__Syms.h"
#include "VDotProdUnit__Syms.h"
#include "VDotProdUnit___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VDotProdUnit___024root___dump_triggers__stl(VDotProdUnit___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void VDotProdUnit___024root___eval_triggers__stl(VDotProdUnit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VDotProdUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDotProdUnit___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (0U == vlSelf->__VstlIterCount));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VDotProdUnit___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

VL_ATTR_COLD void VDotProdUnit___024root___stl_sequent__TOP__0(VDotProdUnit___024root* vlSelf);
VL_ATTR_COLD void VDotProdUnit_FADD___stl_sequent__TOP__DotProdUnit__DOT__addResult_0_faddModule__0(VDotProdUnit_FADD* vlSelf);
VL_ATTR_COLD void VDotProdUnit_FADD___stl_sequent__TOP__DotProdUnit__DOT__addResult_1_faddModule__0(VDotProdUnit_FADD* vlSelf);
VL_ATTR_COLD void VDotProdUnit_FADD___stl_sequent__TOP__DotProdUnit__DOT__addResult_0_faddModule_1__0(VDotProdUnit_FADD* vlSelf);
VL_ATTR_COLD void VDotProdUnit_FADD___stl_sequent__TOP__DotProdUnit__DOT__fadd_final_res_faddModule__0(VDotProdUnit_FADD* vlSelf);

VL_ATTR_COLD void VDotProdUnit___024root___eval_stl(VDotProdUnit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VDotProdUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDotProdUnit___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VDotProdUnit___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
        VDotProdUnit_FADD___stl_sequent__TOP__DotProdUnit__DOT__addResult_0_faddModule__0((&vlSymsp->TOP__DotProdUnit__DOT__addResult_0_faddModule));
        VDotProdUnit_FADD___stl_sequent__TOP__DotProdUnit__DOT__addResult_1_faddModule__0((&vlSymsp->TOP__DotProdUnit__DOT__addResult_1_faddModule));
        VDotProdUnit_FADD___stl_sequent__TOP__DotProdUnit__DOT__addResult_0_faddModule_1__0((&vlSymsp->TOP__DotProdUnit__DOT__addResult_0_faddModule_1));
        VDotProdUnit_FADD___stl_sequent__TOP__DotProdUnit__DOT__fadd_final_res_faddModule__0((&vlSymsp->TOP__DotProdUnit__DOT__fadd_final_res_faddModule));
    }
}
