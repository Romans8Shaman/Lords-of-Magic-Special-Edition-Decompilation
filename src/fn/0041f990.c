/* Rebuilt from lomse.exe FUN_0041f990 @ 0x0041f990 (57 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00428810 ((int (__thiscall *)(void *, char))0x00428810)

#define LOM_SELF_0041f990 1
int __thiscall rb_0041f990(void *this,char param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  void *this_00;
  
  iVar2 = 0;
  iVar3 = 0;
  if (0 < *(int *)((int)this + 0x4c)) {
    this_00 = (void *)((int)this + 0xc4);
    do {
      iVar1 = FUN_00428810(this_00,param_1);
      iVar2 = iVar2 + iVar1;
      iVar3 = iVar3 + 1;
      this_00 = (void *)((int)this_00 + 0x4c);
    } while (iVar3 < *(int *)((int)this + 0x4c));
  }
  return iVar2;
}
