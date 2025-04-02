# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See VTop.mk for the caller.

### Switches...
# C11 constructs required?  0/1 (always on now)
VM_C11 = 1
# Timing enabled?  0/1
VM_TIMING = 0
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 0
# Parallel builds?  0/1 (from --output-split)
VM_PARALLEL_BUILDS = 1
# Tracing output mode?  0/1 (from --trace/--trace-fst)
VM_TRACE = 1
# Tracing output mode in VCD format?  0/1 (from --trace)
VM_TRACE_VCD = 1
# Tracing output mode in FST format?  0/1 (from --trace-fst)
VM_TRACE_FST = 0

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
	VTop \
	VTop___024root__DepSet_h2cbf8d5f__0 \
	VTop___024root__DepSet_h3858ed78__0 \
	VTop_Threadgroup__DepSet_h99f6e3a7__0 \
	VTop_Threadgroup__DepSet_h7c3a099d__0 \
	VTop_Threadgroup__DepSet_hf97edb5a__0 \
	VTop_DotProdUnit_1__DepSet_h6aa02c68__0 \
	VTop_DotProdUnit_1__DepSet_h6aa02c68__1 \
	VTop_DotProdUnit_1__DepSet_h99c7d233__0 \
	VTop_DotProdUnit_1__DepSet_h99c7d233__1 \
	VTop_DotProdUnit_1__DepSet_h99c7d233__2 \
	VTop_FADD__DepSet_he569ea9f__0 \
	VTop_FADD__DepSet_he569ea9f__1 \
	VTop_FADD__DepSet_he569ea9f__2 \
	VTop_FADD__DepSet_he569ea9f__3 \
	VTop_FADD__DepSet_he569ea9f__4 \
	VTop_FADD__DepSet_he569ea9f__5 \
	VTop_FADD__DepSet_he569ea9f__6 \
	VTop_FADD__DepSet_he569ea9f__7 \
	VTop_FADD__DepSet_he569ea9f__8 \
	VTop_FADD__DepSet_he569ea9f__9 \
	VTop_FADD__DepSet_he569ea9f__10 \
	VTop_FADD__DepSet_he569ea9f__11 \
	VTop_FADD__DepSet_he569ea9f__12 \
	VTop_FADD__DepSet_he569ea9f__13 \
	VTop_FADD__DepSet_he569ea9f__14 \
	VTop_FADD__DepSet_he569ea9f__15 \
	VTop_FADD__DepSet_he569ea9f__16 \
	VTop_FADD__DepSet_he569ea9f__17 \
	VTop_FADD__DepSet_he569ea9f__18 \
	VTop_FADD__DepSet_he569ea9f__19 \
	VTop_FADD__DepSet_he569ea9f__20 \
	VTop_FADD__DepSet_he569ea9f__21 \
	VTop_FADD__DepSet_he569ea9f__22 \
	VTop_FADD__DepSet_he569ea9f__23 \
	VTop_FADD__DepSet_he569ea9f__24 \
	VTop_FADD__DepSet_he569ea9f__25 \
	VTop_FADD__DepSet_he569ea9f__26 \
	VTop_FADD__DepSet_he569ea9f__27 \
	VTop_FADD__DepSet_he569ea9f__28 \
	VTop_FADD__DepSet_he569ea9f__29 \
	VTop_FADD__DepSet_he569ea9f__30 \
	VTop_FADD__DepSet_he569ea9f__31 \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	VTop___024root__Slow \
	VTop___024root__DepSet_h2cbf8d5f__0__Slow \
	VTop___024root__DepSet_h3858ed78__0__Slow \
	VTop_Threadgroup__Slow \
	VTop_Threadgroup__DepSet_hd878e116__0__Slow \
	VTop_Threadgroup__DepSet_hacf457c7__0__Slow \
	VTop_Threadgroup__DepSet_hf97edb5a__0__Slow \
	VTop_DotProdUnit_1__Slow \
	VTop_DotProdUnit_1__DepSet_hc8c6624c__0__Slow \
	VTop_DotProdUnit_1__DepSet_h99c7d233__0__Slow \
	VTop_DotProdUnit_1__DepSet_h99c7d233__1__Slow \
	VTop_DotProdUnit_1__DepSet_h99c7d233__2__Slow \
	VTop_FADD__Slow \
	VTop_FADD__DepSet_h95762ac3__0__Slow \
	VTop_FADD__DepSet_he569ea9f__0__Slow \
	VTop_FADD__DepSet_he569ea9f__1__Slow \
	VTop_FADD__DepSet_he569ea9f__2__Slow \
	VTop_FADD__DepSet_he569ea9f__3__Slow \
	VTop_FADD__DepSet_he569ea9f__4__Slow \
	VTop_FADD__DepSet_he569ea9f__5__Slow \
	VTop_FADD__DepSet_he569ea9f__6__Slow \
	VTop_FADD__DepSet_he569ea9f__7__Slow \
	VTop_FADD__DepSet_he569ea9f__8__Slow \
	VTop_FADD__DepSet_he569ea9f__9__Slow \
	VTop_FADD__DepSet_he569ea9f__10__Slow \
	VTop_FADD__DepSet_he569ea9f__11__Slow \
	VTop_FADD__DepSet_he569ea9f__12__Slow \
	VTop_FADD__DepSet_he569ea9f__13__Slow \
	VTop_FADD__DepSet_he569ea9f__14__Slow \
	VTop_FADD__DepSet_he569ea9f__15__Slow \
	VTop_FADD__DepSet_he569ea9f__16__Slow \
	VTop_FADD__DepSet_he569ea9f__17__Slow \
	VTop_FADD__DepSet_he569ea9f__18__Slow \
	VTop_FADD__DepSet_he569ea9f__19__Slow \
	VTop_FADD__DepSet_he569ea9f__20__Slow \
	VTop_FADD__DepSet_he569ea9f__21__Slow \
	VTop_FADD__DepSet_he569ea9f__22__Slow \
	VTop_FADD__DepSet_he569ea9f__23__Slow \
	VTop_FADD__DepSet_he569ea9f__24__Slow \
	VTop_FADD__DepSet_he569ea9f__25__Slow \
	VTop_FADD__DepSet_he569ea9f__26__Slow \
	VTop_FADD__DepSet_he569ea9f__27__Slow \
	VTop_FADD__DepSet_he569ea9f__28__Slow \
	VTop_FADD__DepSet_he569ea9f__29__Slow \
	VTop_FADD__DepSet_he569ea9f__30__Slow \
	VTop_FADD__DepSet_he569ea9f__31__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
	VTop__Trace__0 \
	VTop__Trace__1 \
	VTop__Trace__2 \
	VTop__Trace__3 \
	VTop__Trace__4 \
	VTop__Trace__5 \
	VTop__Trace__6 \
	VTop__Trace__7 \
	VTop__Trace__8 \
	VTop__Trace__9 \
	VTop__Trace__10 \
	VTop__Trace__11 \
	VTop__Trace__12 \
	VTop__Trace__13 \
	VTop__Trace__14 \
	VTop__Trace__15 \
	VTop__Trace__16 \
	VTop__Trace__17 \
	VTop__Trace__18 \
	VTop__Trace__19 \
	VTop__Trace__20 \
	VTop__Trace__21 \
	VTop__Trace__22 \
	VTop__Trace__23 \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	VTop__Syms \
	VTop__Trace__0__Slow \
	VTop__Trace__1__Slow \
	VTop__Trace__2__Slow \
	VTop__Trace__3__Slow \
	VTop__Trace__4__Slow \
	VTop__Trace__5__Slow \
	VTop__Trace__6__Slow \
	VTop__Trace__7__Slow \
	VTop__Trace__8__Slow \
	VTop__Trace__9__Slow \
	VTop__Trace__10__Slow \
	VTop__Trace__11__Slow \
	VTop__Trace__12__Slow \
	VTop__Trace__13__Slow \
	VTop__Trace__14__Slow \
	VTop__Trace__15__Slow \
	VTop__Trace__16__Slow \
	VTop__Trace__17__Slow \
	VTop__Trace__18__Slow \
	VTop__Trace__19__Slow \
	VTop__Trace__20__Slow \
	VTop__Trace__21__Slow \
	VTop__Trace__22__Slow \
	VTop__Trace__23__Slow \
	VTop__Trace__24__Slow \
	VTop__Trace__25__Slow \
	VTop__Trace__26__Slow \
	VTop__Trace__27__Slow \
	VTop__Trace__28__Slow \
	VTop__Trace__29__Slow \
	VTop__Trace__30__Slow \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_vcd_c \
	verilated_threads \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
