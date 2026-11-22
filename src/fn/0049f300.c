/* Rebuilt from lomse.exe FUN_0049f300 @ 0x0049f300 (24 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_0049f300 1
undefined4 __thiscall rb_0049f300(void *this,int param_1)

{
  if ((param_1 < 0) || (9 < param_1)) {
    return 0;
  }
  return *(undefined4 *)((int)this + param_1 * 4);
}
