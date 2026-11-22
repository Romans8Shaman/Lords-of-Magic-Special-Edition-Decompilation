/* Hand C for lomse.exe FUN_0053e930 @ 0x0053e930 (181 bytes, __cdecl).
 * g251, shim-plus-C. The original walks a C++ EH unwind-state map: it builds
 * an ebp / _except_handler3 frame (next, handler 0053b9f8, scope 0x54efa0,
 * try=-1, add esp,-0xc, saved ebx/esi/edi, saved esp at [ebp-0x18]), loads
 * the current state from [frame+8] into esi and [ebp-0x1c], and loops until
 * that state equals the stop argument. Out-of-range states (esi<=-1 or
 * esi>=count at [umap+4]) cdecl-call already-fn unexpected 0053f160 and then
 * continue. Each step sets try=0, stdcall-calls already-fn __CallSettingFrame
 * 0053eed0(action, frame, 0x103) when the action at table[state] is nonzero
 * (table at [umap+8], 8-byte entries: next, action), then sets try=-1 and
 * advances esi to the next state. It writes the final state back to [frame+8]
 * and unlinks fs:0. Scope-table 0x54efa0 entry 0 is a filter/handler pair at
 * mid-entries 0053e9a6 (filter, already-fn 00539fd0) and 0053e9b3 (catch,
 * restores esi from [ebp-0x1c], steps once, and jumps to the original loop
 * at 0053e962). Those mid-entries stay original bytes (standalone bodyref).
 * This C owns the main path only; unused cdecl param_2 is ignored, as in the
 * original. A naked shim builds the exact fs:0 / saved-esp / [ebp-0x1c] frame
 * and the cdecl epilogue.
 */
#include "lom.h"

#define LOM_SELF_0053e930 1

/* Mid-entries kept as original standalone bytes (bodyref). */
__attribute__((used)) const unsigned g251_mid_filter = 0x0053e9a6;
__attribute__((used)) const unsigned g251_mid_catch = 0x0053e9b3;
__attribute__((used)) const unsigned g251_mid_loop = 0x0053e962;


#ifndef G251_NATIVE_TEST
__attribute__((used)) void *g251_unexpected = (void *)0x0053f160;
__attribute__((used)) void *g251_csf = (void *)0x0053eed0;
#else
void stub_0053f160(void);
void __stdcall stub_0053eed0(unsigned action, void *frame, unsigned code);
__attribute__((used)) void *g251_unexpected = (void *)stub_0053f160;
__attribute__((used)) void *g251_csf = (void *)stub_0053eed0;
#endif

#ifndef G251_SHIM_HANDLER
#define G251_SHIM_HANDLER 0x53b9f8
#endif
#ifndef G251_SHIM_SCOPE
#define G251_SHIM_SCOPE 0x54efa0
#endif
#define G251_STRX(x) #x
#define G251_STR(x) G251_STRX(x)
#define G251_SHIM_HANDLER_STR G251_STR(G251_SHIM_HANDLER)
#define G251_SHIM_SCOPE_STR G251_STR(G251_SHIM_SCOPE)

void lom_body_0053e930(void *frame, void *unused, unsigned *umap, int stop,
                       int *trylevel, int *state_slot)
    __asm__("lom_body_0053e930");

void lom_body_0053e930(void *frame, void *unused, unsigned *umap, int stop,
                       int *trylevel, int *state_slot)
{
  int esi;
  unsigned *table;
  unsigned action;
  int count;
  (void)unused;
  esi = *(int *)((char *)frame + 8);
  *state_slot = esi;
  count = (int)umap[1];
  table = (unsigned *)umap[2];
  for (;;) {
    if (esi == stop) {
      break;
    }
    if (esi <= -1 || esi >= count) {
#ifdef G251_NATIVE_TEST
      stub_0053f160();
#else
      __asm__ volatile (
        "calll *_g251_unexpected\n"
        :
        :
        : "eax", "ecx", "edx", "memory"
      );
#endif
    }
    *trylevel = 0;
    action = table[(unsigned)esi * 2 + 1];
    if (action != 0) {
#ifdef G251_NATIVE_TEST
      stub_0053eed0(action, frame, 0x103);
#else
      __asm__ volatile (
        "pushl $0x103\n"
        "pushl %1\n"
        "pushl %0\n"
        "calll *_g251_csf\n"
        :
        : "r"(action), "r"(frame)
        : "eax", "ecx", "edx", "memory"
      );
#endif
    }
    *trylevel = -1;
    esi = (int)table[(unsigned)esi * 2];
    *state_slot = esi;
  }
  *(int *)((char *)frame + 8) = esi;
}

