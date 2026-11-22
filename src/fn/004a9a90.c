/* Rebuilt from lomse.exe FUN_004a9a90 @ 0x004a9a90 (49 bytes, __stdcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aa7d4 (*(int *)0x005aa7d4)

#define LOM_SELF_004a9a90 1
undefined4 __stdcall rb_004a9a90(int param_1,uint param_2)

{
  if (param_1 == DAT_005aa7d4) {
    if ((param_2 & 0x400) != 0) {
      return 1;
    }
  }
  else if ((param_2 & 0x800) != 0) {
    return 1;
  }
  return 0;
}
