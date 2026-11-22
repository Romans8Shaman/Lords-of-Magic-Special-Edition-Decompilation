/* Rebuilt from lomse.exe FUN_004f6a50 @ 0x004f6a50 (44 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_0049d510 ((undefined4 (__thiscall *)(void *, void *, uint, int, int, int))0x0049d510)

#define LOM_SELF_004f6a50 1
undefined4 __thiscall rb_004f6a50(void *this,void *param_1,uint param_2,int param_3)

{
  if (*(void **)((int)this + 0x2c) == (void *)0x0) {
    return 0;
  }
  FUN_0049d510(*(void **)((int)this + 0x2c),param_1,param_2,param_3,-1,1);
  return 1;
}
