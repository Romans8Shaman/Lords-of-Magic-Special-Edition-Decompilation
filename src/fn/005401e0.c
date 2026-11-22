/* Rebuilt from lomse.exe FUN_005401e0 @ 0x005401e0 (92 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_005401e0 1
undefined4 __cdecl rb_005401e0(int volatile param_1, uint volatile param_2)

{
  if ((param_2 == 0x7ff00000) && (param_1 == 0)) {
    return 1;
  }
  if ((param_2 == 0xfff00000) && (param_1 == 0)) {
    return 2;
  }
  if (((*(ushort *)((uchar *)&param_2 + 2)) & 0x7ff8) == 0x7ff8) {
    return 3;
  }
  if ((((*(ushort *)((uchar *)&param_2 + 2)) & 0x7ff8) == 0x7ff0) && (((param_2 & 0x7ffff) != 0 || (param_1 != 0)))) {
    return 4;
  }
  return 0;
}
