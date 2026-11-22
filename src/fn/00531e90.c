/* Rebuilt from lomse.exe FUN_00531e90 @ 0x00531e90 (60 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_00531e90 1
int __thiscall rb_00531e90(void *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)((int)this + 0xc);
  iVar1 = param_1 % iVar2 - param_2 % iVar2;
  iVar2 = param_1 / iVar2 - param_2 / iVar2;
  return iVar1 * iVar1 + iVar2 * iVar2;
}
