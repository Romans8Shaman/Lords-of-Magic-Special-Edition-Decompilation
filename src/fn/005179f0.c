/* Rebuilt from lomse.exe FUN_005179f0 @ 0x005179f0 (90 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00512350 ((undefined4 (__thiscall *)(void *, int, int))0x00512350)

#define LOM_SELF_005179f0 1
void __thiscall rb_005179f0(void *this,int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 0x202c0);
  if (param_1 < 0) {
    param_1 = param_1 % iVar1 + iVar1;
  }
  else if (iVar1 <= param_1) {
    param_1 = param_1 % iVar1;
  }
  iVar1 = *(int *)((int)this + 0x202c4);
  if (param_2 < 0) {
    FUN_00512350(this,param_1,param_2 % iVar1 + iVar1);
    return;
  }
  if (iVar1 <= param_2) {
    param_2 = param_2 % iVar1;
  }
  FUN_00512350(this,param_1,param_2);
  return;
}
