/* Rebuilt from lomse.exe FUN_004ab250 @ 0x004ab250 (53 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00495370 ((undefined4 (__thiscall *)(void *, byte *))0x00495370)

#define LOM_SELF_004ab250 1
bool __thiscall rb_004ab250(void *this,byte *param_1,byte *param_2)

{
  int iVar1;
  
  iVar1 = FUN_00495370((void *)((int)this + 0x234),param_1);
  if (iVar1 == 0) {
    return false;
  }
  iVar1 = FUN_00495370((void *)((int)this + 0x254),param_2);
  return iVar1 != 0;
}
