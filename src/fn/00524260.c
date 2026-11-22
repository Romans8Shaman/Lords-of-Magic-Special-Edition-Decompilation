/* Rebuilt from lomse.exe FUN_00524260 @ 0x00524260 (150 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005ae974 (*(undefined4 *)0x005ae974)
#define FUN_004fbed0 ((undefined4 * (__thiscall *)(void *, int))0x004fbed0)

#define LOM_SELF_00524260 1
void __fastcall rb_00524260(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  
  iVar6 = 0;
  if (0 < *(int *)(param_1 + 4)) {
    iVar5 = 0x380;
    do {
      iVar4 = 0x10;
      iVar2 = iVar5;
      do {
        iVar2 = iVar2 + 4;
        iVar4 = iVar4 + -1;
        *(undefined4 *)(*(int *)(param_1 + 8) + -4 + iVar2) = 0;
      } while (iVar4 != 0);
      iVar6 = iVar6 + 1;
      iVar5 = iVar5 + 1000;
    } while (iVar6 < *(int *)(param_1 + 4));
  }
  for (puVar3 = FUN_004fbed0(&DAT_005ae974,0); puVar3 != (undefined4 *)0x0;
      puVar3 = FUN_004fbed0(&DAT_005ae974,(int)puVar3)) {
    iVar6 = 0;
    if (0 < (int)puVar3[0x13]) {
      piVar7 = puVar3 + 0x31;
      do {
        iVar5 = *piVar7;
        piVar7 = piVar7 + 0x13;
        piVar1 = (int *)(*(int *)(param_1 + 8) + 0x380 + (puVar3[0x12] + iVar5 * 0xfa) * 4);
        iVar6 = iVar6 + 1;
        *piVar1 = *piVar1 + 1;
      } while (iVar6 < (int)puVar3[0x13]);
    }
  }
  return;
}
