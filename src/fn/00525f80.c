/* Rebuilt from lomse.exe FUN_00525f80 @ 0x00525f80 (49 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_00525f80 1
undefined4 __thiscall rb_00525f80(void *this,int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 0x14);
  if (iVar1 == 0) {
    return 0;
  }
  if (param_1 == 0) {
    *(uint *)(iVar1 + 8) = *(uint *)(iVar1 + 8) & 0xfffffffd;
    return 1;
  }
  *(uint *)(iVar1 + 8) = *(uint *)(iVar1 + 8) | 2;
  return 1;
}
