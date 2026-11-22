/* Rebuilt from lomse.exe FUN_0042d720 @ 0x0042d720 (35 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00585408 (*(undefined4 *)0x00585408)
#define FUN_00478920 ((undefined4 (__fastcall *)(int *))0x00478920)
#define _DAT_005867a0 (*(undefined4 *)0x005867a0)

#define LOM_SELF_0042d720 1
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall rb_0042d720(int param_1)

{
  if (*(int *)(param_1 + 0xc) != -1) {
    _DAT_005867a0 = *(int *)(param_1 + 0xc);
    FUN_00478920(&DAT_00585408);
    *(undefined4 *)(param_1 + 0xc) = 0xffffffff;
  }
  return;
}
