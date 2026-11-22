/* FUN_0050dda0 @ 0x0050dda0 (34 bytes): ASM FALLBACK (no behaviour-verified C yet).
 * Same instruction sequence as lomse.exe; branch targets via local labels / absolute slots. tools/gen_asmfn.py */
#include "lom.h"
#define LOM_SELF_0050dda0 1
__attribute__((naked)) void rb_0050dda0(void)
{
  __asm__(
    "  movl 4(%esp), %eax\n"
    "  pushl %esi\n"
    "  movl %ecx, %esi\n"
    "  pushl %eax\n"
    "  call *_lom_af_0050dda0_0\n"
    "  testl %esi, %esi\n"
    "  je .L0050ddb9\n"
    "  movl (%esi), %edx\n"
    "  pushl $1\n"
    "  movl %esi, %ecx\n"
    "  call *(%edx)\n"
    ".L0050ddb9:\n"
    "  movl $1, %eax\n"
    "  popl %esi\n"
    "  retl $4\n"
  );
}
__asm__(".data\n"
  "_lom_af_0050dda0_0: .long 0x0050da70\n"
  ".text\n");
