/* __abnormal_termination @ 0x00539d7a (35 bytes): ASM FALLBACK (no behaviour-verified C yet).
 * Same instruction sequence as lomse.exe; branch targets via local labels / absolute slots. tools/gen_asmfn.py */
#include "lom.h"
#define LOM_SELF_00539d7a 1
__attribute__((naked)) void rb_00539d7a(void)
{
  __asm__(
    "  xorl %eax, %eax\n"
    "  movl %fs:0, %ecx\n"
    "  cmpl $0x539cf0, 4(%ecx)\n"
    "  jne .L00539d9c\n"
    "  movl 0xc(%ecx), %edx\n"
    "  movl 0xc(%edx), %edx\n"
    "  cmpl %edx, 8(%ecx)\n"
    "  jne .L00539d9c\n"
    "  movl $1, %eax\n"
    ".L00539d9c:\n"
    "  retl \n"
  );
}
