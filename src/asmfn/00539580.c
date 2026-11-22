/* FID_conflict:_fwprintf @ 0x00539580 (73 bytes): ASM FALLBACK (no behaviour-verified C yet).
 * Same instruction sequence as lomse.exe; branch targets via local labels / absolute slots. tools/gen_asmfn.py */
#include "lom.h"
#define LOM_SELF_00539580 1
__attribute__((naked)) void rb_00539580(void)
{
  __asm__(
    "  pushl %ebx\n"
    "  pushl %esi\n"
    "  movl 0xc(%esp), %esi\n"
    "  pushl %edi\n"
    "  pushl %esi\n"
    "  call *_lom_af_00539580_0\n"
    "  addl $4, %esp\n"
    "  pushl %esi\n"
    "  call *_lom_af_00539580_1\n"
    "  movl 0x18(%esp), %ecx\n"
    "  addl $4, %esp\n"
    "  movl %eax, %edi\n"
    "  leal 0x18(%esp), %eax\n"
    "  pushl %eax\n"
    "  pushl %ecx\n"
    "  pushl %esi\n"
    "  call *_lom_af_00539580_2\n"
    "  addl $0xc, %esp\n"
    "  movl %eax, %ebx\n"
    "  pushl %esi\n"
    "  pushl %edi\n"
    "  call *_lom_af_00539580_3\n"
    "  addl $8, %esp\n"
    "  pushl %esi\n"
    "  call *_lom_af_00539580_4\n"
    "  addl $4, %esp\n"
    "  movl %ebx, %eax\n"
    "  popl %edi\n"
    "  popl %esi\n"
    "  popl %ebx\n"
    "  retl \n"
  );
}
__asm__(".data\n"
  "_lom_af_00539580_0: .long 0x0053cc50\n"
  "_lom_af_00539580_1: .long 0x0053cef0\n"
  "_lom_af_00539580_2: .long 0x0053cff0\n"
  "_lom_af_00539580_3: .long 0x0053cfb0\n"
  "_lom_af_00539580_4: .long 0x0053ccc0\n"
  ".text\n");
