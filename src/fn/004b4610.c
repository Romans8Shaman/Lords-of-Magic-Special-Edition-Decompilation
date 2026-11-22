/* Rebuilt from lomse.exe FUN_004b4610 @ 0x004b4610 (25 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005851a0 (*(int *)0x005851a0)
#define FUN_00483cf0 ((undefined4 (__fastcall *)(int))0x00483cf0)
#define FUN_004b6f70 ((undefined4 (__fastcall *)(void *))0x004b6f70)

#define LOM_SELF_004b4610 1
void __fastcall rb_004b4610(void *param_1)

{
  if (DAT_005851a0 == 0) {
    return;
  }
  FUN_004b6f70(param_1);
  FUN_00483cf0(0x5aa12c);
  return;
}
