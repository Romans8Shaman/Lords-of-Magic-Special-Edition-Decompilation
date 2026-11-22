/* Rebuilt from lomse.exe FUN_004c5310 @ 0x004c5310 (40 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_004c5310 1
void __thiscall rb_004c5310(void *this,byte param_1,int param_2)

{
  byte bVar1;
  
  bVar1 = (byte)(1 << (param_1 & 0x1f));
  if (param_2 == 0) {
    *(byte *)((int)this + 9) = *(byte *)((int)this + 9) & ~bVar1;
    return;
  }
  *(byte *)((int)this + 9) = *(byte *)((int)this + 9) | bVar1;
  return;
}
