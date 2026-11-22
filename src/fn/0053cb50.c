/* Rebuilt from lomse.exe FUN_0053cb50 @ 0x0053cb50 (41 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00544310 ((undefined4 * (__cdecl *)(undefined4 *, undefined4 *, uint))0x00544310)
unsigned lom_inreg_0053cb50[2] __asm__("lom_inreg_0053cb50");
undefined4 * __cdecl lom_body_0053cb50(char *param_1,int param_2) __asm__("lom_body_0053cb50");

#define LOM_SELF_0053cb50 1
__attribute__((naked)) undefined4 * __cdecl rb_0053cb50(char *param_1,int param_2)
{
  __asm__("movl %eax, lom_inreg_0053cb50\n\tmovl %edx, lom_inreg_0053cb50+4\n\tjmp lom_body_0053cb50");
}

undefined4 * __cdecl lom_body_0053cb50(char *param_1,int param_2)
{
  char cVar1;
  undefined4 * in_EAX = (undefined4 *)*(unsigned *)((char *)lom_inreg_0053cb50 + 0);
  uint uVar2;
  char *pcVar3;
  
  if (param_2 != 0) {
    uVar2 = 0xffffffff;
    pcVar3 = param_1;
    do {
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    in_EAX = FUN_00544310((undefined4 *)(param_1 + param_2),(undefined4 *)param_1,~uVar2);
  }
  return in_EAX;
}
