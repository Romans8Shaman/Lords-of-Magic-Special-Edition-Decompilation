/* FUN_004f2c40 @ 0x004f2c40 (78 bytes): ASM FALLBACK (no behaviour-verified C yet).
 * Same instruction sequence as lomse.exe; branch targets via local labels / absolute slots. tools/gen_asmfn.py */
#include "lom.h"
#define LOM_SELF_004f2c40 1
__attribute__((naked)) void rb_004f2c40(void)
{
  __asm__(
    "  flds 4(%esp)\n"
    "  flds 4(%esp)\n"
    "  fcomps 0x54de18\n"
    "  pushl %esi\n"
    "  fnstsw %ax\n"
    "  testb $1, %ah\n"
    "  jne .L004f2c62\n"
    "  fstp %st(0)\n"
    "  flds 8(%esp)\n"
    "  fsubs 0x54de18\n"
    ".L004f2c62:\n"
    "  fcoms 0x54de1c\n"
    "  fnstsw %ax\n"
    "  testb $1, %ah\n"
    "  je .L004f2c75\n"
    "  fsubs 0x54de20\n"
    ".L004f2c75:\n"
    "  fstps 4(%ecx)\n"
    "  leal -4(%ecx), %esi\n"
    "  movl %esi, %ecx\n"
    "  call *_lom_af_004f2c40_0\n"
    "  pushl %eax\n"
    "  movl %esi, %ecx\n"
    "  call *_lom_af_004f2c40_1\n"
    "  popl %esi\n"
    "  retl $4\n"
  );
}
__asm__(".data\n"
  "_lom_af_004f2c40_0: .long 0x004f3660\n"
  "_lom_af_004f2c40_1: .long 0x004f2f70\n"
  ".text\n");
