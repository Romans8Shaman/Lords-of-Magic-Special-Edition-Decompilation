/* Rebuilt from lomse.exe FUN_004c3db0 @ 0x004c3db0 (36 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_004c3db0 1
void __thiscall rb_004c3db0(void *this,undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)((int)this + 4);
  iVar2 = *(int *)((int)this + 8);
  *(undefined4 *)(iVar2 + iVar1 * 8) = *param_1;
  *(undefined4 *)(iVar2 + 4 + iVar1 * 8) = param_1[1];
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  return;
}
