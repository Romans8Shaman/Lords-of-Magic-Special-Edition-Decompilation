/* Rebuilt from lomse.exe op_startnetgame @ 0x004b4840 (15 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00483d30 ((undefined4 (__fastcall *)(int, undefined4, undefined4, undefined4))0x00483d30)
unsigned lom_inreg_004b4840[2] __asm__("lom_inreg_004b4840");
void __cdecl lom_body_004b4840(void) __asm__("lom_body_004b4840");

#define LOM_SELF_004b4840 1
__attribute__((naked)) void __cdecl rb_004b4840(void)
{
  __asm__("movl %eax, lom_inreg_004b4840\n\tmovl %edx, lom_inreg_004b4840+4\n\tjmp lom_body_004b4840");
}

void __cdecl lom_body_004b4840(void)
{
  undefined4 in_EDX = (undefined4)*(unsigned *)((char *)lom_inreg_004b4840 + 4);
  
  FUN_00483d30(0x5aa12c,in_EDX,0,0);
  return;
}
