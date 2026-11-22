/* Rebuilt from lomse.exe FUN_004875f0 @ 0x004875f0 (22 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004876b0 ((undefined4 (__fastcall *)(void *))0x004876b0)
#define _DAT_005aa1cc (*(undefined4 *)0x005aa1cc)

#define LOM_SELF_004875f0 1
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall rb_004875f0(void *param_1)

{
  if (*(int *)((int)param_1 + 0x10) == 1) {
    FUN_004876b0(param_1);
  }
  _DAT_005aa1cc = 0;
  return;
}
