/* Rebuilt from lomse.exe FUN_004c52e0 @ 0x004c52e0 (40 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_004c52e0 1
void __thiscall rb_004c52e0(void *this,byte param_1,int param_2)

{
  byte bVar1;
  
  bVar1 = (byte)(1 << (param_1 & 0x1f));
  if (param_2 == 0) {
    *(byte *)((int)this + 8) = *(byte *)((int)this + 8) & ~bVar1;
    return;
  }
  *(byte *)((int)this + 8) = *(byte *)((int)this + 8) | bVar1;
  return;
}
