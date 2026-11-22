/* __local_unwind2 @ 0x00539d12 (104 bytes): ASM FALLBACK (no behaviour-verified C yet).
 * Same instruction sequence as lomse.exe; branch targets via local labels / absolute slots. tools/gen_asmfn.py */
#include "lom.h"
#define LOM_SELF_00539d12 1
__attribute__((naked)) void rb_00539d12(void)
{
  __asm__(
    "  pushl %ebx\n"
    "  pushl %esi\n"
    "  pushl %edi\n"
    "  movl 0x10(%esp), %eax\n"
    "  pushl %eax\n"
    "  pushl $-2\n"
    "  pushl $0x539cf0\n"
    "  pushl %fs:0\n"
    "  movl %esp, %fs:0\n"
    ".L00539d2f:\n"
    "  movl 0x20(%esp), %eax\n"
    "  movl 8(%eax), %ebx\n"
    "  movl 0xc(%eax), %esi\n"
    "  cmpl $-1, %esi\n"
    "  je .L00539d6c\n"
    "  cmpl 0x24(%esp), %esi\n"
    "  je .L00539d6c\n"
    "  leal (%esi, %esi, 2), %esi\n"
    "  movl (%ebx, %esi, 4), %ecx\n"
    "  movl %ecx, 8(%esp)\n"
    "  movl %ecx, 0xc(%eax)\n"
    "  cmpl $0, 4(%ebx, %esi, 4)\n"
    "  jne .L00539d6a\n"
    "  pushl $0x101\n"
    "  movl 8(%ebx, %esi, 4), %eax\n"
    "  call *_lom_af_00539d12_0\n"
    "  call *8(%ebx, %esi, 4)\n"
    ".L00539d6a:\n"
    "  jmp .L00539d2f\n"
    ".L00539d6c:\n"
    "  popl %fs:0\n"
    "  addl $0xc, %esp\n"
    "  popl %edi\n"
    "  popl %esi\n"
    "  popl %ebx\n"
    "  retl \n"
  );
}
__asm__(".data\n"
  "_lom_af_00539d12_0: .long 0x00539da6\n"
  ".text\n");
