/* FUN_004f6b90 @ 0x004f6b90 (34 bytes): ASM FALLBACK (no behaviour-verified C yet).
 * Same instruction sequence as lomse.exe; branch targets via local labels / absolute slots. tools/gen_asmfn.py */
#include "lom.h"
#define LOM_SELF_004f6b90 1
__attribute__((naked)) void rb_004f6b90(void)
{
  __asm__(
    "  movl 4(%esp), %eax\n"
    "  pushl %esi\n"
    "  movl %ecx, %esi\n"
    "  pushl %eax\n"
    "  call *_lom_af_004f6b90_0\n"
    "  testl %esi, %esi\n"
    "  je .L004f6ba9\n"
    "  movl (%esi), %edx\n"
    "  pushl $1\n"
    "  movl %esi, %ecx\n"
    "  call *(%edx)\n"
    ".L004f6ba9:\n"
    "  movl $1, %eax\n"
    "  popl %esi\n"
    "  retl $4\n"
  );
}
__asm__(".data\n"
  "_lom_af_004f6b90_0: .long 0x004f6b00\n"
  ".text\n");
