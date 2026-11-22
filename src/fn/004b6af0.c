/* Rebuilt from lomse.exe FUN_004b6af0 @ 0x004b6af0 (60 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004b7b10 ((undefined4 (__stdcall *)(undefined4, undefined4))0x004b7b10)
#define FUN_004b7dd0 ((undefined4 (__fastcall *)(int))0x004b7dd0)

#define LOM_SELF_004b6af0 1
void __thiscall rb_004b6af0(void *this,undefined4 param_1)

{
  int iVar1;
  
  if (*(int *)((int)this + 0x4b2c) == 0) {
    FUN_004b7b10(0,param_1);
    return;
  }
  iVar1 = FUN_004b7dd0(*(int *)((int)this + 0x4b2c));
  FUN_004b7b10(iVar1 + -1,param_1);
  return;
}
