/* Rebuilt from lomse.exe FUN_005071c0 @ 0x005071c0 (49 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_005071c0 1
undefined4 __thiscall rb_005071c0(void *this,int param_1)

{
  if ((*(uint *)((int)this + 0x5cc) & 1 << ((byte)param_1 & 0x1f)) == 0) {
    return 1;
  }
  return (uint)(param_1 == *(int *)((int)this + 0x48));
}
