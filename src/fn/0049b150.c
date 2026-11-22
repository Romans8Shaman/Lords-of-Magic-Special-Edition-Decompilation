/* Rebuilt from lomse.exe FUN_0049b150 @ 0x0049b150 (43 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_0049b150 1
undefined4 __thiscall rb_0049b150(void *this,int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 4);
  if (((iVar1 == 0) || (param_1 < 0)) || (*(int *)((int)this + 8) <= param_1)) {
    return 0;
  }
  *(undefined4 *)(iVar1 + param_1 * 4) = *(undefined4 *)(iVar1 + param_2 * 4);
  return 1;
}
