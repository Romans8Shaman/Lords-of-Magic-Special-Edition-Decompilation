/* Rebuilt from lomse.exe FUN_004ee130 @ 0x004ee130 (24 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004c6fc0 ((undefined * (__stdcall *)(void))0x004c6fc0)
#define FUN_004ede30 ((int (__thiscall *)(void *, int, uint))0x004ede30)

#define LOM_SELF_004ee130 1
int __thiscall rb_004ee130(void *this,int param_1)

{
  undefined *this_00;
  int iVar1;
  uint uVar2;
  
  uVar2 = *(uint *)((int)this + 0x54);
  this_00 = FUN_004c6fc0();
  iVar1 = FUN_004ede30(this_00,param_1,uVar2);
  return iVar1;
}
