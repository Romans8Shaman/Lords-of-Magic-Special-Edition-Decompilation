
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_0043abd0(void *this,int *param_1,int *param_2,int param_3,int param_4,uint param_5,int param_6)

{
  ushort *puVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int *piVar10;
  int iVar11;
  undefined1 *puVar12;
  int **ppiVar13;
  int local_58;
  ushort *local_54;
  int *local_50;
  ushort *local_4c;
  byte *local_48;
  int local_44;
  int local_40;
  int *local_34;
  int local_30;
  int local_2c;
  int *local_28;
  int local_24;
  int *local_20;
  int local_1c;
  int local_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00549770;
  local_c = ExceptionList;
  piVar10 = param_1;
  ppiVar13 = &local_34;
  for (iVar7 = 5; iVar7 != 0; iVar7 = iVar7 + -1) {
    *ppiVar13 = (int *)*piVar10;
    piVar10 = piVar10 + 1;
    ppiVar13 = ppiVar13 + 1;
  }
  DAT_0058364c = DAT_0058364c + 0x28;
  local_4 = 0;
  piVar10 = param_2;
  ppiVar13 = &local_20;
  for (iVar7 = 5; iVar7 != 0; iVar7 = iVar7 + -1) {
    *ppiVar13 = (int *)*piVar10;
    piVar10 = piVar10 + 1;
    ppiVar13 = ppiVar13 + 1;
  }
  iVar7 = 1;
  local_4 = CONCAT31(local_4._1_3_,1);
  if (((*(uint *)(*param_1 + 0x14) ^ *(uint *)(*param_2 + 0x14)) & 4) == 0) {
    if (((int)param_5 < 0x100) && (-1 < (int)param_5)) {
      if (DAT_00556098 != param_5) {
        if (1 < (int)param_5) {
          piVar10 = &DAT_00578b5c;
          do {
            iVar5 = iVar7 << 0x10;
            iVar7 = iVar7 + 1;
            *piVar10 = iVar5 / (int)param_5;
            piVar10 = piVar10 + 1;
          } while (iVar7 < (int)param_5);
        }
        DAT_00556098 = param_5;
      }
      if (param_3 < 0) {
        local_28 = (int *)((int)local_28 + param_3);
        local_30 = local_30 - param_3;
        local_1c = local_1c - param_3;
        param_3 = 0;
      }
      if (param_4 < 0) {
        local_24 = local_24 + param_4;
        local_18 = local_18 - param_4;
        local_2c = local_2c - param_4;
        param_4 = 0;
      }
      if (*(int *)((int)this + 4) <= (int)local_28 + param_3) {
        local_28 = (int *)(*(int *)((int)this + 4) - param_3);
      }
      if (*(int *)((int)this + 8) <= local_24 + param_4) {
        local_24 = *(int *)((int)this + 8) - param_4;
      }
      if ((*(byte *)((int)this + 0x14) & 4) == 0) {
        if (*(int *)((int)this + 0x10) == 0) {
          *(undefined4 *)((int)this + 0x10) = *(undefined4 *)(*param_1 + 0x10);
        }
        iVar7 = *(int *)((int)this + 0xc);
        iVar6 = param_4 * iVar7 + param_3 + *(int *)this;
        iVar5 = local_34[3];
        iVar8 = local_2c * iVar5 + local_30 + *local_34;
        iVar11 = local_20[3];
        param_1 = (int *)(local_18 * iVar11 + local_1c + *local_20);
        if (-1 < local_24 + -1) {
          param_4 = local_24;
          do {
            if (-1 < (int)local_28 + -1) {
              puVar12 = (undefined1 *)(iVar8 + (int)local_28 + -1);
              param_2 = local_28;
              do {
                if (((byte)puVar12[(int)param_1 - iVar8] != 0) &&
                   ((int)param_5 >> 1 < (int)(uint)(byte)puVar12[(int)param_1 - iVar8])) {
                  puVar12[iVar6 - iVar8] = *puVar12;
                }
                puVar12 = puVar12 + -1;
                param_2 = (int *)((int)param_2 + -1);
              } while (param_2 != (int *)0x0);
            }
            iVar6 = iVar6 + iVar7;
            param_1 = (int *)((int)param_1 + iVar11);
            iVar8 = iVar8 + iVar5;
            param_4 = param_4 + -1;
          } while (param_4 != 0);
        }
      }
      else if ((*(byte *)(*param_1 + 0x14) & 4) == 0) {
        iVar5 = *(int *)((int)this + 0xc) >> 1;
        iVar7 = local_34[3];
        if ((*(byte *)(local_34 + 5) & 4) != 0) {
          iVar7 = iVar7 >> 1;
        }
        param_1 = (int *)local_20[3];
        if ((*(byte *)(local_20 + 5) & 4) != 0) {
          param_1 = (int *)((int)param_1 >> 1);
        }
        param_4 = *(int *)this + (iVar5 * param_4 + param_3) * 2;
        local_54 = (ushort *)(iVar7 * local_2c + local_30 + *local_34);
        local_58 = (int)param_1 * local_18 + local_1c + *local_20;
        iVar11 = param_6 * 0x20 + local_34[4];
        if (-1 < local_24 + -1) {
          iVar6 = (int)local_28 + -1;
          local_40 = local_24;
          do {
            if (-1 < iVar6) {
              local_48 = (byte *)((int)local_54 + iVar6);
              local_4c = (ushort *)(param_4 + iVar6 * 2);
              local_50 = local_28;
              do {
                uVar9 = (uint)local_48[local_58 - (int)local_54];
                if (uVar9 != 0) {
                  if (uVar9 == param_5) {
                    *local_4c = *(ushort *)(iVar11 + (uint)*local_48 * 2);
                  }
                  else {
                    uVar2 = *local_4c;
                    uVar3 = *(ushort *)(iVar11 + (uint)*local_48 * 2);
                    iVar8 = *(int *)(&DAT_00578b58 + uVar9 * 4);
                    iVar4 = *(int *)(&DAT_00578b94 + uVar9 * -4);
                    *local_4c = ((ushort)((uint)(uVar2 & _DAT_00585402) * iVar4 +
                                          (uint)(uVar3 & _DAT_00585402) * iVar8 >> 0x10) &
                                _DAT_00585402) +
                                ((ushort)((DAT_00585404 & 0xffff & (uint)uVar2) * iVar4 +
                                          (DAT_00585404 & 0xffff & (uint)uVar3) * iVar8 >> 0x10) &
                                (ushort)DAT_00585404) +
                                ((ushort)((uint)(DAT_00585404._2_2_ & uVar2) * iVar4 +
                                          (uint)(DAT_00585404._2_2_ & uVar3) * iVar8 >> 0x10) &
                                DAT_00585404._2_2_);
                  }
                }
                local_48 = local_48 + -1;
                local_4c = local_4c + -1;
                local_50 = (int *)((int)local_50 + -1);
              } while (local_50 != (int *)0x0);
            }
            local_58 = local_58 + (int)param_1;
            param_4 = param_4 + iVar5 * 2;
            local_54 = (ushort *)((int)local_54 + iVar7);
            local_40 = local_40 + -1;
          } while (local_40 != 0);
          DAT_0058364c = DAT_0058364c + -0x28;
          ExceptionList = local_c;
          return;
        }
      }
      else {
        iVar5 = *(int *)((int)this + 0xc) >> 1;
        iVar7 = local_34[3];
        if ((*(byte *)(local_34 + 5) & 4) != 0) {
          iVar7 = iVar7 >> 1;
        }
        param_1 = (int *)local_20[3];
        if ((*(byte *)(local_20 + 5) & 4) != 0) {
          param_1 = (int *)((int)param_1 >> 1);
        }
        local_4c = (ushort *)(*(int *)this + (iVar5 * param_4 + param_3) * 2);
        local_48 = (byte *)(*local_34 + (iVar7 * local_2c + local_30) * 2);
        param_4 = *local_20 + ((int)param_1 * local_18 + local_1c) * 2;
        if (-1 < local_24 + -1) {
          local_44 = local_24;
          do {
            if (-1 < (int)local_28 + -1) {
              local_54 = (ushort *)((int)local_4c + ((int)local_28 + -1) * 2);
              local_50 = local_28;
              do {
                puVar1 = (ushort *)(((int)local_48 - (int)local_4c) + (int)local_54);
                uVar9 = (uint)*(ushort *)((int)puVar1 + (param_4 - (int)local_48));
                if (uVar9 != 0) {
                  if (uVar9 == param_5) {
                    *local_54 = *puVar1;
                  }
                  else {
                    uVar2 = *puVar1;
                    uVar3 = *local_54;
                    iVar11 = *(int *)(&DAT_00578b58 + uVar9 * 4);
                    iVar6 = *(int *)(&DAT_00578b58 + (0xf - uVar9) * 4);
                    *local_54 = ((ushort)((uint)(uVar2 & _DAT_00585402) * iVar11 +
                                          (uint)(uVar3 & _DAT_00585402) * iVar6 >> 0x10) &
                                _DAT_00585402) +
                                ((ushort)((DAT_00585404 & 0xffff & (uint)uVar2) * iVar11 +
                                          (DAT_00585404 & 0xffff & (uint)uVar3) * iVar6 >> 0x10) &
                                (ushort)DAT_00585404) +
                                ((ushort)((uint)(DAT_00585404._2_2_ & uVar2) * iVar11 +
                                          (uint)(DAT_00585404._2_2_ & uVar3) * iVar6 >> 0x10) &
                                DAT_00585404._2_2_);
                  }
                }
                local_54 = local_54 + -1;
                local_50 = (int *)((int)local_50 + -1);
              } while (local_50 != (int *)0x0);
            }
            local_4c = (ushort *)((int)local_4c + iVar5 * 2);
            local_48 = (byte *)((int)local_48 + iVar7 * 2);
            param_4 = param_4 + (int)param_1 * 2;
            local_44 = local_44 + -1;
          } while (local_44 != 0);
          DAT_0058364c = DAT_0058364c + -0x28;
          ExceptionList = local_c;
          return;
        }
      }
      DAT_0058364c = DAT_0058364c + -0x28;
    }
    else {
      ExceptionList = &local_c;
      FUN_005047d0(s_No_more_than_256_alpha_values_su_00556100);
      DAT_0058364c = DAT_0058364c + -0x28;
    }
  }
  else {
    ExceptionList = &local_c;
    FUN_005047d0(s_mixed_page_types_not_supported_0055612c);
    DAT_0058364c = DAT_0058364c + -0x28;
  }
  ExceptionList = local_c;
  return;
}


