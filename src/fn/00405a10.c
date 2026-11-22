/* Rebuilt from lomse.exe FUN_00405a10 @ 0x00405a10 (30 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_00405a10 1
undefined4 __thiscall rb_00405a10(void *this,int param_1)

{
  if ((*(int *)((int)this + 0xc) == param_1) && ((*(byte *)((int)this + 0x10) & 2) != 0)) {
    return 1;
  }
  return 0;
}
