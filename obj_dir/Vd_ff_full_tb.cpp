// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vd_ff_full_tb__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vd_ff_full_tb::Vd_ff_full_tb(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vd_ff_full_tb__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vd_ff_full_tb::Vd_ff_full_tb(const char* _vcname__)
    : Vd_ff_full_tb(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vd_ff_full_tb::~Vd_ff_full_tb() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vd_ff_full_tb___024root___eval_debug_assertions(Vd_ff_full_tb___024root* vlSelf);
#endif  // VL_DEBUG
void Vd_ff_full_tb___024root___eval_static(Vd_ff_full_tb___024root* vlSelf);
void Vd_ff_full_tb___024root___eval_initial(Vd_ff_full_tb___024root* vlSelf);
void Vd_ff_full_tb___024root___eval_settle(Vd_ff_full_tb___024root* vlSelf);
void Vd_ff_full_tb___024root___eval(Vd_ff_full_tb___024root* vlSelf);

void Vd_ff_full_tb::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vd_ff_full_tb::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vd_ff_full_tb___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vd_ff_full_tb___024root___eval_static(&(vlSymsp->TOP));
        Vd_ff_full_tb___024root___eval_initial(&(vlSymsp->TOP));
        Vd_ff_full_tb___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vd_ff_full_tb___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vd_ff_full_tb::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vd_ff_full_tb::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vd_ff_full_tb::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vd_ff_full_tb___024root___eval_final(Vd_ff_full_tb___024root* vlSelf);

VL_ATTR_COLD void Vd_ff_full_tb::final() {
    Vd_ff_full_tb___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vd_ff_full_tb::hierName() const { return vlSymsp->name(); }
const char* Vd_ff_full_tb::modelName() const { return "Vd_ff_full_tb"; }
unsigned Vd_ff_full_tb::threads() const { return 1; }
void Vd_ff_full_tb::prepareClone() const { contextp()->prepareClone(); }
void Vd_ff_full_tb::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vd_ff_full_tb::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vd_ff_full_tb___024root__trace_decl_types(VerilatedVcd* tracep);

void Vd_ff_full_tb___024root__trace_init_top(Vd_ff_full_tb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vd_ff_full_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vd_ff_full_tb___024root*>(voidSelf);
    Vd_ff_full_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vd_ff_full_tb___024root__trace_decl_types(tracep);
    Vd_ff_full_tb___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vd_ff_full_tb___024root__trace_register(Vd_ff_full_tb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vd_ff_full_tb::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vd_ff_full_tb::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vd_ff_full_tb___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
