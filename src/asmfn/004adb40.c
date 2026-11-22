/* FUN_004adb40 @ 0x004adb40 (44 bytes): ASM FALLBACK (no behaviour-verified C yet).
 * Same instruction sequence as lomse.exe; branch targets via local labels / absolute slots. tools/gen_asmfn.py */
#include "lom.h"
#define LOM_SELF_004adb40 1
__attribute__((naked)) void rb_004adb40(void)
{
  __asm__(
    "  movl 4(%esp), %eax\n"
    "  pushl %esi\n"
    "  movl %ecx, %esi\n"
    "  pushl %eax\n"
    "  call *_lom_af_004adb40_0\n"
    "  movl 0x1c(%esi), %ecx\n"
    "  pushl %ecx\n"
    "  pushl %esi\n"
    "  movl $0x5ae958, %ecx\n"
    "  call *_lom_af_004adb40_1\n"
    "  movl (%esi), %edx\n"
    "  movl %esi, %ecx\n"
    "  call *0x2c(%edx)\n"
    "  movl $1, %eax\n"
    "  popl %esi\n"
    "  retl $4\n"
  );
}
__asm__(".data\n"
  "_lom_af_004adb40_0: .long 0x004ada10\n"
  "_lom_af_004adb40_1: .long 0x004a7d50\n"
  ".text\n");
