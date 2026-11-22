/* Rebuilt from lomse.exe FUN_0049a3e0 @ 0x0049a3e0 (46 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_0049a3e0 1
void __thiscall rb_0049a3e0(void *this,int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < *(int *)this) {
    iVar2 = 0;
    do {
      piVar1 = (int *)(*(int *)((int)this + 8) + iVar2);
      if (*piVar1 == param_1) {
        *piVar1 = -1;
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 0xc;
    } while (iVar3 < *(int *)this);
  }
  return;
}
