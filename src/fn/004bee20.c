/* Rebuilt from lomse.exe FUN_004bee20 @ 0x004bee20 (41 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004bee50 ((undefined4 (__thiscall *)(void *, int))0x004bee50)

#define LOM_SELF_004bee20 1
void __thiscall rb_004bee20(void *this,int param_1)

{
  void *this_00;
  int iVar1;
  
  this_00 = (void *)((int)this + 0xda4);
  iVar1 = 0x10;
  do {
    FUN_004bee50(this_00,param_1);
    this_00 = (void *)((int)this_00 + 0x88);
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}
