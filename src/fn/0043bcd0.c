/* Rebuilt from lomse.exe FUN_0043bcd0 @ 0x0043bcd0 (199 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_0049d510 ((undefined4 (__thiscall *)(void *, void *, uint, int, int, int))0x0049d510)
#define FUN_0049da80 ((undefined4 (__thiscall *)(void *, uint))0x0049da80)

#define LOM_SELF_0043bcd0 1
undefined4 __thiscall rb_0043bcd0(void *this,void *param_1,uint param_2,int param_3)

{
  if (*(void **)((int)this + 0x2c) == (void *)0x0) {
    return 0;
  }
  FUN_0049da80(*(void **)((int)this + 0x2c),(uint)*(byte *)((int)this + 0x50));
  FUN_0049d510(*(void **)((int)this + 0x2c),param_1,param_2,param_3,-1,1);
  if (*(int *)((int)this + 0x58) == 10) {
    if ((*(byte *)((int)this + 0x52) & 1) != 0) {
      FUN_0049da80(*(void **)((int)this + 0x2c),1);
      FUN_0049d510(*(void **)((int)this + 0x2c),param_1,param_2,param_3,-1,1);
    }
    if ((*(byte *)((int)this + 0x52) & 2) != 0) {
      FUN_0049da80(*(void **)((int)this + 0x2c),2);
      FUN_0049d510(*(void **)((int)this + 0x2c),param_1,param_2,param_3,-1,1);
    }
    if ((*(byte *)((int)this + 0x52) & 4) != 0) {
      FUN_0049da80(*(void **)((int)this + 0x2c),3);
      FUN_0049d510(*(void **)((int)this + 0x2c),param_1,param_2,param_3,-1,1);
    }
    if ((*(byte *)((int)this + 0x52) & 8) != 0) {
      FUN_0049da80(*(void **)((int)this + 0x2c),4);
      FUN_0049d510(*(void **)((int)this + 0x2c),param_1,param_2,param_3,-1,1);
    }
  }
  return 1;
}
