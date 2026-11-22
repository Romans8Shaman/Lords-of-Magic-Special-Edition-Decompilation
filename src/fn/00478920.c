/* Rebuilt from lomse.exe FUN_00478920 @ 0x00478920 (110 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_00478920 1
undefined4 __fastcall rb_00478920(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  
  if (param_1[0x4ed] == 0) {
    return 0;
  }
  piVar2 = param_1 + 0x3c;
  iVar3 = 5;
  piVar4 = param_1;
  do {
    if ((*piVar2 == param_1[0x4e6]) && (piVar5 = (int *)*piVar4, piVar5 != (int *)0x0)) {
      ((undefined4 (__stdcall *)(__typeof__(piVar5)))(**(code **)(*piVar5 + 0x48)))(piVar5);
      ((undefined4 (__stdcall *)(__typeof__((int *)*piVar4)))(**(code **)(*(int *)*piVar4 + 8)))((int *)*piVar4);
      *piVar4 = 0;
      piVar5 = piVar2;
      for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 + -1) {
        *piVar5 = -1;
        piVar5 = piVar5 + 1;
      }
    }
    piVar4 = piVar4 + 1;
    piVar2 = piVar2 + 7;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return 1;
}
