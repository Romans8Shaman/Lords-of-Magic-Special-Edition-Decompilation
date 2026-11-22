/* Rebuilt from lomse.exe FUN_00495900 @ 0x00495900 (94 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00585408 (*(undefined4 *)0x00585408)
#define DAT_00586774 (*(undefined4 *)0x00586774)
#define DAT_005867a4 (*(undefined4 *)0x005867a4)
#define FUN_00478c00 ((undefined4 (__thiscall *)(void *, undefined4))0x00478c00)
#define _DAT_005867a0 (*(undefined4 *)0x005867a0)
#define _DAT_005867a8 (*(undefined4 *)0x005867a8)
#define _DAT_005867b0 (*(undefined4 *)0x005867b0)
#define _DAT_005867b4 (*(undefined4 *)0x005867b4)

#define LOM_SELF_00495900 1
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall rb_00495900(void *this,int in_stack_4)

{
  if (in_stack_4 == 0) {
    *(uint *)((int)this + 0xc) = *(uint *)((int)this + 0xc) & 0xfffffffe;
  }
  else {
    *(uint *)((int)this + 0xc) = *(uint *)((int)this + 0xc) | 1;
    if (-1 < *(int *)((int)this + 0x14)) {
      _DAT_005867b0 = 0;
      _DAT_005867a8 = DAT_00586774;
      DAT_005867a4 = *(undefined4 *)((int)this + 0x14);
      _DAT_005867a0 = 0xffffffff;
      _DAT_005867b4 = 0;
      FUN_00478c00(&DAT_00585408,*(undefined4 *)((int)this + 0x14));
      return;
    }
  }
  return;
}
