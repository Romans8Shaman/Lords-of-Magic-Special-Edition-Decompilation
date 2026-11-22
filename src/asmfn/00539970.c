/* FUN_00539970 @ 0x00539970 (45 bytes): ASM FALLBACK (no behaviour-verified C yet).
 * Same instruction sequence as lomse.exe; branch targets via local labels / absolute slots. tools/gen_asmfn.py */
#include "lom.h"
#define LOM_SELF_00539970 1
__attribute__((naked)) void rb_00539970(void)
{
  __asm__(
    "  pushl %ebp\n"
    "  movl %esp, %ebp\n"
    "  pushl %ecx\n"
    "  pushl %ebx\n"
    "  pushl %esi\n"
    "  pushl %edi\n"
    "  movl 0xc(%ebp), %eax\n"
    "  addl $0xc, %eax\n"
    "  movl %eax, -4(%ebp)\n"
    "  movl %fs:0, %ebx\n"
    "  movl (%ebx), %eax\n"
    "  movl %eax, %fs:0\n"
    "  movl 8(%ebp), %eax\n"
    "  movl 0xc(%ebp), %ebx\n"
    "  movl -4(%ebx), %esp\n"
    "  movl -4(%ebp), %ebp\n"
    "  jmp *%eax\n"
  );
}
