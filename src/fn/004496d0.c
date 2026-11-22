/* Rebuilt from lomse.exe FUN_004496d0 @ 0x004496d0 (182 bytes, __stdcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005cd2f0 (*(int *)0x005cd2f0)
#define DAT_005cd2f4 (*(int *)0x005cd2f4)
#define FUN_0052b0e0 ((undefined4 (__thiscall *)(void *, int))0x0052b0e0)

#define LOM_SELF_004496d0 1
undefined4 __stdcall rb_004496d0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  
  iVar1 = param_1;
  iVar5 = 0;
  if (param_1 != 0) {
    piVar4 = (int *)(param_1 + 0x4c);
    iVar3 = 0;
    param_1 = 0;
    if (0 < *piVar4) {
      piVar4 = (int *)(iVar1 + 0xc4);
      do {
        iVar2 = *piVar4;
        if (((iVar2 < 0) || (DAT_005cd2f0 <= iVar2)) || (DAT_005cd2f4 == 0)) {
          iVar2 = 0;
        }
        else {
          iVar2 = DAT_005cd2f4 + iVar2 * 1000;
        }
        if ((iVar2 != 0) && (*(int *)(iVar2 + 0x1c) == 5)) {
          param_1 = param_1 + 1;
          iVar2 = FUN_0052b0e0(piVar4,5);
          if (iVar2 == 0) {
            iVar3 = iVar3 + 1;
          }
        }
        iVar5 = iVar5 + 1;
        piVar4 = piVar4 + 0x13;
      } while (iVar5 < *(int *)(iVar1 + 0x4c));
    }
    if (iVar3 == *(int *)(iVar1 + 0x4c)) {
      return 0;
    }
    if (param_1 != 0) {
      if ((0 < param_1) && (iVar3 == 0)) {
        return 3;
      }
      if (0 < iVar3) {
        return 2;
      }
    }
  }
  return 1;
}
