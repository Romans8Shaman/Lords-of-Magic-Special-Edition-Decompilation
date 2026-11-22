/* Rebuilt from lomse.exe FUN_004a8390 @ 0x004a8390 (28 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_004a8390 1
undefined4 __thiscall rb_004a8390(void *this,int param_1)

{
  if (*(int *)((int)this + 100) == 0) {
    return 0;
  }
  return (uint)(*(int *)(*(int *)((int)this + 100) + param_1 * 8) != 0);
}
