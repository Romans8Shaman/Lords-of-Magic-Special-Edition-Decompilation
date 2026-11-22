/* Rebuilt from lomse.exe FUN_0053c6f0 @ 0x0053c6f0 (28 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define _DAT_0054ef18 (*(double *)0x0054ef18)

#define LOM_SELF_0053c6f0 1
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl rb_0053c6f0(double *param_1)

{
  if ((!__LOM_ISNAN(*param_1) && !__LOM_ISNAN(_DAT_0054ef18)) && _DAT_0054ef18 <= *param_1) {
    return 1;
  }
  return 0;
}
