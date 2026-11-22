/* Rebuilt from lomse.exe FUN_00495290 @ 0x00495290 (41 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00583648 (*(int *)0x00583648)
#define FUN_00494610 ((undefined4 (__fastcall *)(undefined4 *))0x00494610)
#define FUN_00495370 ((undefined4 (__thiscall *)(void *, byte *))0x00495370)

#define LOM_SELF_00495290 1
undefined4 * __thiscall rb_00495290(void *this,byte *param_1)

{
  DAT_00583648 = DAT_00583648 + 0x20;
  FUN_00494610(this);
  FUN_00495370(this,param_1);
  return this;
}
