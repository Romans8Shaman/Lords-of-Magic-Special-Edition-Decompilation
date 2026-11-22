
void __fastcall FUN_00414430(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined *puVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int iStack_44;
  int *piStack_40;
  int iStack_3c;
  int *piStack_38;
  int local_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  uint uStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0054942b;
  pvStack_c = ExceptionList;
  iVar5 = 0;
  ExceptionList = &pvStack_c;
  iVar1 = (/*IC:00414456*/**(code **)(*param_1 + 0x3c))(param_1);
  if ((iVar1 < 0) || (0xf < iVar1)) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar3 = &DAT_005af194 + iVar1 * 0x1d84;
  }
  if ((puVar3 != (undefined *)0x0) && ((puVar3[0x15d8] & 2) != 0)) {
    FUN_00415c20(param_1,(int *)0x0,-1);
    iVar1 = (/*IC:004144a8*/**(code **)(DAT_005aa78c + 0x3c))(&DAT_005aa78c);
    if ((param_1[0x12] == iVar1) && (0 < param_1[0x13])) {
      piVar4 = &DAT_005aa850;
      piVar6 = param_1 + 0x31;
      do {
        iVar5 = iVar5 + 1;
        piVar7 = piVar6;
        piVar8 = piVar4;
        for (iVar1 = 0x13; iVar1 != 0; iVar1 = iVar1 + -1) {
          *piVar8 = *piVar7;
          piVar7 = piVar7 + 1;
          piVar8 = piVar8 + 1;
        }
        piVar6 = piVar6 + 0x13;
        piVar4 = piVar4 + 0x13;
      } while (iVar5 < param_1[0x13]);
    }
    iVar1 = (/*IC:004144e3*/**(code **)(DAT_005aad68 + 0x3c))(&DAT_005aad68);
    if ((param_1[0x12] == iVar1) && (iVar1 = 0, 0 < param_1[0x13])) {
      piVar4 = &DAT_005aae2c;
      piVar6 = param_1 + 0x31;
      do {
        iVar1 = iVar1 + 1;
        piVar7 = piVar6;
        piVar8 = piVar4;
        for (iVar5 = 0x13; iVar5 != 0; iVar5 = iVar5 + -1) {
          *piVar8 = *piVar7;
          piVar7 = piVar7 + 1;
          piVar8 = piVar8 + 1;
        }
        piVar6 = piVar6 + 0x13;
        piVar4 = piVar4 + 0x13;
      } while (iVar1 < param_1[0x13]);
    }
  }
  iVar1 = 0;
  if (0 < param_1[0x13]) {
    piVar6 = param_1 + 0x31;
    do {
      FUN_005291e0((int)piVar6);
      piVar6 = piVar6 + 0x13;
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_1[0x13]);
  }
  FUN_004142e0(param_1,&iStack_1c,&iStack_18);
  iStack_24 = 0;
  FUN_0045a1b0((undefined4 *)&DAT_00579458);
  FUN_004e7300((int)param_1);
  iStack_44 = 0;
  if (0 < param_1[0x13]) {
    piStack_40 = param_1 + 0x31;
    do {
      FUN_00521e00(piStack_40);
      uStack_20 = FUN_005291e0((int)piStack_40);
      if (uStack_20 == 0) {
        local_34 = 1;
      }
      else {
        local_34 = *(int *)(uStack_20 + 0x44);
      }
      iStack_3c = 0;
      if (0 < local_34) {
        piStack_38 = (int *)(uStack_20 + 0x2c);
        do {
          piVar6 = (int *)0x0;
          puVar2 = (undefined4 *)Ordinal_401(0x5dc,s_C__lomse_source_storm_h_00555130,0x3ef,0);
          uStack_4 = 0;
          if (puVar2 != (undefined4 *)0x0) {
            piVar6 = FUN_00411610(puVar2);
          }
          uStack_4 = 0xffffffff;
          if (piVar6 != (int *)0x0) {
            iStack_30 = 0xf;
            piVar4 = param_1;
            piVar7 = piVar6;
            for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
              *piVar7 = *piVar4;
              piVar4 = piVar4 + 1;
              piVar7 = piVar7 + 1;
            }
            piVar6[0xb] = 0;
            piVar6[0x11] = param_1[0x11];
            piVar6[0x12] = param_1[0x12];
            piVar6[0x13] = param_1[0x13];
            piVar6[0x14] = param_1[0x14];
            piVar6[0x15] = param_1[0x15];
            piVar6[0x16] = param_1[0x16];
            piVar6[0x17] = param_1[0x17];
            piVar6[0x18] = param_1[0x18];
            piVar6[0x19] = param_1[0x19];
            piVar4 = param_1 + 0x1a;
            piVar7 = piVar6 + 0x1a;
            for (iVar1 = 0x16; iVar1 != 0; iVar1 = iVar1 + -1) {
              *piVar7 = *piVar4;
              piVar4 = piVar4 + 1;
              piVar7 = piVar7 + 1;
            }
            piVar6[0x30] = param_1[0x30];
            piVar4 = piVar6 + 0x31;
            do {
              piVar7 = (int *)(((int)param_1 - (int)piVar6) + (int)piVar4);
              piVar8 = piVar4;
              for (iVar1 = 0x13; iVar1 != 0; iVar1 = iVar1 + -1) {
                *piVar8 = *piVar7;
                piVar7 = piVar7 + 1;
                piVar8 = piVar8 + 1;
              }
              iStack_30 = iStack_30 + -1;
              piVar4 = piVar4 + 0x13;
            } while (iStack_30 != 0);
            piVar6[0x14e] = param_1[0x14e];
            piVar6[0x14f] = param_1[0x14f];
            piVar6[0x150] = param_1[0x150];
            piVar6[0x151] = param_1[0x151];
            piVar6[0x152] = param_1[0x152];
            piVar6[0x153] = param_1[0x153];
            piVar6[0x154] = param_1[0x154];
            piVar6[0x155] = param_1[0x155];
            piVar6[0x156] = param_1[0x156];
            piVar6[0x157] = param_1[0x157];
            piVar6[0x158] = param_1[0x158];
            piVar6[0x159] = param_1[0x159];
            piVar4 = param_1 + 0x15a;
            piVar7 = piVar6 + 0x15a;
            for (iVar1 = 9; iVar1 != 0; iVar1 = iVar1 + -1) {
              *piVar7 = *piVar4;
              piVar4 = piVar4 + 1;
              piVar7 = piVar7 + 1;
            }
            piVar6[0x163] = param_1[0x163];
            piVar6[0x164] = param_1[0x164];
            piVar6[0x165] = param_1[0x165];
            piVar6[0x166] = param_1[0x166];
            piVar6[0x167] = param_1[0x167];
            piVar6[0x168] = param_1[0x168];
            piVar6[0x169] = param_1[0x169];
            piVar6[0x16a] = param_1[0x16a];
            *(char *)(piVar6 + 0x16b) = (char)param_1[0x16b];
            piVar6[0x16c] = param_1[0x16c];
            piVar6[0x16d] = param_1[0x16d];
            piVar6[0x16e] = param_1[0x16e];
            piVar6[0x16f] = param_1[0x16f];
            piVar6[0x170] = param_1[0x170];
            piVar6[0x171] = param_1[0x171];
            *(char *)(piVar6 + 0x172) = (char)param_1[0x172];
            piVar6[0x173] = param_1[0x173];
            *(char *)(piVar6 + 0x174) = (char)param_1[0x174];
            piVar6[0x175] = param_1[0x175];
            iVar1 = param_1[0x176];
            *(undefined1 *)(piVar6 + 0x16b) = (undefined1)iStack_44;
            *(char *)(piVar6 + 0x176) = (char)iVar1;
            piVar6[10] = -1;
            piVar6[0xf] = 0;
            piVar6[0x13] = 1;
            piVar4 = piStack_40;
            piVar7 = piVar6 + 0x31;
            for (iVar1 = 0x13; iVar1 != 0; iVar1 = iVar1 + -1) {
              *piVar7 = *piVar4;
              piVar4 = piVar4 + 1;
              piVar7 = piVar7 + 1;
            }
            iVar1 = 1;
            if (1 < param_1[0x13]) {
              piVar4 = piVar6 + 0x4b;
              do {
                piVar4[-1] = 0;
                *piVar4 = 0;
                piVar4[-2] = 0;
                iVar1 = iVar1 + 1;
                piVar4 = piVar4 + 0x13;
              } while (iVar1 < param_1[0x13]);
            }
            if (uStack_20 == 0) {
              piVar6[0x32] = piStack_40[1];
            }
            else {
              piVar6[0x32] = piStack_38[-6];
              piVar6[0x37] = *piStack_38;
              piVar6[0x36] = 0;
              if (0 < iStack_3c) {
                piVar6[0x38] = 0;
              }
            }
            piVar6[0x14] = 0;
            iStack_28 = iStack_1c;
            iStack_2c = iStack_18;
            FUN_004e7400(param_1,iStack_44,&iStack_10,&iStack_14,0);
            FUN_0045a260(&DAT_00579458,iStack_44,iStack_10,iStack_14,piVar6[0x11],&iStack_28,
                         &iStack_2c);
            iVar1 = iStack_28;
            iVar5 = iStack_2c;
            puVar3 = FUN_004c6fc0();
            iVar1 = FUN_004a51c0(puVar3,iVar1,iVar5);
            iVar1 = FUN_00413180(piVar6,iVar1);
            piVar6[7] = iVar1;
            puVar3 = FUN_004c6fc0();
            FUN_004a7d50(puVar3,piVar6,iVar1);
            iStack_24 = iStack_24 + 1;
          }
          iStack_3c = iStack_3c + 1;
          piStack_38 = piStack_38 + 1;
        } while (iStack_3c < local_34);
      }
      iStack_44 = iStack_44 + 1;
      piStack_40 = piStack_40 + 0x13;
    } while (iStack_44 < param_1[0x13]);
  }
  ExceptionList = pvStack_c;
  return;
}


