// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTop.h for the primary calling header

#include "verilated.h"

#include "VTop__Syms.h"
#include "VTop_Threadgroup.h"
#include "VTop__Syms.h"

VL_ATTR_COLD void VTop_Threadgroup___stl_sequent__TOP__Top__DOT__tc__DOT__ot__DOT__tg__0(VTop_Threadgroup* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VTop_Threadgroup___stl_sequent__TOP__Top__DOT__tc__DOT__ot__DOT__tg__0\n"); );
    // Init
    CData/*0:0*/ __PVT___T_2;
    __PVT___T_2 = 0;
    CData/*0:0*/ __VdfgTmp_h6731f200__0;
    __VdfgTmp_h6731f200__0 = 0;
    // Body
    vlSelf->__PVT___T_1 = (2U == (IData)(vlSelf->__PVT__state));
    if ((0xffffU == (vlSelf->__PVT__dp_in_c_0 >> 0x10U))) {
        vlSelf->__PVT__dp__DOT__fcvt__DOT__subnormal_shamt_lzc_io_in 
            = (0x3ffU & vlSelf->__PVT__dp_in_c_0);
        vlSelf->__PVT__dp__DOT__fcvt__DOT__fp_in_exp 
            = (0x1fU & (vlSelf->__PVT__dp_in_c_0 >> 0xaU));
    } else {
        vlSelf->__PVT__dp__DOT__fcvt__DOT__subnormal_shamt_lzc_io_in = 0x200U;
        vlSelf->__PVT__dp__DOT__fcvt__DOT__fp_in_exp = 0x1fU;
    }
    vlSelf->__PVT__dp__DOT__fcvt__DOT__decode_in_sigNotZero 
        = (1U & ((~ (IData)((0xffffU == (vlSelf->__PVT__dp_in_c_0 
                                         >> 0x10U)))) 
                 | (0U != (0x3ffU & vlSelf->__PVT__dp_in_c_0))));
    vlSelf->__PVT__dp__DOT__fcvt__DOT__subnormal_shamt_lzc_io_out 
        = ((1U & ((~ (IData)((0xffffU == (vlSelf->__PVT__dp_in_c_0 
                                          >> 0x10U)))) 
                  | (vlSelf->__PVT__dp_in_c_0 >> 9U)))
            ? 0U : ((IData)((0xffff0100U == (0xffff0100U 
                                             & vlSelf->__PVT__dp_in_c_0)))
                     ? 1U : ((IData)((0xffff0080U == 
                                      (0xffff0080U 
                                       & vlSelf->__PVT__dp_in_c_0)))
                              ? 2U : ((IData)((0xffff0040U 
                                               == (0xffff0040U 
                                                   & vlSelf->__PVT__dp_in_c_0)))
                                       ? 3U : ((IData)(
                                                       (0xffff0020U 
                                                        == 
                                                        (0xffff0020U 
                                                         & vlSelf->__PVT__dp_in_c_0)))
                                                ? 4U
                                                : ((IData)(
                                                           (0xffff0010U 
                                                            == 
                                                            (0xffff0010U 
                                                             & vlSelf->__PVT__dp_in_c_0)))
                                                    ? 5U
                                                    : 
                                                   ((IData)(
                                                            (0xffff0008U 
                                                             == 
                                                             (0xffff0008U 
                                                              & vlSelf->__PVT__dp_in_c_0)))
                                                     ? 6U
                                                     : 
                                                    ((IData)(
                                                             (0xffff0004U 
                                                              == 
                                                              (0xffff0004U 
                                                               & vlSelf->__PVT__dp_in_c_0)))
                                                      ? 7U
                                                      : 
                                                     ((IData)(
                                                              (0xffff0002U 
                                                               == 
                                                               (0xffff0002U 
                                                                & vlSelf->__PVT__dp_in_c_0)))
                                                       ? 8U
                                                       : 9U)))))))));
    vlSelf->__PVT___GEN_68 = ((~ (IData)(vlSymsp->TOP.io_out_ready)) 
                              & (IData)(vlSelf->__PVT__tg_out_valid));
    vlSelf->__PVT__dp__DOT__fmul__DOT__resultSign = 
        (1U & (((IData)(vlSelf->__PVT__dp_in_va_0) 
                ^ vlSelf->__PVT__dp_in_vb_qual1_2_data[0U]) 
               >> 0xfU));
    vlSelf->__PVT__dp__DOT__fmul__DOT__hasNaN = ((IData)(
                                                         ((0x7c00U 
                                                           == 
                                                           (0x7c00U 
                                                            & (IData)(vlSelf->__PVT__dp_in_va_0))) 
                                                          & (0U 
                                                             != 
                                                             (0x3ffU 
                                                              & (IData)(vlSelf->__PVT__dp_in_va_0))))) 
                                                 | (IData)(
                                                           ((0x7c00U 
                                                             == 
                                                             (0x7c00U 
                                                              & vlSelf->__PVT__dp_in_vb_qual1_2_data[0U])) 
                                                            & (0U 
                                                               != 
                                                               (0x3ffU 
                                                                & vlSelf->__PVT__dp_in_vb_qual1_2_data[0U])))));
    vlSelf->__PVT__dp__DOT__fmul__DOT__hasInf = ((IData)(
                                                         ((0x7c00U 
                                                           == 
                                                           (0x7c00U 
                                                            & (IData)(vlSelf->__PVT__dp_in_va_0))) 
                                                          & (~ (IData)(
                                                                       (0U 
                                                                        != 
                                                                        (0x3ffU 
                                                                         & (IData)(vlSelf->__PVT__dp_in_va_0))))))) 
                                                 | (IData)(
                                                           ((0x7c00U 
                                                             == 
                                                             (0x7c00U 
                                                              & vlSelf->__PVT__dp_in_vb_qual1_2_data[0U])) 
                                                            & (~ (IData)(
                                                                         (0U 
                                                                          != 
                                                                          (0x3ffU 
                                                                           & vlSelf->__PVT__dp_in_vb_qual1_2_data[0U])))))));
    vlSelf->__PVT__dp__DOT__fmul_1__DOT__resultSign 
        = (IData)((((IData)(vlSelf->__PVT__dp_in_va_1) 
                    >> 0xfU) ^ (vlSelf->__PVT__dp_in_vb_qual1_2_data[0U] 
                                >> 0x1fU)));
    vlSelf->__PVT__dp__DOT__fmul_1__DOT__hasNaN = ((IData)(
                                                           ((0x7c00U 
                                                             == 
                                                             (0x7c00U 
                                                              & (IData)(vlSelf->__PVT__dp_in_va_1))) 
                                                            & (0U 
                                                               != 
                                                               (0x3ffU 
                                                                & (IData)(vlSelf->__PVT__dp_in_va_1))))) 
                                                   | (IData)(
                                                             ((0x7c000000U 
                                                               == 
                                                               (0x7c000000U 
                                                                & vlSelf->__PVT__dp_in_vb_qual1_2_data[0U])) 
                                                              & (0U 
                                                                 != 
                                                                 (0x3ffU 
                                                                  & (vlSelf->__PVT__dp_in_vb_qual1_2_data[0U] 
                                                                     >> 0x10U))))));
    vlSelf->__PVT__dp__DOT__fmul_1__DOT__hasInf = ((IData)(
                                                           ((0x7c00U 
                                                             == 
                                                             (0x7c00U 
                                                              & (IData)(vlSelf->__PVT__dp_in_va_1))) 
                                                            & (~ (IData)(
                                                                         (0U 
                                                                          != 
                                                                          (0x3ffU 
                                                                           & (IData)(vlSelf->__PVT__dp_in_va_1))))))) 
                                                   | (IData)(
                                                             ((0x7c000000U 
                                                               == 
                                                               (0x7c000000U 
                                                                & vlSelf->__PVT__dp_in_vb_qual1_2_data[0U])) 
                                                              & (~ (IData)(
                                                                           (0U 
                                                                            != 
                                                                            (0x3ffU 
                                                                             & (vlSelf->__PVT__dp_in_vb_qual1_2_data[0U] 
                                                                                >> 0x10U))))))));
    vlSelf->__PVT__dp__DOT__fmul_2__DOT__resultSign 
        = (1U & (((IData)(vlSelf->__PVT__dp_in_va_2) 
                  ^ vlSelf->__PVT__dp_in_vb_qual1_2_data[1U]) 
                 >> 0xfU));
    vlSelf->__PVT__dp__DOT__fmul_2__DOT__hasNaN = ((IData)(
                                                           ((0x7c00U 
                                                             == 
                                                             (0x7c00U 
                                                              & (IData)(vlSelf->__PVT__dp_in_va_2))) 
                                                            & (0U 
                                                               != 
                                                               (0x3ffU 
                                                                & (IData)(vlSelf->__PVT__dp_in_va_2))))) 
                                                   | (IData)(
                                                             ((0x7c00U 
                                                               == 
                                                               (0x7c00U 
                                                                & vlSelf->__PVT__dp_in_vb_qual1_2_data[1U])) 
                                                              & (0U 
                                                                 != 
                                                                 (0x3ffU 
                                                                  & vlSelf->__PVT__dp_in_vb_qual1_2_data[1U])))));
    vlSelf->__PVT__dp__DOT__fmul_2__DOT__hasInf = ((IData)(
                                                           ((0x7c00U 
                                                             == 
                                                             (0x7c00U 
                                                              & (IData)(vlSelf->__PVT__dp_in_va_2))) 
                                                            & (~ (IData)(
                                                                         (0U 
                                                                          != 
                                                                          (0x3ffU 
                                                                           & (IData)(vlSelf->__PVT__dp_in_va_2))))))) 
                                                   | (IData)(
                                                             ((0x7c00U 
                                                               == 
                                                               (0x7c00U 
                                                                & vlSelf->__PVT__dp_in_vb_qual1_2_data[1U])) 
                                                              & (~ (IData)(
                                                                           (0U 
                                                                            != 
                                                                            (0x3ffU 
                                                                             & vlSelf->__PVT__dp_in_vb_qual1_2_data[1U])))))));
    vlSelf->__PVT__dp__DOT__fmul_3__DOT__resultSign 
        = (IData)((((IData)(vlSelf->__PVT__dp_in_va_3) 
                    >> 0xfU) ^ (vlSelf->__PVT__dp_in_vb_qual1_2_data[1U] 
                                >> 0x1fU)));
    vlSelf->__PVT__dp__DOT__fmul_3__DOT__hasNaN = ((IData)(
                                                           ((0x7c00U 
                                                             == 
                                                             (0x7c00U 
                                                              & (IData)(vlSelf->__PVT__dp_in_va_3))) 
                                                            & (0U 
                                                               != 
                                                               (0x3ffU 
                                                                & (IData)(vlSelf->__PVT__dp_in_va_3))))) 
                                                   | (IData)(
                                                             ((0x7c000000U 
                                                               == 
                                                               (0x7c000000U 
                                                                & vlSelf->__PVT__dp_in_vb_qual1_2_data[1U])) 
                                                              & (0U 
                                                                 != 
                                                                 (0x3ffU 
                                                                  & (vlSelf->__PVT__dp_in_vb_qual1_2_data[1U] 
                                                                     >> 0x10U))))));
    vlSelf->__PVT__dp__DOT__fmul_3__DOT__hasInf = ((IData)(
                                                           ((0x7c00U 
                                                             == 
                                                             (0x7c00U 
                                                              & (IData)(vlSelf->__PVT__dp_in_va_3))) 
                                                            & (~ (IData)(
                                                                         (0U 
                                                                          != 
                                                                          (0x3ffU 
                                                                           & (IData)(vlSelf->__PVT__dp_in_va_3))))))) 
                                                   | (IData)(
                                                             ((0x7c000000U 
                                                               == 
                                                               (0x7c000000U 
                                                                & vlSelf->__PVT__dp_in_vb_qual1_2_data[1U])) 
                                                              & (~ (IData)(
                                                                           (0U 
                                                                            != 
                                                                            (0x3ffU 
                                                                             & (vlSelf->__PVT__dp_in_vb_qual1_2_data[1U] 
                                                                                >> 0x10U))))))));
    vlSelf->__PVT__dp__DOT__fmul__DOT__resultSigNoShift 
        = (0x3fffffU & ((((IData)((0U != (0x1fU & ((IData)(vlSelf->__PVT__dp_in_va_0) 
                                                   >> 0xaU)))) 
                          << 0xaU) | (0x3ffU & (IData)(vlSelf->__PVT__dp_in_va_0))) 
                        * (((IData)((0U != (0x1fU & 
                                            (vlSelf->__PVT__dp_in_vb_qual1_2_data[0U] 
                                             >> 0xaU)))) 
                            << 0xaU) | (0x3ffU & vlSelf->__PVT__dp_in_vb_qual1_2_data[0U]))));
    vlSelf->__PVT__dp__DOT__fmul__DOT__lzcRaw = (0xfU 
                                                 & (((0U 
                                                      != 
                                                      (0x1fU 
                                                       & ((IData)(vlSelf->__PVT__dp_in_va_0) 
                                                          >> 0xaU)))
                                                      ? 0U
                                                      : 
                                                     ((0x200U 
                                                       & (IData)(vlSelf->__PVT__dp_in_va_0))
                                                       ? 1U
                                                       : 
                                                      ((0x100U 
                                                        & (IData)(vlSelf->__PVT__dp_in_va_0))
                                                        ? 2U
                                                        : 
                                                       ((0x80U 
                                                         & (IData)(vlSelf->__PVT__dp_in_va_0))
                                                         ? 3U
                                                         : 
                                                        ((0x40U 
                                                          & (IData)(vlSelf->__PVT__dp_in_va_0))
                                                          ? 4U
                                                          : 
                                                         ((0x20U 
                                                           & (IData)(vlSelf->__PVT__dp_in_va_0))
                                                           ? 5U
                                                           : 
                                                          ((0x10U 
                                                            & (IData)(vlSelf->__PVT__dp_in_va_0))
                                                            ? 6U
                                                            : 
                                                           ((8U 
                                                             & (IData)(vlSelf->__PVT__dp_in_va_0))
                                                             ? 7U
                                                             : 
                                                            ((4U 
                                                              & (IData)(vlSelf->__PVT__dp_in_va_0))
                                                              ? 8U
                                                              : 
                                                             ((2U 
                                                               & (IData)(vlSelf->__PVT__dp_in_va_0))
                                                               ? 9U
                                                               : 0xaU)))))))))) 
                                                    + 
                                                    ((0U 
                                                      != 
                                                      (0x1fU 
                                                       & (vlSelf->__PVT__dp_in_vb_qual1_2_data[0U] 
                                                          >> 0xaU)))
                                                      ? 0U
                                                      : 
                                                     ((0x200U 
                                                       & vlSelf->__PVT__dp_in_vb_qual1_2_data[0U])
                                                       ? 1U
                                                       : 
                                                      ((0x100U 
                                                        & vlSelf->__PVT__dp_in_vb_qual1_2_data[0U])
                                                        ? 2U
                                                        : 
                                                       ((0x80U 
                                                         & vlSelf->__PVT__dp_in_vb_qual1_2_data[0U])
                                                         ? 3U
                                                         : 
                                                        ((0x40U 
                                                          & vlSelf->__PVT__dp_in_vb_qual1_2_data[0U])
                                                          ? 4U
                                                          : 
                                                         ((0x20U 
                                                           & vlSelf->__PVT__dp_in_vb_qual1_2_data[0U])
                                                           ? 5U
                                                           : 
                                                          ((0x10U 
                                                            & vlSelf->__PVT__dp_in_vb_qual1_2_data[0U])
                                                            ? 6U
                                                            : 
                                                           ((8U 
                                                             & vlSelf->__PVT__dp_in_vb_qual1_2_data[0U])
                                                             ? 7U
                                                             : 
                                                            ((4U 
                                                              & vlSelf->__PVT__dp_in_vb_qual1_2_data[0U])
                                                              ? 8U
                                                              : 
                                                             ((2U 
                                                               & vlSelf->__PVT__dp_in_vb_qual1_2_data[0U])
                                                               ? 9U
                                                               : 0xaU))))))))))));
    vlSelf->__PVT__dp__DOT__fmul_1__DOT__resultSigNoShift 
        = (0x3fffffU & ((((IData)((0U != (0x1fU & ((IData)(vlSelf->__PVT__dp_in_va_1) 
                                                   >> 0xaU)))) 
                          << 0xaU) | (0x3ffU & (IData)(vlSelf->__PVT__dp_in_va_1))) 
                        * (((IData)((0U != (0x1fU & 
                                            (vlSelf->__PVT__dp_in_vb_qual1_2_data[0U] 
                                             >> 0x1aU)))) 
                            << 0xaU) | (0x3ffU & (vlSelf->__PVT__dp_in_vb_qual1_2_data[0U] 
                                                  >> 0x10U)))));
    vlSelf->__PVT__dp__DOT__fmul_1__DOT__lzcRaw = (0xfU 
                                                   & (((0U 
                                                        != 
                                                        (0x1fU 
                                                         & ((IData)(vlSelf->__PVT__dp_in_va_1) 
                                                            >> 0xaU)))
                                                        ? 0U
                                                        : 
                                                       ((0x200U 
                                                         & (IData)(vlSelf->__PVT__dp_in_va_1))
                                                         ? 1U
                                                         : 
                                                        ((0x100U 
                                                          & (IData)(vlSelf->__PVT__dp_in_va_1))
                                                          ? 2U
                                                          : 
                                                         ((0x80U 
                                                           & (IData)(vlSelf->__PVT__dp_in_va_1))
                                                           ? 3U
                                                           : 
                                                          ((0x40U 
                                                            & (IData)(vlSelf->__PVT__dp_in_va_1))
                                                            ? 4U
                                                            : 
                                                           ((0x20U 
                                                             & (IData)(vlSelf->__PVT__dp_in_va_1))
                                                             ? 5U
                                                             : 
                                                            ((0x10U 
                                                              & (IData)(vlSelf->__PVT__dp_in_va_1))
                                                              ? 6U
                                                              : 
                                                             ((8U 
                                                               & (IData)(vlSelf->__PVT__dp_in_va_1))
                                                               ? 7U
                                                               : 
                                                              ((4U 
                                                                & (IData)(vlSelf->__PVT__dp_in_va_1))
                                                                ? 8U
                                                                : 
                                                               ((2U 
                                                                 & (IData)(vlSelf->__PVT__dp_in_va_1))
                                                                 ? 9U
                                                                 : 0xaU)))))))))) 
                                                      + 
                                                      ((0U 
                                                        != 
                                                        (0x1fU 
                                                         & (vlSelf->__PVT__dp_in_vb_qual1_2_data[0U] 
                                                            >> 0x1aU)))
                                                        ? 0U
                                                        : 
                                                       ((0x2000000U 
                                                         & vlSelf->__PVT__dp_in_vb_qual1_2_data[0U])
                                                         ? 1U
                                                         : 
                                                        ((0x1000000U 
                                                          & vlSelf->__PVT__dp_in_vb_qual1_2_data[0U])
                                                          ? 2U
                                                          : 
                                                         ((0x800000U 
                                                           & vlSelf->__PVT__dp_in_vb_qual1_2_data[0U])
                                                           ? 3U
                                                           : 
                                                          ((0x400000U 
                                                            & vlSelf->__PVT__dp_in_vb_qual1_2_data[0U])
                                                            ? 4U
                                                            : 
                                                           ((0x200000U 
                                                             & vlSelf->__PVT__dp_in_vb_qual1_2_data[0U])
                                                             ? 5U
                                                             : 
                                                            ((0x100000U 
                                                              & vlSelf->__PVT__dp_in_vb_qual1_2_data[0U])
                                                              ? 6U
                                                              : 
                                                             ((0x80000U 
                                                               & vlSelf->__PVT__dp_in_vb_qual1_2_data[0U])
                                                               ? 7U
                                                               : 
                                                              ((0x40000U 
                                                                & vlSelf->__PVT__dp_in_vb_qual1_2_data[0U])
                                                                ? 8U
                                                                : 
                                                               ((0x20000U 
                                                                 & vlSelf->__PVT__dp_in_vb_qual1_2_data[0U])
                                                                 ? 9U
                                                                 : 0xaU))))))))))));
    vlSelf->__PVT__dp__DOT__fmul_2__DOT__resultSigNoShift 
        = (0x3fffffU & ((((IData)((0U != (0x1fU & ((IData)(vlSelf->__PVT__dp_in_va_2) 
                                                   >> 0xaU)))) 
                          << 0xaU) | (0x3ffU & (IData)(vlSelf->__PVT__dp_in_va_2))) 
                        * (((IData)((0U != (0x1fU & 
                                            (vlSelf->__PVT__dp_in_vb_qual1_2_data[1U] 
                                             >> 0xaU)))) 
                            << 0xaU) | (0x3ffU & vlSelf->__PVT__dp_in_vb_qual1_2_data[1U]))));
    vlSelf->__PVT__dp__DOT__fmul_2__DOT__lzcRaw = (0xfU 
                                                   & (((0U 
                                                        != 
                                                        (0x1fU 
                                                         & ((IData)(vlSelf->__PVT__dp_in_va_2) 
                                                            >> 0xaU)))
                                                        ? 0U
                                                        : 
                                                       ((0x200U 
                                                         & (IData)(vlSelf->__PVT__dp_in_va_2))
                                                         ? 1U
                                                         : 
                                                        ((0x100U 
                                                          & (IData)(vlSelf->__PVT__dp_in_va_2))
                                                          ? 2U
                                                          : 
                                                         ((0x80U 
                                                           & (IData)(vlSelf->__PVT__dp_in_va_2))
                                                           ? 3U
                                                           : 
                                                          ((0x40U 
                                                            & (IData)(vlSelf->__PVT__dp_in_va_2))
                                                            ? 4U
                                                            : 
                                                           ((0x20U 
                                                             & (IData)(vlSelf->__PVT__dp_in_va_2))
                                                             ? 5U
                                                             : 
                                                            ((0x10U 
                                                              & (IData)(vlSelf->__PVT__dp_in_va_2))
                                                              ? 6U
                                                              : 
                                                             ((8U 
                                                               & (IData)(vlSelf->__PVT__dp_in_va_2))
                                                               ? 7U
                                                               : 
                                                              ((4U 
                                                                & (IData)(vlSelf->__PVT__dp_in_va_2))
                                                                ? 8U
                                                                : 
                                                               ((2U 
                                                                 & (IData)(vlSelf->__PVT__dp_in_va_2))
                                                                 ? 9U
                                                                 : 0xaU)))))))))) 
                                                      + 
                                                      ((0U 
                                                        != 
                                                        (0x1fU 
                                                         & (vlSelf->__PVT__dp_in_vb_qual1_2_data[1U] 
                                                            >> 0xaU)))
                                                        ? 0U
                                                        : 
                                                       ((0x200U 
                                                         & vlSelf->__PVT__dp_in_vb_qual1_2_data[1U])
                                                         ? 1U
                                                         : 
                                                        ((0x100U 
                                                          & vlSelf->__PVT__dp_in_vb_qual1_2_data[1U])
                                                          ? 2U
                                                          : 
                                                         ((0x80U 
                                                           & vlSelf->__PVT__dp_in_vb_qual1_2_data[1U])
                                                           ? 3U
                                                           : 
                                                          ((0x40U 
                                                            & vlSelf->__PVT__dp_in_vb_qual1_2_data[1U])
                                                            ? 4U
                                                            : 
                                                           ((0x20U 
                                                             & vlSelf->__PVT__dp_in_vb_qual1_2_data[1U])
                                                             ? 5U
                                                             : 
                                                            ((0x10U 
                                                              & vlSelf->__PVT__dp_in_vb_qual1_2_data[1U])
                                                              ? 6U
                                                              : 
                                                             ((8U 
                                                               & vlSelf->__PVT__dp_in_vb_qual1_2_data[1U])
                                                               ? 7U
                                                               : 
                                                              ((4U 
                                                                & vlSelf->__PVT__dp_in_vb_qual1_2_data[1U])
                                                                ? 8U
                                                                : 
                                                               ((2U 
                                                                 & vlSelf->__PVT__dp_in_vb_qual1_2_data[1U])
                                                                 ? 9U
                                                                 : 0xaU))))))))))));
    vlSelf->__PVT__dp__DOT__fmul_3__DOT__resultSigNoShift 
        = (0x3fffffU & ((((IData)((0U != (0x1fU & ((IData)(vlSelf->__PVT__dp_in_va_3) 
                                                   >> 0xaU)))) 
                          << 0xaU) | (0x3ffU & (IData)(vlSelf->__PVT__dp_in_va_3))) 
                        * (((IData)((0U != (0x1fU & 
                                            (vlSelf->__PVT__dp_in_vb_qual1_2_data[1U] 
                                             >> 0x1aU)))) 
                            << 0xaU) | (0x3ffU & (vlSelf->__PVT__dp_in_vb_qual1_2_data[1U] 
                                                  >> 0x10U)))));
    vlSelf->__PVT__dp__DOT__fmul_3__DOT__lzcRaw = (0xfU 
                                                   & (((0U 
                                                        != 
                                                        (0x1fU 
                                                         & ((IData)(vlSelf->__PVT__dp_in_va_3) 
                                                            >> 0xaU)))
                                                        ? 0U
                                                        : 
                                                       ((0x200U 
                                                         & (IData)(vlSelf->__PVT__dp_in_va_3))
                                                         ? 1U
                                                         : 
                                                        ((0x100U 
                                                          & (IData)(vlSelf->__PVT__dp_in_va_3))
                                                          ? 2U
                                                          : 
                                                         ((0x80U 
                                                           & (IData)(vlSelf->__PVT__dp_in_va_3))
                                                           ? 3U
                                                           : 
                                                          ((0x40U 
                                                            & (IData)(vlSelf->__PVT__dp_in_va_3))
                                                            ? 4U
                                                            : 
                                                           ((0x20U 
                                                             & (IData)(vlSelf->__PVT__dp_in_va_3))
                                                             ? 5U
                                                             : 
                                                            ((0x10U 
                                                              & (IData)(vlSelf->__PVT__dp_in_va_3))
                                                              ? 6U
                                                              : 
                                                             ((8U 
                                                               & (IData)(vlSelf->__PVT__dp_in_va_3))
                                                               ? 7U
                                                               : 
                                                              ((4U 
                                                                & (IData)(vlSelf->__PVT__dp_in_va_3))
                                                                ? 8U
                                                                : 
                                                               ((2U 
                                                                 & (IData)(vlSelf->__PVT__dp_in_va_3))
                                                                 ? 9U
                                                                 : 0xaU)))))))))) 
                                                      + 
                                                      ((0U 
                                                        != 
                                                        (0x1fU 
                                                         & (vlSelf->__PVT__dp_in_vb_qual1_2_data[1U] 
                                                            >> 0x1aU)))
                                                        ? 0U
                                                        : 
                                                       ((0x2000000U 
                                                         & vlSelf->__PVT__dp_in_vb_qual1_2_data[1U])
                                                         ? 1U
                                                         : 
                                                        ((0x1000000U 
                                                          & vlSelf->__PVT__dp_in_vb_qual1_2_data[1U])
                                                          ? 2U
                                                          : 
                                                         ((0x800000U 
                                                           & vlSelf->__PVT__dp_in_vb_qual1_2_data[1U])
                                                           ? 3U
                                                           : 
                                                          ((0x400000U 
                                                            & vlSelf->__PVT__dp_in_vb_qual1_2_data[1U])
                                                            ? 4U
                                                            : 
                                                           ((0x200000U 
                                                             & vlSelf->__PVT__dp_in_vb_qual1_2_data[1U])
                                                             ? 5U
                                                             : 
                                                            ((0x100000U 
                                                              & vlSelf->__PVT__dp_in_vb_qual1_2_data[1U])
                                                              ? 6U
                                                              : 
                                                             ((0x80000U 
                                                               & vlSelf->__PVT__dp_in_vb_qual1_2_data[1U])
                                                               ? 7U
                                                               : 
                                                              ((0x40000U 
                                                                & vlSelf->__PVT__dp_in_vb_qual1_2_data[1U])
                                                                ? 8U
                                                                : 
                                                               ((0x20000U 
                                                                 & vlSelf->__PVT__dp_in_vb_qual1_2_data[1U])
                                                                 ? 9U
                                                                 : 0xaU))))))))))));
    vlSelf->__PVT__dp__DOT__fmul__DOT__hasZero = (1U 
                                                  & (((~ (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x1fU 
                                                                   & ((IData)(vlSelf->__PVT__dp_in_va_0) 
                                                                      >> 0xaU))))) 
                                                      & (~ (IData)(
                                                                   (0U 
                                                                    != 
                                                                    (0x3ffU 
                                                                     & (IData)(vlSelf->__PVT__dp_in_va_0)))))) 
                                                     | ((~ (IData)(
                                                                   (0U 
                                                                    != 
                                                                    (0x1fU 
                                                                     & (vlSelf->__PVT__dp_in_vb_qual1_2_data[0U] 
                                                                        >> 0xaU))))) 
                                                        & (~ (IData)(
                                                                     (0U 
                                                                      != 
                                                                      (0x3ffU 
                                                                       & vlSelf->__PVT__dp_in_vb_qual1_2_data[0U])))))));
    vlSelf->__PVT__dp__DOT__fmul_1__DOT__hasZero = 
        (1U & (((~ (IData)((0U != (0x1fU & ((IData)(vlSelf->__PVT__dp_in_va_1) 
                                            >> 0xaU))))) 
                & (~ (IData)((0U != (0x3ffU & (IData)(vlSelf->__PVT__dp_in_va_1)))))) 
               | ((~ (IData)((0U != (0x1fU & (vlSelf->__PVT__dp_in_vb_qual1_2_data[0U] 
                                              >> 0x1aU))))) 
                  & (~ (IData)((0U != (0x3ffU & (vlSelf->__PVT__dp_in_vb_qual1_2_data[0U] 
                                                 >> 0x10U))))))));
    vlSelf->__PVT__dp__DOT__fmul_2__DOT__hasZero = 
        (1U & (((~ (IData)((0U != (0x1fU & ((IData)(vlSelf->__PVT__dp_in_va_2) 
                                            >> 0xaU))))) 
                & (~ (IData)((0U != (0x3ffU & (IData)(vlSelf->__PVT__dp_in_va_2)))))) 
               | ((~ (IData)((0U != (0x1fU & (vlSelf->__PVT__dp_in_vb_qual1_2_data[1U] 
                                              >> 0xaU))))) 
                  & (~ (IData)((0U != (0x3ffU & vlSelf->__PVT__dp_in_vb_qual1_2_data[1U])))))));
    vlSelf->__PVT__dp__DOT__fmul_3__DOT__hasZero = 
        (1U & (((~ (IData)((0U != (0x1fU & ((IData)(vlSelf->__PVT__dp_in_va_3) 
                                            >> 0xaU))))) 
                & (~ (IData)((0U != (0x3ffU & (IData)(vlSelf->__PVT__dp_in_va_3)))))) 
               | ((~ (IData)((0U != (0x1fU & (vlSelf->__PVT__dp_in_vb_qual1_2_data[1U] 
                                              >> 0x1aU))))) 
                  & (~ (IData)((0U != (0x3ffU & (vlSelf->__PVT__dp_in_vb_qual1_2_data[1U] 
                                                 >> 0x10U))))))));
    __PVT___T_2 = ((2U == (IData)(vlSelf->__PVT__state)) 
                   & (IData)(vlSymsp->TOP.io_in_bits_ctrl_mixPcMode));
    vlSelf->__PVT__dp__DOT__fcvt_1__DOT__shiftRightJam_io_in 
        = (((IData)((0U != (0xffU & (vlSelf->__PVT__dp__DOT__pipeline_reg_3__DOT__dataReg_res 
                                     >> 0x17U)))) << 0xbU) 
           | (0x7ffU & (vlSelf->__PVT__dp__DOT__pipeline_reg_3__DOT__dataReg_res 
                        >> 0xcU)));
    vlSelf->__PVT__dp__DOT__fcvt_1__DOT__normal_rounder__DOT__r_up 
        = ((vlSelf->__PVT__dp__DOT__pipeline_reg_3__DOT__dataReg_res 
            >> 0xcU) & (0U != (0x2fffU & vlSelf->__PVT__dp__DOT__pipeline_reg_3__DOT__dataReg_res)));
    vlSelf->__PVT__dp__DOT__pipeline_reg_3_io_out_ready 
        = (1U & ((~ (IData)(vlSelf->__PVT__tg_out_valid)) 
                 | (IData)(vlSymsp->TOP.io_out_ready)));
    vlSelf->__PVT__dp__DOT__fcvt__DOT___result_T_4 
        = ((~ (IData)((0x1fU == (IData)(vlSelf->__PVT__dp__DOT__fcvt__DOT__fp_in_exp)))) 
           & (0U != (IData)(vlSelf->__PVT__dp__DOT__fcvt__DOT__fp_in_exp)));
    vlSelf->__PVT__dp__DOT__fmul__DOT__lzc = (0xfU 
                                              & ((0U 
                                                  != 
                                                  (vlSelf->__PVT__dp__DOT__fmul__DOT__resultSigNoShift 
                                                   & (0x200000U 
                                                      >> (IData)(vlSelf->__PVT__dp__DOT__fmul__DOT__lzcRaw))))
                                                  ? (IData)(vlSelf->__PVT__dp__DOT__fmul__DOT__lzcRaw)
                                                  : 
                                                 ((IData)(1U) 
                                                  + (IData)(vlSelf->__PVT__dp__DOT__fmul__DOT__lzcRaw))));
    vlSelf->__PVT__dp__DOT__fmul_1__DOT__lzc = (0xfU 
                                                & ((0U 
                                                    != 
                                                    (vlSelf->__PVT__dp__DOT__fmul_1__DOT__resultSigNoShift 
                                                     & (0x200000U 
                                                        >> (IData)(vlSelf->__PVT__dp__DOT__fmul_1__DOT__lzcRaw))))
                                                    ? (IData)(vlSelf->__PVT__dp__DOT__fmul_1__DOT__lzcRaw)
                                                    : 
                                                   ((IData)(1U) 
                                                    + (IData)(vlSelf->__PVT__dp__DOT__fmul_1__DOT__lzcRaw))));
    vlSelf->__PVT__dp__DOT__fmul_2__DOT__lzc = (0xfU 
                                                & ((0U 
                                                    != 
                                                    (vlSelf->__PVT__dp__DOT__fmul_2__DOT__resultSigNoShift 
                                                     & (0x200000U 
                                                        >> (IData)(vlSelf->__PVT__dp__DOT__fmul_2__DOT__lzcRaw))))
                                                    ? (IData)(vlSelf->__PVT__dp__DOT__fmul_2__DOT__lzcRaw)
                                                    : 
                                                   ((IData)(1U) 
                                                    + (IData)(vlSelf->__PVT__dp__DOT__fmul_2__DOT__lzcRaw))));
    vlSelf->__PVT__dp__DOT__fmul_3__DOT__lzc = (0xfU 
                                                & ((0U 
                                                    != 
                                                    (vlSelf->__PVT__dp__DOT__fmul_3__DOT__resultSigNoShift 
                                                     & (0x200000U 
                                                        >> (IData)(vlSelf->__PVT__dp__DOT__fmul_3__DOT__lzcRaw))))
                                                    ? (IData)(vlSelf->__PVT__dp__DOT__fmul_3__DOT__lzcRaw)
                                                    : 
                                                   ((IData)(1U) 
                                                    + (IData)(vlSelf->__PVT__dp__DOT__fmul_3__DOT__lzcRaw))));
    vlSelf->__PVT__dp__DOT__fmul__DOT__resultExpNoShift 
        = ((IData)(vlSelf->__PVT__dp__DOT__fmul__DOT__hasZero)
            ? 0U : (0xffU & ((IData)(0x61U) + (0x3fU 
                                               & ((0x1fU 
                                                   & (((IData)(vlSelf->__PVT__dp_in_va_0) 
                                                       >> 0xaU) 
                                                      + 
                                                      ((~ (IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x1fU 
                                                                    & ((IData)(vlSelf->__PVT__dp_in_va_0) 
                                                                       >> 0xaU))))) 
                                                       & (0U 
                                                          != 
                                                          (0x3ffU 
                                                           & (IData)(vlSelf->__PVT__dp_in_va_0)))))) 
                                                  + 
                                                  (0x1fU 
                                                   & (((vlSelf->__PVT__dp_in_vb_qual1_2_data[0U] 
                                                        << 0x16U) 
                                                       | (vlSelf->__PVT__dp_in_vb_qual1_2_data[0U] 
                                                          >> 0xaU)) 
                                                      + 
                                                      ((~ (IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x1fU 
                                                                    & (vlSelf->__PVT__dp_in_vb_qual1_2_data[0U] 
                                                                       >> 0xaU))))) 
                                                       & (0U 
                                                          != 
                                                          (0x3ffU 
                                                           & vlSelf->__PVT__dp_in_vb_qual1_2_data[0U]))))))))));
    vlSelf->__PVT__dp__DOT__fmul_1__DOT__resultExpNoShift 
        = ((IData)(vlSelf->__PVT__dp__DOT__fmul_1__DOT__hasZero)
            ? 0U : (0xffU & ((IData)(0x61U) + (0x3fU 
                                               & ((0x1fU 
                                                   & (((IData)(vlSelf->__PVT__dp_in_va_1) 
                                                       >> 0xaU) 
                                                      + 
                                                      ((~ (IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x1fU 
                                                                    & ((IData)(vlSelf->__PVT__dp_in_va_1) 
                                                                       >> 0xaU))))) 
                                                       & (0U 
                                                          != 
                                                          (0x3ffU 
                                                           & (IData)(vlSelf->__PVT__dp_in_va_1)))))) 
                                                  + 
                                                  (0x1fU 
                                                   & (((vlSelf->__PVT__dp_in_vb_qual1_2_data[0U] 
                                                        << 6U) 
                                                       | (vlSelf->__PVT__dp_in_vb_qual1_2_data[0U] 
                                                          >> 0x1aU)) 
                                                      + 
                                                      ((~ (IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x1fU 
                                                                    & (vlSelf->__PVT__dp_in_vb_qual1_2_data[0U] 
                                                                       >> 0x1aU))))) 
                                                       & (0U 
                                                          != 
                                                          (0x3ffU 
                                                           & (vlSelf->__PVT__dp_in_vb_qual1_2_data[0U] 
                                                              >> 0x10U)))))))))));
    vlSelf->__PVT__dp__DOT__fmul_2__DOT__resultExpNoShift 
        = ((IData)(vlSelf->__PVT__dp__DOT__fmul_2__DOT__hasZero)
            ? 0U : (0xffU & ((IData)(0x61U) + (0x3fU 
                                               & ((0x1fU 
                                                   & (((IData)(vlSelf->__PVT__dp_in_va_2) 
                                                       >> 0xaU) 
                                                      + 
                                                      ((~ (IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x1fU 
                                                                    & ((IData)(vlSelf->__PVT__dp_in_va_2) 
                                                                       >> 0xaU))))) 
                                                       & (0U 
                                                          != 
                                                          (0x3ffU 
                                                           & (IData)(vlSelf->__PVT__dp_in_va_2)))))) 
                                                  + 
                                                  (0x1fU 
                                                   & (((vlSelf->__PVT__dp_in_vb_qual1_2_data[1U] 
                                                        << 0x16U) 
                                                       | (vlSelf->__PVT__dp_in_vb_qual1_2_data[1U] 
                                                          >> 0xaU)) 
                                                      + 
                                                      ((~ (IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x1fU 
                                                                    & (vlSelf->__PVT__dp_in_vb_qual1_2_data[1U] 
                                                                       >> 0xaU))))) 
                                                       & (0U 
                                                          != 
                                                          (0x3ffU 
                                                           & vlSelf->__PVT__dp_in_vb_qual1_2_data[1U]))))))))));
    vlSelf->__PVT__dp__DOT__fmul_3__DOT__resultExpNoShift 
        = ((IData)(vlSelf->__PVT__dp__DOT__fmul_3__DOT__hasZero)
            ? 0U : (0xffU & ((IData)(0x61U) + (0x3fU 
                                               & ((0x1fU 
                                                   & (((IData)(vlSelf->__PVT__dp_in_va_3) 
                                                       >> 0xaU) 
                                                      + 
                                                      ((~ (IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x1fU 
                                                                    & ((IData)(vlSelf->__PVT__dp_in_va_3) 
                                                                       >> 0xaU))))) 
                                                       & (0U 
                                                          != 
                                                          (0x3ffU 
                                                           & (IData)(vlSelf->__PVT__dp_in_va_3)))))) 
                                                  + 
                                                  (0x1fU 
                                                   & (((vlSelf->__PVT__dp_in_vb_qual1_2_data[1U] 
                                                        << 6U) 
                                                       | (vlSelf->__PVT__dp_in_vb_qual1_2_data[1U] 
                                                          >> 0x1aU)) 
                                                      + 
                                                      ((~ (IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x1fU 
                                                                    & (vlSelf->__PVT__dp_in_vb_qual1_2_data[1U] 
                                                                       >> 0x1aU))))) 
                                                       & (0U 
                                                          != 
                                                          (0x3ffU 
                                                           & (vlSelf->__PVT__dp_in_vb_qual1_2_data[1U] 
                                                              >> 0x10U)))))))))));
    vlSelf->__PVT__dp__DOT__fcvt_1__DOT__shiftRightJam__DOT___io_out_T 
        = ((0xbU >= (0xffU & ((IData)(0x71U) - (vlSelf->__PVT__dp__DOT__pipeline_reg_3__DOT__dataReg_res 
                                                >> 0x17U))))
            ? (0xfffU & ((IData)(vlSelf->__PVT__dp__DOT__fcvt_1__DOT__shiftRightJam_io_in) 
                         >> (0xffU & ((IData)(0x71U) 
                                      - (vlSelf->__PVT__dp__DOT__pipeline_reg_3__DOT__dataReg_res 
                                         >> 0x17U)))))
            : 0U);
    vlSelf->__PVT__dp__DOT__fcvt_1__DOT__normal_rounder_io_cout 
        = ((IData)(vlSelf->__PVT__dp__DOT__fcvt_1__DOT__normal_rounder__DOT__r_up) 
           & (0x7fe000U == (0x7fe000U & vlSelf->__PVT__dp__DOT__pipeline_reg_3__DOT__dataReg_res)));
    vlSelf->__PVT__dp__DOT__pipeline_reg_2_io_out_ready 
        = (1U & ((~ (IData)(vlSelf->__PVT__dp__DOT__pipeline_reg_3__DOT__validReg)) 
                 | (IData)(vlSelf->__PVT__dp__DOT__pipeline_reg_3_io_out_ready)));
    vlSelf->__PVT__dp__DOT__fmul__DOT__shiftLimit = 
        ((0xffU & ((IData)(1U) + (IData)(vlSelf->__PVT__dp__DOT__fmul__DOT__resultExpNoShift))) 
         <= (IData)(vlSelf->__PVT__dp__DOT__fmul__DOT__lzc));
    vlSelf->__PVT__dp__DOT__fmul_1__DOT__shiftLimit 
        = ((0xffU & ((IData)(1U) + (IData)(vlSelf->__PVT__dp__DOT__fmul_1__DOT__resultExpNoShift))) 
           <= (IData)(vlSelf->__PVT__dp__DOT__fmul_1__DOT__lzc));
    vlSelf->__PVT__dp__DOT__fmul_2__DOT__shiftLimit 
        = ((0xffU & ((IData)(1U) + (IData)(vlSelf->__PVT__dp__DOT__fmul_2__DOT__resultExpNoShift))) 
           <= (IData)(vlSelf->__PVT__dp__DOT__fmul_2__DOT__lzc));
    vlSelf->__PVT__dp__DOT__fmul_3__DOT__shiftLimit 
        = ((0xffU & ((IData)(1U) + (IData)(vlSelf->__PVT__dp__DOT__fmul_3__DOT__resultExpNoShift))) 
           <= (IData)(vlSelf->__PVT__dp__DOT__fmul_3__DOT__lzc));
    vlSelf->__PVT__dp__DOT__fcvt_1__DOT__subnormal_rounder_io_in 
        = ((0xcU < (0xffU & ((IData)(0x71U) - (vlSelf->__PVT__dp__DOT__pipeline_reg_3__DOT__dataReg_res 
                                               >> 0x17U))))
            ? 0U : (0x3ffU & ((IData)(vlSelf->__PVT__dp__DOT__fcvt_1__DOT__shiftRightJam__DOT___io_out_T) 
                              >> 1U)));
    vlSelf->__PVT__dp__DOT__fcvt_1__DOT__subnormal_rounder__DOT__r_up 
        = (((0xcU >= (0xffU & ((IData)(0x71U) - (vlSelf->__PVT__dp__DOT__pipeline_reg_3__DOT__dataReg_res 
                                                 >> 0x17U)))) 
            & (IData)(vlSelf->__PVT__dp__DOT__fcvt_1__DOT__shiftRightJam__DOT___io_out_T)) 
           & (((0U != ((IData)(vlSelf->__PVT__dp__DOT__fcvt_1__DOT__shiftRightJam_io_in) 
                       & (((0xffffU & ((IData)(1U) 
                                       << (0xfU & ((IData)(1U) 
                                                   - 
                                                   (vlSelf->__PVT__dp__DOT__pipeline_reg_3__DOT__dataReg_res 
                                                    >> 0x17U))))) 
                           - (IData)(1U)) | ((0xcU 
                                              < (0xffU 
                                                 & ((IData)(0x71U) 
                                                    - 
                                                    (vlSelf->__PVT__dp__DOT__pipeline_reg_3__DOT__dataReg_res 
                                                     >> 0x17U))))
                                              ? 0xfffU
                                              : 0U)))) 
               | (0U != (0xfffU & vlSelf->__PVT__dp__DOT__pipeline_reg_3__DOT__dataReg_res))) 
              | ((0xcU >= (0xffU & ((IData)(0x71U) 
                                    - (vlSelf->__PVT__dp__DOT__pipeline_reg_3__DOT__dataReg_res 
                                       >> 0x17U)))) 
                 & ((IData)(vlSelf->__PVT__dp__DOT__fcvt_1__DOT__shiftRightJam__DOT___io_out_T) 
                    >> 1U))));
    vlSelf->__PVT__dp__DOT__fcvt_1__DOT__expOverflow 
        = ((IData)(vlSelf->__PVT__dp__DOT__fcvt_1__DOT__normal_rounder_io_cout)
            ? VL_LTS_III(9, 0x1dU, (0x1ffU & ((0xffU 
                                               & (vlSelf->__PVT__dp__DOT__pipeline_reg_3__DOT__dataReg_res 
                                                  >> 0x17U)) 
                                              - (IData)(0x70U))))
            : VL_LTS_III(9, 0x1eU, (0x1ffU & ((0xffU 
                                               & (vlSelf->__PVT__dp__DOT__pipeline_reg_3__DOT__dataReg_res 
                                                  >> 0x17U)) 
                                              - (IData)(0x70U)))));
    vlSelf->__PVT__dp__DOT__pipeline_reg_3__DOT___T 
        = ((IData)(vlSelf->__PVT__dp__DOT__pipeline_reg_2_io_out_ready) 
           & (IData)(vlSelf->__PVT__dp__DOT__pipeline_reg_2__DOT__validReg));
    vlSelf->__PVT__dp__DOT__pipeline_reg_1_io_out_ready 
        = (1U & ((~ (IData)(vlSelf->__PVT__dp__DOT__pipeline_reg_2__DOT__validReg)) 
                 | (IData)(vlSelf->__PVT__dp__DOT__pipeline_reg_2_io_out_ready)));
    vlSelf->__PVT__dp__DOT__fmul__DOT___resultSigShifted_T 
        = ((IData)(vlSelf->__PVT__dp__DOT__fmul__DOT__shiftLimit)
            ? (IData)(vlSelf->__PVT__dp__DOT__fmul__DOT__resultExpNoShift)
            : (IData)(vlSelf->__PVT__dp__DOT__fmul__DOT__lzc));
    vlSelf->__PVT__dp__DOT__fmul_1__DOT___resultSigShifted_T 
        = ((IData)(vlSelf->__PVT__dp__DOT__fmul_1__DOT__shiftLimit)
            ? (IData)(vlSelf->__PVT__dp__DOT__fmul_1__DOT__resultExpNoShift)
            : (IData)(vlSelf->__PVT__dp__DOT__fmul_1__DOT__lzc));
    vlSelf->__PVT__dp__DOT__fmul_2__DOT___resultSigShifted_T 
        = ((IData)(vlSelf->__PVT__dp__DOT__fmul_2__DOT__shiftLimit)
            ? (IData)(vlSelf->__PVT__dp__DOT__fmul_2__DOT__resultExpNoShift)
            : (IData)(vlSelf->__PVT__dp__DOT__fmul_2__DOT__lzc));
    vlSelf->__PVT__dp__DOT__fmul_3__DOT___resultSigShifted_T 
        = ((IData)(vlSelf->__PVT__dp__DOT__fmul_3__DOT__shiftLimit)
            ? (IData)(vlSelf->__PVT__dp__DOT__fmul_3__DOT__resultExpNoShift)
            : (IData)(vlSelf->__PVT__dp__DOT__fmul_3__DOT__lzc));
    vlSelf->__PVT__dp__DOT__fcvt_1__DOT___common_exp_T_4 
        = (VL_LTES_III(9, 1U, (0x1ffU & ((0xffU & (vlSelf->__PVT__dp__DOT__pipeline_reg_3__DOT__dataReg_res 
                                                   >> 0x17U)) 
                                         - (IData)(0x70U)))) 
           & (~ (IData)(vlSelf->__PVT__dp__DOT__fcvt_1__DOT__expOverflow)));
    vlSelf->__PVT__dp__DOT__pipeline_reg_3__DOT___GEN_1 
        = ((IData)(vlSelf->__PVT__dp__DOT__pipeline_reg_3__DOT___T) 
           | ((~ (IData)(vlSelf->__PVT__dp__DOT__pipeline_reg_3_io_out_ready)) 
              & (IData)(vlSelf->__PVT__dp__DOT__pipeline_reg_3__DOT__validReg)));
    vlSelf->__PVT__dp__DOT__pipeline_reg_2__DOT___T 
        = ((IData)(vlSelf->__PVT__dp__DOT__pipeline_reg_1_io_out_ready) 
           & (IData)(vlSelf->__PVT__dp__DOT__pipeline_reg_1__DOT__validReg));
    vlSelf->__PVT__dp__DOT__pipeline_reg_io_out_ready 
        = (1U & ((~ (IData)(vlSelf->__PVT__dp__DOT__pipeline_reg_1__DOT__validReg)) 
                 | (IData)(vlSelf->__PVT__dp__DOT__pipeline_reg_1_io_out_ready)));
    vlSelf->__PVT__dp_io_out_bits_result = ((IData)(vlSelf->__PVT__dp__DOT__pipeline_reg_3__DOT__dataReg_ctrl_mixPc)
                                             ? vlSelf->__PVT__dp__DOT__pipeline_reg_3__DOT__dataReg_res
                                             : (0xffff0000U 
                                                | ((0x8000U 
                                                    & ((vlSelf->__PVT__dp__DOT__pipeline_reg_3__DOT__dataReg_res 
                                                        >> 0x10U) 
                                                       & ((~ (IData)(
                                                                     ((0x7f800000U 
                                                                       == 
                                                                       (0x7f800000U 
                                                                        & vlSelf->__PVT__dp__DOT__pipeline_reg_3__DOT__dataReg_res)) 
                                                                      & (0U 
                                                                         != 
                                                                         (0x7fffffU 
                                                                          & vlSelf->__PVT__dp__DOT__pipeline_reg_3__DOT__dataReg_res))))) 
                                                          << 0xfU))) 
                                                   | ((0x7c00U 
                                                       & ((((0xffU 
                                                             == 
                                                             (0xffU 
                                                              & (vlSelf->__PVT__dp__DOT__pipeline_reg_3__DOT__dataReg_res 
                                                                 >> 0x17U)))
                                                             ? 0x1fU
                                                             : 0U) 
                                                           | ((0xffU 
                                                               == 
                                                               (0xffU 
                                                                & (vlSelf->__PVT__dp__DOT__pipeline_reg_3__DOT__dataReg_res 
                                                                   >> 0x17U)))
                                                               ? 0U
                                                               : 
                                                              ((((VL_LTES_III(9, 1U, 
                                                                              (0x1ffU 
                                                                               & ((0xffU 
                                                                                & (vlSelf->__PVT__dp__DOT__pipeline_reg_3__DOT__dataReg_res 
                                                                                >> 0x17U)) 
                                                                                - (IData)(0x70U)))) 
                                                                  & (IData)(vlSelf->__PVT__dp__DOT__fcvt_1__DOT__expOverflow))
                                                                  ? 0x1fU
                                                                  : 0U) 
                                                                | ((IData)(vlSelf->__PVT__dp__DOT__fcvt_1__DOT___common_exp_T_4)
                                                                    ? 
                                                                   (((0xffU 
                                                                      & (vlSelf->__PVT__dp__DOT__pipeline_reg_3__DOT__dataReg_res 
                                                                         >> 0x17U)) 
                                                                     - (IData)(0x10U)) 
                                                                    + (IData)(vlSelf->__PVT__dp__DOT__fcvt_1__DOT__normal_rounder_io_cout))
                                                                    : 0U)) 
                                                               | (VL_GTS_III(9, 1U, 
                                                                             (0x1ffU 
                                                                              & ((0xffU 
                                                                                & (vlSelf->__PVT__dp__DOT__pipeline_reg_3__DOT__dataReg_res 
                                                                                >> 0x17U)) 
                                                                                - (IData)(0x70U)))) 
                                                                  & ((IData)(vlSelf->__PVT__dp__DOT__fcvt_1__DOT__subnormal_rounder__DOT__r_up) 
                                                                     & (0x3ffU 
                                                                        == (IData)(vlSelf->__PVT__dp__DOT__fcvt_1__DOT__subnormal_rounder_io_in))))))) 
                                                          << 0xaU)) 
                                                      | (0x3ffU 
                                                         & (((0xffU 
                                                              == 
                                                              (0xffU 
                                                               & (vlSelf->__PVT__dp__DOT__pipeline_reg_3__DOT__dataReg_res 
                                                                  >> 0x17U)))
                                                              ? 
                                                             ((IData)(
                                                                      (0U 
                                                                       != 
                                                                       (0x7fffffU 
                                                                        & vlSelf->__PVT__dp__DOT__pipeline_reg_3__DOT__dataReg_res))) 
                                                              << 9U)
                                                              : 0U) 
                                                            | ((0xffU 
                                                                == 
                                                                (0xffU 
                                                                 & (vlSelf->__PVT__dp__DOT__pipeline_reg_3__DOT__dataReg_res 
                                                                    >> 0x17U)))
                                                                ? 0U
                                                                : 
                                                               (((IData)(vlSelf->__PVT__dp__DOT__fcvt_1__DOT___common_exp_T_4)
                                                                  ? 
                                                                 ((vlSelf->__PVT__dp__DOT__pipeline_reg_3__DOT__dataReg_res 
                                                                   >> 0xdU) 
                                                                  + (IData)(vlSelf->__PVT__dp__DOT__fcvt_1__DOT__normal_rounder__DOT__r_up))
                                                                  : 0U) 
                                                                | (VL_GTS_III(9, 1U, 
                                                                              (0x1ffU 
                                                                               & ((0xffU 
                                                                                & (vlSelf->__PVT__dp__DOT__pipeline_reg_3__DOT__dataReg_res 
                                                                                >> 0x17U)) 
                                                                                - (IData)(0x70U))))
                                                                    ? 
                                                                   ((IData)(vlSelf->__PVT__dp__DOT__fcvt_1__DOT__subnormal_rounder_io_in) 
                                                                    + (IData)(vlSelf->__PVT__dp__DOT__fcvt_1__DOT__subnormal_rounder__DOT__r_up))
                                                                    : 0U)))))))));
    vlSelf->__PVT__dp__DOT__pipeline_reg_2__DOT___GEN_1 
        = ((IData)(vlSelf->__PVT__dp__DOT__pipeline_reg_2__DOT___T) 
           | ((~ (IData)(vlSelf->__PVT__dp__DOT__pipeline_reg_2_io_out_ready)) 
              & (IData)(vlSelf->__PVT__dp__DOT__pipeline_reg_2__DOT__validReg)));
    vlSelf->__PVT__dp__DOT__pipeline_reg_1__DOT___T 
        = ((IData)(vlSelf->__PVT__dp__DOT__pipeline_reg_io_out_ready) 
           & (IData)(vlSelf->__PVT__dp__DOT__pipeline_reg__DOT__validReg));
    vlSelf->__PVT__dp__DOT__pipeline_reg_io_in_ready 
        = (1U & ((~ (IData)(vlSelf->__PVT__dp__DOT__pipeline_reg__DOT__validReg)) 
                 | (IData)(vlSelf->__PVT__dp__DOT__pipeline_reg_io_out_ready)));
    vlSelf->__PVT__dp__DOT__pipeline_reg_1__DOT___GEN_1 
        = ((IData)(vlSelf->__PVT__dp__DOT__pipeline_reg_1__DOT___T) 
           | ((~ (IData)(vlSelf->__PVT__dp__DOT__pipeline_reg_1_io_out_ready)) 
              & (IData)(vlSelf->__PVT__dp__DOT__pipeline_reg_1__DOT__validReg)));
    vlSelf->__PVT__dp__DOT__pipeline_reg__DOT___T = 
        ((IData)(vlSelf->__PVT__dp__DOT__pipeline_reg_io_in_ready) 
         & (IData)(vlSelf->__PVT__dp_in_valid));
    vlSelf->__VdfgTmp_h298fb594__0 = ((3U == (IData)(vlSelf->__PVT__state)) 
                                      & (IData)(vlSelf->__PVT__dp__DOT__pipeline_reg_io_in_ready));
    vlSelf->__VdfgTmp_hda1a2523__0 = ((2U == (IData)(vlSelf->__PVT__state)) 
                                      & (IData)(vlSelf->__PVT__dp__DOT__pipeline_reg_io_in_ready));
    __VdfgTmp_h6731f200__0 = ((4U == (IData)(vlSelf->__PVT__state)) 
                              & (IData)(vlSelf->__PVT__dp__DOT__pipeline_reg_io_in_ready));
    vlSelf->io_in_ready = (1U & ((~ (IData)(vlSelf->__PVT__dp_in_valid)) 
                                 | (((IData)(vlSelf->__PVT__dp__DOT__pipeline_reg_io_in_ready) 
                                     & (IData)(__PVT___T_2)) 
                                    | (4U == (IData)(vlSelf->__PVT__state)))));
    vlSelf->__PVT__dp__DOT__pipeline_reg__DOT___GEN_1 
        = ((IData)(vlSelf->__PVT__dp__DOT__pipeline_reg__DOT___T) 
           | ((~ (IData)(vlSelf->__PVT__dp__DOT__pipeline_reg_io_out_ready)) 
              & (IData)(vlSelf->__PVT__dp__DOT__pipeline_reg__DOT__validReg)));
    vlSelf->__PVT___GEN_11 = ((IData)(__VdfgTmp_h6731f200__0)
                               ? 0U : (IData)(vlSelf->__PVT__state));
    vlSelf->__PVT___T_8 = ((IData)(vlSelf->io_in_ready) 
                           & (IData)(vlSymsp->TOP.io_in_valid));
    vlSelf->__PVT___GEN_65 = ((((0U == (IData)(vlSelf->__PVT__state)) 
                                | ((IData)(__PVT___T_2) 
                                   | ((~ (IData)(vlSymsp->TOP.io_in_bits_ctrl_mixPcMode)) 
                                      & (4U == (IData)(vlSelf->__PVT__state))))) 
                               & (IData)(vlSelf->__PVT___T_8)) 
                              | (((1U == (IData)(vlSelf->__PVT__state)) 
                                  & (IData)(vlSelf->__PVT__dp__DOT__pipeline_reg_io_in_ready))
                                  ? (IData)(vlSelf->__PVT__dp_in_valid)
                                  : ((IData)(vlSelf->__VdfgTmp_hda1a2523__0)
                                      ? ((~ (IData)(vlSymsp->TOP.io_in_bits_ctrl_mixPcMode)) 
                                         & (IData)(vlSelf->__PVT__dp_in_valid))
                                      : ((IData)(vlSelf->__VdfgTmp_h298fb594__0)
                                          ? (IData)(vlSelf->__PVT__dp_in_valid)
                                          : ((~ (IData)(__VdfgTmp_h6731f200__0)) 
                                             & (IData)(vlSelf->__PVT__dp_in_valid))))));
}

