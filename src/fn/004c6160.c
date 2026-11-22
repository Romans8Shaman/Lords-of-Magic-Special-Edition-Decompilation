/* Rebuilt from lomse.exe FUN_004c6160 @ 0x004c6160 (34 bytes, __stdcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004a4c70 ((int (__thiscall *)(void *, int, int, uint))0x004a4c70)
#define FUN_004c6fc0 ((undefined * (__stdcall *)(void))0x004c6fc0)

#define LOM_SELF_004c6160 1
int __stdcall rb_004c6160(int param_1,int param_2)

{
  undefined *this;
  int iVar1;
  uint uVar2;
  
  uVar2 = 0x40000;
  iVar1 = param_1;
  this = FUN_004c6fc0();
  iVar1 = FUN_004a4c70(this,iVar1,param_2,uVar2);
  return iVar1 - param_1;
}
