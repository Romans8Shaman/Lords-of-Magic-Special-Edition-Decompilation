/* Rebuilt from lomse.exe FUN_00478a20 @ 0x00478a20 (79 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_00478a20 1
void __fastcall rb_00478a20(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  
  if (param_1[0x4ed] != 0) {
    piVar2 = param_1 + 0x3c;
    iVar3 = 5;
    do {
      piVar4 = (int *)*param_1;
      if (piVar4 != (int *)0x0) {
        ((undefined4 (__stdcall *)(__typeof__(piVar4)))(**(code **)(*piVar4 + 0x48)))(piVar4);
        ((undefined4 (__stdcall *)(__typeof__((int *)*param_1)))(**(code **)(*(int *)*param_1 + 8)))((int *)*param_1);
        *param_1 = 0;
        piVar4 = piVar2;
        for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 + -1) {
          *piVar4 = -1;
          piVar4 = piVar4 + 1;
        }
      }
      param_1 = param_1 + 1;
      piVar2 = piVar2 + 7;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return;
}
