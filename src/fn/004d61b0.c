/* Rebuilt from lomse.exe FUN_004d61b0 @ 0x004d61b0 (43 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_004d61b0 1
int __thiscall rb_004d61b0(void *this,int param_1)

{
  int iVar1;
  
  *(undefined4 *)((int)this + 4) = 0;
  for (iVar1 = *(int *)(param_1 + 4); -1 < iVar1; iVar1 = *(int *)(param_1 + 4 + iVar1 * 8)) {
    iVar1 = *(int *)((int)this + 4) + 1;
    *(int *)((int)this + 4) = iVar1;
  }
  *(int *)this = param_1;
  return *(int *)((int)this + 4);
}
