/* Rebuilt from lomse.exe FUN_004c52c0 @ 0x004c52c0 (25 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_004c52c0 1
uint __thiscall rb_004c52c0(void *this,byte param_1)

{
  return (uint)((*(byte *)((int)this + 9) & (byte)(1 << (param_1 & 0x1f))) != 0);
}
