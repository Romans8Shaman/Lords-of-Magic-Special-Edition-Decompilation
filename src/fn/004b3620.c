/* Rebuilt from lomse.exe FUN_004b3620 @ 0x004b3620 (82 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004b32c0 ((undefined4 (__fastcall *)(int *))0x004b32c0)
#define FUN_004b3580 ((undefined4 (__thiscall *)(void *, LPCSTR, int))0x004b3580)

#define LOM_SELF_004b3620 1
bool __thiscall rb_004b3620(void *this,LPCSTR param_1,int param_2)

{
  int *this_00;
  int iVar1;
  
  if (*(int *)((int)this + 0x13b4) == 0) {
    return false;
  }
  this_00 = (int *)((int)this + param_2 * 300 + 0xfc0);
  FUN_004b32c0(this_00);
  *(undefined4 *)((int)this + param_2 * 300 + 0xfdc) = 1;
  iVar1 = FUN_004b3580(this_00,param_1,param_2);
  return iVar1 != 0;
}
