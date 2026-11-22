/* Rebuilt from lomse.exe FUN_0049a410 @ 0x0049a410 (82 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_0049a410 1
undefined4 __thiscall rb_0049a410(void *this,int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = 0;
  if (*(int *)this < 1) {
    return 0;
  }
  piVar1 = *(int **)((int)this + 8);
  piVar3 = piVar1;
  do {
    if (*piVar3 == param_2) {
      *param_1 = piVar1[iVar2 * 3];
      param_1[1] = piVar1[iVar2 * 3 + 1];
      param_1[2] = piVar1[iVar2 * 3 + 2];
      return 1;
    }
    iVar2 = iVar2 + 1;
    piVar3 = piVar3 + 3;
  } while (iVar2 < *(int *)this);
  return 0;
}
