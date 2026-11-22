/* Rebuilt from lomse.exe FUN_00495db0 @ 0x00495db0 (472 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_0058364c (*(int *)0x0058364c)
#define FUN_00438950 ((undefined4 (__thiscall *)(void *, int *, int, int))0x00438950)

#define LOM_SELF_00495db0 1
void __thiscall rb_00495db0(void *this,int *param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined4 *puVar6;
  int **ppiVar7;
  int iVar8;
  undefined4 *puVar9;
  uchar _fr[0x28] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int * _t_local_20;
  typedef int _t_local_1c;
  typedef int _t_local_18;
  typedef uint _t_local_14;
  typedef int * _t_local_10;
#define local_20 (*(_t_local_20 *)(_fr + 0x0))
#define local_1c (*(_t_local_1c *)(_fr + 0x4))
#define local_18 (*(_t_local_18 *)(_fr + 0x8))
#define local_14 (*(_t_local_14 *)(_fr + 0xc))
#define local_10 (*(_t_local_10 *)(_fr + 0x10))

  DAT_0058364c = DAT_0058364c + 0x14;
  piVar5 = param_1;
  ppiVar7 = &local_20;
  for (iVar2 = 5; iVar2 != 0; iVar2 = iVar2 + -1) {
    *ppiVar7 = (int *)*piVar5;
    piVar5 = piVar5 + 1;
    ppiVar7 = ppiVar7 + 1;
  }
  if (param_2 < 0) {
    local_14 = local_14 + param_2;
    local_1c = local_1c - param_2;
    param_2 = 0;
  }
  if (param_3 < 0) {
    local_10 = (int *)((int)local_10 + param_3);
    local_18 = local_18 - param_3;
    param_3 = 0;
  }
  if (*(int *)((int)this + 4) <= (int)(local_14 + param_2)) {
    local_14 = *(int *)((int)this + 4) - param_2;
  }
  if (*(int *)((int)this + 8) <= (int)local_10 + param_3) {
    local_10 = (int *)(*(int *)((int)this + 8) - param_3);
  }
  if ((*(byte *)((int)this + 0x14) & 4) == 0) {
    if (*(int *)((int)this + 0x10) == 0) {
      *(undefined4 *)((int)this + 0x10) = *(undefined4 *)(*param_1 + 0x10);
    }
    iVar2 = *(int *)((int)this + 0xc);
    puVar1 = (undefined4 *)(param_3 * iVar2 + param_2 + *(int *)this);
    iVar8 = local_20[3];
    puVar4 = (undefined4 *)(local_18 * iVar8 + local_1c + *local_20);
    if (-1 < (int)local_10 + -1) {
      param_1 = local_10;
      do {
        puVar6 = puVar4;
        puVar9 = puVar1;
        for (uVar3 = local_14 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
          *puVar9 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar9 = puVar9 + 1;
        }
        puVar1 = (undefined4 *)((int)puVar1 + iVar2);
        for (uVar3 = local_14 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
          *(undefined1 *)puVar9 = *(undefined1 *)puVar6;
          puVar6 = (undefined4 *)((int)puVar6 + 1);
          puVar9 = (undefined4 *)((int)puVar9 + 1);
        }
        puVar4 = (undefined4 *)((int)puVar4 + iVar8);
        param_1 = (int *)((int)param_1 + -1);
      } while (param_1 != (int *)0x0);
    }
  }
  else if ((*(byte *)(*param_1 + 0x14) & 4) == 0) {
    FUN_00438950(this,(int *)&local_20,param_2,param_3);
  }
  else {
    iVar8 = *(int *)((int)this + 0xc) >> 1;
    iVar2 = local_20[3];
    if ((*(byte *)(local_20 + 5) & 4) != 0) {
      iVar2 = iVar2 >> 1;
    }
    puVar1 = (undefined4 *)(*(int *)this + (iVar8 * param_3 + param_2) * 2);
    puVar4 = (undefined4 *)(*local_20 + (iVar2 * local_18 + local_1c) * 2);
    if (-1 < (int)local_10 + -1) {
      do {
        puVar6 = puVar4;
        puVar9 = puVar1;
        for (uVar3 = (local_14 & 0x7fffffff) >> 1; uVar3 != 0; uVar3 = uVar3 - 1) {
          *puVar9 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar9 = puVar9 + 1;
        }
        for (uVar3 = local_14 * 2 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
          *(undefined1 *)puVar9 = *(undefined1 *)puVar6;
          puVar6 = (undefined4 *)((int)puVar6 + 1);
          puVar9 = (undefined4 *)((int)puVar9 + 1);
        }
        puVar1 = (undefined4 *)((int)puVar1 + iVar8 * 2);
        puVar4 = (undefined4 *)((int)puVar4 + iVar2 * 2);
        local_10 = (int *)((int)local_10 + -1);
      } while (local_10 != (int *)0x0);
    }
  }
  DAT_0058364c = DAT_0058364c + -0x14;
  return;
#undef local_20
#undef local_1c
#undef local_18
#undef local_14
#undef local_10
}
