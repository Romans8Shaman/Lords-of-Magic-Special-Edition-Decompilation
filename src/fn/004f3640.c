/* Rebuilt from lomse.exe FUN_004f3640 @ 0x004f3640 (24 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_004f3640 1
void __thiscall rb_004f3640(void *this)

{
  *(uint *)((int)this + 0x34) = *(uint *)((int)this + 0x34) & 0xffffffbf;
  if ((*(byte *)((int)this + 0x34) & 0x20) != 0) {
    *(uint *)((int)this + 0x34) = *(uint *)((int)this + 0x34) | 8;
  }
  return;
}