__attribute__((naked)) void rb_0053e930(void)
{
  __asm__(
    "  pushl %ebp\n"
    "  movl %esp, %ebp\n"
    "  pushl $-1\n"
    "  pushl $" G251_SHIM_SCOPE_STR "\n"
    "  pushl $" G251_SHIM_HANDLER_STR "\n"
    "  movl %fs:0, %eax\n"
    "  pushl %eax\n"
    "  movl %esp, %fs:0\n"
    "  addl $-0xc, %esp\n"
    "  pushl %ebx\n"
    "  pushl %esi\n"
    "  pushl %edi\n"
    "  movl %esp, -0x18(%ebp)\n"
    "  leal -0x1c(%ebp), %eax\n"
    "  pushl %eax\n"
    "  leal -4(%ebp), %eax\n"
    "  pushl %eax\n"
    "  pushl 0x14(%ebp)\n"
    "  pushl 0x10(%ebp)\n"
    "  pushl 0xc(%ebp)\n"
    "  pushl 8(%ebp)\n"
    "  call lom_body_0053e930\n"
    "  addl $24, %esp\n"
    "  movl -0x10(%ebp), %ecx\n"
    "  movl %ecx, %fs:0\n"
    "  popl %edi\n"
    "  popl %esi\n"
    "  popl %ebx\n"
    "  movl %ebp, %esp\n"
    "  popl %ebp\n"
    "  retl\n"
  );
}

extern void rb_0053f160(void);
extern void rb_0053eed0(void);
extern void rb_00539fd0(void);

/* Loop + filter + catch share control flow (je 0053e9d1 / jmp 0053e962). */
__attribute__((naked)) void rb_0053e962(void);
__attribute__((naked)) void rb_0053e9a6(void);
__attribute__((naked)) void rb_0053e9b3(void);
__attribute__((naked)) void rb_0053e962(void)
{
  __asm__(
    "  cmpl 0x14(%ebp), %esi\n"
    "  je _rb_0053e9d1\n"
    "  cmpl $-1, %esi\n"
    "  jle 1f\n"
    "  cmpl 4(%edi), %esi\n"
    "  jl 2f\n"
    "1:\n"
    "  calll _rb_0053f160\n"
    "2:\n"
    "  movl $0, -4(%ebp)\n"
    "  movl 8(%edi), %eax\n"
    "  movl 4(%eax, %esi, 8), %eax\n"
    "  testl %eax, %eax\n"
    "  je 3f\n"
    "  pushl $0x103\n"
    "  pushl %ebx\n"
    "  pushl %eax\n"
    "  calll _rb_0053eed0\n"
    "3:\n"
    "  movl $0xffffffff, -4(%ebp)\n"
    "  movl 8(%edi), %edx\n"
    "  movl (%edx, %esi, 8), %esi\n"
    "  movl %esi, -0x1c(%ebp)\n"
    "  jmp _rb_0053e962\n"
    ".globl _rb_0053e9a6\n"
    "_rb_0053e9a6:\n"
    "  movl -0x14(%ebp), %ecx\n"
    "  pushl %ecx\n"
    "  calll _rb_00539fd0\n"
    "  addl $4, %esp\n"
    "  retl\n"
    ".globl _rb_0053e9b3\n"
    "_rb_0053e9b3:\n"
    "  movl -0x18(%ebp), %esp\n"
    "  movl $0xffffffff, -4(%ebp)\n"
    "  movl 0x10(%ebp), %edi\n"
    "  movl 8(%ebp), %ebx\n"
    "  movl -0x1c(%ebp), %esi\n"
    "  movl 8(%edi), %edx\n"
    "  movl (%edx, %esi, 8), %esi\n"
    "  movl %esi, -0x1c(%ebp)\n"
    "  jmp _rb_0053e962\n"
    ".globl _rb_0053e9d1\n"
    "_rb_0053e9d1:\n"
    "  movl %esi, 8(%ebx)\n"
    "  movl -0x10(%ebp), %ecx\n"
    "  movl %ecx, %fs:0\n"
    "  popl %edi\n"
    "  popl %esi\n"
    "  popl %ebx\n"
    "  movl %ebp, %esp\n"
    "  popl %ebp\n"
    "  retl\n"
  );
}
