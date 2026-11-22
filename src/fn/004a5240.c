/* Rebuilt from lomse.exe FUN_004a5240 @ 0x004a5240 (41 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004a5170 ((int (__thiscall *)(void *, int, int))0x004a5170)

#define LOM_SELF_004a5240 1
int __thiscall rb_004a5240(void *this,int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_004a5170(this,param_1,param_2);
  if (*(int *)((int)this + 0x54) == 0) {
    return 0;
  }
  return (int)*(short *)(*(int *)((int)this + 0x54) + iVar1 * 8);
}
