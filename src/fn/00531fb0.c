/* Rebuilt from lomse.exe FUN_00531fb0 @ 0x00531fb0 (133 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00415470 ((undefined4 (__fastcall *)(int *))0x00415470)
#define FUN_004a4c30 ((undefined4 (__thiscall *)(void *, int))0x004a4c30)
#define FUN_00527e90 ((undefined4 (__thiscall *)(void *, int, int *))0x00527e90)

#define LOM_SELF_00531fb0 1
uint __thiscall rb_00531fb0(void *this, uint volatile param_1, int volatile param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  
  iVar2 = FUN_004a4c30(this,param_1);
  iVar1 = param_2;
  iVar6 = 0;
  iVar5 = 0;
  param_1 = 0;
  if ((*(int *)(param_2 + 0x54) == 0x80000) && (0 < *(int *)(param_2 + 0x4c))) {
    piVar4 = (int *)(param_2 + 0xc4);
    do {
      iVar3 = FUN_00415470(piVar4);
      if (iVar3 != 0) {
        iVar5 = iVar6;
        break;
      }
      iVar6 = iVar6 + 1;
      piVar4 = piVar4 + 0x13;
    } while (iVar6 < *(int *)(iVar1 + 0x4c));
  }
  FUN_00527e90((void *)(iVar1 + 0xc4 + iVar5 * 0x4c),iVar2 + 0x6c,(int *)&param_1);
  return param_1 & ((int)param_1 < 1) - 1;
}
