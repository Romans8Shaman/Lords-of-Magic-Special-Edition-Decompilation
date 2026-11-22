
void __thiscall FUN_00496f70(void *this,int *param_1,int param_2,int param_3,byte param_4)

{
  int iVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  ushort *puVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int **ppiVar9;
  int iVar10;
  int *local_20;
  int local_1c;
  int local_18;
  int *local_14;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0054ad38;
  local_c = ExceptionList;
  DAT_0058364c = DAT_0058364c + 0x14;
  piVar7 = param_1;
  ppiVar9 = &local_20;
  for (iVar4 = 5; iVar4 != 0; iVar4 = iVar4 + -1) {
    *ppiVar9 = (int *)*piVar7;
    piVar7 = piVar7 + 1;
    ppiVar9 = ppiVar9 + 1;
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
    param_3 = param_3 * iVar1 + *(int *)this + param_2;
    iVar2 = local_20[3];
    iVar10 = local_18 * iVar2 + *local_20 + local_1c;
    iVar4 = local_10 + -1;
    if (-1 < iVar4) {
      do {
        if (-1 < (int)local_14 + -1) {
          pbVar3 = (byte *)(iVar10 + (int)local_14 + -1);
          param_1 = local_14;
          do {
            if ((*pbVar3 != param_4) && (((uint)(pbVar3 + (iVar4 - iVar10)) & 1) != 0)) {
              pbVar3[param_3 - iVar10] = *pbVar3;
            }
            pbVar3 = pbVar3 + -1;
            param_1 = (int *)((int)param_1 + -1);
          } while (param_1 != (int *)0x0);
        }
        iVar10 = iVar10 + iVar2;
        param_3 = param_3 + iVar1;
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
      iVar2 = local_20[3];
      if ((*(byte *)(local_20 + 5) & 4) != 0) {
        iVar2 = iVar2 >> 1;
      }
      iVar10 = *(int *)this + ((int)param_1 * param_3 + param_2) * 2;
      iVar4 = iVar2 * iVar4 + *local_20 + local_1c;
      if (-1 < local_10 + -1) {
        iVar8 = (int)local_14 + -1;
        param_3 = local_10;
        do {
          if (-1 < iVar8) {
            puVar5 = (ushort *)(iVar10 + iVar8 * 2);
            iVar6 = iVar8;
            do {
              if (*(byte *)(iVar4 + iVar6) != param_4) {
                *puVar5 = *puVar5 >> 1 & ~(ushort)iVar1;
              }
              iVar6 = iVar6 + -1;
              puVar5 = puVar5 + -1;
            } while (-1 < iVar6);
          }
          iVar4 = iVar4 + iVar2;
          iVar10 = iVar10 + (int)param_1 * 2;
          param_3 = param_3 + -1;
        } while (param_3 != 0);
      }
    }
    else {
      if ((*(byte *)((int)this + 0x14) & 4) == 0) {
        param_1 = *(int **)((int)this + 0xc);
      }
      else {
        param_1 = (int *)(*(int *)((int)this + 0xc) >> 1);
      }
      iVar2 = local_20[3];
      if ((*(byte *)(local_20 + 5) & 4) != 0) {
        iVar2 = iVar2 >> 1;
      }
      iVar10 = *(int *)this + ((int)param_1 * param_3 + param_2) * 2;
      iVar4 = *local_20 + (iVar2 * iVar4 + local_1c) * 2;
      if (-1 < local_10 + -1) {
        param_3 = local_10;
        do {
          if (-1 < (int)local_14 + -1) {
            puVar5 = (ushort *)(iVar10 + ((int)local_14 + -1) * 2);
            piVar7 = local_14;
            do {
              if (*(ushort *)((iVar4 - iVar10) + (int)puVar5) != (ushort)param_4) {
                *puVar5 = *puVar5 >> 1 & ~(ushort)iVar1;
              }
              puVar5 = puVar5 + -1;
              piVar7 = (int *)((int)piVar7 + -1);
            } while (piVar7 != (int *)0x0);
          }
          iVar4 = iVar4 + iVar2 * 2;
          iVar10 = iVar10 + (int)param_1 * 2;
          param_3 = param_3 + -1;
        } while (param_3 != 0);
      }
    }
  }
  DAT_0058364c = DAT_0058364c + -0x14;
  ExceptionList = local_c;
  return;
}


