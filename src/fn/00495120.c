/* Rebuilt from lomse.exe FUN_00495120 @ 0x00495120 (77 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00583648 (*(int *)0x00583648)
#define FUN_00494610 ((undefined4 (__fastcall *)(undefined4 *))0x00494610)
#define FUN_00495170 ((undefined4 (__thiscall *)(void *, undefined4, undefined4))0x00495170)

#define LOM_SELF_00495120 1
undefined4 * __thiscall rb_00495120(void *this,int *param_1,int *param_2,int param_3)

{
  DAT_00583648 = DAT_00583648 + 0x20;
  FUN_00494610(this);
  FUN_00495170(this,param_1,param_2[0x47]);
  if ((**(byte **)(*param_2 + 8) & 0x33) != 0) {
    *(uint *)((int)this + 0xc) = (uint)*(ushort *)(param_3 + 2);
  }
  return this;
}
