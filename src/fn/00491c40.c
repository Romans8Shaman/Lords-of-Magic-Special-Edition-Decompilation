/* Rebuilt from lomse.exe FUN_00491c40 @ 0x00491c40 (40 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00491680 ((undefined4 (__fastcall *)(undefined4 *))0x00491680)

#define LOM_SELF_00491c40 1
undefined4 __thiscall rb_00491c40(void *this,int param_1)

{
  if (((param_1 < 0) || (*(int *)this <= param_1)) || (*(int *)((int)this + 4) == 0)) {
    return 0;
  }
  FUN_00491680((undefined4 *)(*(int *)((int)this + 4) + param_1 * 8));
  return 1;
}
