/* Rebuilt from lomse.exe FUN_004b6b70 @ 0x004b6b70 (52 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005cd2f0 (*(int *)0x005cd2f0)
#define DAT_005cd2f4 (*(int *)0x005cd2f4)
#define uRam00000020 (*(volatile undefined4 *)0x00000020)

#define LOM_SELF_004b6b70 1
undefined4 __cdecl rb_004b6b70(int param_1)

{
  if (param_1 < 0) {
    return 0xffffffff;
  }
  if ((param_1 < DAT_005cd2f0) && (DAT_005cd2f4 != 0)) {
    return *(undefined4 *)(DAT_005cd2f4 + param_1 * 1000 + 0x20);
  }
  return uRam00000020;
}
