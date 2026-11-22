/* Rebuilt from lomse.exe FUN_00432c70 @ 0x00432c70 (166 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00432be0 ((undefined4 (__fastcall *)(short *))0x00432be0)

#define LOM_SELF_00432c70 1
void __thiscall rb_00432c70(void *this,int *param_1,int *param_2,int *param_3,int *param_4)

{
  *param_1 = (int)*(char *)((int)this + 4);
  *param_3 = 0;
  *param_2 = 1;
  *param_4 = 0;
  switch(*(undefined1 *)((int)this + 4)) {
  case 1:
  case 2:
  case 3:
  case 4:
    *param_2 = (int)*(short *)this;
    *param_3 = 0;
    *param_4 = 0;
    return;
  case 5:
    FUN_00432be0(this);
    *param_3 = (int)*(short *)this;
    *param_4 = (int)*(char *)((int)this + 5);
    return;
  case 6:
    *param_3 = (int)*(short *)this;
    return;
  case 7:
    *param_3 = (int)*(short *)this;
    break;
  case 9:
    *param_3 = (int)*(short *)this;
    return;
  case 10:
    FUN_00432be0(this);
    *param_3 = (int)*(short *)this;
    *param_4 = 0;
    return;
  }
  return;
}
