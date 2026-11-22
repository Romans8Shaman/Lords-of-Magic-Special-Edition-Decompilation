/* Rebuilt from lomse.exe FUN_004ba1c0 @ 0x004ba1c0 (27 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_004ba1c0 1
void __thiscall rb_004ba1c0(void *this,int param_1)

{
  if (param_1 == 0) {
    *(uint *)((int)this + 0x30) = *(uint *)((int)this + 0x30) | 2;
    return;
  }
  *(uint *)((int)this + 0x30) = *(uint *)((int)this + 0x30) & 0xfffffffd;
  return;
}
