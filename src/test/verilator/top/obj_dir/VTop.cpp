// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VTop.h"
#include "VTop__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VTop::VTop(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VTop__Syms(contextp(), _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , io_in_ready{vlSymsp->TOP.io_in_ready}
    , io_in_valid{vlSymsp->TOP.io_in_valid}
    , io_in_bits_ctrl_flush{vlSymsp->TOP.io_in_bits_ctrl_flush}
    , io_in_bits_ctrl_matASel{vlSymsp->TOP.io_in_bits_ctrl_matASel}
    , io_in_bits_ctrl_matBSel{vlSymsp->TOP.io_in_bits_ctrl_matBSel}
    , io_in_bits_ctrl_mixPcMode{vlSymsp->TOP.io_in_bits_ctrl_mixPcMode}
    , io_in_bits_decode_src{vlSymsp->TOP.io_in_bits_decode_src}
    , io_out_ready{vlSymsp->TOP.io_out_ready}
    , io_out_valid{vlSymsp->TOP.io_out_valid}
    , io_out_bits_decode_src{vlSymsp->TOP.io_out_bits_decode_src}
    , io_in_bits_tc0_ot0_tg0_matrix_a{vlSymsp->TOP.io_in_bits_tc0_ot0_tg0_matrix_a}
    , io_in_bits_tc0_ot0_tg0_matrix_b{vlSymsp->TOP.io_in_bits_tc0_ot0_tg0_matrix_b}
    , io_in_bits_tc0_ot0_tg0_matrix_c{vlSymsp->TOP.io_in_bits_tc0_ot0_tg0_matrix_c}
    , io_in_bits_tc0_ot0_tg4_matrix_a{vlSymsp->TOP.io_in_bits_tc0_ot0_tg4_matrix_a}
    , io_in_bits_tc0_ot0_tg4_matrix_b{vlSymsp->TOP.io_in_bits_tc0_ot0_tg4_matrix_b}
    , io_in_bits_tc0_ot0_tg4_matrix_c{vlSymsp->TOP.io_in_bits_tc0_ot0_tg4_matrix_c}
    , io_in_bits_tc0_ot1_tg0_matrix_a{vlSymsp->TOP.io_in_bits_tc0_ot1_tg0_matrix_a}
    , io_in_bits_tc0_ot1_tg0_matrix_b{vlSymsp->TOP.io_in_bits_tc0_ot1_tg0_matrix_b}
    , io_in_bits_tc0_ot1_tg0_matrix_c{vlSymsp->TOP.io_in_bits_tc0_ot1_tg0_matrix_c}
    , io_in_bits_tc0_ot1_tg4_matrix_a{vlSymsp->TOP.io_in_bits_tc0_ot1_tg4_matrix_a}
    , io_in_bits_tc0_ot1_tg4_matrix_b{vlSymsp->TOP.io_in_bits_tc0_ot1_tg4_matrix_b}
    , io_in_bits_tc0_ot1_tg4_matrix_c{vlSymsp->TOP.io_in_bits_tc0_ot1_tg4_matrix_c}
    , io_in_bits_tc1_ot0_tg0_matrix_a{vlSymsp->TOP.io_in_bits_tc1_ot0_tg0_matrix_a}
    , io_in_bits_tc1_ot0_tg0_matrix_b{vlSymsp->TOP.io_in_bits_tc1_ot0_tg0_matrix_b}
    , io_in_bits_tc1_ot0_tg0_matrix_c{vlSymsp->TOP.io_in_bits_tc1_ot0_tg0_matrix_c}
    , io_in_bits_tc1_ot0_tg4_matrix_a{vlSymsp->TOP.io_in_bits_tc1_ot0_tg4_matrix_a}
    , io_in_bits_tc1_ot0_tg4_matrix_b{vlSymsp->TOP.io_in_bits_tc1_ot0_tg4_matrix_b}
    , io_in_bits_tc1_ot0_tg4_matrix_c{vlSymsp->TOP.io_in_bits_tc1_ot0_tg4_matrix_c}
    , io_in_bits_tc1_ot1_tg0_matrix_a{vlSymsp->TOP.io_in_bits_tc1_ot1_tg0_matrix_a}
    , io_in_bits_tc1_ot1_tg0_matrix_b{vlSymsp->TOP.io_in_bits_tc1_ot1_tg0_matrix_b}
    , io_in_bits_tc1_ot1_tg0_matrix_c{vlSymsp->TOP.io_in_bits_tc1_ot1_tg0_matrix_c}
    , io_in_bits_tc1_ot1_tg4_matrix_a{vlSymsp->TOP.io_in_bits_tc1_ot1_tg4_matrix_a}
    , io_in_bits_tc1_ot1_tg4_matrix_b{vlSymsp->TOP.io_in_bits_tc1_ot1_tg4_matrix_b}
    , io_in_bits_tc1_ot1_tg4_matrix_c{vlSymsp->TOP.io_in_bits_tc1_ot1_tg4_matrix_c}
    , io_out_bits_tc0_octet0_threadgroup0_matrix_d_data{vlSymsp->TOP.io_out_bits_tc0_octet0_threadgroup0_matrix_d_data}
    , io_out_bits_tc0_octet0_threadgroup4_matrix_d_data{vlSymsp->TOP.io_out_bits_tc0_octet0_threadgroup4_matrix_d_data}
    , io_out_bits_tc0_octet1_threadgroup0_matrix_d_data{vlSymsp->TOP.io_out_bits_tc0_octet1_threadgroup0_matrix_d_data}
    , io_out_bits_tc0_octet1_threadgroup4_matrix_d_data{vlSymsp->TOP.io_out_bits_tc0_octet1_threadgroup4_matrix_d_data}
    , io_out_bits_tc1_octet0_threadgroup0_matrix_d_data{vlSymsp->TOP.io_out_bits_tc1_octet0_threadgroup0_matrix_d_data}
    , io_out_bits_tc1_octet0_threadgroup4_matrix_d_data{vlSymsp->TOP.io_out_bits_tc1_octet0_threadgroup4_matrix_d_data}
    , io_out_bits_tc1_octet1_threadgroup0_matrix_d_data{vlSymsp->TOP.io_out_bits_tc1_octet1_threadgroup0_matrix_d_data}
    , io_out_bits_tc1_octet1_threadgroup4_matrix_d_data{vlSymsp->TOP.io_out_bits_tc1_octet1_threadgroup4_matrix_d_data}
    , __PVT__Top__DOT__tc__DOT__ot__DOT__tg{vlSymsp->TOP.__PVT__Top__DOT__tc__DOT__ot__DOT__tg}
    , __PVT__Top__DOT__tc__DOT__ot__DOT__tg_1{vlSymsp->TOP.__PVT__Top__DOT__tc__DOT__ot__DOT__tg_1}
    , __PVT__Top__DOT__tc__DOT__ot_1__DOT__tg{vlSymsp->TOP.__PVT__Top__DOT__tc__DOT__ot_1__DOT__tg}
    , __PVT__Top__DOT__tc__DOT__ot_1__DOT__tg_1{vlSymsp->TOP.__PVT__Top__DOT__tc__DOT__ot_1__DOT__tg_1}
    , __PVT__Top__DOT__tc_1__DOT__ot__DOT__tg{vlSymsp->TOP.__PVT__Top__DOT__tc_1__DOT__ot__DOT__tg}
    , __PVT__Top__DOT__tc_1__DOT__ot__DOT__tg_1{vlSymsp->TOP.__PVT__Top__DOT__tc_1__DOT__ot__DOT__tg_1}
    , __PVT__Top__DOT__tc_1__DOT__ot_1__DOT__tg{vlSymsp->TOP.__PVT__Top__DOT__tc_1__DOT__ot_1__DOT__tg}
    , __PVT__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1{vlSymsp->TOP.__PVT__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VTop::VTop(const char* _vcname__)
    : VTop(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VTop::~VTop() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VTop___024root___eval_debug_assertions(VTop___024root* vlSelf);
#endif  // VL_DEBUG
void VTop___024root___eval_static(VTop___024root* vlSelf);
void VTop___024root___eval_initial(VTop___024root* vlSelf);
void VTop___024root___eval_settle(VTop___024root* vlSelf);
void VTop___024root___eval(VTop___024root* vlSelf);

void VTop::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VTop::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VTop___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VTop___024root___eval_static(&(vlSymsp->TOP));
        VTop___024root___eval_initial(&(vlSymsp->TOP));
        VTop___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VTop___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VTop::eventsPending() { return false; }

uint64_t VTop::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VTop::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VTop___024root___eval_final(VTop___024root* vlSelf);

VL_ATTR_COLD void VTop::final() {
    VTop___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VTop::hierName() const { return vlSymsp->name(); }
const char* VTop::modelName() const { return "VTop"; }
unsigned VTop::threads() const { return 1; }
void VTop::prepareClone() const { contextp()->prepareClone(); }
void VTop::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> VTop::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void VTop___024root__trace_init_top(VTop___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VTop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTop___024root*>(voidSelf);
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VTop___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VTop___024root__trace_register(VTop___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VTop::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'VTop::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VTop___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
