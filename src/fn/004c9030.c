/* Rebuilt from lomse.exe FUN_004c9030 @ 0x004c9030 (51 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_004c9030 1
undefined4 __thiscall rb_004c9030(void *this,int param_1,uint *param_2)

{
  if ((param_1 < 0) || (1 < param_1)) {
    return 0;
  }
  *param_2 = (uint)((1 << ((byte)param_1 & 0x1f) & *(uint *)this) != 0);
  return 1;
}
