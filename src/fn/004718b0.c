/* Rebuilt from lomse.exe FUN_004718b0 @ 0x004718b0 (31 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_004718b0 1
void __fastcall rb_004718b0(int param_1)

{
  undefined4 *this;
  
  this = *(undefined4 **)(param_1 + 0x170);
  if (this != (undefined4 *)0x0) {
    ((undefined4 (__thiscall *)(__typeof__(this), __typeof__(1)))(**(code **)*this))(this,1);
    *(undefined4 *)(param_1 + 0x170) = 0;
  }
  return;
}
