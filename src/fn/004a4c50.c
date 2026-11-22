/* Rebuilt from lomse.exe FUN_004a4c50 @ 0x004a4c50 (19 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_004a4c50 1
uint __thiscall rb_004a4c50(void *this,int param_1)

{
  return *(uint *)(*(int *)((int)this + 100) + 4 + param_1 * 8) & 0x1c0000;
}
