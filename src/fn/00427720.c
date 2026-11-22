/* Rebuilt from lomse.exe FUN_00427720 @ 0x00427720 (39 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_0052b210 ((undefined4 (__fastcall *)(int *))0x0052b210)

#define LOM_SELF_00427720 1
undefined4 __thiscall rb_00427720(void *this,int param_1)

{
  undefined4 uVar1;
  
  if ((param_1 < 0) || (*(int *)((int)this + 0x4c) <= param_1)) {
    return 0;
  }
  uVar1 = FUN_0052b210((int *)((int)this + param_1 * 0x4c + 0xc4));
  return uVar1;
}
