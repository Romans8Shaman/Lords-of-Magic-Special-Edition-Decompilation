/* FUN_00539da6 @ 0x00539da6 (24 bytes): ASM FALLBACK (no behaviour-verified C yet).
 * Same instruction sequence as lomse.exe; branch targets via local labels / absolute slots. tools/gen_asmfn.py */
#include "lom.h"
#define LOM_SELF_00539da6 1
__attribute__((naked)) void rb_00539da6(void)
{
  __asm__(
    "  pushl %ebx\n"
    "  pushl %ecx\n"
    "  movl $0x5747d0, %ebx\n"
    "  movl 8(%ebp), %ecx\n"
    "  movl %ecx, 8(%ebx)\n"
    "  movl %eax, 4(%ebx)\n"
    "  movl %ebp, 0xc(%ebx)\n"
    "  popl %ecx\n"
    "  popl %ebx\n"
    "  retl $4\n"
  );
}
