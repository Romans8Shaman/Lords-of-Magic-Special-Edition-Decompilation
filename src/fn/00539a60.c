/* Hand C for lomse.exe FUN_00539a60 @ 0x00539a60 (91 bytes, cdecl).
 * g240. CRT-style CallSettingFrame wrapper: no interesting logic besides
 * calling already-C g231 0053eed0 (stdcall, 3 args: handler, rn, code) as
 * (a10, a08, a18). A naked shim builds the 0x14-byte SEH registration
 * (next, handler 0x539ac0, a0c, a08, a14+1), links and unlinks fs:0, and
 * does the cdecl epilogue. Happy-path exceptions are not taken.
 */
#include "lom.h"

#define LOM_SELF_00539a60 1

#ifndef G240_NATIVE_TEST
#define FUN_0053eed0 ((unsigned (__stdcall *)(unsigned, unsigned, unsigned))0x0053eed0)
#else
unsigned __stdcall stub_0053eed0(unsigned handler, unsigned rn, unsigned code);
#define FUN_0053eed0 stub_0053eed0
#endif

unsigned lom_body_00539a60(unsigned a10, unsigned a08, unsigned a18)
    __asm__("lom_body_00539a60");

unsigned lom_body_00539a60(unsigned a10, unsigned a08, unsigned a18)
{
  return FUN_0053eed0(a10, a08, a18);
}

__attribute__((naked)) void rb_00539a60(void)
{
  __asm__(
    "  pushl %ebp\n"
    "  movl %esp, %ebp\n"
    "  subl $0x14, %esp\n"
    "  movl 0x14(%ebp), %edx\n"
    "  movl 0xc(%ebp), %eax\n"
    "  movl 8(%ebp), %ecx\n"
    "  incl %edx\n"
    "  movl $0, -0x14(%ebp)\n"
    "  movl $0x00539ac0, -0x10(%ebp)\n"
    "  movl %eax, -0xc(%ebp)\n"
    "  movl %ecx, -8(%ebp)\n"
    "  movl %edx, -4(%ebp)\n"
    "  movl %fs:0, %eax\n"
    "  movl %eax, -0x14(%ebp)\n"
    "  leal -0x14(%ebp), %eax\n"
    "  movl %eax, %fs:0\n"
    "  pushl 0x18(%ebp)\n"
    "  pushl 8(%ebp)\n"
    "  pushl 0x10(%ebp)\n"
    "  call lom_body_00539a60\n"
    "  addl $12, %esp\n"
    "  movl %eax, %ecx\n"
    "  movl -0x14(%ebp), %eax\n"
    "  movl %eax, %fs:0\n"
    "  movl %ecx, %eax\n"
    "  movl %ebp, %esp\n"
    "  popl %ebp\n"
    "  retl\n"
  );
}
