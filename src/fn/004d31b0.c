/* Rebuilt from lomse.exe FUN_004d31b0 @ 0x004d31b0 (226 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_004d31b0 1
uint * __thiscall rb_004d31b0(void *this,int *param_1,uint param_2,uint param_3)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  uint *puVar4;
  int iVar5;
  
  piVar3 = param_1;
  if ((param_2 & 0xff) == 5) {
    piVar2 = *(int **)(*(int *)((int)this + 0x80) + param_3 * 4);
    if ((((param_1 == *(int **)(*(int *)((int)this + 0x5c) + -4 + *(int *)((int)this + 100) * 4)) &&
         (-1 < (int)param_3)) && ((int)param_3 < param_1[1])) &&
       (*(uint *)(*param_1 + 4 + param_3 * 0x10) == param_3)) {
      piVar2[4] = (int)param_1;
      piVar2[5] = param_3;
      return (uint *)(*param_1 + param_3 * 0x10);
    }
    if (((param_1 == (int *)piVar2[4]) && (piVar2[5] < param_1[1])) &&
       ((puVar4 = (uint *)(piVar2[5] * 0x10 + *param_1), puVar4[1] == param_3 &&
        ((char)*puVar4 == '\x05')))) {
      return puVar4;
    }
    piVar1 = param_1 + 3;
    if (*piVar1 < 0) {
      return (uint *)0x0;
    }
    if ((int)param_3 < param_1[2]) {
      return (uint *)0x0;
    }
    param_1 = piVar2;
    if (*piVar1 < (int)param_3) {
      return (uint *)0x0;
    }
  }
  else {
    param_1 = (int *)0x0;
  }
  iVar5 = 0;
  if (0 < piVar3[1]) {
    puVar4 = (uint *)*piVar3;
    do {
      if ((puVar4[1] == param_3) && ((*puVar4 & 0xff) == (param_2 & 0xff))) {
        if (param_1 == (int *)0x0) {
          return puVar4;
        }
        param_1[4] = (int)piVar3;
        param_1[5] = iVar5;
        return puVar4;
      }
      iVar5 = iVar5 + 1;
      puVar4 = puVar4 + 4;
    } while (iVar5 < piVar3[1]);
  }
  return (uint *)0x0;
}
