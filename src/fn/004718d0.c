/* Rebuilt from lomse.exe FUN_004718d0 @ 0x004718d0 (46 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00472720 ((undefined4 (__fastcall *)(void *))0x00472720)

#define LOM_SELF_004718d0 1
void __thiscall rb_004718d0(void *this,int param_1)

{
  if (param_1 == 0) {
    *(uint *)((int)this + 0x178) = *(uint *)((int)this + 0x178) | 1;
    FUN_00472720(this);
    return;
  }
  *(uint *)((int)this + 0x178) = *(uint *)((int)this + 0x178) & 0xfffffffe;
  FUN_00472720(this);
  return;
}
