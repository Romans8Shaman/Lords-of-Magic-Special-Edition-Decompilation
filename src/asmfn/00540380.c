/* FUN_00540380 @ 0x00540380 (40 bytes): ASM FALLBACK (no behaviour-verified C yet).
 * Same instruction sequence as lomse.exe; branch targets via local labels / absolute slots. tools/gen_asmfn.py */
#include "lom.h"
#define LOM_SELF_00540380 1
__attribute__((naked)) void rb_00540380(void)
{
  __asm__(
    "  pushl %ebp\n"
    "  movl %esp, %ebp\n"
    "  pushl %ecx\n"
    "  wait \n"
    "  fnstcw -4(%ebp)\n"
    "  movl 0xc(%ebp), %eax\n"
    "  movl 8(%ebp), %ecx\n"
    "  movl %eax, %edx\n"
    "  andl %ecx, %edx\n"
    "  movl -4(%ebp), %ecx\n"
    "  notl %eax\n"
    "  andl %ecx, %eax\n"
    "  orl %eax, %edx\n"
    "  movl %edx, 0xc(%ebp)\n"
    "  fldcw 0xc(%ebp)\n"
    "  movswl %cx, %eax\n"
    "  movl %ebp, %esp\n"
    "  popl %ebp\n"
    "  retl \n"
  );
}
