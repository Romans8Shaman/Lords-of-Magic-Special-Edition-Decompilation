/* Rebuilt from lomse.exe FUN_005251c0 @ 0x005251c0 (48 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_005251c0 1
undefined4 __thiscall rb_005251c0(void *this,undefined4 param_1)

{
  if (*(int *)((int)this + 0x34c) < 10) {
    *(undefined4 *)((int)this + *(int *)((int)this + 0x34c) * 4 + 0x324) = param_1;
    *(int *)((int)this + 0x34c) = *(int *)((int)this + 0x34c) + 1;
    return 1;
  }
  return 0;
}
