/* Rebuilt from lomse.exe FUN_0051ac00 @ 0x0051ac00 (33 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_0051ac00 1
void __thiscall rb_0051ac00(void *this,undefined4 param_1)

{
  if (*(int *)((int)this + 0x202c8) == 0) {
    ((undefined4 (__thiscall *)(__typeof__(this), __typeof__(param_1)))(**(code **)(*(int *)this + 8)))(this,param_1);
    return;
  }
  ((undefined4 (__thiscall *)(__typeof__(this), __typeof__(0)))(**(code **)(*(int *)this + 4)))(this,0);
  return;
}
