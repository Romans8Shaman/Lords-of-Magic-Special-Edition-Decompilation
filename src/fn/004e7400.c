/* Rebuilt from lomse.exe FUN_004e7400 @ 0x004e7400 (159 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00584690 (*(undefined4 *)0x00584690)
#define FUN_004e7300 ((undefined4 (__fastcall *)(int))0x004e7300)

#define LOM_SELF_004e7400 1
undefined4 __thiscall rb_004e7400(void *this,int param_1,int *param_2,int *param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  
  *param_2 = -1;
  *param_3 = -1;
  if (param_4 != 0) {
    FUN_004e7300((int)this);
  }
  iVar2 = 0;
  piVar1 = &DAT_00584690;
  do {
    if (*piVar1 == param_1) break;
    piVar1 = piVar1 + 1;
    iVar2 = iVar2 + 1;
  } while ((int)piVar1 < 0x584710);
  if (0x1f < iVar2) {
    *param_2 = 2;
    *param_3 = 3;
    return 0;
  }
  *param_2 = iVar2 / 5;
  *param_3 = iVar2 % 5;
  if ((*param_2 < 0) || (2 < *param_2)) {
    *param_2 = 2;
  }
  if ((*param_3 < 0) || (3 < *param_3)) {
    *param_3 = 3;
  }
  return 1;
}
