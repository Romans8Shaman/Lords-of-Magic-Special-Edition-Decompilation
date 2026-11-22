/* Rebuilt from lomse.exe FUN_004c5e60 @ 0x004c5e60 (34 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_004c5e60 1
uint __thiscall rb_004c5e60(void *this,int param_1)

{
  if ((param_1 < 0) || (*(int *)((int)this + 0xc) <= param_1)) {
    return 0xffffffff;
  }
  return (uint)*(byte *)(*(int *)this + param_1 * 6);
}
