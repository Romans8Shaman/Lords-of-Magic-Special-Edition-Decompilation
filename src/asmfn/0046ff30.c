/* FUN_0046ff30 @ 0x0046ff30 (74 bytes): ASM FALLBACK (no behaviour-verified C yet).
 * Same instruction sequence as lomse.exe; branch targets via local labels / absolute slots. tools/gen_asmfn.py */
#include "lom.h"
#define LOM_SELF_0046ff30 1
__attribute__((naked)) void rb_0046ff30(void)
{
  __asm__(
    "  pushl %esi\n"
    "  pushl %edi\n"
    "  xorl %edi, %edi\n"
    "  movl %ecx, %esi\n"
    "  pushl $0x46fd80\n"
    "  movl $0xffffffff, 0x583258\n"
    "  movl %edi, 0x58325c\n"
    "  call *_lom_af_0046ff30_0\n"
    "  movl 0x583258, %eax\n"
    "  cmpl %edi, %eax\n"
    "  jl .L0046ff73\n"
    "  pushl %eax\n"
    "  movl %esi, %ecx\n"
    "  call *_lom_af_0046ff30_1\n"
    "  testl %eax, %eax\n"
    "  je .L0046ff73\n"
    "  movl 0xc(%esp), %ecx\n"
    "  movl (%esi), %eax\n"
    "  pushl %ecx\n"
    "  movl %esi, %ecx\n"
    "  call *8(%eax)\n"
    "  movl %eax, %edi\n"
    ".L0046ff73:\n"
    "  movl %edi, %eax\n"
    "  popl %edi\n"
    "  popl %esi\n"
    "  retl $4\n"
  );
}
__asm__(".data\n"
  "_lom_af_0046ff30_0: .long 0x00533882\n"
  "_lom_af_0046ff30_1: .long 0x0046fe60\n"
  ".text\n");
