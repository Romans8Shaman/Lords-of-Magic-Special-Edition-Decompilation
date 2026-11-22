/* Rebuilt from lomse.exe FUN_0044e9d0 @ 0x0044e9d0 (114 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005792b0 (*(int *)0x005792b0)
#define FUN_004530e0 ((undefined4 (__cdecl *)(int))0x004530e0)
#define FUN_004f59f0 ((undefined4 (__fastcall *)(undefined4 *))0x004f59f0)
#define PTR_FUN_0054d630 (*(undefined * *)0x0054d630)

#define LOM_SELF_0044e9d0 1
void __fastcall rb_0044e9d0(undefined4 *param_1)

{
  undefined4 *this;

  *param_1 = &PTR_FUN_0054d630;
  DAT_005792b0 = DAT_005792b0 + -0x34c;
  this = (undefined4 *)param_1[0x11];
  if (this != (undefined4 *)0x0) {
    ((undefined4 (__thiscall *)(__typeof__(this), __typeof__(1)))(**(code **)*this))(this,1);
  }
  FUN_004530e0((int)param_1);
  FUN_004f59f0(param_1);
  return;
}
