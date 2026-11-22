/* Rebuilt from lomse.exe FUN_004203c0 @ 0x004203c0 (90 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_004203c0 1
undefined4 __thiscall rb_004203c0(void *this,int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)this + 0x24);
  if (*(int *)((int)this + 0x18) < iVar3) {
    return 0;
  }
  piVar2 = (int *)(*(int *)((int)this + 8) + iVar3 * 4);
  while ((((iVar1 = *piVar2, iVar1 == 0 || (*(int *)(iVar1 + 4) != 0)) ||
          (*(int *)(iVar1 + 0x48) != param_1)) || ((*(uint *)(iVar1 + 0x30) & 0x4000000) == 0))) {
    iVar3 = iVar3 + 1;
    piVar2 = piVar2 + 1;
    if (*(int *)((int)this + 0x18) < iVar3) {
      return 0;
    }
  }
  return 1;
}
