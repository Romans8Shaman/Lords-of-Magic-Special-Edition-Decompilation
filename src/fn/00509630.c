/* Rebuilt from lomse.exe FUN_00509630 @ 0x00509630 (66 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_005091c0 ((undefined4 (__fastcall *)(undefined4 *))0x005091c0)

#define LOM_SELF_00509630 1
undefined4 __thiscall rb_00509630(void *this,int param_1,int param_2)

{
  if (*(int *)this == 0) {
    FUN_005091c0(this);
  }
  if ((((param_1 < 0) || (*(int *)((int)this + 0x2c) <= param_1)) ||
      (*(int *)((int)this + 0x18) == 0)) || ((param_2 < 0 || (7 < param_2)))) {
    return 0xffffffff;
  }
  return *(undefined4 *)(*(int *)((int)this + 0x24) + (param_2 + param_1 * 8) * 4);
}
