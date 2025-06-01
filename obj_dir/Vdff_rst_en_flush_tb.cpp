// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vdff_rst_en_flush_tb__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vdff_rst_en_flush_tb::Vdff_rst_en_flush_tb(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vdff_rst_en_flush_tb__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vdff_rst_en_flush_tb::Vdff_rst_en_flush_tb(const char* _vcname__)
    : Vdff_rst_en_flush_tb(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vdff_rst_en_flush_tb::~Vdff_rst_en_flush_tb() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vdff_rst_en_flush_tb___024root___eval_debug_assertions(Vdff_rst_en_flush_tb___024root* vlSelf);
#endif  // VL_DEBUG
void Vdff_rst_en_flush_tb___024root___eval_static(Vdff_rst_en_flush_tb___024root* vlSelf);
void Vdff_rst_en_flush_tb___024root___eval_initial(Vdff_rst_en_flush_tb___024root* vlSelf);
void Vdff_rst_en_flush_tb___024root___eval_settle(Vdff_rst_en_flush_tb___024root* vlSelf);
void Vdff_rst_en_flush_tb___024root___eval(Vdff_rst_en_flush_tb___024root* vlSelf);

void Vdff_rst_en_flush_tb::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vdff_rst_en_flush_tb::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vdff_rst_en_flush_tb___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vdff_rst_en_flush_tb___024root___eval_static(&(vlSymsp->TOP));
        Vdff_rst_en_flush_tb___024root___eval_initial(&(vlSymsp->TOP));
        Vdff_rst_en_flush_tb___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vdff_rst_en_flush_tb___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vdff_rst_en_flush_tb::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vdff_rst_en_flush_tb::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vdff_rst_en_flush_tb::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vdff_rst_en_flush_tb___024root___eval_final(Vdff_rst_en_flush_tb___024root* vlSelf);

VL_ATTR_COLD void Vdff_rst_en_flush_tb::final() {
    Vdff_rst_en_flush_tb___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vdff_rst_en_flush_tb::hierName() const { return vlSymsp->name(); }
const char* Vdff_rst_en_flush_tb::modelName() const { return "Vdff_rst_en_flush_tb"; }
unsigned Vdff_rst_en_flush_tb::threads() const { return 1; }
void Vdff_rst_en_flush_tb::prepareClone() const { contextp()->prepareClone(); }
void Vdff_rst_en_flush_tb::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vdff_rst_en_flush_tb::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vdff_rst_en_flush_tb___024root__trace_decl_types(VerilatedVcd* tracep);

void Vdff_rst_en_flush_tb___024root__trace_init_top(Vdff_rst_en_flush_tb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vdff_rst_en_flush_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdff_rst_en_flush_tb___024root*>(voidSelf);
    Vdff_rst_en_flush_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vdff_rst_en_flush_tb___024root__trace_decl_types(tracep);
    Vdff_rst_en_flush_tb___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vdff_rst_en_flush_tb___024root__trace_register(Vdff_rst_en_flush_tb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vdff_rst_en_flush_tb::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vdff_rst_en_flush_tb::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vdff_rst_en_flush_tb___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
