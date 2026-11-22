/* Rebuilt from lomse.exe FUN_00469fd0 @ 0x00469fd0 (47 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005577e0 (*(int *)0x005577e0)
#define DAT_00557820 (*(int *)0x00557820)
#define _DAT_005577f4 (*(undefined4 *)0x005577f4)
#define _DAT_00557834 (*(undefined4 *)0x00557834)

#define LOM_SELF_00469fd0 1
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall rb_00469fd0(void *this,int param_1)

{
  *(int *)((int)this + 100) = param_1;
  *(int *)((int)this + 0x78) = param_1;
  DAT_005577e0 = param_1;
  _DAT_005577f4 = param_1;
  DAT_00557820 = param_1;
  _DAT_00557834 = param_1;
  ((undefined4 (__thiscall *)(__typeof__(this)))(**(code **)(*(int *)this + 0x2c)))(this);
  return 1;
}
