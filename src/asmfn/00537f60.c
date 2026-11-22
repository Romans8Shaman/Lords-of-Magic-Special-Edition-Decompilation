/* FUN_00537f60 @ 0x00537f60 (52 bytes): ASM FALLBACK (no behaviour-verified C yet).
 * Same instruction sequence as lomse.exe; branch targets via local labels / absolute slots. tools/gen_asmfn.py */
#include "lom.h"
#define LOM_SELF_00537f60 1
__attribute__((naked)) void rb_00537f60(void)
{
  __asm__(
    "  pushl %esi\n"
    "  movl 0xc(%esp), %esi\n"
    "  pushl %edi\n"
    "  movl 0xc(%esp), %edi\n"
    "  pushl $0\n"
    "  pushl %esi\n"
    "  pushl %edi\n"
    "  call *_lom_af_00537f60_0\n"
    "  movl 0x24(%edi), %eax\n"
    "  movl 0x28(%esi), %ecx\n"
    "  addl $0xc, %esp\n"
    "  pushl %eax\n"
    "  pushl %ecx\n"
    "  call *0x24(%esi)\n"
    "  movl 0x28(%esi), %edx\n"
    "  addl $8, %esp\n"
    "  pushl %edi\n"
    "  pushl %edx\n"
    "  call *0x24(%esi)\n"
    "  addl $8, %esp\n"
    "  xorl %eax, %eax\n"
    "  popl %edi\n"
    "  popl %esi\n"
    "  retl \n"
  );
}
__asm__(".data\n"
  "_lom_af_00537f60_0: .long 0x00537160\n"
  ".text\n");
