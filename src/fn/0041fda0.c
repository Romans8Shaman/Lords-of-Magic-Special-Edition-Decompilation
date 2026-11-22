/* Rebuilt from lomse.exe FUN_0041fda0 @ 0x0041fda0 (49 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005876d0 (*(undefined4 *)0x005876d0)
#define DAT_005ae9c4 (*(int *)0x005ae9c4)
#define FUN_0051ab30 ((undefined4 (__thiscall *)(void *, int, int, int, int))0x0051ab30)

#define LOM_SELF_0041fda0 1
undefined4 __fastcall rb_0041fda0(int param_1)

{
  FUN_0051ab30(&DAT_005876d0,*(int *)(param_1 + 0x1c) % DAT_005ae9c4,
               *(int *)(param_1 + 0x1c) / DAT_005ae9c4,0x140,0xc0);
  return 1;
}
