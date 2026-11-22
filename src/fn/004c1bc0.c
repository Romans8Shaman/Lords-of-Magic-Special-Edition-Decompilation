/* Rebuilt from lomse.exe FUN_004c1bc0 @ 0x004c1bc0 (90 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00415b10 ((undefined4 (__thiscall *)(void *, undefined4 *, int))0x00415b10)
#define FUN_004c2450 ((undefined4 (__fastcall *)(int))0x004c2450)

#define LOM_SELF_004c1bc0 1
void __thiscall rb_004c1bc0(void *this,undefined4 *param_1)

{
  if (param_1 == (undefined4 *)0x0) {
    FUN_004c2450((int)this);
    return;
  }
  *(undefined4 *)((int)this + 0x5b0) = param_1[10];
  *(undefined4 *)((int)this + 0x5b8) = *(undefined4 *)((int)this + 0x48);
  *(undefined4 *)((int)this + 0x48) = param_1[0x12];
  *(undefined4 *)((int)this + 0x5c0) = 0;
  *(undefined4 *)((int)this + 0x5c4) = 0;
  *(undefined1 *)((int)this + 0x5c8) = 0;
  *(undefined4 *)((int)this + 0x5bc) = 0;
  *(uint *)((int)this + 0x30) = *(uint *)((int)this + 0x30) & 0x9fffffff;
  FUN_00415b10(this,param_1,0);
  return;
}
