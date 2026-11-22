/* Rebuilt from lomse.exe FUN_004a9e60 @ 0x004a9e60 (57 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_004a9e60 1
void __thiscall rb_004a9e60(void *this,uint param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)((int)this + 0x68)) {
    do {
      uVar1 = *(uint *)(*(int *)((int)this + 100) + 4 + iVar2 * 8);
      if ((uVar1 & param_1) != 0) {
        *(uint *)(*(int *)((int)this + 100) + 4 + iVar2 * 8) = param_2 | uVar1;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)((int)this + 0x68));
  }
  return;
}
