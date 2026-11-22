/* Rebuilt from lomse.exe FUN_004acf60 @ 0x004acf60 (124 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00583a00 (*(int *)0x00583a00)
#define FUN_004f59f0 ((undefined4 (__fastcall *)(undefined4 *))0x004f59f0)
#define PTR_FUN_0054daf8 (*(undefined * *)0x0054daf8)

#define LOM_SELF_004acf60 1
void __fastcall rb_004acf60(undefined4 *param_1)

{
  undefined4 *puVar1;

  *param_1 = &PTR_FUN_0054daf8;
  DAT_00583a00 = DAT_00583a00 + -0x148;
  puVar1 = (undefined4 *)param_1[0x39];
  if (puVar1 != (undefined4 *)0x0) {
    ((undefined4 (__thiscall *)(__typeof__(puVar1), __typeof__(1)))(**(code **)*puVar1))(puVar1,1);
  }
  puVar1 = (undefined4 *)param_1[0x3a];
  if (puVar1 != (undefined4 *)0x0) {
    ((undefined4 (__thiscall *)(__typeof__(puVar1), __typeof__(1)))(**(code **)*puVar1))(puVar1,1);
  }
  FUN_004f59f0(param_1);
  return;
}
