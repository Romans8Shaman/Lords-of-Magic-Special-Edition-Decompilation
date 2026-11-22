/* Rebuilt from lomse.exe FUN_00469d00 @ 0x00469d00 (36 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define _DAT_00557890 (*(undefined4 *)0x00557890)
#define _DAT_00557894 (*(undefined4 *)0x00557894)
#define _DAT_00557898 (*(undefined4 *)0x00557898)

#define LOM_SELF_00469d00 1
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall rb_00469d00(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  _DAT_00557890 = param_1;
  _DAT_00557894 = param_2;
  _DAT_00557898 = param_3;
  ((undefined4 (__thiscall *)(__typeof__(this)))(**(code **)(*(int *)this + 0x2c)))(this);
  return;
}
