/* Rebuilt from lomse.exe FUN_004c1cf0 @ 0x004c1cf0 (52 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define FUN_00485080 ((undefined4 * (__thiscall *)(void *, int, byte))0x00485080)

#define LOM_SELF_004c1cf0 1
undefined4 __fastcall rb_004c1cf0(int param_1)

{
  undefined4 *puVar1;
  
  if (*(int *)(param_1 + 0x5b0) != -1) {
    puVar1 = FUN_00485080(&DAT_005aa12c,*(int *)(param_1 + 0x5b0),0x2f);
    if (puVar1 != (undefined4 *)0x0) {
      return 1;
    }
    *(undefined4 *)(param_1 + 0x5b0) = 0xffffffff;
  }
  return 0;
}
