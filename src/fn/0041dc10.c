/* Rebuilt from lomse.exe FUN_0041dc10 @ 0x0041dc10 (35 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_0041dc40 ((undefined4 (__fastcall *)(int))0x0041dc40)

#define LOM_SELF_0041dc10 1
void __thiscall rb_0041dc10(void *this,int param_1)

{
  if (param_1 == 0) {
    FUN_0041dc40((int)this);
    return;
  }
  *(uint *)((int)this + 0x588) = *(uint *)((int)this + 0x588) & 0xfffffffd | 1;
  return;
}
