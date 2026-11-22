/* Rebuilt from lomse.exe FUN_004f6160 @ 0x004f6160 (59 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define _DAT_0054ded0 (*(float *)0x0054ded0)

#define LOM_SELF_004f6160 1
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl rb_004f6160(int *param_1,int *param_2)

{
  float fVar1;
  
  fVar1 = *(float *)(*param_1 + 8) - *(float *)(*param_2 + 8);
  if ((__LOM_ISNAN(fVar1) || __LOM_ISNAN(_DAT_0054ded0)) || fVar1 < _DAT_0054ded0) {
    return 0xffffffff;
  }
  if ((!__LOM_ISNAN(fVar1) && !__LOM_ISNAN(_DAT_0054ded0)) && _DAT_0054ded0 < fVar1) {
    return 1;
  }
  return 0;
}
