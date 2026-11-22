/* Rebuilt from lomse.exe FUN_004208d0 @ 0x004208d0 (61 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00420890 ((undefined4 (__thiscall *)(void *, int))0x00420890)
#define FUN_004a4c70 ((int (__thiscall *)(void *, int, int, uint))0x004a4c70)
#define FUN_004c6fc0 ((undefined * (__stdcall *)(void))0x004c6fc0)

#define LOM_SELF_004208d0 1
int __thiscall rb_004208d0(void *this,int param_1,int param_2)

{
  undefined *this_00;
  int iVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = *(uint *)((int)this + 0x54);
  iVar1 = param_1;
  this_00 = FUN_004c6fc0();
  iVar1 = FUN_004a4c70(this_00,iVar1,param_2,uVar3);
  if ((iVar1 == param_1) || (iVar2 = FUN_00420890(this,iVar1), iVar2 == 0)) {
    return param_1;
  }
  return iVar1;
}
