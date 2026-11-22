/* Rebuilt from lomse.exe FUN_004e7250 @ 0x004e7250 (87 bytes, __stdcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00584690 (*(undefined4 *)0x00584690)

#define LOM_SELF_004e7250 1
int __stdcall rb_004e7250(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  iVar1 = 0;
  iVar3 = 0;
  piVar2 = &DAT_00584690;
  do {
    if (*piVar2 == param_1) {
      iVar4 = iVar3;
      break;
    }
    piVar2 = piVar2 + 1;
    iVar3 = iVar3 + 1;
  } while ((int)piVar2 < 0x584710);
  iVar3 = iVar4 + -4;
  if ((iVar3 < 0) || (0xe < iVar4)) {
    iVar1 = -1;
  }
  else if (iVar3 < iVar4) {
    piVar2 = &DAT_00584690 + iVar3;
    iVar4 = iVar4 - iVar3;
    do {
      if (*piVar2 != -1) {
        iVar1 = iVar1 + 1;
      }
      piVar2 = piVar2 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    return iVar1;
  }
  return iVar1;
}
