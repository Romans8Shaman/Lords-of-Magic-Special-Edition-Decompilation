/* Rebuilt from lomse.exe FUN_00432ae0 @ 0x00432ae0 (68 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_00432ae0 1
uint __cdecl rb_00432ae0(int param_1,uint param_2,uint param_3,uint param_4)

{
  if (param_1 == 0) {
    return 0;
  }
  if ((param_1 < 1) || (4 < param_1)) {
    return (param_1 << 8 | param_4) << 0x10 | param_3;
  }
  return (param_1 << 8 | param_4) << 0x10 | param_2;
}
