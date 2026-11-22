/* Rebuilt from lomse.exe FUN_004c4fa0 @ 0x004c4fa0 (115 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_004c4fa0 1
void __thiscall rb_004c4fa0(void *this,undefined4 *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  uVar3 = *(int *)((int)this + 8) - *(int *)this;
  if ((int)param_2 < (int)uVar3) {
    uVar3 = param_2;
  }
  puVar5 = (undefined4 *)(*(int *)this + *(int *)((int)this + 0xc));
  puVar6 = param_1;
  for (uVar2 = uVar3 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  for (uVar2 = uVar3 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *(undefined1 *)puVar6 = *(undefined1 *)puVar5;
    puVar5 = (undefined4 *)((int)puVar5 + 1);
    puVar6 = (undefined4 *)((int)puVar6 + 1);
  }
  iVar1 = *(int *)this;
  *(uint *)this = iVar1 + uVar3;
  if (*(int *)((int)this + 8) <= (int)(iVar1 + uVar3)) {
    *(undefined4 *)this = 0;
  }
  if ((int)uVar3 < (int)param_2) {
    uVar4 = param_2 - uVar3;
    puVar5 = (undefined4 *)((int)param_1 + uVar3);
    puVar6 = (undefined4 *)(*(int *)this + *(int *)((int)this + 0xc));
    for (uVar2 = uVar4 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    for (uVar3 = uVar4 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined1 *)puVar6 = *(undefined1 *)puVar5;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
      puVar6 = (undefined4 *)((int)puVar6 + 1);
    }
    *(uint *)this = *(int *)this + uVar4;
  }
  return;
}
