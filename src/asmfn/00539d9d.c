/* __NLG_Notify1 @ 0x00539d9d (9 bytes): ASM FALLBACK (no behaviour-verified C yet).
 * Same instruction sequence as lomse.exe; branch targets via local labels / absolute slots. tools/gen_asmfn.py */
#include "lom.h"
#define LOM_SELF_00539d9d 1
__attribute__((naked)) void rb_00539d9d(void)
{
  __asm__(
    "  pushl %ebx\n"
    "  pushl %ecx\n"
    "  movl $0x5747d0, %ebx\n"
    "  jmp *_lom_af_00539d9d_0\n"
  );
}
__asm__(".data\n"
  "_lom_af_00539d9d_0: .long 0x00539db0\n"
  ".text\n");
