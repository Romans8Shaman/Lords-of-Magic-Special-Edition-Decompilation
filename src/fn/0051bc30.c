/* Rebuilt from lomse.exe op_sunlight @ 0x0051bc30 (1 bytes, __stdcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

unsigned lom_inreg_0051bc30[2] __asm__("lom_inreg_0051bc30");
undefined4 __stdcall lom_body_0051bc30(void) __asm__("lom_body_0051bc30");

#define LOM_SELF_0051bc30 1
__attribute__((naked)) undefined4 __stdcall rb_0051bc30(void)
{
  __asm__("movl %eax, lom_inreg_0051bc30\n\tmovl %edx, lom_inreg_0051bc30+4\n\tjmp lom_body_0051bc30");
}

undefined4 __stdcall lom_body_0051bc30(void)
{
  undefined4 in_EAX = (undefined4)*(unsigned *)((char *)lom_inreg_0051bc30 + 0);
  
  return in_EAX;
}
