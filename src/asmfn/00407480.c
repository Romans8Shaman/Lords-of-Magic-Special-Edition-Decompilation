/* FUN_00407480 @ 0x00407480 (43 bytes): ASM FALLBACK (no behaviour-verified C yet).
 * Same instruction sequence as lomse.exe; branch targets via local labels / absolute slots. tools/gen_asmfn.py */
#include "lom.h"
#define LOM_SELF_00407480 1
__attribute__((naked)) void rb_00407480(void)
{
  __asm__(
    "  movl %ecx, %eax\n"
    "  pushl %esi\n"
    "  movl 0xc(%esp), %ecx\n"
    "  movl 8(%esp), %esi\n"
    "  movb %cl, 1(%eax)\n"
    "  pushl %edi\n"
    "  shll $3, %ecx\n"
    "  movb $0, (%eax)\n"
    "  leal 4(%eax), %edi\n"
    "  movl %ecx, %eax\n"
    "  shrl $2, %ecx\n"
    "  rep movsl (%esi), %es:(%edi)\n"
    "  movl %eax, %ecx\n"
    "  andl $3, %ecx\n"
    "  rep movsb (%esi), %es:(%edi)\n"
    "  popl %edi\n"
    "  popl %esi\n"
    "  retl $8\n"
  );
}
