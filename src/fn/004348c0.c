/* Rebuilt from lomse.exe FUN_004348c0 @ 0x004348c0 (83 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00434680 ((undefined4 (__thiscall *)(void *, undefined4, undefined4))0x00434680)

#define LOM_SELF_004348c0 1
int __thiscall rb_004348c0(void *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  void *this_00;
  
  iVar3 = 0;
  if (param_1 != *(int *)((int)this + 8)) {
    param_2 = 1 - param_2;
  }
  iVar2 = 7;
  this_00 = (void *)((int)this + param_2 * 0x2a + 0x28);
  do {
    iVar1 = FUN_00434680(this_00,this,param_1);
    iVar3 = iVar3 + iVar1;
    this_00 = (void *)((int)this_00 + 6);
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return iVar3;
}
