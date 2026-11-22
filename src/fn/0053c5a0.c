/* Rebuilt from lomse.exe FUN_0053c5a0 @ 0x0053c5a0 (80 bytes, __stdcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define _DAT_0054eee8 (*(double *)0x0054eee8)

#define LOM_SELF_0053c5a0 1
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __stdcall rb_0053c5a0(void)

{
  if (!__LOM_ISNAN(_DAT_0054eee8) && _DAT_0054eee8 < 0.0) {
    return 1;
  }
  return 0;
}
