/* Rebuilt from lomse.exe FUN_004a0ca0 @ 0x004a0ca0 (221 bytes, __stdcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005af194 (*(undefined *)0x005af194)
#define FUN_004beef0 ((undefined4 (__thiscall *)(void *, int))0x004beef0)
#define FUN_004bef40 ((undefined4 (__thiscall *)(void *, int))0x004bef40)

#define LOM_SELF_004a0ca0 1
void __stdcall rb_004a0ca0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  
  if ((param_1 < 0) || (0xf < param_1)) {
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar5 = &DAT_005af194 + param_1 * 0x1d84;
  }
  if ((param_2 < 0) || (0xf < param_2)) {
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar4 = &DAT_005af194 + param_2 * 0x1d84;
  }
  if ((puVar5 != (undefined *)0x0) && (puVar4 != (undefined *)0x0)) {
    if ((param_2 < 0) || (0xf < param_2)) {
      puVar3 = (undefined *)0x0;
    }
    else {
      puVar3 = puVar5 + param_2 * 0x88 + 0xd28;
    }
    if ((param_1 < 0) || (0xf < param_1)) {
      puVar4 = (undefined *)0x0;
    }
    else {
      puVar4 = puVar4 + param_1 * 0x88 + 0xd28;
    }
    if ((puVar3 != (undefined *)0x0) && (puVar4 != (undefined *)0x0)) {
      iVar1 = *(int *)(puVar5 + 0x38);
      iVar6 = 0;
      if (0 < iVar1) {
        while ((iVar2 = FUN_004beef0(puVar5 + 0x34,iVar6), iVar2 == 0 ||
               (iVar2 = FUN_004beef0(puVar4 + 0x7c,iVar6), iVar2 != 0))) {
          iVar6 = iVar6 + 1;
          if (iVar1 <= iVar6) {
            return;
          }
        }
        FUN_004bef40(puVar4 + 0x7c,iVar6);
        return;
      }
    }
  }
  return;
}
