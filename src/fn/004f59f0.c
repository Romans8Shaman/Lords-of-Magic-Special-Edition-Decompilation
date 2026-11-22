/* Rebuilt from lomse.exe FUN_004f59f0 @ 0x004f59f0 (20 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define PTR_FUN_0054de80 (*(undefined * *)0x0054de80)

#define LOM_SELF_004f59f0 1
void __fastcall rb_004f59f0(undefined4 *param_1)

{
  undefined4 *this;
  
  *param_1 = &PTR_FUN_0054de80;
  this = (undefined4 *)param_1[0xb];
  if (this != (undefined4 *)0x0) {
    ((undefined4 (__thiscall *)(__typeof__(this), __typeof__(1)))(**(code **)*this))(this,1);
  }
  return;
}
