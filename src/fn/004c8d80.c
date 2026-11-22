/* Rebuilt from lomse.exe FUN_004c8d80 @ 0x004c8d80 (51 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00584ae8 (*(undefined *)0x00584ae8)
#define DAT_005a7d8c (*(int *)0x005a7d8c)
#define DAT_005a8078 (*(undefined4 *)0x005a8078)
#define FUN_005000f0 ((undefined4 (__thiscall *)(void *, int))0x005000f0)

#define LOM_SELF_004c8d80 1
undefined4 __thiscall rb_004c8d80(void *this,undefined4 *param_1)

{
  *(undefined4 *)((int)this + 0x4fb4) = *param_1;
  if ((&DAT_005a8078)[DAT_005a7d8c * 0x100] != 1) {
    FUN_005000f0(&DAT_00584ae8,1);
  }
  return 1;
}