VL_ATTR_COLD void VTop_Threadgroup___stl_sequent__TOP__Top__DOT__tc__DOT__ot__DOT__tg_1__0(VTop_Threadgroup* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VTop_Threadgroup___stl_sequent__TOP__Top__DOT__tc__DOT__ot__DOT__tg_1__0\n"); );
    // Init
    CData/*0:0*/ __VdfgTmp_h6731f200__0;
    __VdfgTmp_h6731f200__0 = 0;
    // Body
    vlSelf->__PVT___T_1 = (2U == (IData)(vlSelf->__PVT__state));
    if ((0xffffU == (vlSelf->__PVT__dp_in_c_0 >> 0x10U))) {
        vlSelf->__PVT__dp__DOT__fcvt__DOT__subnormal_shamt_lzc_io_in 
            = (0x3ffU & vlSelf->__PVT__dp_in_c_0);
        vlSelf->__PVT__dp__DOT__fcvt__DOT__fp_in_exp 
            = (0x1fU & (vlSelf->__PVT__dp_in_c_0 >> 0xaU));
    } else {
        vlSelf->__PVT__dp__DOT__fcvt__DOT__subnormal_shamt_lzc_io_in = 0x200U;
        vlSelf->__PVT__dp__DOT__fcvt__DOT__fp_in_exp = 0x1fU;
    }
    vlSelf->__PVT__dp__DOT__fcvt__DOT__decode_in_sigNotZero 
        = (1U & ((~ (IData)((0xffffU == (vlSelf->__PVT__dp_in_c_0 
                                         >> 0x10U)))) 
                 | (0U != (0x3ffU & vlSelf->__PVT__dp_in_c_0))));
    vlSelf->__PVT__dp__DOT__fcvt__DOT__subnormal_shamt_lzc_io_out 
        = ((1U & ((~ (IData)((0xffffU == (vlSelf->__PVT__dp_in_c_0 
                                          >> 0x10U)))) 
                  | (vlSelf->__PVT__dp_in_c_0 >> 9U)))
            ? 0U : ((IData)((0xffff0100U == (0xffff0100U 
                                             & vlSelf->__PVT__dp_in_c_0)))
                     ? 1U : ((IData)((0xffff0080U == 
                                      (0xffff0080U 
                                       & vlSelf->__PVT__dp_in_c_0)))
                              ? 2U : ((IData)((0xffff0040U 
                                               == (0xffff0040U 
                                                   & vlSelf->__PVT__dp_in_c_0)))
                                       ? 3U : ((IData)(
                                                       (0xffff0020U 
                                                        == 
                                                        (0xffff0020U 
                                                         & vlSelf->__PVT__dp_in_c_0)))
                                                ? 4U
                                                : ((IData)(
                                                           (0xffff0010U 
                                                            == 
                                                            (0xffff0010U 
                                                             & vlSelf->__PVT__dp_in_c_0)))
                                                    ? 5U
                                                    : 
                                                   ((IData)(
                                                            (0xffff0008U 
                                                             == 
                                                             (0xffff0008U 
                                                              & vlSelf->__PVT__dp_in_c_0)))
                                                     ? 6U
                                                     : 
                                                    ((IData)(
                                                             (0xffff0004U 
                                                              == 
                                                              (0xffff0004U 
                                                               & vlSelf->__PVT__dp_in_c_0)))
                                                      ? 7U
                                                      : 
                                                     ((IData)(
                                                              (0xffff0002U 
                                                               == 
                                                               (0xffff0002U 
                                                                & vlSelf->__PVT__dp_in_c_0)))
                                                       ? 8U
                                                       : 9U)))))))));
    vlSelf->__PVT___GEN_68 = ((~ (IData)(vlSymsp->TOP.io_out_ready)) 
                              & (IData)(vlSelf->__PVT__tg_out_valid));
    vlSelf->__PVT__dp__DOT__fmul__DOT__resultSign = 
        (1U & (((IData)(vlSelf->__PVT__dp_in_va_0) 
                ^ vlSelf->__PVT__dp_in_vb_qual1_2_data[0U]) 
               >> 0xfU));
    vlSelf->__PVT__dp__DOT__fmul__DOT__hasNaN = ((IData)(
                                                         ((0x7c00U 
                                                           == 
                                                           (0x7c00U 
                                                            & (IData)(vlSelf->__PVT__dp_in_va_0))) 
                                                          & (0U 
                                                             != 
                                                             (0x3ffU 
                                                              & (IData)(vlSelf->__PVT__dp_in_va_0))))) 
                                                 | (IData)(
                                                           ((0x7c00U 
                                                             == 
                                                             (0x7c00U 
                                                              & vlSelf->__PVT__dp_in_vb_qual1_2_data[0U])) 
                                                            & (0U 
                                                               != 
                                                               (0x3ffU 
                                                                & vlSelf->__PVT__dp_in_vb_qual1_2_data[0U])))));
    vlSelf->__PVT__dp__DOT__fmul__DOT__hasInf = ((IData)(
                                                         ((0x7c00U 
                                                           == 
                                                           (0x7c00U 
                                                            & (IData)(vlSelf->__PVT__dp_in_va_0))) 
                                                          & (~ (IData)(
                                                                       (0U 
                                                                        != 
                                                                        (0x3ffU 
                                                                         & (IData)(vlSelf->__PVT__dp_in_va_0))))))) 
                                                 | (IData)(
                                                           ((0x7c00U 
                                                             == 
                                                             (0x7c00U 
                                                              & vlSelf->__PVT__dp_in_vb_qual1_2_data[0U])) 
                                                            & (~ (IData)(
                                                                         (0U 
                                                                          != 
                                                                          (0x3ffU 
                                                                           & vlSelf->__PVT__dp_in_vb_qual1_2_data[0U])))))));
    vlSelf->__PVT__dp__DOT__fmul_1__DOT__resultSign 
        = (IData)((((IData)(vlSelf->__PVT__dp_in_va_1) 
                    >> 0xfU) ^ (vlSelf->__PVT__dp_in_vb_qual1_2_data[0U] 
                                >> 0x1fU)));
    vlSelf->__PVT__dp__DOT__fmul_1__DOT__hasNaN = ((IData)(
                                                           ((0x7c00U 
                                                             == 
                                                             (0x7c00U 
                                                              & (IData)(vlSelf->__PVT__dp_in_va_1))) 
                                                            & (0U 
                                                               != 
                                                               (0x3ffU 
                                                                & (IData)(vlSelf->__PVT__dp_in_va_1))))) 
                                                   | (IData)(
                                                             ((0x7c000000U 
                                                               == 
                                                               (0x7c000000U 
                                                                & vlSelf->__PVT__dp_in_vb_qual1_2_data[0U])) 
                                                              & (0U 
                                                                 != 
                                                                 (0x3ffU 
                                                                  & (vlSelf->__PVT__dp_in_vb_qual1_2_data[0U] 
                                                                     >> 0x10U))))));
    vlSelf->__PVT__dp__DOT__fmul_1__DOT__hasInf = ((IData)(
                                                           ((0x7c00U 
                                                             == 
                                                             (0x7c00U 
                                                              & (IData)(vlSelf->__PVT__dp_in_va_1))) 
                                                            & (~ (IData)(
                                                                         (0U 
                                                                          != 
                                                                          (0x3ffU 
                                                                           & (IData)(vlSelf->__PVT__dp_in_va_1))))))) 
                                                   | (IData)(
                                                             ((0x7c000000U 
                                                               == 
                                                               (0x7c000000U 
                                                                & vlSelf->__PVT__dp_in_vb_qual1_2_data[0U])) 
                                                              & (~ (IData)(
                                                                           (0U 
                                                                            != 
                                                                            (0x3ffU 
                                                                             & (vlSelf->__PVT__dp_in_vb_qual1_2_data[0U] 
                                                                                >> 0x10U))))))));
    vlSelf->__PVT__dp__DOT__fmul_2__DOT__resultSign 
        = (1U & (((IData)(vlSelf->__PVT__dp_in_va_2) 
                  ^ vlSelf->__PVT__dp_in_vb_qual1_2_data[1U]) 
                 >> 0xfU));
    vlSelf->__PVT__dp__DOT__fmul_2__DOT__hasNaN = ((IData)(
                                                           ((0x7c00U 
                                                             == 
                                                             (0x7c00U 
                                                              & (IData)(vlSelf->__PVT__dp_in_va_2))) 
                                                            & (0U 
                                                               != 
                                                               (0x3ffU 
                                                                & (IData)(vlSelf->__PVT__dp_in_va_2))))) 
                                                   | (IData)(
                                                             ((0x7c00U 
                                                               == 
                                                               (0x7c00U 
                                                                & vlSelf->__PVT__dp_in_vb_qual1_2_data[1U])) 
                                                              & (0U 
                                                                 != 
                                                                 (0x3ffU 
                                                                  & vlSelf->__PVT__dp_in_vb_qual1_2_data[1U])))));
    vlSelf->__PVT__dp__DOT__fmul_2__DOT__hasInf = ((IData)(
                                                           ((0x7c00U 
                                                             == 
                                                             (0x7c00U 
                                                              & (IData)(vlSelf->__PVT__dp_in_va_2))) 
                                                            & (~ (IData)(
                                                                         (0U 
                                                                          != 
                                                                          (0x3ffU 
                                                                           & (IData)(vlSelf->__PVT__dp_in_va_2))))))) 
                                                   | (IData)(
                                                             ((0x7c00U 
                                                               == 
                                                               (0x7c00U 
                                                                & vlSelf->__PVT__dp_in_vb_qual1_2_data[1U])) 
                                                              & (~ (IData)(
                                                                           (0U 
                                                                            != 
                                                                            (0x3ffU 
                                                                             & vlSelf->__PVT__dp_in_vb_qual1_2_data[1U])))))));
    vlSelf->__PVT__dp__DOT__fmul_3__DOT__resultSign 
        = (IData)((((IData)(vlSelf->__PVT__dp_in_va_3) 
                    >> 0xfU) ^ (vlSelf->__PVT__dp_in_vb_qual1_2_data[1U] 
                                >> 0x1fU)));
    vlSelf->__PVT__dp__DOT__fmul_3__DOT__hasNaN = ((IData)(
                                                           ((0x7c00U 
                                                             == 
                                                             (0x7c00U 
                                                              & (IData)(vlSelf->__PVT__dp_in_va_3))) 
                                                            & (0U 
                                                               != 
                                                               (0x3ffU 
                                                                & (IData)(vlSelf->__PVT__dp_in_va_3))))) 
                                                   | (IData)(
                                                             ((0x7c000000U 
                                                               == 
                                                               (0x7c000000U 
                                                                & vlSelf->__PVT__dp_in_vb_qual1_2_data[1U])) 
                                                              & (0U 
                                                                 != 
                                                                 (0x3ffU 
                                                                  & (vlSelf->__PVT__dp_in_vb_qual1_2_data[1U] 
                                                                     >> 0x10U))))));
    vlSelf->__PVT__dp__DOT__fmul_3__DOT__hasInf = ((IData)(
                                                           ((0x7c00U 
                                                             == 
                                                             (0x7c00U 
                                                              & (IData)(vlSelf->__PVT__dp_in_va_3))) 
                                                            & (~ (IData)(
                                                                         (0U 
                                                                          != 
                                                                          (0x3ffU 
                                                                           & (IData)(vlSelf->__PVT__dp_in_va_3))))))) 
                                                   | (IData)(
                                                             ((0x7c000000U 
                                                               == 
                                                               (0x7c000000U 
                                                                & vlSelf->__PVT__dp_in_vb_qual1_2_data[1U])) 
                                                              & (~ (IData)(
                                                                           (0U 
                                                                            != 
                                                                            (0x3ffU 
                                                                             & (vlSelf->__PVT__dp_in_vb_qual1_2_data[1U] 
                                                                                >> 0x10U))))))));
    vlSelf->__PVT__dp__DOT__fmul__DOT__resultSigNoShift 
        = (0x3fffffU & ((((IData)((0U != (0x1fU & ((IData)(vlSelf->__PVT__dp_in_va_0) 
                                                   >> 0xaU)))) 
                          << 0xaU) | (0x3ffU & (IData)(vlSelf->__PVT__dp_in_va_0))) 
                        * (((IData)((0U != (0x1fU & 
                                            (vlSelf->__PVT__dp_in_vb_qual1_2_data[0U] 
                                             >> 0xaU)))) 
                            << 0xaU) | (0x3ffU & vlSelf->__PVT__dp_in_vb_qual1_2_data[0U]))));
    vlSelf->__PVT__dp__DOT__fmul__DOT__lzcRaw = (0xfU 
                                                 & (((0U 
                                                      != 
                                                      (0x1fU 
                                                       & ((IData)(vlSelf->__PVT__dp_in_va_0) 
                                                          >> 0xaU)))
                                                      ? 0U
                                                      : 
                                                     ((0x200U 
                                                       & (IData)(vlSelf->__PVT__dp_in_va_0))
                                                       ? 1U
                                                       : 
                                                      ((0x100U 
                                                        & (IData)(vlSelf->__PVT__dp_in_va_0))
                                                        ? 2U
                                                        : 
                                                       ((0x80U 
                                                         & (IData)(vlSelf->__PVT__dp_in_va_0))
                                                         ? 3U
                                                         : 
                                                        ((0x40U 
                                                          & (IData)(vlSelf->__PVT__dp_in_va_0))
                                                          ? 4U
                                                          : 
                                                         ((0x20U 
                                                           & (IData)(vlSelf->__PVT__dp_in_va_0))
                                                           ? 5U
                                                           : 
                                                          ((0x10U 
                                                            & (IData)(vlSelf->__PVT__dp_in_va_0))
                                                            ? 6U
                                                            : 
                                                           ((8U 
                                                             & (IData)(vlSelf->__PVT__dp_in_va_0))
                                                             ? 7U
                                                             : 
                                                            ((4U 
                                                              & (IData)(vlSelf->__PVT__dp_in_va_0))
                                                              ? 8U
                                                              : 
                                                             ((2U 
                                                               & (IData)(vlSelf->__PVT__dp_in_va_0))
                                                               ? 9U
                                                               : 0xaU)))))))))) 
                                                    + 
                                                    ((0U 
                                                      != 
                                                      (0x1fU 
                                                       & (vlSelf->__PVT__dp_in_vb_qual1_2_data[0U] 
                                                          >> 0xaU)))
                                                      ? 0U
                                                      : 
                                                     ((0x200U 
                                                       & vlSelf->__PVT__dp_in_vb_qual1_2_data[0U])
                                                       ? 1U
                                                       : 
                                                      ((0x100U 
                                                        & vlSelf->__PVT__dp_in_vb_qual1_2_data[0U])
                                                        ? 2U
                                                        : 
                                                       ((0x80U 
                                                         & vlSelf->__PVT__dp_in_vb_qual1_2_data[0U])
                                                         ? 3U
                                                         : 
                                                        ((0x40U 
                                                          & vlSelf->__PVT__dp_in_vb_qual1_2_data[0U])
                                                          ? 4U
                                                          : 
                                                         ((0x20U 
                                                           & vlSelf->__PVT__dp_in_vb_qual1_2_data[0U])
                                                           ? 5U
                                                           : 
                                                          ((0x10U 
                                                            & vlSelf->__PVT__dp_in_vb_qual1_2_data[0U])
                                                            ? 6U
                                                            : 
                                                           ((8U 
                                                             & vlSelf->__PVT__dp_in_vb_qual1_2_data[0U])
                                                             ? 7U
                                                             : 
                                                            ((4U 
                                                              & vlSelf->__PVT__dp_in_vb_qual1_2_data[0U])
                                                              ? 8U
                                                              : 
                                                             ((2U 
                                                               & vlSelf->__PVT__dp_in_vb_qual1_2_data[0U])
                                                               ? 9U
                                                               : 0xaU))))))))))));
    vlSelf->__PVT__dp__DOT__fmul_1__DOT__resultSigNoShift 
        = (0x3fffffU & ((((IData)((0U != (0x1fU & ((IData)(vlSelf->__PVT__dp_in_va_1) 
                                                   >> 0xaU)))) 
                          << 0xaU) | (0x3ffU & (IData)(vlSelf->__PVT__dp_in_va_1))) 
                        * (((IData)((0U != (0x1fU & 
                                            (vlSelf->__PVT__dp_in_vb_qual1_2_data[0U] 
                                             >> 0x1aU)))) 
                            << 0xaU) | (0x3ffU & (vlSelf->__PVT__dp_in_vb_qual1_2_data[0U] 
                                                  >> 0x10U)))));
    vlSelf->__PVT__dp__DOT__fmul_1__DOT__lzcRaw = (0xfU 
                                                   & (((0U 
                                                        != 
                                                        (0x1fU 
                                                         & ((IData)(vlSelf->__PVT__dp_in_va_1) 
                                                            >> 0xaU)))
                                                        ? 0U
                                                        : 
                                                       ((0x200U 
                                                         & (IData)(vlSelf->__PVT__dp_in_va_1))
                                                         ? 1U
                                                         : 
                                                        ((0x100U 
                                                          & (IData)(vlSelf->__PVT__dp_in_va_1))
                                                          ? 2U
                                                          : 
                                                         ((0x80U 
                                                           & (IData)(vlSelf->__PVT__dp_in_va_1))
                                                           ? 3U
                                                           : 
                                                          ((0x40U 
                                                            & (IData)(vlSelf->__PVT__dp_in_va_1))
                                                            ? 4U
                                                            : 
                                                           ((0x20U 
                                                             & (IData)(vlSelf->__PVT__dp_in_va_1))
                                                             ? 5U
                                                             : 
                                                            ((0x10U 
                                                              & (IData)(vlSelf->__PVT__dp_in_va_1))
                                                              ? 6U
                                                              : 
                                                             ((8U 
                                                               & (IData)(vlSelf->__PVT__dp_in_va_1))
                                                               ? 7U
                                                               : 
                                                              ((4U 
                                                                & (IData)(vlSelf->__PVT__dp_in_va_1))
                                                                ? 8U
                                                                : 
                                                               ((2U 
                                                                 & (IData)(vlSelf->__PVT__dp_in_va_1))
                                                                 ? 9U
                                                                 : 0xaU)))))))))) 
                                                      + 
                                                      ((0U 
                                                        != 
                                                        (0x1fU 
                                                         & (vlSelf->__PVT__dp_in_vb_qual1_2_data[0U] 
                                                            >> 0x1aU)))
                                                        ? 0U
                                                        : 
                                                       ((0x2000000U 
                                                         & vlSelf->__PVT__dp_in_vb_qual1_2_data[0U])
                                                         ? 1U
                                                         : 
                                                        ((0x1000000U 
                                                          & vlSelf->__PVT__dp_in_vb_qual1_2_data[0U])
                                                          ? 2U
                                                          : 
                                                         ((0x800000U 
                                                           & vlSelf->__PVT__dp_in_vb_qual1_2_data[0U])
                                                           ? 3U
                                                           : 
                                                          ((0x400000U 
                                                            & vlSelf->__PVT__dp_in_vb_qual1_2_data[0U])
                                                            ? 4U
                                                            : 
                                                           ((0x200000U 
                                                             & vlSelf->__PVT__dp_in_vb_qual1_2_data[0U])
                                                             ? 5U
                                                             : 
                                                            ((0x100000U 
                                                              & vlSelf->__PVT__dp_in_vb_qual1_2_data[0U])
                                                              ? 6U
                                                              : 
                                                             ((0x80000U 
                                                               & vlSelf->__PVT__dp_in_vb_qual1_2_data[0U])
                                                               ? 7U
                                                               : 
                                                              ((0x40000U 
                                                                & vlSelf->__PVT__dp_in_vb_qual1_2_data[0U])
                                                                ? 8U
                                                                : 
                                                               ((0x20000U 
                                                                 & vlSelf->__PVT__dp_in_vb_qual1_2_data[0U])
                                                                 ? 9U
                                                                 : 0xaU))))))))))));
    vlSelf->__PVT__dp__DOT__fmul_2__DOT__resultSigNoShift 
        = (0x3fffffU & ((((IData)((0U != (0x1fU & ((IData)(vlSelf->__PVT__dp_in_va_2) 
                                                   >> 0xaU)))) 
                          << 0xaU) | (0x3ffU & (IData)(vlSelf->__PVT__dp_in_va_2))) 
                        * (((IData)((0U != (0x1fU & 
                                            (vlSelf->__PVT__dp_in_vb_qual1_2_data[1U] 
                                             >> 0xaU)))) 
                            << 0xaU) | (0x3ffU & vlSelf->__PVT__dp_in_vb_qual1_2_data[1U]))));
    vlSelf->__PVT__dp__DOT__fmul_2__DOT__lzcRaw = (0xfU 
                                                   & (((0U 
                                                        != 
                                                        (0x1fU 
                                                         & ((IData)(vlSelf->__PVT__dp_in_va_2) 
                                                            >> 0xaU)))
                                                        ? 0U
                                                        : 
                                                       ((0x200U 
                                                         & (IData)(vlSelf->__PVT__dp_in_va_2))
                                                         ? 1U
                                                         : 
                                                        ((0x100U 
                                                          & (IData)(vlSelf->__PVT__dp_in_va_2))
                                                          ? 2U
                                                          : 
                                                         ((0x80U 
                                                           & (IData)(vlSelf->__PVT__dp_in_va_2))
                                                           ? 3U
                                                           : 
                                                          ((0x40U 
                                                            & (IData)(vlSelf->__PVT__dp_in_va_2))
                                                            ? 4U
                                                            : 
                                                           ((0x20U 
                                                             & (IData)(vlSelf->__PVT__dp_in_va_2))
                                                             ? 5U
                                                             : 
                                                            ((0x10U 
                                                              & (IData)(vlSelf->__PVT__dp_in_va_2))
                                                              ? 6U
                                                              : 
                                                             ((8U 
                                                               & (IData)(vlSelf->__PVT__dp_in_va_2))
                                                               ? 7U
                                                               : 
                                                              ((4U 
                                                                & (IData)(vlSelf->__PVT__dp_in_va_2))
                                                                ? 8U
                                                                : 
                                                               ((2U 
                                                                 & (IData)(vlSelf->__PVT__dp_in_va_2))
                                                                 ? 9U
                                                                 : 0xaU)))))))))) 
                                                      + 
                                                      ((0U 
                                                        != 
                                                        (0x1fU 
                                                         & (vlSelf->__PVT__dp_in_vb_qual1_2_data[1U] 
                                                            >> 0xaU)))
                                                        ? 0U
                                                        : 
                                                       ((0x200U 
                                                         & vlSelf->__PVT__dp_in_vb_qual1_2_data[1U])
                                                         ? 1U
                                                         : 
                                                        ((0x100U 
                                                          & vlSelf->__PVT__dp_in_vb_qual1_2_data[1U])
                                                          ? 2U
                                                          : 
                                                         ((0x80U 
                                                           & vlSelf->__PVT__dp_in_vb_qual1_2_data[1U])
                                                           ? 3U
                                                           : 
                                                          ((0x40U 
                                                            & vlSelf->__PVT__dp_in_vb_qual1_2_data[1U])
                                                            ? 4U
                                                            : 
                                                           ((0x20U 
                                                             & vlSelf->__PVT__dp_in_vb_qual1_2_data[1U])
                                                             ? 5U
                                                             : 
                                                            ((0x10U 
                                                              & vlSelf->__PVT__dp_in_vb_qual1_2_data[1U])
                                                              ? 6U
                                                              : 
                                                             ((8U 
                                                               & vlSelf->__PVT__dp_in_vb_qual1_2_data[1U])
                                                               ? 7U
                                                               : 
                                                              ((4U 
                                                                & vlSelf->__PVT__dp_in_vb_qual1_2_data[1U])
                                                                ? 8U
                                                                : 
                                                               ((2U 
                                                                 & vlSelf->__PVT__dp_in_vb_qual1_2_data[1U])
                                                                 ? 9U
                                                                 : 0xaU))))))))))));
    vlSelf->__PVT__dp__DOT__fmul_3__DOT__resultSigNoShift 
        = (0x3fffffU & ((((IData)((0U != (0x1fU & ((IData)(vlSelf->__PVT__dp_in_va_3) 
                                                   >> 0xaU)))) 
                          << 0xaU) | (0x3ffU & (IData)(vlSelf->__PVT__dp_in_va_3))) 
                        * (((IData)((0U != (0x1fU & 
                                            (vlSelf->__PVT__dp_in_vb_qual1_2_data[1U] 
                                             >> 0x1aU)))) 
                            << 0xaU) | (0x3ffU & (vlSelf->__PVT__dp_in_vb_qual1_2_data[1U] 
                                                  >> 0x10U)))));
    vlSelf->__PVT__dp__DOT__fmul_3__DOT__lzcRaw = (0xfU 
                                                   & (((0U 
                                                        != 
                                                        (0x1fU 
                                                         & ((IData)(vlSelf->__PVT__dp_in_va_3) 
                                                            >> 0xaU)))
                                                        ? 0U
                                                        : 
                                                       ((0x200U 
                                                         & (IData)(vlSelf->__PVT__dp_in_va_3))
                                                         ? 1U
                                                         : 
                                                        ((0x100U 
                                                          & (IData)(vlSelf->__PVT__dp_in_va_3))
                                                          ? 2U
                                                          : 
                                                         ((0x80U 
                                                           & (IData)(vlSelf->__PVT__dp_in_va_3))
                                                           ? 3U
                                                           : 
                                                          ((0x40U 
                                                            & (IData)(vlSelf->__PVT__dp_in_va_3))
                                                            ? 4U
                                                            : 
                                                           ((0x20U 
                                                             & (IData)(vlSelf->__PVT__dp_in_va_3))
                                                             ? 5U
                                                             : 
                                                            ((0x10U 
                                                              & (IData)(vlSelf->__PVT__dp_in_va_3))
                                                              ? 6U
                                                              : 
                                                             ((8U 
                                                               & (IData)(vlSelf->__PVT__dp_in_va_3))
                                                               ? 7U
                                                               : 
                                                              ((4U 
                                                                & (IData)(vlSelf->__PVT__dp_in_va_3))
                                                                ? 8U
                                                                : 
                                                               ((2U 
                                                                 & (IData)(vlSelf->__PVT__dp_in_va_3))
                                                                 ? 9U
                                                                 : 0xaU)))))))))) 
                                                      + 
                                                      ((0U 
                                                        != 
                                                        (0x1fU 
                                                         & (vlSelf->__PVT__dp_in_vb_qual1_2_data[1U] 
                                                            >> 0x1aU)))
                                                        ? 0U
                                                        : 
                                                       ((0x2000000U 
                                                         & vlSelf->__PVT__dp_in_vb_qual1_2_data[1U])
                                                         ? 1U
                                                         : 
                                                        ((0x1000000U 
                                                          & vlSelf->__PVT__dp_in_vb_qual1_2_data[1U])
                                                          ? 2U
                                                          : 
                                                         ((0x800000U 
                                                           & vlSelf->__PVT__dp_in_vb_qual1_2_data[1U])
                                                           ? 3U
                                                           : 
                                                          ((0x400000U 
                                                            & vlSelf->__PVT__dp_in_vb_qual1_2_data[1U])
                                                            ? 4U
                                                            : 
                                                           ((0x200000U 
                                                             & vlSelf->__PVT__dp_in_vb_qual1_2_data[1U])
                                                             ? 5U
                                                             : 
                                                            ((0x100000U 
                                                              & vlSelf->__PVT__dp_in_vb_qual1_2_data[1U])
                                                              ? 6U
                                                              : 
                                                             ((0x80000U 
                                                               & vlSelf->__PVT__dp_in_vb_qual1_2_data[1U])
                                                               ? 7U
                                                               : 
                                                              ((0x40000U 
                                                                & vlSelf->__PVT__dp_in_vb_qual1_2_data[1U])
                                                                ? 8U
                                                                : 
                                                               ((0x20000U 
                                                                 & vlSelf->__PVT__dp_in_vb_qual1_2_data[1U])
                                                                 ? 9U
                                                                 : 0xaU))))))))))));
    vlSelf->__PVT__dp__DOT__fmul__DOT__hasZero = (1U 
                                                  & (((~ (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x1fU 
                                                                   & ((IData)(vlSelf->__PVT__dp_in_va_0) 
                                                                      >> 0xaU))))) 
                                                      & (~ (IData)(
                                                                   (0U 
                                                                    != 
                                                                    (0x3ffU 
                                                                     & (IData)(vlSelf->__PVT__dp_in_va_0)))))) 
                                                     | ((~ (IData)(
                                                                   (0U 
                                                                    != 
                                                                    (0x1fU 
                                                                     & (vlSelf->__PVT__dp_in_vb_qual1_2_data[0U] 
                                                                        >> 0xaU))))) 
                                                        & (~ (IData)(
                                                                     (0U 
                                                                      != 
                                                                      (0x3ffU 
                                                                       & vlSelf->__PVT__dp_in_vb_qual1_2_data[0U])))))));
    vlSelf->__PVT__dp__DOT__fmul_1__DOT__hasZero = 
        (1U & (((~ (IData)((0U != (0x1fU & ((IData)(vlSelf->__PVT__dp_in_va_1) 
                                            >> 0xaU))))) 
                & (~ (IData)((0U != (0x3ffU & (IData)(vlSelf->__PVT__dp_in_va_1)))))) 
               | ((~ (IData)((0U != (0x1fU & (vlSelf->__PVT__dp_in_vb_qual1_2_data[0U] 
                                              >> 0x1aU))))) 
                  & (~ (IData)((0U != (0x3ffU & (vlSelf->__PVT__dp_in_vb_qual1_2_data[0U] 
                                                 >> 0x10U))))))));
    vlSelf->__PVT__dp__DOT__fmul_2__DOT__hasZero = 
        (1U & (((~ (IData)((0U != (0x1fU & ((IData)(vlSelf->__PVT__dp_in_va_2) 
                                            >> 0xaU))))) 
                & (~ (IData)((0U != (0x3ffU & (IData)(vlSelf->__PVT__dp_in_va_2)))))) 
               | ((~ (IData)((0U != (0x1fU & (vlSelf->__PVT__dp_in_vb_qual1_2_data[1U] 
                                              >> 0xaU))))) 
                  & (~ (IData)((0U != (0x3ffU & vlSelf->__PVT__dp_in_vb_qual1_2_data[1U])))))));
    vlSelf->__PVT__dp__DOT__fmul_3__DOT__hasZero = 
        (1U & (((~ (IData)((0U != (0x1fU & ((IData)(vlSelf->__PVT__dp_in_va_3) 
                                            >> 0xaU))))) 
                & (~ (IData)((0U != (0x3ffU & (IData)(vlSelf->__PVT__dp_in_va_3)))))) 
               | ((~ (IData)((0U != (0x1fU & (vlSelf->__PVT__dp_in_vb_qual1_2_data[1U] 
                                              >> 0x1aU))))) 
                  & (~ (IData)((0U != (0x3ffU & (vlSelf->__PVT__dp_in_vb_qual1_2_data[1U] 
                                                 >> 0x10U))))))));
    vlSelf->__PVT___T_2 = ((2U == (IData)(vlSelf->__PVT__state)) 
                           & (IData)(vlSymsp->TOP.io_in_bits_ctrl_mixPcMode));
    vlSelf->__PVT__dp__DOT__fcvt_1__DOT__shiftRightJam_io_in 
        = (((IData)((0U != (0xffU & (vlSelf->__PVT__dp__DOT__pipeline_reg_3__DOT__dataReg_res 
                                     >> 0x17U)))) << 0xbU) 
           | (0x7ffU & (vlSelf->__PVT__dp__DOT__pipeline_reg_3__DOT__dataReg_res 
                        >> 0xcU)));
    vlSelf->__PVT__dp__DOT__fcvt_1__DOT__normal_rounder__DOT__r_up 
        = ((vlSelf->__PVT__dp__DOT__pipeline_reg_3__DOT__dataReg_res 
            >> 0xcU) & (0U != (0x2fffU & vlSelf->__PVT__dp__DOT__pipeline_reg_3__DOT__dataReg_res)));
    vlSelf->__PVT__dp__DOT__pipeline_reg_3_io_out_ready 
        = (1U & ((~ (IData)(vlSelf->__PVT__tg_out_valid)) 
                 | (IData)(vlSymsp->TOP.io_out_ready)));
    vlSelf->__PVT__dp__DOT__fcvt__DOT___result_T_4 
        = ((~ (IData)((0x1fU == (IData)(vlSelf->__PVT__dp__DOT__fcvt__DOT__fp_in_exp)))) 
           & (0U != (IData)(vlSelf->__PVT__dp__DOT__fcvt__DOT__fp_in_exp)));
    vlSelf->__PVT__dp__DOT__fmul__DOT__lzc = (0xfU 
                                              & ((0U 
                                                  != 
                                                  (vlSelf->__PVT__dp__DOT__fmul__DOT__resultSigNoShift 
                                                   & (0x200000U 
                                                      >> (IData)(vlSelf->__PVT__dp__DOT__fmul__DOT__lzcRaw))))
                                                  ? (IData)(vlSelf->__PVT__dp__DOT__fmul__DOT__lzcRaw)
                                                  : 
                                                 ((IData)(1U) 
                                                  + (IData)(vlSelf->__PVT__dp__DOT__fmul__DOT__lzcRaw))));
    vlSelf->__PVT__dp__DOT__fmul_1__DOT__lzc = (0xfU 
                                                & ((0U 
                                                    != 
                                                    (vlSelf->__PVT__dp__DOT__fmul_1__DOT__resultSigNoShift 
                                                     & (0x200000U 
                                                        >> (IData)(vlSelf->__PVT__dp__DOT__fmul_1__DOT__lzcRaw))))
                                                    ? (IData)(vlSelf->__PVT__dp__DOT__fmul_1__DOT__lzcRaw)
                                                    : 
                                                   ((IData)(1U) 
                                                    + (IData)(vlSelf->__PVT__dp__DOT__fmul_1__DOT__lzcRaw))));
    vlSelf->__PVT__dp__DOT__fmul_2__DOT__lzc = (0xfU 
                                                & ((0U 
                                                    != 
                                                    (vlSelf->__PVT__dp__DOT__fmul_2__DOT__resultSigNoShift 
                                                     & (0x200000U 
                                                        >> (IData)(vlSelf->__PVT__dp__DOT__fmul_2__DOT__lzcRaw))))
                                                    ? (IData)(vlSelf->__PVT__dp__DOT__fmul_2__DOT__lzcRaw)
                                                    : 
                                                   ((IData)(1U) 
                                                    + (IData)(vlSelf->__PVT__dp__DOT__fmul_2__DOT__lzcRaw))));
    vlSelf->__PVT__dp__DOT__fmul_3__DOT__lzc = (0xfU 
                                                & ((0U 
                                                    != 
                                                    (vlSelf->__PVT__dp__DOT__fmul_3__DOT__resultSigNoShift 
                                                     & (0x200000U 
                                                        >> (IData)(vlSelf->__PVT__dp__DOT__fmul_3__DOT__lzcRaw))))
                                                    ? (IData)(vlSelf->__PVT__dp__DOT__fmul_3__DOT__lzcRaw)
                                                    : 
                                                   ((IData)(1U) 
                                                    + (IData)(vlSelf->__PVT__dp__DOT__fmul_3__DOT__lzcRaw))));
    vlSelf->__PVT__dp__DOT__fmul__DOT__resultExpNoShift 
        = ((IData)(vlSelf->__PVT__dp__DOT__fmul__DOT__hasZero)
            ? 0U : (0xffU & ((IData)(0x61U) + (0x3fU 
                                               & ((0x1fU 
                                                   & (((IData)(vlSelf->__PVT__dp_in_va_0) 
                                                       >> 0xaU) 
                                                      + 
                                                      ((~ (IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x1fU 
                                                                    & ((IData)(vlSelf->__PVT__dp_in_va_0) 
                                                                       >> 0xaU))))) 
                                                       & (0U 
                                                          != 
                                                          (0x3ffU 
                                                           & (IData)(vlSelf->__PVT__dp_in_va_0)))))) 
                                                  + 
                                                  (0x1fU 
                                                   & (((vlSelf->__PVT__dp_in_vb_qual1_2_data[0U] 
                                                        << 0x16U) 
                                                       | (vlSelf->__PVT__dp_in_vb_qual1_2_data[0U] 
                                                          >> 0xaU)) 
                                                      + 
                                                      ((~ (IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x1fU 
                                                                    & (vlSelf->__PVT__dp_in_vb_qual1_2_data[0U] 
                                                                       >> 0xaU))))) 
                                                       & (0U 
                                                          != 
                                                          (0x3ffU 
                                                           & vlSelf->__PVT__dp_in_vb_qual1_2_data[0U]))))))))));
    vlSelf->__PVT__dp__DOT__fmul_1__DOT__resultExpNoShift 
        = ((IData)(vlSelf->__PVT__dp__DOT__fmul_1__DOT__hasZero)
            ? 0U : (0xffU & ((IData)(0x61U) + (0x3fU 
                                               & ((0x1fU 
                                                   & (((IData)(vlSelf->__PVT__dp_in_va_1) 
                                                       >> 0xaU) 
                                                      + 
                                                      ((~ (IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x1fU 
                                                                    & ((IData)(vlSelf->__PVT__dp_in_va_1) 
                                                                       >> 0xaU))))) 
                                                       & (0U 
                                                          != 
                                                          (0x3ffU 
                                                           & (IData)(vlSelf->__PVT__dp_in_va_1)))))) 
                                                  + 
                                                  (0x1fU 
                                                   & (((vlSelf->__PVT__dp_in_vb_qual1_2_data[0U] 
                                                        << 6U) 
                                                       | (vlSelf->__PVT__dp_in_vb_qual1_2_data[0U] 
                                                          >> 0x1aU)) 
                                                      + 
                                                      ((~ (IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x1fU 
                                                                    & (vlSelf->__PVT__dp_in_vb_qual1_2_data[0U] 
                                                                       >> 0x1aU))))) 
                                                       & (0U 
                                                          != 
                                                          (0x3ffU 
                                                           & (vlSelf->__PVT__dp_in_vb_qual1_2_data[0U] 
                                                              >> 0x10U)))))))))));
    vlSelf->__PVT__dp__DOT__fmul_2__DOT__resultExpNoShift 
        = ((IData)(vlSelf->__PVT__dp__DOT__fmul_2__DOT__hasZero)
            ? 0U : (0xffU & ((IData)(0x61U) + (0x3fU 
                                               & ((0x1fU 
                                                   & (((IData)(vlSelf->__PVT__dp_in_va_2) 
                                                       >> 0xaU) 
                                                      + 
                                                      ((~ (IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x1fU 
                                                                    & ((IData)(vlSelf->__PVT__dp_in_va_2) 
                                                                       >> 0xaU))))) 
                                                       & (0U 
                                                          != 
                                                          (0x3ffU 
                                                           & (IData)(vlSelf->__PVT__dp_in_va_2)))))) 
                                                  + 
                                                  (0x1fU 
                                                   & (((vlSelf->__PVT__dp_in_vb_qual1_2_data[1U] 
                                                        << 0x16U) 
                                                       | (vlSelf->__PVT__dp_in_vb_qual1_2_data[1U] 
                                                          >> 0xaU)) 
                                                      + 
                                                      ((~ (IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x1fU 
                                                                    & (vlSelf->__PVT__dp_in_vb_qual1_2_data[1U] 
                                                                       >> 0xaU))))) 
                                                       & (0U 
                                                          != 
                                                          (0x3ffU 
                                                           & vlSelf->__PVT__dp_in_vb_qual1_2_data[1U]))))))))));
    vlSelf->__PVT__dp__DOT__fmul_3__DOT__resultExpNoShift 
        = ((IData)(vlSelf->__PVT__dp__DOT__fmul_3__DOT__hasZero)
            ? 0U : (0xffU & ((IData)(0x61U) + (0x3fU 
                                               & ((0x1fU 
                                                   & (((IData)(vlSelf->__PVT__dp_in_va_3) 
                                                       >> 0xaU) 
                                                      + 
                                                      ((~ (IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x1fU 
                                                                    & ((IData)(vlSelf->__PVT__dp_in_va_3) 
                                                                       >> 0xaU))))) 
                                                       & (0U 
                                                          != 
                                                          (0x3ffU 
                                                           & (IData)(vlSelf->__PVT__dp_in_va_3)))))) 
                                                  + 
                                                  (0x1fU 
                                                   & (((vlSelf->__PVT__dp_in_vb_qual1_2_data[1U] 
                                                        << 6U) 
                                                       | (vlSelf->__PVT__dp_in_vb_qual1_2_data[1U] 
                                                          >> 0x1aU)) 
                                                      + 
                                                      ((~ (IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x1fU 
                                                                    & (vlSelf->__PVT__dp_in_vb_qual1_2_data[1U] 
                                                                       >> 0x1aU))))) 
                                                       & (0U 
                                                          != 
                                                          (0x3ffU 
                                                           & (vlSelf->__PVT__dp_in_vb_qual1_2_data[1U] 
                                                              >> 0x10U)))))))))));
    vlSelf->__PVT__dp__DOT__fcvt_1__DOT__shiftRightJam__DOT___io_out_T 
        = ((0xbU >= (0xffU & ((IData)(0x71U) - (vlSelf->__PVT__dp__DOT__pipeline_reg_3__DOT__dataReg_res 
                                                >> 0x17U))))
            ? (0xfffU & ((IData)(vlSelf->__PVT__dp__DOT__fcvt_1__DOT__shiftRightJam_io_in) 
                         >> (0xffU & ((IData)(0x71U) 
                                      - (vlSelf->__PVT__dp__DOT__pipeline_reg_3__DOT__dataReg_res 
                                         >> 0x17U)))))
            : 0U);
    vlSelf->__PVT__dp__DOT__fcvt_1__DOT__normal_rounder_io_cout 
        = ((IData)(vlSelf->__PVT__dp__DOT__fcvt_1__DOT__normal_rounder__DOT__r_up) 
           & (0x7fe000U == (0x7fe000U & vlSelf->__PVT__dp__DOT__pipeline_reg_3__DOT__dataReg_res)));
    vlSelf->__PVT__dp__DOT__pipeline_reg_2_io_out_ready 
        = (1U & ((~ (IData)(vlSelf->__PVT__dp__DOT__pipeline_reg_3__DOT__validReg)) 
                 | (IData)(vlSelf->__PVT__dp__DOT__pipeline_reg_3_io_out_ready)));
    vlSelf->__PVT__dp__DOT__fmul__DOT__shiftLimit = 
        ((0xffU & ((IData)(1U) + (IData)(vlSelf->__PVT__dp__DOT__fmul__DOT__resultExpNoShift))) 
         <= (IData)(vlSelf->__PVT__dp__DOT__fmul__DOT__lzc));
    vlSelf->__PVT__dp__DOT__fmul_1__DOT__shiftLimit 
        = ((0xffU & ((IData)(1U) + (IData)(vlSelf->__PVT__dp__DOT__fmul_1__DOT__resultExpNoShift))) 
           <= (IData)(vlSelf->__PVT__dp__DOT__fmul_1__DOT__lzc));
    vlSelf->__PVT__dp__DOT__fmul_2__DOT__shiftLimit 
        = ((0xffU & ((IData)(1U) + (IData)(vlSelf->__PVT__dp__DOT__fmul_2__DOT__resultExpNoShift))) 
           <= (IData)(vlSelf->__PVT__dp__DOT__fmul_2__DOT__lzc));
    vlSelf->__PVT__dp__DOT__fmul_3__DOT__shiftLimit 
        = ((0xffU & ((IData)(1U) + (IData)(vlSelf->__PVT__dp__DOT__fmul_3__DOT__resultExpNoShift))) 
           <= (IData)(vlSelf->__PVT__dp__DOT__fmul_3__DOT__lzc));
    vlSelf->__PVT__dp__DOT__fcvt_1__DOT__subnormal_rounder_io_in 
        = ((0xcU < (0xffU & ((IData)(0x71U) - (vlSelf->__PVT__dp__DOT__pipeline_reg_3__DOT__dataReg_res 
                                               >> 0x17U))))
            ? 0U : (0x3ffU & ((IData)(vlSelf->__PVT__dp__DOT__fcvt_1__DOT__shiftRightJam__DOT___io_out_T) 
                              >> 1U)));
    vlSelf->__PVT__dp__DOT__fcvt_1__DOT__subnormal_rounder__DOT__r_up 
        = (((0xcU >= (0xffU & ((IData)(0x71U) - (vlSelf->__PVT__dp__DOT__pipeline_reg_3__DOT__dataReg_res 
                                                 >> 0x17U)))) 
            & (IData)(vlSelf->__PVT__dp__DOT__fcvt_1__DOT__shiftRightJam__DOT___io_out_T)) 
           & (((0U != ((IData)(vlSelf->__PVT__dp__DOT__fcvt_1__DOT__shiftRightJam_io_in) 
                       & (((0xffffU & ((IData)(1U) 
                                       << (0xfU & ((IData)(1U) 
                                                   - 
                                                   (vlSelf->__PVT__dp__DOT__pipeline_reg_3__DOT__dataReg_res 
                                                    >> 0x17U))))) 
                           - (IData)(1U)) | ((0xcU 
                                              < (0xffU 
                                                 & ((IData)(0x71U) 
                                                    - 
                                                    (vlSelf->__PVT__dp__DOT__pipeline_reg_3__DOT__dataReg_res 
                                                     >> 0x17U))))
                                              ? 0xfffU
                                              : 0U)))) 
               | (0U != (0xfffU & vlSelf->__PVT__dp__DOT__pipeline_reg_3__DOT__dataReg_res))) 
              | ((0xcU >= (0xffU & ((IData)(0x71U) 
                                    - (vlSelf->__PVT__dp__DOT__pipeline_reg_3__DOT__dataReg_res 
                                       >> 0x17U)))) 
                 & ((IData)(vlSelf->__PVT__dp__DOT__fcvt_1__DOT__shiftRightJam__DOT___io_out_T) 
                    >> 1U))));
    vlSelf->__PVT__dp__DOT__fcvt_1__DOT__expOverflow 
        = ((IData)(vlSelf->__PVT__dp__DOT__fcvt_1__DOT__normal_rounder_io_cout)
            ? VL_LTS_III(9, 0x1dU, (0x1ffU & ((0xffU 
                                               & (vlSelf->__PVT__dp__DOT__pipeline_reg_3__DOT__dataReg_res 
                                                  >> 0x17U)) 
                                              - (IData)(0x70U))))
            : VL_LTS_III(9, 0x1eU, (0x1ffU & ((0xffU 
                                               & (vlSelf->__PVT__dp__DOT__pipeline_reg_3__DOT__dataReg_res 
                                                  >> 0x17U)) 
                                              - (IData)(0x70U)))));
    vlSelf->__PVT__dp__DOT__pipeline_reg_3__DOT___T 
        = ((IData)(vlSelf->__PVT__dp__DOT__pipeline_reg_2_io_out_ready) 
           & (IData)(vlSelf->__PVT__dp__DOT__pipeline_reg_2__DOT__validReg));
    vlSelf->__PVT__dp__DOT__pipeline_reg_1_io_out_ready 
        = (1U & ((~ (IData)(vlSelf->__PVT__dp__DOT__pipeline_reg_2__DOT__validReg)) 
                 | (IData)(vlSelf->__PVT__dp__DOT__pipeline_reg_2_io_out_ready)));
    vlSelf->__PVT__dp__DOT__fmul__DOT___resultSigShifted_T 
        = ((IData)(vlSelf->__PVT__dp__DOT__fmul__DOT__shiftLimit)
            ? (IData)(vlSelf->__PVT__dp__DOT__fmul__DOT__resultExpNoShift)
            : (IData)(vlSelf->__PVT__dp__DOT__fmul__DOT__lzc));
    vlSelf->__PVT__dp__DOT__fmul_1__DOT___resultSigShifted_T 
        = ((IData)(vlSelf->__PVT__dp__DOT__fmul_1__DOT__shiftLimit)
            ? (IData)(vlSelf->__PVT__dp__DOT__fmul_1__DOT__resultExpNoShift)
            : (IData)(vlSelf->__PVT__dp__DOT__fmul_1__DOT__lzc));
    vlSelf->__PVT__dp__DOT__fmul_2__DOT___resultSigShifted_T 
        = ((IData)(vlSelf->__PVT__dp__DOT__fmul_2__DOT__shiftLimit)
            ? (IData)(vlSelf->__PVT__dp__DOT__fmul_2__DOT__resultExpNoShift)
            : (IData)(vlSelf->__PVT__dp__DOT__fmul_2__DOT__lzc));
    vlSelf->__PVT__dp__DOT__fmul_3__DOT___resultSigShifted_T 
        = ((IData)(vlSelf->__PVT__dp__DOT__fmul_3__DOT__shiftLimit)
            ? (IData)(vlSelf->__PVT__dp__DOT__fmul_3__DOT__resultExpNoShift)
            : (IData)(vlSelf->__PVT__dp__DOT__fmul_3__DOT__lzc));
    vlSelf->__PVT__dp__DOT__fcvt_1__DOT___common_exp_T_4 
        = (VL_LTES_III(9, 1U, (0x1ffU & ((0xffU & (vlSelf->__PVT__dp__DOT__pipeline_reg_3__DOT__dataReg_res 
                                                   >> 0x17U)) 
                                         - (IData)(0x70U)))) 
           & (~ (IData)(vlSelf->__PVT__dp__DOT__fcvt_1__DOT__expOverflow)));
    vlSelf->__PVT__dp__DOT__pipeline_reg_3__DOT___GEN_1 
        = ((IData)(vlSelf->__PVT__dp__DOT__pipeline_reg_3__DOT___T) 
           | ((~ (IData)(vlSelf->__PVT__dp__DOT__pipeline_reg_3_io_out_ready)) 
              & (IData)(vlSelf->__PVT__dp__DOT__pipeline_reg_3__DOT__validReg)));
    vlSelf->__PVT__dp__DOT__pipeline_reg_2__DOT___T 
        = ((IData)(vlSelf->__PVT__dp__DOT__pipeline_reg_1_io_out_ready) 
           & (IData)(vlSelf->__PVT__dp__DOT__pipeline_reg_1__DOT__validReg));
    vlSelf->__PVT__dp__DOT__pipeline_reg_io_out_ready 
        = (1U & ((~ (IData)(vlSelf->__PVT__dp__DOT__pipeline_reg_1__DOT__validReg)) 
                 | (IData)(vlSelf->__PVT__dp__DOT__pipeline_reg_1_io_out_ready)));
    vlSelf->__PVT__dp_io_out_bits_result = ((IData)(vlSelf->__PVT__dp__DOT__pipeline_reg_3__DOT__dataReg_ctrl_mixPc)
                                             ? vlSelf->__PVT__dp__DOT__pipeline_reg_3__DOT__dataReg_res
                                             : (0xffff0000U 
                                                | ((0x8000U 
                                                    & ((vlSelf->__PVT__dp__DOT__pipeline_reg_3__DOT__dataReg_res 
                                                        >> 0x10U) 
                                                       & ((~ (IData)(
                                                                     ((0x7f800000U 
                                                                       == 
                                                                       (0x7f800000U 
                                                                        & vlSelf->__PVT__dp__DOT__pipeline_reg_3__DOT__dataReg_res)) 
                                                                      & (0U 
                                                                         != 
                                                                         (0x7fffffU 
                                                                          & vlSelf->__PVT__dp__DOT__pipeline_reg_3__DOT__dataReg_res))))) 
                                                          << 0xfU))) 
                                                   | ((0x7c00U 
                                                       & ((((0xffU 
                                                             == 
                                                             (0xffU 
                                                              & (vlSelf->__PVT__dp__DOT__pipeline_reg_3__DOT__dataReg_res 
                                                                 >> 0x17U)))
                                                             ? 0x1fU
                                                             : 0U) 
                                                           | ((0xffU 
                                                               == 
                                                               (0xffU 
                                                                & (vlSelf->__PVT__dp__DOT__pipeline_reg_3__DOT__dataReg_res 
                                                                   >> 0x17U)))
                                                               ? 0U
                                                               : 
                                                              ((((VL_LTES_III(9, 1U, 
                                                                              (0x1ffU 
                                                                               & ((0xffU 
                                                                                & (vlSelf->__PVT__dp__DOT__pipeline_reg_3__DOT__dataReg_res 
                                                                                >> 0x17U)) 
                                                                                - (IData)(0x70U)))) 
                                                                  & (IData)(vlSelf->__PVT__dp__DOT__fcvt_1__DOT__expOverflow))
                                                                  ? 0x1fU
                                                                  : 0U) 
                                                                | ((IData)(vlSelf->__PVT__dp__DOT__fcvt_1__DOT___common_exp_T_4)
                                                                    ? 
                                                                   (((0xffU 
                                                                      & (vlSelf->__PVT__dp__DOT__pipeline_reg_3__DOT__dataReg_res 
                                                                         >> 0x17U)) 
                                                                     - (IData)(0x10U)) 
                                                                    + (IData)(vlSelf->__PVT__dp__DOT__fcvt_1__DOT__normal_rounder_io_cout))
                                                                    : 0U)) 
                                                               | (VL_GTS_III(9, 1U, 
                                                                             (0x1ffU 
                                                                              & ((0xffU 
                                                                                & (vlSelf->__PVT__dp__DOT__pipeline_reg_3__DOT__dataReg_res 
                                                                                >> 0x17U)) 
                                                                                - (IData)(0x70U)))) 
                                                                  & ((IData)(vlSelf->__PVT__dp__DOT__fcvt_1__DOT__subnormal_rounder__DOT__r_up) 
                                                                     & (0x3ffU 
                                                                        == (IData)(vlSelf->__PVT__dp__DOT__fcvt_1__DOT__subnormal_rounder_io_in))))))) 
                                                          << 0xaU)) 
                                                      | (0x3ffU 
                                                         & (((0xffU 
                                                              == 
                                                              (0xffU 
                                                               & (vlSelf->__PVT__dp__DOT__pipeline_reg_3__DOT__dataReg_res 
                                                                  >> 0x17U)))
                                                              ? 
                                                             ((IData)(
                                                                      (0U 
                                                                       != 
                                                                       (0x7fffffU 
                                                                        & vlSelf->__PVT__dp__DOT__pipeline_reg_3__DOT__dataReg_res))) 
                                                              << 9U)
                                                              : 0U) 
                                                            | ((0xffU 
                                                                == 
                                                                (0xffU 
                                                                 & (vlSelf->__PVT__dp__DOT__pipeline_reg_3__DOT__dataReg_res 
                                                                    >> 0x17U)))
                                                                ? 0U
                                                                : 
                                                               (((IData)(vlSelf->__PVT__dp__DOT__fcvt_1__DOT___common_exp_T_4)
                                                                  ? 
                                                                 ((vlSelf->__PVT__dp__DOT__pipeline_reg_3__DOT__dataReg_res 
                                                                   >> 0xdU) 
                                                                  + (IData)(vlSelf->__PVT__dp__DOT__fcvt_1__DOT__normal_rounder__DOT__r_up))
                                                                  : 0U) 
                                                                | (VL_GTS_III(9, 1U, 
                                                                              (0x1ffU 
                                                                               & ((0xffU 
                                                                                & (vlSelf->__PVT__dp__DOT__pipeline_reg_3__DOT__dataReg_res 
                                                                                >> 0x17U)) 
                                                                                - (IData)(0x70U))))
                                                                    ? 
                                                                   ((IData)(vlSelf->__PVT__dp__DOT__fcvt_1__DOT__subnormal_rounder_io_in) 
                                                                    + (IData)(vlSelf->__PVT__dp__DOT__fcvt_1__DOT__subnormal_rounder__DOT__r_up))
                                                                    : 0U)))))))));
    vlSelf->__PVT__dp__DOT__pipeline_reg_2__DOT___GEN_1 
        = ((IData)(vlSelf->__PVT__dp__DOT__pipeline_reg_2__DOT___T) 
           | ((~ (IData)(vlSelf->__PVT__dp__DOT__pipeline_reg_2_io_out_ready)) 
              & (IData)(vlSelf->__PVT__dp__DOT__pipeline_reg_2__DOT__validReg)));
    vlSelf->__PVT__dp__DOT__pipeline_reg_1__DOT___T 
        = ((IData)(vlSelf->__PVT__dp__DOT__pipeline_reg_io_out_ready) 
           & (IData)(vlSelf->__PVT__dp__DOT__pipeline_reg__DOT__validReg));
    vlSelf->__PVT__dp__DOT__pipeline_reg_io_in_ready 
        = (1U & ((~ (IData)(vlSelf->__PVT__dp__DOT__pipeline_reg__DOT__validReg)) 
                 | (IData)(vlSelf->__PVT__dp__DOT__pipeline_reg_io_out_ready)));
    vlSelf->__PVT__dp__DOT__pipeline_reg_1__DOT___GEN_1 
        = ((IData)(vlSelf->__PVT__dp__DOT__pipeline_reg_1__DOT___T) 
           | ((~ (IData)(vlSelf->__PVT__dp__DOT__pipeline_reg_1_io_out_ready)) 
              & (IData)(vlSelf->__PVT__dp__DOT__pipeline_reg_1__DOT__validReg)));
    vlSelf->__PVT__dp__DOT__pipeline_reg__DOT___T = 
        ((IData)(vlSelf->__PVT__dp__DOT__pipeline_reg_io_in_ready) 
         & (IData)(vlSelf->__PVT__dp_in_valid));
    vlSelf->__VdfgTmp_h298fb594__0 = ((3U == (IData)(vlSelf->__PVT__state)) 
                                      & (IData)(vlSelf->__PVT__dp__DOT__pipeline_reg_io_in_ready));
    vlSelf->__VdfgTmp_hda1a2523__0 = ((2U == (IData)(vlSelf->__PVT__state)) 
                                      & (IData)(vlSelf->__PVT__dp__DOT__pipeline_reg_io_in_ready));
    vlSelf->__PVT___T_8 = (((~ (IData)(vlSelf->__PVT__dp_in_valid)) 
                            | (((IData)(vlSelf->__PVT__dp__DOT__pipeline_reg_io_in_ready) 
                                & (IData)(vlSelf->__PVT___T_2)) 
                               | (4U == (IData)(vlSelf->__PVT__state)))) 
                           & (IData)(vlSymsp->TOP.io_in_valid));
    __VdfgTmp_h6731f200__0 = ((4U == (IData)(vlSelf->__PVT__state)) 
                              & (IData)(vlSelf->__PVT__dp__DOT__pipeline_reg_io_in_ready));
    vlSelf->__PVT__dp__DOT__pipeline_reg__DOT___GEN_1 
        = ((IData)(vlSelf->__PVT__dp__DOT__pipeline_reg__DOT___T) 
           | ((~ (IData)(vlSelf->__PVT__dp__DOT__pipeline_reg_io_out_ready)) 
              & (IData)(vlSelf->__PVT__dp__DOT__pipeline_reg__DOT__validReg)));
    vlSelf->__PVT___GEN_11 = ((IData)(__VdfgTmp_h6731f200__0)
                               ? 0U : (IData)(vlSelf->__PVT__state));
    vlSelf->__PVT___GEN_65 = ((((0U == (IData)(vlSelf->__PVT__state)) 
                                | ((IData)(vlSelf->__PVT___T_2) 
                                   | ((~ (IData)(vlSymsp->TOP.io_in_bits_ctrl_mixPcMode)) 
                                      & (4U == (IData)(vlSelf->__PVT__state))))) 
                               & (IData)(vlSelf->__PVT___T_8)) 
                              | (((1U == (IData)(vlSelf->__PVT__state)) 
                                  & (IData)(vlSelf->__PVT__dp__DOT__pipeline_reg_io_in_ready))
                                  ? (IData)(vlSelf->__PVT__dp_in_valid)
                                  : ((IData)(vlSelf->__VdfgTmp_hda1a2523__0)
                                      ? ((~ (IData)(vlSymsp->TOP.io_in_bits_ctrl_mixPcMode)) 
                                         & (IData)(vlSelf->__PVT__dp_in_valid))
                                      : ((IData)(vlSelf->__VdfgTmp_h298fb594__0)
                                          ? (IData)(vlSelf->__PVT__dp_in_valid)
                                          : ((~ (IData)(__VdfgTmp_h6731f200__0)) 
                                             & (IData)(vlSelf->__PVT__dp_in_valid))))));
}
