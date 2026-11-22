/* Rebuilt from lomse.exe FUN_004a51c0 @ 0x004a51c0 (80 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_004a51c0 1
int __thiscall rb_004a51c0(void *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)((int)this + 0x6c);
  if (param_1 < 0) {
    param_1 = param_1 % iVar1 + iVar1;
  }
  else if (iVar1 <= param_1) {
    param_1 = param_1 % iVar1;
  }
  iVar2 = *(int *)((int)this + 0x70);
  if (param_2 < 0) {
    return (param_2 % iVar2 + iVar2) * iVar1 + param_1;
  }
  if (iVar2 <= param_2) {
    param_2 = param_2 % iVar2;
  }
  return param_2 * iVar1 + param_1;
}
