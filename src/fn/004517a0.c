/* Rebuilt from lomse.exe FUN_004517a0 @ 0x004517a0 (49 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004516a0 ((undefined4 (__thiscall *)(void *, int *))0x004516a0)
#define FUN_004a7d50 ((int (__thiscall *)(void *, int *, int))0x004a7d50)
#define FUN_004c6fc0 ((undefined * (__stdcall *)(void))0x004c6fc0)

#define LOM_SELF_004517a0 1
undefined4 __thiscall rb_004517a0(void *this,int *param_1)

{
  int iVar1;
  undefined *this_00;
  
  iVar1 = FUN_004516a0(this,param_1);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = *(int *)((int)this + 0x1c);
  this_00 = FUN_004c6fc0();
  FUN_004a7d50(this_00,this,iVar1);
  return 1;
}
