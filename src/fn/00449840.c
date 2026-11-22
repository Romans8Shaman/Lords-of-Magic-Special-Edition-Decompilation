/* Rebuilt from lomse.exe FUN_00449840 @ 0x00449840 (136 bytes, __stdcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005cd2f0 (*(int *)0x005cd2f0)
#define DAT_005cd2f4 (*(int *)0x005cd2f4)

#define LOM_SELF_00449840 1
undefined4 __stdcall rb_00449840(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  if (param_1 != 0) {
    iVar1 = *(int *)(param_1 + 0x4c);
    iVar5 = 0;
    if (0 < iVar1) {
      piVar3 = (int *)(param_1 + 0xd0);
      iVar4 = iVar1;
      do {
        iVar2 = piVar3[-3];
        if (((iVar2 < 0) || (DAT_005cd2f0 <= iVar2)) || (DAT_005cd2f4 == 0)) {
          iVar2 = 0;
        }
        else {
          iVar2 = DAT_005cd2f4 + iVar2 * 1000;
        }
        if ((iVar2 != 0) && (3 < *piVar3)) {
          iVar5 = iVar5 + 1;
        }
        piVar3 = piVar3 + 0x13;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    if (iVar5 == iVar1) {
      return 0;
    }
    if (iVar5 == 0) {
      return 2;
    }
    if (0 < iVar5) {
      return 1;
    }
  }
  return 3;
}
