/* FUN_004b6900 @ 0x004b6900 (43 bytes): ASM FALLBACK (no behaviour-verified C yet).
 * Same instruction sequence as lomse.exe; branch targets via local labels / absolute slots. tools/gen_asmfn.py */
#include "lom.h"
#define LOM_SELF_004b6900 1
__attribute__((naked)) void rb_004b6900(void)
{
  __asm__(
    "  movl 8(%esp), %edx\n"
    "  pushl %ebx\n"
    "  pushl %esi\n"
    "  movl 0xc(%esp), %esi\n"
    "  leal -1(%edx), %ecx\n"
    "  pushl %edi\n"
    "  movl %ecx, %ebx\n"
    "  xorl %eax, %eax\n"
    "  movl %esi, %edi\n"
    "  shrl $2, %ecx\n"
    "  rep stosl %eax, %es:(%edi)\n"
    "  movl %ebx, %ecx\n"
    "  andl $3, %ecx\n"
    "  rep stosb %al, %es:(%edi)\n"
    "  movb $1, -1(%edx, %esi)\n"
    "  popl %edi\n"
    "  popl %esi\n"
    "  popl %ebx\n"
    "  retl $8\n"
  );
}
