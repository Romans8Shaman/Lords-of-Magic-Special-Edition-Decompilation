/* Rebuilt from lomse.exe FUN_005447e0 @ 0x005447e0 (43 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005d6a20 (*(undefined4 *)0x005d6a20)
#define DAT_005d6b20 (*(uint *)0x005d6b20)

#define LOM_SELF_005447e0 1
undefined4 __cdecl rb_005447e0(uint param_1)

{
  if (param_1 < DAT_005d6b20) {
    return *(byte *)((&DAT_005d6a20)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 0x40;
  }
  return 0;
}
