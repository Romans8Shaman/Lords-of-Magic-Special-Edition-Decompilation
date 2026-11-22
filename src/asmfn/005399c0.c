/* FUN_005399c0 @ 0x005399c0 (86 bytes): ASM FALLBACK (no behaviour-verified C yet).
 * Same instruction sequence as lomse.exe; branch targets via local labels / absolute slots. tools/gen_asmfn.py */
#include "lom.h"
#define LOM_SELF_005399c0 1
__attribute__((naked)) void rb_005399c0(void)
{
  __asm__(
    "  pushl %ebp\n"
    "  movl %esp, %ebp\n"
    "  subl $8, %esp\n"
    "  pushl %ebx\n"
    "  pushl %esi\n"
    "  pushl %edi\n"
    "  movl %fs:0, %eax\n"
    "  movl %eax, -8(%ebp)\n"
    "  movl $.L005399ec, -4(%ebp)\n"
    "  pushl $0\n"
    "  movl 0xc(%ebp), %eax\n"
    "  pushl %eax\n"
    "  movl -4(%ebp), %ecx\n"
    "  pushl %ecx\n"
    "  movl 8(%ebp), %edx\n"
    "  pushl %edx\n"
    "  call *_lom_af_005399c0_0\n"
    ".L005399ec:\n"
    "  movl 0xc(%ebp), %eax\n"
    "  movl 4(%eax), %ecx\n"
    "  andl $0xfffffffd, %ecx\n"
    "  movl 0xc(%ebp), %edx\n"
    "  movl %ecx, 4(%edx)\n"
    "  movl %fs:0, %eax\n"
    "  movl -8(%ebp), %ebx\n"
    "  movl %eax, (%ebx)\n"
    "  movl %ebx, %fs:0\n"
    "  popl %edi\n"
    "  popl %esi\n"
    "  popl %ebx\n"
    "  movl %ebp, %esp\n"
    "  popl %ebp\n"
    "  retl $8\n"
  );
}
__asm__(".data\n"
  "_lom_af_005399c0_0: .long 0x00548e00\n"
  ".text\n");
