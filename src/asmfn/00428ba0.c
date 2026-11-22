/* FUN_00428ba0 @ 0x00428ba0 (74 bytes): ASM FALLBACK (no behaviour-verified C yet).
 * Same instruction sequence as lomse.exe; branch targets via local labels / absolute slots. tools/gen_asmfn.py */
#include "lom.h"
#define LOM_SELF_00428ba0 1
__attribute__((naked)) void rb_00428ba0(void)
{
  __asm__(
    "  movl 0x1c(%ecx), %eax\n"
    "  pushl %ebx\n"
    "  pushl %ebp\n"
    "  pushl %esi\n"
    "  testl %eax, %eax\n"
    "  pushl %edi\n"
    "  je .L00428be3\n"
    "  movl 0x14(%esp), %esi\n"
    "  movl 0x1c(%esp), %ebx\n"
    "  movl 0x18(%esp), %ebp\n"
    ".L00428bb7:\n"
    "  movl 0x14(%eax), %edi\n"
    "  movl %eax, 0x5788c4\n"
    "  movl 0xc(%eax), %eax\n"
    "  pushl %ebx\n"
    "  pushl %ebp\n"
    "  movl %esi, %ecx\n"
    "  movl %eax, 0x555d6c\n"
    "  call *_lom_af_00428ba0_0\n"
    "  movl 0x6c(%esi), %eax\n"
    "  movl 0x70(%esi), %ecx\n"
    "  testl %eax, %eax\n"
    "  movl %ecx, 0x6c(%esi)\n"
    "  jne .L00428be3\n"
    "  testl %edi, %edi\n"
    "  movl %edi, %eax\n"
    "  jne .L00428bb7\n"
    ".L00428be3:\n"
    "  popl %edi\n"
    "  popl %esi\n"
    "  popl %ebp\n"
    "  popl %ebx\n"
    "  retl $0xc\n"
  );
}
__asm__(".data\n"
  "_lom_af_00428ba0_0: .long 0x004d05e0\n"
  ".text\n");
