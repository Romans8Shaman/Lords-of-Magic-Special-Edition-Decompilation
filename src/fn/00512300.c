/* Rebuilt from lomse.exe FUN_00512300 @ 0x00512300 (79 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00495370 ((undefined4 (__thiscall *)(void *, byte *))0x00495370)
#define FUN_004bfd30 ((undefined4 (__stdcall *)(undefined4))0x004bfd30)
#define FUN_005119b0 ((undefined4 (__fastcall *)(int))0x005119b0)
#define FUN_00512240 ((undefined4 (__thiscall *)(void *, LPCSTR))0x00512240)
#define FUN_005122a0 ((undefined4 (__thiscall *)(void *, LPCSTR))0x005122a0)

#define LOM_SELF_00512300 1
int __thiscall rb_00512300(void *this,byte *unused_stack_4,undefined4 param_p2)

{
  int iVar1;
  LPCSTR pCVar2;
  
  iVar1 = FUN_00495370((void *)((int)this + 0x284),unused_stack_4);
  if (iVar1 == 0) {
    return 0;
  }
  pCVar2 = (LPCSTR)FUN_004bfd30(unused_stack_4);
  iVar1 = FUN_00512240(this,pCVar2);
  if (iVar1 == 0) {
    iVar1 = FUN_005119b0((int)this);
    FUN_005122a0(this,pCVar2);
  }
  return iVar1;
}
