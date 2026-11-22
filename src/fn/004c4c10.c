/* Rebuilt from lomse.exe FUN_004c4c10 @ 0x004c4c10 (77 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_004c4c10 1
undefined4 __thiscall rb_004c4c10(void *this,undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  
  iVar3 = *(int *)((int)this + 4) + 1;
  if (*(int *)((int)this + 8) <= iVar3) {
    iVar3 = 0;
  }
  if (iVar3 == *(int *)this) {
    return 0;
  }
  uVar2 = *(uint *)((int)this + 0xc);
  puVar4 = (undefined4 *)(uVar2 * *(int *)((int)this + 4) + *(int *)((int)this + 0x10));
  for (uVar1 = uVar2 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
    *puVar4 = *param_1;
    param_1 = param_1 + 1;
    puVar4 = puVar4 + 1;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *(undefined1 *)puVar4 = *(undefined1 *)param_1;
    param_1 = (undefined4 *)((int)param_1 + 1);
    puVar4 = (undefined4 *)((int)puVar4 + 1);
  }
  *(int *)((int)this + 4) = iVar3;
  return 1;
}
