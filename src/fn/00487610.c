/* Rebuilt from lomse.exe FUN_00487610 @ 0x00487610 (59 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004876c0 ((undefined4 (__thiscall *)(void *, undefined4))0x004876c0)

#define LOM_SELF_00487610 1
void __thiscall rb_00487610(void *this,int param_1)

{
  if (param_1 < 1) {
    *(undefined4 *)((int)this + 8) = 1;
    *(undefined4 *)((int)this + 0x10) = 1;
    *(undefined4 *)((int)this + 0xc) = 0;
    FUN_004876c0(this,0);
    return;
  }
  *(int *)((int)this + 8) = param_1;
  *(undefined4 *)((int)this + 0x10) = 1;
  *(undefined4 *)((int)this + 0xc) = 0;
  FUN_004876c0(this,0);
  return;
}
