/* Rebuilt from lomse.exe FUN_0049dd50 @ 0x0049dd50 (44 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_0049dd50 1
void __thiscall rb_0049dd50(void *this,int *param_1,undefined4 param_2)

{
  int iVar1;
  
  *(int **)this = param_1;
  *(undefined4 *)((int)this + 8) = param_2;
  *(undefined4 *)((int)this + 4) = 0;
  for (iVar1 = *param_1; iVar1 != 0; iVar1 = param_1[iVar1]) {
    iVar1 = *(int *)((int)this + 4) + 1;
    *(int *)((int)this + 4) = iVar1;
  }
  return;
}
