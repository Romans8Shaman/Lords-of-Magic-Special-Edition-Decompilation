/* Rebuilt from lomse.exe FUN_00427130 @ 0x00427130 (39 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_0052b110 ((undefined4 (__fastcall *)(int *))0x0052b110)

#define LOM_SELF_00427130 1
undefined4 __thiscall rb_00427130(void *this,int param_1)

{
  undefined4 uVar1;
  
  if ((param_1 < 0) || (*(int *)((int)this + 0x4c) <= param_1)) {
    return 0;
  }
  uVar1 = FUN_0052b110((int *)((int)this + param_1 * 0x4c + 0xc4));
  return uVar1;
}
