/* Rebuilt from lomse.exe FUN_00432a90 @ 0x00432a90 (80 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_00432a90 1
int __thiscall rb_00432a90(void *this,int param_1,int param_2,int param_3)

{
  bool bVar1;
  
  if ((param_3 < 0) || (6 < param_3)) {
    return 0;
  }
  if (param_2 == 1) {
    bVar1 = *(int *)((int)this + 8) == param_1;
  }
  else {
    bVar1 = *(int *)((int)this + 8) != param_1;
  }
  return (int)this + ((uint)bVar1 * 7 + param_3) * 6 + 0x28;
}
