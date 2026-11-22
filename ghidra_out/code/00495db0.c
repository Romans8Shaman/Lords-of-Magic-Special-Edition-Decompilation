
void __thiscall FUN_00495db0(void *this,int *param_1,int param_2,int param_3)

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
  int *local_20;
  int local_1c;
  int local_18;
  uint local_14;
  int *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0054ac38;
  local_c = ExceptionList;
  DAT_0058364c = DAT_0058364c + 0x14;
  piVar5 = param_1;
  ppiVar7 = &local_20;
  for (iVar2 = 5; iVar2 != 0; iVar2 = iVar2 + -1) {
    *ppiVar7 = (int *)*piVar5;
    piVar5 = piVar5 + 1;
    ppiVar7 = ppiVar7 + 1;
  }
  local_4 = 0;
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
    ExceptionList = &local_c;
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
  ExceptionList = local_c;
  return;
}


