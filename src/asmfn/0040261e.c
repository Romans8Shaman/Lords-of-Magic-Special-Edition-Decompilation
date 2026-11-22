/* FUN_0040261e @ 0x0040261e (44 bytes): ASM FALLBACK (no behaviour-verified C yet).
 * Same instruction sequence as lomse.exe; branch targets via local labels / absolute slots. tools/gen_asmfn.py */
#include "lom.h"
#define LOM_SELF_0040261e 1
__attribute__((naked)) void rb_0040261e(void)
{
  __asm__(
    "  pushl %ebx\n"
    "  pushl %ebp\n"
    "  pushl %esi\n"
    "  movl %edi, %ecx\n"
    "  call *_lom_af_0040261e_0\n"
    "  testl %eax, %eax\n"
    "  je .Lx0040261e_0\n"
    "  pushl $3\n"
    "  movl %esi, %ecx\n"
    "  call *_lom_af_0040261e_2\n"
    "  movl %esi, %ecx\n"
    "  call *_lom_af_0040261e_3\n"
    "  popl %edi\n"
    "  popl %esi\n"
    "  popl %ebp\n"
    "  popl %ebx\n"
    "  addl $8, %esp\n"
    "  retl $4\n"
    ".Lx0040261e_0: jmp *_lom_af_0040261e_1\n"
  );
}
__asm__(".data\n"
  "_lom_af_0040261e_0: .long 0x004019f0\n"
  "_lom_af_0040261e_1: .long 0x004023ce\n"
  "_lom_af_0040261e_2: .long 0x0041efa0\n"
  "_lom_af_0040261e_3: .long 0x00407900\n"
  ".text\n");
