/* Rebuilt from lomse.exe FUN_0043ba50 @ 0x0043ba50 (105 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00579080 (*(int *)0x00579080)
#define FUN_004f59f0 ((undefined4 (__fastcall *)(undefined4 *))0x004f59f0)
#define PTR_FUN_0054d4d8 (*(undefined * *)0x0054d4d8)

#define LOM_SELF_0043ba50 1
void __fastcall rb_0043ba50(undefined4 *param_1)

{
  undefined4 *this;

  *param_1 = &PTR_FUN_0054d4d8;
  DAT_00579080 = DAT_00579080 + -0x94;
  this = (undefined4 *)param_1[0x12];
  if (this != (undefined4 *)0x0) {
    ((undefined4 (__thiscall *)(__typeof__(this), __typeof__(1)))(**(code **)*this))(this,1);
  }
  FUN_004f59f0(param_1);
  return;
}
