/* FUN_0053f0d0 @ 0x0053f0d0 (102 bytes): ASM FALLBACK (no behaviour-verified C yet).
 * Same instruction sequence as lomse.exe; branch targets via local labels / absolute slots. tools/gen_asmfn.py */
#include "lom.h"
#define LOM_SELF_0053f0d0 1
__attribute__((naked)) void rb_0053f0d0(void)
{
  __asm__(
    "  pushl %ebp\n"
    "  movl %esp, %ebp\n"
    "  pushl $-1\n"
    "  pushl $0x54efe8\n"
    "  pushl $0x53b9f8\n"
    "  movl %fs:0, %eax\n"
    "  pushl %eax\n"
    "  movl %esp, %fs:0\n"
    "  subl $8, %esp\n"
    "  pushl %ebx\n"
    "  pushl %esi\n"
    "  pushl %edi\n"
    "  movl %esp, -0x18(%ebp)\n"
    "  movl $0, -4(%ebp)\n"
    "  call *_lom_af_0053f0d0_0\n"
    "  movl 0x60(%eax), %ecx\n"
    "  testl %ecx, %ecx\n"
    "  je .L0053f12a\n"
    "  movl $1, -4(%ebp)\n"
    "  call *_lom_af_0053f0d0_1\n"
    "  call *0x60(%eax)\n"
    "  jmp .L0053f123\n"
    "  movl $1, %eax\n"
    "  retl \n"
    "  movl -0x18(%ebp), %esp\n"
    ".L0053f123:\n"
    "  movl $0, -4(%ebp)\n"
    ".L0053f12a:\n"
    "  movl $0xffffffff, -4(%ebp)\n"
    "  call *_lom_af_0053f0d0_2\n"
  );
}
__asm__(".data\n"
  "_lom_af_0053f0d0_0: .long 0x0053efa0\n"
  "_lom_af_0053f0d0_1: .long 0x0053efa0\n"
  "_lom_af_0053f0d0_2: .long 0x0053f147\n"
  ".text\n");
