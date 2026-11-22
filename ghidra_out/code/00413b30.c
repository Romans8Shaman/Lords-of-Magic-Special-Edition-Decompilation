
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00413b30(int *param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  float10 fVar10;
  longlong lVar11;
  int iVar12;
  int iStack_64;
  int iStack_60;
  int *piStack_5c;
  int local_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  int *piStack_40;
  uint uStack_3c;
  double dStack_38;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  double dStack_20;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_0054940b;
  pvStack_14 = ExceptionList;
  iVar6 = 0;
  ExceptionList = &pvStack_14;
  iVar1 = (/*IC:00413b5c*/**(code **)(*param_1 + 0x3c))(param_1);
  if ((iVar1 < 0) || (0xf < iVar1)) {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = &DAT_005af194 + iVar1 * 0x1d84;
  }
  if ((puVar2 != (undefined *)0x0) && ((puVar2[0x15d8] & 2) != 0)) {
    FUN_00415c20(param_1,(int *)0x0,-1);
    iVar1 = (/*IC:00413bae*/**(code **)(DAT_005aa78c + 0x3c))(&DAT_005aa78c);
    if ((param_1[0x12] == iVar1) && (0 < param_1[0x13])) {
      piVar5 = &DAT_005aa850;
      piVar7 = param_1 + 0x31;
      do {
        iVar6 = iVar6 + 1;
        piVar8 = piVar7;
        piVar9 = piVar5;
        for (iVar1 = 0x13; iVar1 != 0; iVar1 = iVar1 + -1) {
          *piVar9 = *piVar8;
          piVar8 = piVar8 + 1;
          piVar9 = piVar9 + 1;
        }
        piVar7 = piVar7 + 0x13;
        piVar5 = piVar5 + 0x13;
      } while (iVar6 < param_1[0x13]);
    }
    iVar1 = (/*IC:00413be9*/**(code **)(DAT_005aad68 + 0x3c))(&DAT_005aad68);
    if ((param_1[0x12] == iVar1) && (iVar1 = 0, 0 < param_1[0x13])) {
      piVar5 = &DAT_005aae2c;
      piVar7 = param_1 + 0x31;
      do {
        iVar1 = iVar1 + 1;
        piVar8 = piVar7;
        piVar9 = piVar5;
        for (iVar6 = 0x13; iVar6 != 0; iVar6 = iVar6 + -1) {
          *piVar9 = *piVar8;
          piVar8 = piVar8 + 1;
          piVar9 = piVar9 + 1;
        }
        piVar7 = piVar7 + 0x13;
        piVar5 = piVar5 + 0x13;
      } while (iVar1 < param_1[0x13]);
    }
  }
  iVar1 = 0;
  if (0 < param_1[0x13]) {
    piVar7 = param_1 + 0x31;
    do {
      FUN_005291e0((int)piVar7);
      piVar7 = piVar7 + 0x13;
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_1[0x13]);
  }
  puVar2 = FUN_004c6fc0();
  iVar1 = *(int *)(puVar2 + 0x6c);
  FUN_004c6fc0();
  iStack_44 = (iVar1 >> 1) + -1;
  dStack_20 = (double)(param_1[0x11] + 2U & 7) * _DAT_0054d410;
  dStack_38 = (double)iStack_44;
  FUN_004c8bb0(&DAT_005aef04,&iStack_24,&iStack_28,&iStack_24);
  FUN_004141f0(param_1,&iStack_4c,&iStack_50);
  iStack_48 = 0;
  iStack_44 = 0;
  iVar1 = FUN_004154a0((int)param_1);
  if (0 < iVar1) {
    iStack_44 = 1;
  }
  FUN_0045a1b0((undefined4 *)&DAT_00579458);
  FUN_004e7300((int)param_1);
  iStack_64 = 0;
  if (0 < param_1[0x13]) {
    do {
      dStack_38 = (double)CONCAT44(dStack_38._4_4_,param_1 + iStack_64 * 0x13);
      piVar7 = param_1 + iStack_64 * 0x13 + 0x31;
      piStack_40 = piVar7;
      FUN_00521e00(piVar7);
      uStack_3c = FUN_005291e0((int)piVar7);
      if (uStack_3c == 0) {
        local_58 = 1;
      }
      else {
        local_58 = *(int *)(uStack_3c + 0x44);
      }
      iStack_60 = 0;
      if (0 < local_58) {
        piStack_5c = (int *)(uStack_3c + 0x2c);
        do {
          piVar7 = (int *)0x0;
          puVar3 = (undefined4 *)Ordinal_401(0x5dc,s_C__lomse_source_storm_h_00555130,0x3ef,0);
          uStack_c = 0;
          if (puVar3 != (undefined4 *)0x0) {
            piVar7 = FUN_00411610(puVar3);
          }
          uStack_c = 0xffffffff;
          if (piVar7 != (int *)0x0) {
            iStack_54 = 0xf;
            piVar5 = param_1;
            piVar8 = piVar7;
            for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
              *piVar8 = *piVar5;
              piVar5 = piVar5 + 1;
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
            piVar5 = param_1 + 0x1a;
            piVar8 = piVar7 + 0x1a;
            for (iVar1 = 0x16; iVar1 != 0; iVar1 = iVar1 + -1) {
              *piVar8 = *piVar5;
              piVar5 = piVar5 + 1;
              piVar8 = piVar8 + 1;
            }
            piVar7[0x30] = param_1[0x30];
            piVar5 = piVar7 + 0x31;
            do {
              piVar8 = (int *)(((int)param_1 - (int)piVar7) + (int)piVar5);
              piVar9 = piVar5;
              for (iVar1 = 0x13; iVar1 != 0; iVar1 = iVar1 + -1) {
                *piVar9 = *piVar8;
                piVar8 = piVar8 + 1;
                piVar9 = piVar9 + 1;
              }
              iStack_54 = iStack_54 + -1;
              piVar5 = piVar5 + 0x13;
            } while (iStack_54 != 0);
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
            piVar5 = param_1 + 0x15a;
            piVar8 = piVar7 + 0x15a;
            for (iVar1 = 9; iVar1 != 0; iVar1 = iVar1 + -1) {
              *piVar8 = *piVar5;
              piVar5 = piVar5 + 1;
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
            iVar1 = param_1[0x176];
            *(undefined1 *)(piVar7 + 0x16b) = (undefined1)iStack_64;
            *(char *)(piVar7 + 0x176) = (char)iVar1;
            piVar7[10] = -1;
            piVar7[0xf] = 0;
            piVar7[0x13] = 1;
            piVar5 = piStack_40;
            piVar8 = piVar7 + 0x31;
            for (iVar1 = 0x13; iVar1 != 0; iVar1 = iVar1 + -1) {
              *piVar8 = *piVar5;
              piVar5 = piVar5 + 1;
              piVar8 = piVar8 + 1;
            }
            iVar1 = 1;
            if (1 < param_1[0x13]) {
              piVar5 = piVar7 + 0x4b;
              do {
                piVar5[-1] = 0;
                *piVar5 = 0;
                piVar5[-2] = 0;
                iVar1 = iVar1 + 1;
                piVar5 = piVar5 + 0x13;
              } while (iVar1 < param_1[0x13]);
            }
            if (uStack_3c == 0) {
              piVar7[0x32] = *(int *)(dStack_38._0_4_ + 200);
            }
            else {
              piVar7[0x32] = piStack_5c[-6];
              piVar7[0x37] = *piStack_5c;
              piVar7[0x36] = 0;
              if (0 < iStack_60) {
                piVar7[0x38] = 0;
              }
            }
            piVar7[0x14] = 0;
            piVar5 = param_1 + 3;
            piVar8 = param_1 + 4;
            *piVar5 = iStack_4c;
            *piVar8 = iStack_50;
            FUN_004e7400(param_1,iStack_64,&iStack_2c,&iStack_30,0);
            FUN_0045a260(&DAT_00579458,iStack_64,iStack_2c,iStack_30,piVar7[0x11],piVar5,piVar8);
            uVar4 = FUN_00521e30(piVar7 + 0x31);
            if (uVar4 == 0) {
              uVar4 = FUN_00521e50(piVar7 + 0x31);
              iVar1 = iStack_24;
              if (uVar4 != 0) {
                iVar1 = iStack_28;
              }
              iVar1 = iVar1 + -2;
              uVar4 = (uint)(uVar4 != 0);
              iVar6 = *piVar8;
              iVar12 = *piVar5;
              puVar2 = FUN_004c6fc0();
              iVar6 = FUN_004a51c0(puVar2,iVar12,iVar6);
              iVar1 = FUN_00413500(piVar7,iVar6,uVar4,iVar1);
            }
            else {
              iVar1 = *piVar8;
              iVar6 = *piVar5;
              puVar2 = FUN_004c6fc0();
              iVar1 = FUN_004a51c0(puVar2,iVar6,iVar1);
              iVar1 = FUN_00413180(piVar7,iVar1);
            }
            piVar7[7] = iVar1;
            piVar5 = piVar7;
            puVar2 = FUN_004c6fc0();
            FUN_004a7d50(puVar2,piVar5,iVar1);
            if ((iStack_64 == 0) &&
               (*(int *)(&DAT_005a7d90 + DAT_005a7d8c * 0x400) == param_1[0x12])) {
              fVar10 = (float10)fsin((float10)dStack_20);
              lVar11 = __ftol(fVar10 * (float10)_DAT_0054d418);
              fVar10 = (float10)fcos((float10)dStack_20);
              iVar1 = 0xc0 - (int)lVar11;
              lVar11 = __ftol(fVar10 * (float10)_DAT_0054d420);
              FUN_0051ab30(&DAT_005876d0,iStack_4c,iStack_50,0x140 - (int)lVar11,iVar1);
            }
            iStack_48 = iStack_48 + 1;
            if ((iStack_44 != 0) && (uVar4 = FUN_00521e50(piVar7 + 0x31), uVar4 != 0)) {
              piVar7[0xc] = piVar7[0xc] | 0x10000000;
            }
          }
          iStack_60 = iStack_60 + 1;
          piStack_5c = piStack_5c + 1;
        } while (iStack_60 < local_58);
      }
      iStack_64 = iStack_64 + 1;
    } while (iStack_64 < param_1[0x13]);
  }
  ExceptionList = pvStack_14;
  return;
}


