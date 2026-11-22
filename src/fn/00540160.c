/* Rebuilt from lomse.exe FUN_00540160 @ 0x00540160 (55 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_00540160 1
int __cdecl rb_00540160(uint param_1)

{
  if ((param_1 & 0x20) != 0) {
    return 5;
  }
  if ((param_1 & 8) != 0) {
    return 1;
  }
  if ((param_1 & 4) != 0) {
    return 2;
  }
  if ((param_1 & 1) == 0) {
    return (param_1 & 2) << 1;
  }
  return 3;
}
