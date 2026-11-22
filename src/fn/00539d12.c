/* Hand C for lomse.exe __local_unwind2 @ 0x00539d12 (104 bytes, __cdecl).
 * g246, shim-plus-C. The original has no ebp frame of its own. It saves
 * ebx/esi/edi, then builds a custom fs:0 registration (next, handler
 * 00539cf0 already fn, try=-2, a copy of the frame argument) and walks
 * the _except_handler3 scope table of the frame (scopetable at [frame+8],
 * current try at [frame+0xc]) until the try level is -1 or equals the stop
 * argument. For each level whose filter is 0 (a __finally), it writes the
 * enclosing try into both the registration try slot and [frame+0xc], calls
 * already-fn __NLG_Notify 00539da6 (eax=handler, pushed 0x101, ret 4;
 * 00539da6 reads 8(%ebp) from *this function's caller*, so the shim passes
 * the incoming ebp through and the C body restores that ebp around the NLG
 * call), then calls the finally. Filter-nonzero levels only step the try
 * level. A naked shim builds that exact registration and cdecl epilogue
 * (pop fs:0, add 0xc, pop edi/esi/ebx, ret). There is no mid-entry in the
 * 104-byte body; 00539d7a (__abnormal_termination) starts at the next byte
 * and is already fn.
 */
#include "lom.h"

#define LOM_SELF_00539d12 1

#ifndef G246_NATIVE_TEST
__attribute__((used)) void *g246_nlg = (void *)0x00539da6;
#else
void __stdcall stub_nlg(unsigned code);
__attribute__((used)) void *g246_nlg = (void *)stub_nlg;
#endif

#ifndef G246_SHIM_HANDLER
#define G246_SHIM_HANDLER 0x539cf0
#endif
#define G246_STRX(x) #x
#define G246_STR(x) G246_STRX(x)
#define G246_SHIM_HANDLER_STR G246_STR(G246_SHIM_HANDLER)

void lom_body_00539d12(unsigned *frame, int stop, int *reg_try, unsigned caller_ebp)
    __asm__("lom_body_00539d12");

void lom_body_00539d12(unsigned *frame, int stop, int *reg_try, unsigned caller_ebp)
{
  unsigned *scope;
  int tryv;
  unsigned *ent;
  unsigned handler;
  for (;;) {
    scope = (unsigned *)frame[2];
    tryv = (int)frame[3];
    if (tryv == -1) {
      break;
    }
    if (tryv == stop) {
      break;
    }
    ent = scope + (unsigned)tryv * 3u;
    *reg_try = (int)ent[0];
    frame[3] = ent[0];
    if (ent[1] != 0) {
      continue;
    }
    handler = ent[2];
    __asm__ volatile (
      "pushl %%ebp\n"
      "movl %1, %%ebp\n"
      "pushl $0x101\n"
      "movl %0, %%eax\n"
      "calll *_g246_nlg\n"
      "popl %%ebp\n"
      :
      : "r"(handler), "r"(caller_ebp)
      : "eax", "ecx", "edx", "memory"
    );
    ((void (*)(void))handler)();
  }
}

__attribute__((naked)) void rb_00539d12(void)
{
  __asm__(
    "  pushl %ebx\n"
    "  pushl %esi\n"
    "  pushl %edi\n"
    "  movl 0x10(%esp), %eax\n"
    "  pushl %eax\n"
    "  pushl $-2\n"
    "  pushl $" G246_SHIM_HANDLER_STR "\n"
    "  pushl %fs:0\n"
    "  movl %esp, %fs:0\n"
    "  leal 8(%esp), %eax\n"
    "  pushl %ebp\n"
    "  pushl %eax\n"
    "  pushl 0x2c(%esp)\n"
    "  pushl 0x2c(%esp)\n"
    "  call lom_body_00539d12\n"
    "  addl $16, %esp\n"
    "  popl %fs:0\n"
    "  addl $0xc, %esp\n"
    "  popl %edi\n"
    "  popl %esi\n"
    "  popl %ebx\n"
    "  retl\n"
  );
}
