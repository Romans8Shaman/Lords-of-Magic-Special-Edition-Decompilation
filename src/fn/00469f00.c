/* Rebuilt from lomse.exe FUN_00469f00 @ 0x00469f00 (54 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005577e0 (*(int *)0x005577e0)
#define DAT_00557820 (*(undefined4 *)0x00557820)
#define _DAT_005577f4 (*(undefined4 *)0x005577f4)
#define _DAT_00557834 (*(undefined4 *)0x00557834)

#define LOM_SELF_00469f00 1
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall rb_00469f00(void *this,int param_1)

{
  *(int *)((int)this + 0x54) = param_1;
  *(int *)((int)this + 100) = param_1;
  *(int *)((int)this + 0x78) = param_1;
  DAT_005577e0 = param_1;
  _DAT_005577f4 = *(undefined4 *)((int)this + 0x54);
  DAT_00557820 = *(undefined4 *)((int)this + 0x54);
  _DAT_00557834 = *(undefined4 *)((int)this + 0x54);
  ((undefined4 (__thiscall *)(__typeof__(this)))(**(code **)(*(int *)this + 0x2c)))(this);
  return;
}
