/* Hand C for lomse.exe FUN_0053eb37 @ 0x0053eb37 (13 bytes, cdecl).
 * g233. EH filter funclet: no frame of its own; reads [ebp-0x14] from the
 * *caller's* frame, calls the exception-record predicate at 0053ebe0
 * (unlisted, lives in the gap before 0053ec10, kept as original bytes),
 * and returns that predicate's eax. A naked shim captures [ebp-0x14] and
 * does a cdecl ret; the call itself lives in C.
 */
#include "lom.h"

#define LOM_SELF_0053eb37 1

#ifndef G233_NATIVE_TEST
#define FUN_0053ebe0 ((int (__cdecl *)(unsigned))0x0053ebe0)
#else
int filter_0053ebe0(unsigned arg);
#define FUN_0053ebe0 filter_0053ebe0
#endif

unsigned lom_body_0053eb37(unsigned arg) __asm__("lom_body_0053eb37");

unsigned lom_body_0053eb37(unsigned arg)
{
  return (unsigned)FUN_0053ebe0(arg);
}

__attribute__((naked)) void rb_0053eb37(void)
{
  __asm__(
    "  pushl -0x14(%ebp)\n"
    "  call lom_body_0053eb37\n"
    "  addl $4, %esp\n"
    "  retl\n"
  );
}
