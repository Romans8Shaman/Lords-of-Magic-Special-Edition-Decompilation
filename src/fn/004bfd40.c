/* Rebuilt from lomse.exe FUN_004bfd40 @ 0x004bfd40 (39 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_004bfd40 1
void __thiscall rb_004bfd40(void *this,int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = (int *)((int)this + 0xcfc);
  iVar3 = 5;
  do {
    iVar1 = *param_1;
    param_1 = param_1 + 1;
    *piVar2 = *piVar2 + iVar1;
    piVar2 = piVar2 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return;
}
