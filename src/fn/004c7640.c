/* Rebuilt from lomse.exe op_clearregions @ 0x004c7640 (24 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005ae9c4 (*(int *)0x005ae9c4)
#define DAT_005ae9c8 (*(int *)0x005ae9c8)
#define DAT_005aef04 (*(undefined4 *)0x005aef04)
#define FUN_004c5ef0 ((undefined4 (__thiscall *)(void *, int, int))0x004c5ef0)

#define LOM_SELF_004c7640 1
void __cdecl rb_004c7640(void)

{
  FUN_004c5ef0(&DAT_005aef04,DAT_005ae9c4,DAT_005ae9c8);
  return;
}
