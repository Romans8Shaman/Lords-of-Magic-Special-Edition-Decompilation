/* Rebuilt from lomse.exe FUN_0050a4b0 @ 0x0050a4b0 (98 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005d2cbc (*(int *)0x005d2cbc)
#define DAT_005d2cd8 (*(int *)0x005d2cd8)
unsigned lom_inreg_0050a4b0[2] __asm__("lom_inreg_0050a4b0");
int __fastcall lom_body_0050a4b0(int param_1) __asm__("lom_body_0050a4b0");

#define LOM_SELF_0050a4b0 1
__attribute__((naked)) int __fastcall rb_0050a4b0(int param_1)
{
  __asm__("movl %eax, lom_inreg_0050a4b0\n\tmovl %edx, lom_inreg_0050a4b0+4\n\tjmp lom_body_0050a4b0");
}

int __fastcall lom_body_0050a4b0(int param_1)
{
  int iVar1;
  int iVar2;
  int iVar3;
  int in_EAX = (int)*(unsigned *)((char *)lom_inreg_0050a4b0 + 0);
  
  if (DAT_005d2cd8 != 0) {
    for (in_EAX = *(int *)(param_1 + 0x84); in_EAX != 0; in_EAX = *(int *)(in_EAX + 0x14)) {
      if (in_EAX == DAT_005d2cd8) {
        DAT_005d2cd8 = 0;
        break;
      }
    }
  }
  iVar1 = *(int *)(param_1 + 0x84);
  if (iVar1 != 0) {
    iVar2 = iVar1;
    for (iVar3 = *(int *)(iVar1 + 0x14); iVar3 != 0; iVar3 = *(int *)(iVar3 + 0x14)) {
      iVar2 = iVar3;
    }
    *(int *)(iVar2 + 0x14) = DAT_005d2cbc;
    in_EAX = DAT_005d2cbc;
    DAT_005d2cbc = iVar1;
  }
  *(undefined4 *)(param_1 + 0x84) = 0;
  return in_EAX;
}
