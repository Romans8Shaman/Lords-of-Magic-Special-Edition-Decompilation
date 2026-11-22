/* Rebuilt from lomse.exe FUN_004c4cb0 @ 0x004c4cb0 (49 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_004c4cb0 1
int __thiscall rb_004c4cb0(void *this,int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  iVar2 = 0;
  if (iVar1 != *(int *)((int)this + 4)) {
    iVar2 = *(int *)((int)this + 0xc) * iVar1 + *(int *)((int)this + 0x10);
    *param_1 = iVar1 + 1;
    if (*(int *)((int)this + 8) <= iVar1 + 1) {
      *param_1 = 0;
    }
  }
  return iVar2;
}
