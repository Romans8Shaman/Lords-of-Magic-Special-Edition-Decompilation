/* Rebuilt from lomse.exe FUN_0040ae20 @ 0x0040ae20 (46 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_0040ae20 1
undefined4 __cdecl rb_0040ae20(undefined4 param_1)

{
  switch(param_1) {
  case 2:
  case 3:
  case 6:
  case 7:
  case 0x12:
  case 0x15:
  case 0x18:
  case 0x19:
  case 0x30:
    return 0;
  default:
    return 0xffffffff;
  case 8:
  case 9:
  case 0xb:
  case 0x11:
    return 1;
  case 0x13:
  case 0x14:
  case 0x1a:
    return 2;
  }
}
