/* Hand C for lomse.exe FUN_0053ab20 @ 0x0053ab20 (167 bytes, __stdcall ret 4).
 * g250, shim-plus-C. The original is the MSVC _threadstart body: it builds an
 * ebp / _except_handler3 frame (next, handler 0053b9f8, scope 0x54eec8,
 * try=-1, add esp,-0xc, saved ebx/esi/edi, saved esp at [ebp-0x18]), calls
 * TlsSetValue(*0x574a50, param) through IAT 0x54d1e4, and on failure
 * cdecl-calls already-fn __amsg_exit 0053c470(0x10) but continues. If
 * [0x5747c0] is nonzero it calls that pointer, then sets try=0, cdecl-calls
 * the thread procedure at [param+0x48] with [param+0x4c], and cdecl-calls
 * already-fn 0053abd0. It then sets try=-1, returns 0, and unlinks fs:0 with
 * ret 4. Scope-table 0x54eec8 entry 0 is a filter/handler pair at mid-entries
 * 0053ab87 (filter, already-fn 005409d0) and 0053ab9c (catch, already-fn
 * 0053f240, then falls through the original epilogue). Those mid-entries stay
 * original bytes (standalone bodyref); this C owns the main path only. A
 * naked shim builds the exact fs:0 / saved-esp frame and the ret-4 epilogue.
 */
#include "lom.h"

#define LOM_SELF_0053ab20 1

/* Mid-entries kept as original standalone bytes (bodyref). */
__attribute__((used)) const unsigned g250_mid_filter = 0x0053ab87;
__attribute__((used)) const unsigned g250_mid_catch = 0x0053ab9c;


#ifndef G250_NATIVE_TEST
__attribute__((used)) void *g250_amsg = (void *)0x0053c470;
__attribute__((used)) void *g250_endthread = (void *)0x0053abd0;
#else
void stub_0053c470(unsigned code);
void stub_0053abd0(void);
__attribute__((used)) void *g250_amsg = (void *)stub_0053c470;
__attribute__((used)) void *g250_endthread = (void *)stub_0053abd0;
#endif

#ifndef G250_SHIM_HANDLER
#define G250_SHIM_HANDLER 0x53b9f8
#endif
#ifndef G250_SHIM_SCOPE
#define G250_SHIM_SCOPE 0x54eec8
#endif
#define G250_STRX(x) #x
#define G250_STR(x) G250_STRX(x)
#define G250_SHIM_HANDLER_STR G250_STR(G250_SHIM_HANDLER)
#define G250_SHIM_SCOPE_STR G250_STR(G250_SHIM_SCOPE)

typedef int (__stdcall *g250_tls_fn)(unsigned idx, void *val);

#ifdef G250_NATIVE_TEST
extern unsigned g250_plant_tls_index;
extern void *g250_plant_init;
extern g250_tls_fn g250_plant_tls;
#endif

void lom_body_0053ab20(void *param, int *trylevel)
    __asm__("lom_body_0053ab20");

void lom_body_0053ab20(void *param, int *trylevel)
{
  unsigned idx, ok;
  void (*init)(void);
  void (*proc)(unsigned);
  unsigned arg;
  g250_tls_fn tls;

#ifdef G250_NATIVE_TEST
  idx = g250_plant_tls_index;
  tls = g250_plant_tls;
#else
  idx = *(unsigned *)0x00574a50;
  tls = *(g250_tls_fn *)0x0054d1e4;
#endif
  ok = tls(idx, param);
  if (ok == 0) {
#ifdef G250_NATIVE_TEST
    stub_0053c470(0x10);
#else
    __asm__ volatile (
      "pushl $0x10\n"
      "calll *_g250_amsg\n"
      "addl $4, %%esp\n"
      :
      :
      : "eax", "ecx", "edx", "memory"
    );
#endif
  }
#ifdef G250_NATIVE_TEST
  init = (void (*)(void))g250_plant_init;
#else
  init = *(void (**)(void))0x005747c0;
#endif
  if (init != 0) {
    init();
  }
  *trylevel = 0;
  proc = *(void (**)(unsigned))((char *)param + 0x48);
  arg = *(unsigned *)((char *)param + 0x4c);
  proc(arg);
#ifdef G250_NATIVE_TEST
  stub_0053abd0();
#else
  __asm__ volatile (
    "calll *_g250_endthread\n"
    :
    :
    : "eax", "ecx", "edx", "memory"
  );
#endif
}

__attribute__((naked)) void rb_0053ab20(void)
{
  __asm__(
    "  pushl %ebp\n"
    "  movl %esp, %ebp\n"
    "  pushl $-1\n"
    "  pushl $" G250_SHIM_SCOPE_STR "\n"
    "  pushl $" G250_SHIM_HANDLER_STR "\n"
    "  movl %fs:0, %eax\n"
    "  pushl %eax\n"
    "  movl %esp, %fs:0\n"
    "  addl $-0xc, %esp\n"
    "  pushl %ebx\n"
    "  pushl %esi\n"
    "  pushl %edi\n"
    "  movl %esp, -0x18(%ebp)\n"
    "  leal -4(%ebp), %eax\n"
    "  pushl %eax\n"
    "  pushl 8(%ebp)\n"
    "  call lom_body_0053ab20\n"
    "  addl $8, %esp\n"
    "  movl $-1, -4(%ebp)\n"
    "  xorl %eax, %eax\n"
    "  movl -0x10(%ebp), %ecx\n"
    "  movl %ecx, %fs:0\n"
    "  popl %edi\n"
    "  popl %esi\n"
    "  popl %ebx\n"
    "  movl %ebp, %esp\n"
    "  popl %ebp\n"
    "  retl $4\n"
  );
}

extern void rb_0053f240(void);
extern void rb_005409d0(void);

__attribute__((naked)) void rb_0053ab87(void)
{
  __asm__(
    "  movl -0x14(%ebp), %eax\n"
    "  movl (%eax), %edx\n"
    "  movl (%edx), %ecx\n"
    "  movl %ecx, -0x1c(%ebp)\n"
    "  pushl %eax\n"
    "  pushl %ecx\n"
    "  calll _rb_005409d0\n"
    "  addl $8, %esp\n"
    "  retl\n"
  );
}

__attribute__((naked)) void rb_0053ab9c(void)
{
  __asm__(
    "  movl -0x18(%ebp), %esp\n"
    "  movl -0x1c(%ebp), %eax\n"
    "  pushl %eax\n"
    "  calll _rb_0053f240\n"
    "  addl $4, %esp\n"
    "  movl $0xffffffff, -4(%ebp)\n"
    "  xorl %eax, %eax\n"
    "  movl -0x10(%ebp), %ecx\n"
    "  movl %ecx, %fs:0\n"
    "  popl %edi\n"
    "  popl %esi\n"
    "  popl %ebx\n"
    "  movl %ebp, %esp\n"
    "  popl %ebp\n"
    "  retl $4\n"
  );
}
