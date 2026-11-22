
void __thiscall
FUN_00496c10(void *this,int *param_1,int param_2,int param_3,byte param_4,byte param_5)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  ushort uVar7;
  int iVar8;
  int iVar9;
  ushort *puVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int *piVar14;
  int **ppiVar15;
  int local_2c;
  int *local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0054ad18;
  local_c = ExceptionList;
  DAT_0058364c = DAT_0058364c + 0x14;
  piVar14 = param_1;
  ppiVar15 = &local_20;
  for (iVar8 = 5; iVar8 != 0; iVar8 = iVar8 + -1) {
    *ppiVar15 = (int *)*piVar14;
    piVar14 = piVar14 + 1;
    ppiVar15 = ppiVar15 + 1;
  }
  local_4 = 0;
  if (param_2 < 0) {
    local_14 = local_14 + param_2;
    local_1c = local_1c - param_2;
    param_2 = 0;
  }
  if (param_3 < 0) {
    local_10 = local_10 + param_3;
    local_18 = local_18 - param_3;
    param_3 = 0;
  }
  iVar8 = local_18;
  if (*(int *)((int)this + 4) <= local_14 + param_2) {
    local_14 = *(int *)((int)this + 4) - param_2;
  }
  if (*(int *)((int)this + 8) <= local_10 + param_3) {
    local_10 = *(int *)((int)this + 8) - param_3;
  }
  if ((*(byte *)((int)this + 0x14) & 4) == 0) {
    if (*(int *)((int)this + 0x10) == 0) {
      *(undefined4 *)((int)this + 0x10) = *(undefined4 *)(*param_1 + 0x10);
    }
    iVar3 = *(int *)((int)this + 0xc);
    param_1 = (int *)(param_3 * iVar3 + param_2 + *(int *)this);
    iVar4 = local_20[3];
    iVar9 = local_18 * iVar4 + local_1c + *local_20;
    iVar8 = local_10 + -1;
    if (-1 < iVar8) {
      do {
        if (-1 < local_14 + -1) {
          pbVar6 = (byte *)(iVar9 + local_14 + -1);
          _param_5 = local_14;
          do {
            if ((*pbVar6 != param_4) && (((uint)(pbVar6 + (iVar8 - iVar9)) & 1) != 0)) {
              pbVar6[(int)param_1 - iVar9] = *pbVar6;
            }
            pbVar6 = pbVar6 + -1;
            _param_5 = _param_5 + -1;
          } while (_param_5 != 0);
        }
        iVar9 = iVar9 + iVar4;
        param_1 = (int *)((int)param_1 + iVar3);
        iVar8 = iVar8 + -1;
      } while (-1 < iVar8);
    }
  }
  else {
    ExceptionList = &local_c;
    iVar3 = FUN_00474ee0(&DAT_00584ae8,0x80,0x80,0x80);
    iVar4 = FUN_00474ee0(&DAT_00584ae8,0xc0,0xc0,0xc0);
    if ((*(byte *)(*param_1 + 0x14) & 4) == 0) {
      if ((*(byte *)((int)this + 0x14) & 4) == 0) {
        param_1 = *(int **)((int)this + 0xc);
      }
      else {
        param_1 = (int *)(*(int *)((int)this + 0xc) >> 1);
      }
      iVar9 = local_20[3];
      if ((*(byte *)(local_20 + 5) & 4) != 0) {
        iVar9 = iVar9 >> 1;
      }
      iVar13 = local_20[4];
      iVar5 = *(int *)this + ((int)param_1 * param_3 + param_2) * 2;
      iVar8 = iVar9 * iVar8 + local_1c + *local_20;
      if (-1 < local_10 + -1) {
        iVar12 = local_14 + -1;
        local_2c = local_10;
        do {
          if (-1 < iVar12) {
            puVar10 = (ushort *)(iVar5 + iVar12 * 2);
            iVar11 = iVar12;
            do {
              bVar1 = *(byte *)(iVar8 + iVar11);
              if (bVar1 != param_4) {
                if (bVar1 == param_5) {
                  *puVar10 = *puVar10 >> 2 & ~(ushort)iVar4;
                }
                else {
                  *puVar10 = *(ushort *)(iVar13 + (uint)bVar1 * 2) >> 1 & ~(ushort)iVar3;
                }
              }
              iVar11 = iVar11 + -1;
              puVar10 = puVar10 + -1;
            } while (-1 < iVar11);
          }
          iVar8 = iVar8 + iVar9;
          local_2c = local_2c + -1;
          iVar5 = iVar5 + (int)param_1 * 2;
        } while (local_2c != 0);
      }
    }
    else {
      iVar9 = *(int *)((int)this + 0xc);
      if ((*(byte *)((int)this + 0x14) & 4) != 0) {
        iVar9 = iVar9 >> 1;
      }
      iVar5 = local_20[3];
      if ((*(byte *)(local_20 + 5) & 4) != 0) {
        iVar5 = iVar5 >> 1;
      }
      iVar13 = *(int *)this + (iVar9 * param_3 + param_2) * 2;
      iVar8 = *local_20 + (iVar5 * iVar8 + local_1c) * 2;
      if (-1 < local_10 + -1) {
        local_2c = local_10;
        do {
          if (-1 < local_14 + -1) {
            puVar10 = (ushort *)(iVar13 + (local_14 + -1) * 2);
            iVar12 = local_14;
            do {
              uVar7 = *(ushort *)((iVar8 - iVar13) + (int)puVar10);
              if (uVar7 != param_4) {
                if (uVar7 == param_5) {
                  uVar7 = *puVar10 >> 2;
                  uVar2 = ~(ushort)iVar4;
                }
                else {
                  uVar7 = uVar7 >> 1;
                  uVar2 = ~(ushort)iVar3;
                }
                *puVar10 = uVar7 & uVar2;
              }
              puVar10 = puVar10 + -1;
              iVar12 = iVar12 + -1;
            } while (iVar12 != 0);
          }
          local_2c = local_2c + -1;
          iVar8 = iVar8 + iVar5 * 2;
          iVar13 = iVar13 + iVar9 * 2;
        } while (local_2c != 0);
      }
    }
  }
  DAT_0058364c = DAT_0058364c + -0x14;
  ExceptionList = local_c;
  return;
}


