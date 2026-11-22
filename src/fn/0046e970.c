/* Rebuilt from lomse.exe FUN_0046e970 @ 0x0046e970 (147 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_0046e970 1
undefined4 __thiscall rb_0046e970(void *this,int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  if ((((param_1 < 0) || (*(int *)((int)this + 0xc) <= param_1)) || (param_2 < 0)) ||
     (*(int *)((int)this + 0xc) <= param_2)) {
    return 0;
  }
  iVar3 = *(int *)((int)this + 4);
  iVar7 = param_2 * 0x30;
  iVar4 = *(int *)(iVar3 + 0x28 + iVar7);
  if (iVar4 < 1) {
    return 1;
  }
  iVar6 = param_1 * 0x30;
  iVar5 = *(int *)(iVar6 + 0x28 + iVar3);
  if (iVar5 < 1) {
    puVar1 = (undefined4 *)(iVar3 + 0x1c + iVar7);
    puVar2 = (undefined4 *)(iVar6 + 0x1c + iVar3);
    *puVar2 = *puVar1;
    puVar2[1] = puVar1[1];
    puVar2[2] = puVar1[2];
    puVar2[3] = puVar1[3];
  }
  *(int *)(*(int *)((int)this + 4) + 0x28 + iVar6) = iVar4 + iVar5;
  *(undefined4 *)(*(int *)((int)this + 4) + 0x28 + iVar7) = 0;
  return 1;
}
