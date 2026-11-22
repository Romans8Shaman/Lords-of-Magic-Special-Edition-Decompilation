/* Rebuilt from lomse.exe FUN_00526250 @ 0x00526250 (83 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_00526250 1
undefined4 __thiscall rb_00526250(void *this,int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar1 = *(int *)this;
  iVar3 = 0;
  if (0 < iVar1) {
    piVar2 = *(int **)((int)this + 8);
    do {
      if ((*piVar2 == param_1) && (piVar2[1] == param_2)) {
        return 1;
      }
      iVar3 = iVar3 + 1;
      piVar2 = piVar2 + 2;
    } while (iVar3 < iVar1);
  }
  if (iVar1 < *(int *)((int)this + 4)) {
    *(int *)(*(int *)((int)this + 8) + iVar1 * 8) = param_1;
    *(int *)(*(int *)((int)this + 8) + 4 + *(int *)this * 8) = param_2;
    *(int *)this = *(int *)this + 1;
    return 1;
  }
  return 0;
}
