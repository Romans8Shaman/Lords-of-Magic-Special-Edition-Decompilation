
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00413550(int *param_1)

{
  undefined *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  float10 fVar10;
  longlong lVar11;
  int iVar12;
  int local_60;
  int local_5c;
  int *local_58;
  int local_54;
  int iStack_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int *local_3c;
  uint local_38;
  int *local_34;
  double local_30;
  int local_28;
  int local_24;
  double local_20;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_005493eb;
  local_14 = ExceptionList;
  iVar6 = 0;
  ExceptionList = &local_14;
  if (0 < param_1[0x13]) {
    piVar7 = param_1 + 0x31;
    ExceptionList = &local_14;
    do {
      FUN_005291e0((int)piVar7);
      piVar7 = piVar7 + 0x13;
      iVar6 = iVar6 + 1;
    } while (iVar6 < param_1[0x13]);
  }
  puVar1 = FUN_004c6fc0();
  iVar6 = *(int *)(puVar1 + 0x6c);
  FUN_004c6fc0();
  local_40 = (iVar6 >> 1) + -1;
  local_20 = (double)(param_1[0x11] + 2U & 7) * _DAT_0054d410;
  local_30 = (double)local_40;
  FUN_004c8bb0(&DAT_005aef04,&local_28,&local_28,&local_24);
  FUN_004141f0(param_1,&local_48,&local_4c);
  local_44 = 0;
  local_30 = (double)CONCAT44(local_30._4_4_,param_1[0x13] / 2);
  local_40 = 0;
  iVar6 = FUN_004154a0((int)param_1);
  if (0 < iVar6) {
    local_40 = 1;
  }
  local_60 = 0;
  if (0 < param_1[0x13]) {
    do {
      local_34 = param_1 + local_60 * 0x13;
      piVar7 = local_34 + 0x31;
      local_3c = piVar7;
      FUN_00521e00(piVar7);
      local_38 = FUN_005291e0((int)piVar7);
      if (local_38 == 0) {
        local_54 = 1;
      }
      else {
        local_54 = *(int *)(local_38 + 0x44);
      }
      local_5c = 0;
      if (0 < local_54) {
        local_58 = (int *)(local_38 + 0x2c);
        do {
          piVar7 = (int *)0x0;
          puVar2 = (undefined4 *)Ordinal_401(0x5dc,s_C__lomse_source_storm_h_00555130,0x3ef,0);
          uStack_c = 0;
          if (puVar2 != (undefined4 *)0x0) {
            piVar7 = FUN_00411610(puVar2);
          }
          uStack_c = 0xffffffff;
          if (piVar7 != (int *)0x0) {
            iStack_50 = 0xf;
            piVar3 = param_1;
            piVar8 = piVar7;
            for (iVar6 = 0x11; iVar6 != 0; iVar6 = iVar6 + -1) {
              *piVar8 = *piVar3;
              piVar3 = piVar3 + 1;
              piVar8 = piVar8 + 1;
            }
            piVar7[0xb] = 0;
            piVar7[0x11] = param_1[0x11];
            piVar7[0x12] = param_1[0x12];
            piVar7[0x13] = param_1[0x13];
            piVar7[0x14] = param_1[0x14];
            piVar7[0x15] = param_1[0x15];
            piVar7[0x16] = param_1[0x16];
            piVar7[0x17] = param_1[0x17];
            piVar7[0x18] = param_1[0x18];
            piVar7[0x19] = param_1[0x19];
            piVar3 = param_1 + 0x1a;
            piVar8 = piVar7 + 0x1a;
            for (iVar6 = 0x16; iVar6 != 0; iVar6 = iVar6 + -1) {
              *piVar8 = *piVar3;
              piVar3 = piVar3 + 1;
              piVar8 = piVar8 + 1;
            }
            piVar7[0x30] = param_1[0x30];
            piVar3 = piVar7 + 0x31;
            do {
              piVar8 = (int *)(((int)param_1 - (int)piVar7) + (int)piVar3);
              piVar9 = piVar3;
              for (iVar6 = 0x13; iVar6 != 0; iVar6 = iVar6 + -1) {
                *piVar9 = *piVar8;
                piVar8 = piVar8 + 1;
                piVar9 = piVar9 + 1;
              }
              iStack_50 = iStack_50 + -1;
              piVar3 = piVar3 + 0x13;
            } while (iStack_50 != 0);
            piVar7[0x14e] = param_1[0x14e];
            piVar7[0x14f] = param_1[0x14f];
            piVar7[0x150] = param_1[0x150];
            piVar7[0x151] = param_1[0x151];
            piVar7[0x152] = param_1[0x152];
            piVar7[0x153] = param_1[0x153];
            piVar7[0x154] = param_1[0x154];
            piVar7[0x155] = param_1[0x155];
            piVar7[0x156] = param_1[0x156];
            piVar7[0x157] = param_1[0x157];
            piVar7[0x158] = param_1[0x158];
            piVar7[0x159] = param_1[0x159];
            piVar3 = param_1 + 0x15a;
            piVar8 = piVar7 + 0x15a;
            for (iVar6 = 9; iVar6 != 0; iVar6 = iVar6 + -1) {
              *piVar8 = *piVar3;
              piVar3 = piVar3 + 1;
              piVar8 = piVar8 + 1;
            }
            piVar7[0x163] = param_1[0x163];
            piVar7[0x164] = param_1[0x164];
            piVar7[0x165] = param_1[0x165];
            piVar7[0x166] = param_1[0x166];
            piVar7[0x167] = param_1[0x167];
            piVar7[0x168] = param_1[0x168];
            piVar7[0x169] = param_1[0x169];
            piVar7[0x16a] = param_1[0x16a];
            *(char *)(piVar7 + 0x16b) = (char)param_1[0x16b];
            piVar7[0x16c] = param_1[0x16c];
            piVar7[0x16d] = param_1[0x16d];
            piVar7[0x16e] = param_1[0x16e];
            piVar7[0x16f] = param_1[0x16f];
            piVar7[0x170] = param_1[0x170];
            piVar7[0x171] = param_1[0x171];
            *(char *)(piVar7 + 0x172) = (char)param_1[0x172];
            piVar7[0x173] = param_1[0x173];
            *(char *)(piVar7 + 0x174) = (char)param_1[0x174];
            piVar7[0x175] = param_1[0x175];
            iVar6 = param_1[0x176];
            *(undefined1 *)(piVar7 + 0x16b) = (undefined1)local_60;
            *(char *)(piVar7 + 0x176) = (char)iVar6;
            piVar7[10] = -1;
            piVar7[0xf] = 0;
            piVar7[0x13] = 1;
            piVar3 = local_3c;
            piVar8 = piVar7 + 0x31;
            for (iVar6 = 0x13; iVar6 != 0; iVar6 = iVar6 + -1) {
              *piVar8 = *piVar3;
              piVar3 = piVar3 + 1;
              piVar8 = piVar8 + 1;
            }
            iVar6 = 1;
            if (1 < param_1[0x13]) {
              piVar3 = piVar7 + 0x4b;
              do {
                piVar3[-1] = 0;
                *piVar3 = 0;
                piVar3[-2] = 0;
                iVar6 = iVar6 + 1;
                piVar3 = piVar3 + 0x13;
              } while (iVar6 < param_1[0x13]);
            }
            if (local_38 == 0) {
              piVar7[0x32] = local_34[0x32];
            }
            else {
              piVar7[0x32] = local_58[-6];
              piVar7[0x37] = *local_58;
              piVar7[0x36] = 0;
              if (0 < local_5c) {
                piVar7[0x38] = 0;
              }
            }
            piVar7[0x14] = 0;
            piVar3 = param_1 + 3;
            piVar8 = param_1 + 4;
            *piVar3 = local_48;
            *piVar8 = local_4c;
            FUN_0045a160(local_60 - local_30._0_4_,local_5c,piVar7[0x11],piVar3,piVar8);
            uVar4 = FUN_00521e30(piVar7 + 0x31);
            if (uVar4 == 0) {
              uVar4 = FUN_00521e50(piVar7 + 0x31);
              iVar6 = local_24;
              if (uVar4 != 0) {
                iVar6 = local_28;
              }
              iVar6 = iVar6 + -2;
              uVar4 = (uint)(uVar4 != 0);
              iVar5 = *piVar8;
              iVar12 = *piVar3;
              puVar1 = FUN_004c6fc0();
              iVar5 = FUN_004a51c0(puVar1,iVar12,iVar5);
              iVar6 = FUN_00413500(piVar7,iVar5,uVar4,iVar6);
            }
            else {
              iVar6 = *piVar8;
              iVar5 = *piVar3;
              puVar1 = FUN_004c6fc0();
              iVar6 = FUN_004a51c0(puVar1,iVar5,iVar6);
              iVar6 = FUN_00413180(piVar7,iVar6);
            }
            piVar7[7] = iVar6;
            piVar3 = piVar7;
            puVar1 = FUN_004c6fc0();
            FUN_004a7d50(puVar1,piVar3,iVar6);
            if ((local_60 == 0) && (*(int *)(&DAT_005a7d90 + DAT_005a7d8c * 0x400) == param_1[0x12])
               ) {
              fVar10 = (float10)fsin((float10)local_20);
              lVar11 = __ftol(fVar10 * (float10)_DAT_0054d418);
              fVar10 = (float10)fcos((float10)local_20);
              iVar6 = 0xc0 - (int)lVar11;
              lVar11 = __ftol(fVar10 * (float10)_DAT_0054d420);
              FUN_0051ab30(&DAT_005876d0,local_48,local_4c,0x140 - (int)lVar11,iVar6);
            }
            local_44 = local_44 + 1;
            if ((local_40 != 0) && (uVar4 = FUN_00521e50(piVar7 + 0x31), uVar4 != 0)) {
              piVar7[0xc] = piVar7[0xc] | 0x10000000;
            }
          }
          local_5c = local_5c + 1;
          local_58 = local_58 + 1;
        } while (local_5c < local_54);
      }
      local_60 = local_60 + 1;
    } while (local_60 < param_1[0x13]);
  }
  ExceptionList = local_14;
  return;
}


