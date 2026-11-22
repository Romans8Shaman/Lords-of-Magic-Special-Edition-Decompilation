/* Rebuilt from lomse.exe FUN_004c8670 @ 0x004c8670 (235 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005af194 (*(undefined *)0x005af194)
#define FUN_004c52a0 ((undefined4 (__thiscall *)(void *, byte))0x004c52a0)

#define LOM_SELF_004c8670 1
int __fastcall rb_004c8670(void *param_1)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined *puVar8;
  bool bVar9;
  
  iVar3 = -1;
  iVar6 = 0;
  iVar5 = 0;
  piVar7 = (int *)((int)param_1 + 0x158);
  do {
    iVar1 = *piVar7;
    if (iVar6 < iVar1) {
      iVar3 = iVar5;
      iVar6 = iVar1;
    }
    else if (iVar1 == iVar6) {
      iVar3 = -1;
    }
    iVar5 = iVar5 + 1;
    piVar7 = piVar7 + 1;
  } while (iVar5 < 0x10);
  if (iVar3 < 0) {
    iVar6 = 0;
    iVar5 = 0;
    piVar7 = (int *)((int)param_1 + 0x58);
    do {
      iVar1 = *piVar7;
      if (iVar6 < iVar1) {
        iVar3 = iVar5;
        iVar6 = iVar1;
      }
      else if (iVar1 == iVar6) {
        iVar3 = -1;
      }
      iVar5 = iVar5 + 1;
      piVar7 = piVar7 + 1;
    } while (iVar5 < 0x10);
    if (iVar3 < 0) {
      if (-1 < *(int *)((int)param_1 + 0x10)) {
        return *(int *)((int)param_1 + 0x10);
      }
      iVar6 = 0;
      iVar5 = 0;
      piVar7 = (int *)((int)param_1 + 0x18);
      do {
        iVar1 = *piVar7;
        bVar9 = iVar1 == iVar6;
        bVar2 = iVar6 <= iVar1;
        if (iVar6 < iVar1) {
          iVar3 = iVar5;
          iVar6 = iVar1;
        }
        if (!bVar9 && bVar2 || bVar9) {
          iVar3 = -1;
        }
        iVar5 = iVar5 + 1;
        piVar7 = piVar7 + 1;
      } while (iVar5 < 0x10);
      if (iVar3 < 0) {
        iVar3 = 0;
        puVar8 = &DAT_005af194;
        iVar6 = 0;
        do {
          if ((iVar6 < 0) || (0x1d83f < iVar6)) {
            puVar4 = (undefined *)0x0;
          }
          else {
            puVar4 = puVar8;
          }
          if (puVar4 != (undefined *)0x0) {
            iVar5 = FUN_004c52a0(param_1,(byte)*(undefined4 *)(puVar4 + 0x15ac));
            if (iVar5 != 0) {
              return iVar3;
            }
          }
          iVar6 = iVar6 + 0x1d84;
          iVar3 = iVar3 + 1;
          puVar8 = puVar8 + 0x1d84;
        } while (iVar6 < 0x1d840);
        return -1;
      }
    }
  }
  return iVar3;
}
