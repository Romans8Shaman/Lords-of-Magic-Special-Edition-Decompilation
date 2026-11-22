/* __CallSettingFrame@12 @ 0x0053eed0 (76 bytes): ASM FALLBACK (no behaviour-verified C yet).
 * Same instruction sequence as lomse.exe; branch targets via local labels / absolute slots. tools/gen_asmfn.py */
#include "lom.h"
#define LOM_SELF_0053eed0 1
__attribute__((naked)) void rb_0053eed0(void)
{
  __asm__(
    "  pushl %ebp\n"
    "  movl %esp, %ebp\n"
    "  subl $4, %esp\n"
    "  pushl %ebx\n"
    "  pushl %ecx\n"
    "  movl 0xc(%ebp), %eax\n"
    "  addl $0xc, %eax\n"
    "  movl %eax, -4(%ebp)\n"
    "  movl 8(%ebp), %eax\n"
    "  pushl %ebp\n"
    "  pushl 0x10(%ebp)\n"
    "  movl 0x10(%ebp), %ecx\n"
    "  movl -4(%ebp), %ebp\n"
    "  call *_lom_af_0053eed0_0\n"
    "  pushl %esi\n"
    "  pushl %edi\n"
    "  call *%eax\n"
    "  popl %edi\n"
    "  popl %esi\n"
    "  movl %ebp, %ebx\n"
    "  popl %ebp\n"
    "  movl 0x10(%ebp), %ecx\n"
    "  pushl %ebp\n"
    "  movl %ebx, %ebp\n"
    "  cmpl $0x100, %ecx\n"
    "  jne .L0053ef0f\n"
    "  movl $2, %ecx\n"
    ".L0053ef0f:\n"
    "  pushl %ecx\n"
    "  call *_lom_af_0053eed0_1\n"
    "  popl %ebp\n"
    "  popl %ecx\n"
    "  popl %ebx\n"
    "  leave \n"
    "  retl $0xc\n"
  );
}
__asm__(".data\n"
  "_lom_af_0053eed0_0: .long 0x00539d9d\n"
  "_lom_af_0053eed0_1: .long 0x00539d9d\n"
  ".text\n");
