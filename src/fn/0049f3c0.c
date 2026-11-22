/* Rebuilt from lomse.exe FUN_0049f3c0 @ 0x0049f3c0 (75 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_0049f3c0 1
void __thiscall rb_0049f3c0(void *this,int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  if ((param_1 < 0) || (100 < param_1)) {
    param_1 = 0x32;
  }
  iVar3 = *(int *)((int)this + 0x5c) + -1;
  *(int *)((int)this + 0x5c) = iVar3;
  if (iVar3 < 1) {
    iVar3 = 5;
    piVar2 = this;
    do {
      iVar1 = *piVar2;
      *piVar2 = iVar1;
      if (iVar1 < param_1) {
        *piVar2 = param_1;
      }
      piVar2 = piVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    *(undefined4 *)((int)this + 0x5c) = 2;
  }
  *(undefined4 *)((int)this + 0x60) = 0;
  return;
}
