/* FUN_00498b40 @ 0x00498b40 (44 bytes): ASM FALLBACK (no behaviour-verified C yet).
 * Same instruction sequence as lomse.exe; branch targets via local labels / absolute slots. tools/gen_asmfn.py */
#include "lom.h"
#define LOM_SELF_00498b40 1
__attribute__((naked)) void rb_00498b40(void)
{
  __asm__(
    "  movl 8(%esp), %eax\n"
    "  pushl %esi\n"
    "  movl 8(%esp), %esi\n"
    "  pushl %edi\n"
    "  movl %ecx, %edi\n"
    "  leal (, %eax, 8), %ecx\n"
    "  movl %eax, 0xa0(%edi)\n"
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
