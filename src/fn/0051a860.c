/* Rebuilt from lomse.exe FUN_0051a860 @ 0x0051a860 (83 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_0051a860 1
void __thiscall rb_0051a860(void *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_1 == 0) {
    *(undefined4 *)((int)this + 0x22ef0) = 0;
    return;
  }
  iVar1 = param_1 + -0x280 >> 1;
  *(int *)((int)this + 0x22ee8) = iVar1;
  iVar2 = param_2 + -0x180 >> 1;
  *(int *)((int)this + 0x22ee0) = -iVar1;
  *(int *)((int)this + 0x22ee4) = -iVar2;
  *(int *)((int)this + 0x22eec) = iVar2;
  *(undefined4 *)((int)this + 0x22ef0) = 1;
  return;
}
