/* Rebuilt from lomse.exe FUN_004fbe60 @ 0x004fbe60 (106 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_004fbe60 1
undefined4 __thiscall rb_004fbe60(void *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar1 = *(int *)((int)this + 8);
  if (iVar1 != 0) {
    if (param_1 == 0) {
      iVar2 = *(int *)((int)this + 0x24);
    }
    else {
      iVar2 = *(int *)(param_1 + 0x28) + 1;
    }
    if (iVar2 <= *(int *)((int)this + 0x18)) {
      piVar3 = (int *)(iVar1 + iVar2 * 4);
      while ((*piVar3 == 0 || (*(int *)(*piVar3 + 4) != param_2))) {
        iVar2 = iVar2 + 1;
        piVar3 = piVar3 + 1;
        if (*(int *)((int)this + 0x18) < iVar2) {
          return 0;
        }
      }
      *(int *)(*(int *)(iVar2 * 4 + iVar1) + 0x28) = iVar2;
      return *(undefined4 *)(*(int *)((int)this + 8) + iVar2 * 4);
    }
  }
  return 0;
}
