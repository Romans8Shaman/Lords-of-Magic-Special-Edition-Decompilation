/* Rebuilt from lomse.exe FUN_004950c0 @ 0x004950c0 (41 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00583648 (*(int *)0x00583648)
#define FUN_00494610 ((undefined4 (__fastcall *)(undefined4 *))0x00494610)
#define FUN_00495170 ((undefined4 (__thiscall *)(void *, undefined4, undefined4))0x00495170)

#define LOM_SELF_004950c0 1
undefined4 * __thiscall rb_004950c0(void *this,int *param_1)

{
  DAT_00583648 = DAT_00583648 + 0x20;
  FUN_00494610(this);
  FUN_00495170(this,param_1,0);
  return this;
}
