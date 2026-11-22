/* Rebuilt from lomse.exe FUN_00413180 @ 0x00413180 (32 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004a6f60 ((int (__thiscall *)(void *, int, uint))0x004a6f60)
#define FUN_004c6fc0 ((undefined * (__stdcall *)(void))0x004c6fc0)

#define LOM_SELF_00413180 1
int __thiscall rb_00413180(void *this,int param_1)

{
  undefined *this_00;
  int iVar1;
  uint uVar2;
  
  uVar2 = *(uint *)((int)this + 0x54);
  iVar1 = param_1;
  this_00 = FUN_004c6fc0();
  iVar1 = FUN_004a6f60(this_00,iVar1,uVar2);
  if (iVar1 < 0) {
    iVar1 = param_1;
  }
  return iVar1;
}
