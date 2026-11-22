/* Rebuilt from lomse.exe FUN_00526ea0 @ 0x00526ea0 (200 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00578818 (*(int *)0x00578818)
#define DAT_005ae974 (*(undefined4 *)0x005ae974)
#define DAT_005d2f50 (*(undefined4 *)0x005d2f50)
#define FUN_004fbed0 ((undefined4 * (__thiscall *)(void *, int))0x004fbed0)
#define FUN_00526e00 ((undefined4 (__thiscall *)(void *, int))0x00526e00)

#define LOM_SELF_00526ea0 1
void __fastcall rb_00526ea0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  
  iVar1 = *(int *)(param_1 + 0x18);
  iVar2 = *(int *)(param_1 + 0x1c);
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  if ((iVar1 != 0) || (iVar2 != 0)) {
    for (puVar4 = FUN_004fbed0(&DAT_005ae974,0); puVar4 != (undefined4 *)0x0;
        puVar4 = FUN_004fbed0(&DAT_005ae974,(int)puVar4)) {
      piVar7 = puVar4 + 0x37;
      iVar6 = 0xf;
      do {
        if (iVar1 != 0) {
          for (iVar3 = *piVar7; iVar3 != 0; iVar3 = *(int *)(iVar3 + 0x1c)) {
            iVar5 = iVar1;
            do {
              iVar5 = *(int *)(iVar5 + 0x1c);
            } while (iVar5 != 0);
          }
        }
        piVar7 = piVar7 + 0x13;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
  }
  FUN_00526e00(&DAT_005d2f50,iVar1);
  if (iVar2 != 0) {
    iVar1 = iVar2;
    for (iVar6 = *(int *)(iVar2 + 0x14); iVar6 != 0; iVar6 = *(int *)(iVar6 + 0x14)) {
      iVar1 = iVar6;
    }
    *(int *)(iVar1 + 0x14) = DAT_00578818;
    DAT_00578818 = iVar2;
  }
  puVar4 = *(undefined4 **)(param_1 + 0x14);
  if (puVar4 != (undefined4 *)0x0) {
    ((undefined4 (__thiscall *)(__typeof__(puVar4), __typeof__(1)))(**(code **)*puVar4))(puVar4,1);
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  return;
}
