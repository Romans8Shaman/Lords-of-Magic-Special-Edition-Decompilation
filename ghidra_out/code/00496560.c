
void __thiscall FUN_00496560(void *this,int *param_1,int param_2,int param_3,byte param_4)

{
  int iVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  ushort *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  int **ppiVar11;
  int local_28;
  int *local_20;
  int local_1c;
  int local_18;
  int *local_14;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0054acd8;
  local_c = ExceptionList;
  DAT_0058364c = DAT_0058364c + 0x14;
  piVar10 = param_1;
  ppiVar11 = &local_20;
  for (iVar4 = 5; iVar4 != 0; iVar4 = iVar4 + -1) {
    *ppiVar11 = (int *)*piVar10;
    piVar10 = piVar10 + 1;
    ppiVar11 = ppiVar11 + 1;
  }
  local_4 = 0;
  if (param_2 < 0) {
    local_14 = (int *)((int)local_14 + param_2);
    local_1c = local_1c - param_2;
    param_2 = 0;
  }
  if (param_3 < 0) {
    local_10 = local_10 + param_3;
    local_18 = local_18 - param_3;
    param_3 = 0;
  }
  iVar4 = local_18;
  if (*(int *)((int)this + 4) <= (int)local_14 + param_2) {
    local_14 = (int *)(*(int *)((int)this + 4) - param_2);
  }
  if (*(int *)((int)this + 8) <= local_10 + param_3) {
    local_10 = *(int *)((int)this + 8) - param_3;
  }
  if ((*(byte *)((int)this + 0x14) & 4) == 0) {
    if (*(int *)((int)this + 0x10) == 0) {
      *(undefined4 *)((int)this + 0x10) = *(undefined4 *)(*param_1 + 0x10);
    }
    iVar1 = *(int *)((int)this + 0xc);
    param_2 = param_3 * iVar1 + param_2 + *(int *)this;
    iVar5 = local_20[3];
    iVar2 = local_18 * iVar5 + local_1c + *local_20;
    iVar4 = local_10 + -1;
    if (-1 < iVar4) {
      do {
        if (-1 < (int)local_14 + -1) {
          pbVar3 = (byte *)(iVar2 + (int)local_14 + -1);
          param_1 = local_14;
          do {
            if ((*pbVar3 != param_4) && (((uint)(pbVar3 + (iVar4 - iVar2)) & 1) != 0)) {
              pbVar3[param_2 - iVar2] = *pbVar3;
            }
            pbVar3 = pbVar3 + -1;
            param_1 = (int *)((int)param_1 + -1);
          } while (param_1 != (int *)0x0);
        }
        iVar2 = iVar2 + iVar5;
        param_2 = param_2 + iVar1;
        iVar4 = iVar4 + -1;
      } while (-1 < iVar4);
    }
  }
  else {
    ExceptionList = &local_c;
    iVar1 = FUN_00474ee0(&DAT_00584ae8,0x80,0x80,0x80);
    if ((*(byte *)(*param_1 + 0x14) & 4) == 0) {
      param_1 = *(int **)((int)this + 0xc);
      if ((*(byte *)((int)this + 0x14) & 4) != 0) {
        param_1 = (int *)((int)param_1 >> 1);
      }
      iVar5 = local_20[3];
      if ((*(byte *)(local_20 + 5) & 4) != 0) {
        iVar5 = iVar5 >> 1;
      }
      iVar2 = *(int *)this + ((int)param_1 * param_3 + param_2) * 2;
      iVar9 = local_20[4];
      iVar4 = iVar5 * iVar4 + local_1c + *local_20;
      if (-1 < local_10 + -1) {
        iVar7 = (int)local_14 + -1;
        local_28 = local_10;
        do {
          if (-1 < iVar7) {
            puVar6 = (ushort *)(iVar2 + iVar7 * 2);
            iVar8 = iVar7;
            do {
              if (*(byte *)(iVar4 + iVar8) != param_4) {
                *puVar6 = *(ushort *)(iVar9 + (uint)*(byte *)(iVar4 + iVar8) * 2) >> 1 &
                          ~(ushort)iVar1;
              }
              iVar8 = iVar8 + -1;
              puVar6 = puVar6 + -1;
            } while (-1 < iVar8);
          }
          iVar4 = iVar4 + iVar5;
          iVar2 = iVar2 + (int)param_1 * 2;
          local_28 = local_28 + -1;
        } while (local_28 != 0);
      }
    }
    else {
      iVar5 = *(int *)((int)this + 0xc);
      if ((*(byte *)((int)this + 0x14) & 4) != 0) {
        iVar5 = iVar5 >> 1;
      }
      iVar2 = local_20[3];
      if ((*(byte *)(local_20 + 5) & 4) != 0) {
        iVar2 = iVar2 >> 1;
      }
      iVar9 = *(int *)this + (iVar5 * param_3 + param_2) * 2;
      iVar4 = *local_20 + (iVar2 * iVar4 + local_1c) * 2;
      if (-1 < local_10 + -1) {
        local_28 = local_10;
        do {
          if (-1 < (int)local_14 + -1) {
            puVar6 = (ushort *)(iVar4 + ((int)local_14 + -1) * 2);
            piVar10 = local_14;
            do {
              if (*puVar6 != (ushort)param_4) {
                *(ushort *)((iVar9 - iVar4) + (int)puVar6) = *puVar6 >> 1 & ~(ushort)iVar1;
              }
              puVar6 = puVar6 + -1;
              piVar10 = (int *)((int)piVar10 + -1);
            } while (piVar10 != (int *)0x0);
          }
          iVar9 = iVar9 + iVar5 * 2;
          local_28 = local_28 + -1;
          iVar4 = iVar4 + iVar2 * 2;
        } while (local_28 != 0);
      }
    }
  }
  DAT_0058364c = DAT_0058364c + -0x14;
  ExceptionList = local_c;
  return;
}


