// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vfull_adder_tb__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vfull_adder_tb::Vfull_adder_tb(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vfull_adder_tb__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vfull_adder_tb::Vfull_adder_tb(const char* _vcname__)
    : Vfull_adder_tb(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vfull_adder_tb::~Vfull_adder_tb() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vfull_adder_tb___024root___eval_debug_assertions(Vfull_adder_tb___024root* vlSelf);
#endif  // VL_DEBUG
void Vfull_adder_tb___024root___eval_static(Vfull_adder_tb___024root* vlSelf);
void Vfull_adder_tb___024root___eval_initial(Vfull_adder_tb___024root* vlSelf);
void Vfull_adder_tb___024root___eval_settle(Vfull_adder_tb___024root* vlSelf);
void Vfull_adder_tb___024root___eval(Vfull_adder_tb___024root* vlSelf);

void Vfull_adder_tb::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vfull_adder_tb::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vfull_adder_tb___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vfull_adder_tb___024root___eval_static(&(vlSymsp->TOP));
        Vfull_adder_tb___024root___eval_initial(&(vlSymsp->TOP));
        Vfull_adder_tb___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vfull_adder_tb___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vfull_adder_tb::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vfull_adder_tb::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vfull_adder_tb::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vfull_adder_tb___024root___eval_final(Vfull_adder_tb___024root* vlSelf);

VL_ATTR_COLD void Vfull_adder_tb::final() {
    Vfull_adder_tb___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vfull_adder_tb::hierName() const { return vlSymsp->name(); }
const char* Vfull_adder_tb::modelName() const { return "Vfull_adder_tb"; }
unsigned Vfull_adder_tb::threads() const { return 1; }
void Vfull_adder_tb::prepareClone() const { contextp()->prepareClone(); }
void Vfull_adder_tb::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vfull_adder_tb::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vfull_adder_tb___024root__trace_decl_types(VerilatedVcd* tracep);

void Vfull_adder_tb___024root__trace_init_top(Vfull_adder_tb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vfull_adder_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vfull_adder_tb___024root*>(voidSelf);
    Vfull_adder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vfull_adder_tb___024root__trace_decl_types(tracep);
    Vfull_adder_tb___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vfull_adder_tb___024root__trace_register(Vfull_adder_tb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vfull_adder_tb::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vfull_adder_tb::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vfull_adder_tb___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
