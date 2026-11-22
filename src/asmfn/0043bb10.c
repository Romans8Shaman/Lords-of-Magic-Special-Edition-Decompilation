/* FUN_0043bb10 @ 0x0043bb10 (32 bytes): ASM FALLBACK (no behaviour-verified C yet).
 * Same instruction sequence as lomse.exe; branch targets via local labels / absolute slots. tools/gen_asmfn.py */
#include "lom.h"
#define LOM_SELF_0043bb10 1
__attribute__((naked)) void rb_0043bb10(void)
{
  __asm__(
    "  pushl %esi\n"
    "  pushl %edi\n"
    "  movl 0xc(%esp), %edi\n"
    "  movl %ecx, %esi\n"
    "  pushl %edi\n"
    "  call *_lom_af_0043bb10_0\n"
    "  movl 0x48(%esi), %ecx\n"
    "  testl %ecx, %ecx\n"
    "  je .L0043bb2b\n"
    "  movl (%ecx), %eax\n"
    "  pushl %edi\n"
    "  call *0x34(%eax)\n"
    ".L0043bb2b:\n"
    "  popl %edi\n"
    "  popl %esi\n"
    "  retl $4\n"
  );
}
__asm__(".data\n"
  "_lom_af_0043bb10_0: .long 0x004f5b50\n"
  ".text\n");
