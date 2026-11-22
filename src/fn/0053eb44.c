/* Hand C for lomse.exe FUN_0053eb44 @ 0x0053eb44 (43 bytes, cdecl).
 * g239. SEH catch/finally terminator: no frame of its own; uses the
 * *parent's* ebp. The first instruction rewinds ESP from [ebp-0x18],
 * then the C body clears [ebp-0x2c] and calls still-asmfn
 * __local_unwind2 (00539d12) as cdecl (registration at ebp-0x10,
 * dest level -1), then returns 0. The naked shim does the ESP rewind,
 * the fs:0 unlink from [ebp-0x10], and the parent cdecl epilogue
 * (pop edi/esi/ebx, mov esp,ebp, pop ebp, ret). Entered as a mid-
 * function jump, not a normal call.
 */
#include "lom.h"

#define LOM_SELF_0053eb44 1

#ifndef G239_NATIVE_TEST
#define FUN_00539d12 ((unsigned (__cdecl *)(void *, int))0x00539d12)
#else
unsigned stub_00539d12(void *rn, int level);
#define FUN_00539d12 stub_00539d12
#endif

unsigned lom_body_0053eb44(unsigned ebp_v, void *rn) __asm__("lom_body_0053eb44");

unsigned lom_body_0053eb44(unsigned ebp_v, void *rn)
{
  *(unsigned *)(ebp_v - 0x2c) = 0;
  FUN_00539d12(rn, -1);
  return 0;
}

__attribute__((naked)) void rb_0053eb44(void)
{
  __asm__(
    "  movl -0x18(%ebp), %esp\n"
    "  leal -0x10(%ebp), %eax\n"
    "  pushl %eax\n"
    "  pushl %ebp\n"
    "  call lom_body_0053eb44\n"
    "  addl $8, %esp\n"
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
