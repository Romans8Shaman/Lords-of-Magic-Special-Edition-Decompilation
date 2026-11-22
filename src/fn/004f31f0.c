/* Rebuilt from lomse.exe FUN_004f31f0 @ 0x004f31f0 (47 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004f2fc0 ((undefined4 (__thiscall *)(void *, ushort, undefined4, ushort))0x004f2fc0)
#define FUN_004f3130 ((undefined4 (__fastcall *)(int))0x004f3130)

#define LOM_SELF_004f31f0 1
void __thiscall
rb_004f31f0(void *this,int param_1,ushort param_2,undefined4 param_3,ushort param_4)

{
  if (param_1 != 0) {
    *(int *)((int)this + 0x38) = param_1;
    FUN_004f2fc0(this,param_2,param_3,param_4);
    FUN_004f3130((int)this);
  }
  return;
}
