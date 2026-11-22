/* Rebuilt from lomse.exe FUN_00407bb0 @ 0x00407bb0 (39 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_0052b1d0 ((uint (__fastcall *)(int *))0x0052b1d0)

#define LOM_SELF_00407bb0 1
uint __thiscall rb_00407bb0(void *this,int param_1)

{
  uint uVar1;
  
  if ((param_1 < 0) || (*(int *)((int)this + 0x4c) <= param_1)) {
    return 0;
  }
  uVar1 = FUN_0052b1d0((int *)((int)this + param_1 * 0x4c + 0xc4));
  return uVar1;
}
