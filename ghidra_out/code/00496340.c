
void __thiscall FUN_00496340(void *this,int *param_1,int param_2,int param_3,byte param_4)

{
  ushort *puVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int **ppiVar8;
  int iVar9;
  int *local_20;
  int local_1c;
  int local_18;
  int local_14;
  int *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0054acb8;
  local_c = ExceptionList;
  DAT_0058364c = DAT_0058364c + 0x14;
  piVar7 = param_1;
  ppiVar8 = &local_20;
  for (iVar4 = 5; iVar4 != 0; iVar4 = iVar4 + -1) {
    *ppiVar8 = (int *)*piVar7;
    piVar7 = piVar7 + 1;
    ppiVar8 = ppiVar8 + 1;
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
  if (*(int *)((int)this + 4) <= local_14 + param_2) {
    local_14 = *(int *)((int)this + 4) - param_2;
  }
  if (*(int *)((int)this + 8) <= (int)local_10 + param_3) {
    local_10 = (int *)(*(int *)((int)this + 8) - param_3);
  }
  if ((*(byte *)((int)this + 0x14) & 4) == 0) {
    if (*(int *)((int)this + 0x10) == 0) {
      *(undefined4 *)((int)this + 0x10) = *(undefined4 *)(*param_1 + 0x10);
    }
    iVar4 = *(int *)((int)this + 0xc);
    iVar2 = param_3 * iVar4 + param_2 + *(int *)this;
    iVar9 = local_20[3];
    iVar5 = local_18 * iVar9 + local_1c + *local_20;
    if (-1 < (int)local_10 + -1) {
      param_1 = local_10;
      do {
        if (-1 < local_14 + -1) {
          pbVar3 = (byte *)(iVar5 + local_14 + -1);
          iVar6 = local_14;
          do {
            if (*pbVar3 != param_4) {
              pbVar3[iVar2 - iVar5] = *pbVar3;
            }
            pbVar3 = pbVar3 + -1;
            iVar6 = iVar6 + -1;
          } while (iVar6 != 0);
        }
        iVar2 = iVar2 + iVar4;
        iVar5 = iVar5 + iVar9;
        param_1 = (int *)((int)param_1 + -1);
      } while (param_1 != (int *)0x0);
    }
  }
  else if ((*(byte *)(*param_1 + 0x14) & 4) == 0) {
    ExceptionList = &local_c;
    FUN_0043aaa0(this,(int *)&local_20,param_2,param_3,param_4);
  }
  else {
    iVar9 = *(int *)((int)this + 0xc) >> 1;
    iVar4 = local_20[3];
    if ((*(byte *)(local_20 + 5) & 4) != 0) {
      iVar4 = iVar4 >> 1;
    }
    iVar2 = *(int *)this + (iVar9 * param_3 + param_2) * 2;
    iVar5 = *local_20 + (iVar4 * local_18 + local_1c) * 2;
    if (-1 < (int)local_10 + -1) {
      param_3 = (int)local_10;
      do {
        if (-1 < local_14 + -1) {
          puVar1 = (ushort *)(iVar5 + (local_14 + -1) * 2);
          iVar6 = local_14;
          do {
            if (*puVar1 != (ushort)param_4) {
              *(ushort *)((iVar2 - iVar5) + (int)puVar1) = *puVar1;
            }
            puVar1 = puVar1 + -1;
            iVar6 = iVar6 + -1;
          } while (iVar6 != 0);
        }
        iVar5 = iVar5 + iVar4 * 2;
        param_3 = param_3 + -1;
        iVar2 = iVar2 + iVar9 * 2;
      } while (param_3 != 0);
    }
  }
  DAT_0058364c = DAT_0058364c + -0x14;
  ExceptionList = local_c;
  return;
}


