/* FUN_0053cc30 @ 0x0053cc30 (22 bytes): ASM FALLBACK (no behaviour-verified C yet).
 * Same instruction sequence as lomse.exe; branch targets via local labels / absolute slots. tools/gen_asmfn.py */
#include "lom.h"
#define LOM_SELF_0053cc30 1
__attribute__((naked)) void rb_0053cc30(void)
{
  __asm__(
    "  pushl %ebp\n"
    "  movl %esp, %ebp\n"
    "  movl 8(%ebp), %eax\n"
    "  movl 0x574980(, %eax, 4), %ecx\n"
    "  pushl %ecx\n"
    "  call *0x54d0dc\n"
    "  popl %ebp\n"
    "  retl \n"
  );
}
