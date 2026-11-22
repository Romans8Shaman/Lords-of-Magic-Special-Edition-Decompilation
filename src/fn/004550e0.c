/* Rebuilt from lomse.exe FUN_004550e0 @ 0x004550e0 (24 bytes, __stdcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00579370 (*(undefined4 *)0x00579370)

#define LOM_SELF_004550e0 1
undefined4 __stdcall rb_004550e0(int param_1)

{
  if (param_1 < 0) {
    return 0xffffffff;
  }
  return (&DAT_00579370)[param_1];
}
