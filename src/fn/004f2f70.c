/* Rebuilt from lomse.exe FUN_004f2f70 @ 0x004f2f70 (29 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_004f2f70 1
void __thiscall rb_004f2f70(void *this,uint param_1)

{
  if (*(int *)((int)this + 0x40) != 0) {
    *(uint *)((int)this + 0x44) =
         *(int *)(*(int *)((int)this + 0x40) + 0xc) + (param_1 & 0xffff) * 8;
  }
  return;
}
