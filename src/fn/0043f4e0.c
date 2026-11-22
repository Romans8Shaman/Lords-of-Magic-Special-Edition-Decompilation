/* Rebuilt from lomse.exe FUN_0043f4e0 @ 0x0043f4e0 (105 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_0043f4e0 1
undefined4 __thiscall rb_0043f4e0(void *this,undefined4 param_1,int param_2)

{
  switch(param_1) {
  case 0:
    *(int *)((int)this + 0x58) = param_2;
    ((undefined4 (__thiscall *)(__typeof__(this)))(**(code **)(*(int *)this + 0x2c)))(this);
    return 1;
  case 1:
    *(int *)((int)this + 0x5c) = param_2;
    ((undefined4 (__thiscall *)(__typeof__(this)))(**(code **)(*(int *)this + 0x2c)))(this);
    return 1;
  case 2:
    *(undefined2 *)((int)this + 0x54) = (undefined2)param_2;
    ((undefined4 (__thiscall *)(__typeof__(this)))(**(code **)(*(int *)this + 0x2c)))(this);
    return 1;
  case 3:
    *(undefined2 *)((int)this + 0x56) = (undefined2)param_2;
    ((undefined4 (__thiscall *)(__typeof__(this)))(**(code **)(*(int *)this + 0x2c)))(this);
    return 1;
  default:
    return 0;
  }
}
