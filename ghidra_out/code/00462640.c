
void __cdecl op_resetcombat(void *vm)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  int *piVar7;
  undefined *this;
  undefined *this_00;
  int *piVar8;
  int iStack_1c;
  int iStack_18;
  undefined4 *puStack_10;
  
  FUN_00489ff0(&DAT_00584ae8);
  FUN_0048cd80();
  DAT_005ae890 = 0;
  DAT_005ae894 = 0;
  DAT_005ae898 = 0;
  DAT_005ae89c = 0;
  DAT_005cd1ec = 0;
  DAT_005ae8bc = 0;
  DAT_005ae8c0 = 0;
  DAT_005ae8c4 = 0xffffffff;
  DAT_005ae8c8 = 0;
  FUN_004117f0(&DAT_005aa78c,0);
  puStack_10 = &DAT_005aad68;
  FUN_004117f0(&DAT_005aad68,0);
  for (piVar1 = (int *)FUN_004fbe60(&DAT_005ae974,0,0); piVar1 != (int *)0x0;
      piVar1 = (int *)FUN_004fbe60(&DAT_005ae974,(int)piVar1,0)) {
    FUN_004176d0(piVar1,0);
    piVar1[0xc] = piVar1[0xc] & 0xfbffffff;
    iVar2 = FUN_00407d50((int)piVar1);
    if (iVar2 == 0) {
      iVar2 = (/*IC:00462029*/**(code **)(*piVar1 + 0x3c))();
      iVar3 = (/*IC:00462036*/**(code **)(DAT_005aa78c + 0x3c))();
      if (iVar2 == iVar3) {
        iStack_18 = 0;
        iStack_1c = 0;
        if (0 < piVar1[0x13]) {
          piVar7 = piVar1 + 0x33;
          do {
            iVar2 = piVar1[10];
            if ((piVar7[7] & 8U) == 0) {
              iVar2 = *piVar7;
            }
            else {
              piVar7[7] = piVar7[7] & 0xfffffff7;
              iVar3 = FUN_00521e00(piVar7 + -2);
              if (iVar3 == 0) {
                *piVar7 = 1;
                iVar2 = 1;
              }
              else if (((char)*(uint *)(iVar3 + 0x104) == '\x06') &&
                      ((*(uint *)(iVar3 + 0x104) & 0x100) == 0)) {
                iVar2 = FUN_00522080(piVar7 + -2,iVar3,iVar2,iStack_1c);
              }
              else {
                *piVar7 = 1;
                iVar2 = 1;
              }
            }
            piVar7 = piVar7 + 0x13;
            iStack_18 = iStack_18 + iVar2;
            iStack_1c = iStack_1c + 1;
          } while (iStack_1c < piVar1[0x13]);
        }
        DAT_005ae890 = DAT_005ae890 + iStack_18;
        iVar2 = FUN_00421960(piVar1);
        DAT_005ae898 = DAT_005ae898 + iVar2;
        if (DAT_005aa7d8 < 0xf) {
          iVar2 = 0;
          if (0 < DAT_005aa7d8) {
            piVar7 = &DAT_005aa870;
            do {
              if (*piVar7 == piVar1[0x39]) break;
              iVar2 = iVar2 + 1;
              piVar7 = piVar7 + 0x13;
            } while (iVar2 < DAT_005aa7d8);
          }
          if (DAT_005aa7d8 <= iVar2) {
            piVar7 = piVar1 + 0x31;
            piVar8 = &DAT_005aa850 + DAT_005aa7d8 * 0x13;
            for (iVar2 = 0x13; iVar2 != 0; iVar2 = iVar2 + -1) {
              *piVar8 = *piVar7;
              piVar7 = piVar7 + 1;
              piVar8 = piVar8 + 1;
            }
            DAT_005aa7d8 = DAT_005aa7d8 + 1;
          }
        }
      }
      else {
        iStack_1c = 0;
        iStack_18 = 0;
        if (0 < piVar1[0x13]) {
          piVar7 = piVar1 + 0x33;
          do {
            iVar2 = piVar1[10];
            if ((piVar7[7] & 8U) == 0) {
              iVar2 = *piVar7;
            }
            else {
              piVar7[7] = piVar7[7] & 0xfffffff7;
              iVar3 = FUN_00521e00(piVar7 + -2);
              if (iVar3 == 0) {
                *piVar7 = 1;
                iVar2 = 1;
              }
              else if (((char)*(uint *)(iVar3 + 0x104) == '\x06') &&
                      ((*(uint *)(iVar3 + 0x104) & 0x100) == 0)) {
                iVar2 = FUN_00522080(piVar7 + -2,iVar3,iVar2,iStack_18);
              }
              else {
                *piVar7 = 1;
                iVar2 = 1;
              }
            }
            piVar7 = piVar7 + 0x13;
            iStack_1c = iStack_1c + iVar2;
            iStack_18 = iStack_18 + 1;
          } while (iStack_18 < piVar1[0x13]);
        }
        DAT_005ae894 = DAT_005ae894 + iStack_1c;
        iVar2 = FUN_00421960(piVar1);
        DAT_005ae89c = DAT_005ae89c + iVar2;
        if (DAT_005aadb4 < 0xf) {
          iVar2 = 0;
          if (0 < DAT_005aadb4) {
            piVar7 = &DAT_005aae4c;
            do {
              if (*piVar7 == piVar1[0x39]) break;
              iVar2 = iVar2 + 1;
              piVar7 = piVar7 + 0x13;
            } while (iVar2 < DAT_005aadb4);
          }
          if (DAT_005aadb4 <= iVar2) {
            piVar7 = piVar1 + 0x31;
            piVar8 = &DAT_005aae2c + DAT_005aadb4 * 0x13;
            for (iVar2 = 0x13; iVar2 != 0; iVar2 = iVar2 + -1) {
              *piVar8 = *piVar7;
              piVar7 = piVar7 + 1;
              piVar8 = piVar8 + 1;
            }
            DAT_005aadb4 = DAT_005aadb4 + 1;
          }
        }
      }
    }
    uVar4 = FUN_00407d60((int)piVar1);
    if (uVar4 != 0) {
      iVar2 = (/*IC:0046229c*/**(code **)(*piVar1 + 0x3c))();
      iVar3 = (/*IC:004622a7*/**(code **)(DAT_005aa78c + 0x3c))();
      if (iVar2 == iVar3) {
        iVar2 = 0;
        iStack_18 = 0;
        if (0 < piVar1[0x13]) {
          piVar7 = piVar1 + 0x33;
          do {
            iVar3 = piVar1[10];
            if ((piVar7[7] & 8U) == 0) {
              iVar3 = *piVar7;
            }
            else {
              piVar7[7] = piVar7[7] & 0xfffffff7;
              iVar5 = FUN_00521e00(piVar7 + -2);
              if (iVar5 == 0) {
                *piVar7 = 1;
                iVar3 = 1;
              }
              else if (((char)*(uint *)(iVar5 + 0x104) == '\x06') &&
                      ((*(uint *)(iVar5 + 0x104) & 0x100) == 0)) {
                iVar3 = FUN_00522080(piVar7 + -2,iVar5,iVar3,iVar2);
              }
              else {
                *piVar7 = 1;
                iVar3 = 1;
              }
            }
            piVar7 = piVar7 + 0x13;
            iStack_18 = iStack_18 + iVar3;
            iVar2 = iVar2 + 1;
          } while (iVar2 < piVar1[0x13]);
        }
        DAT_005ae890 = DAT_005ae890 + iStack_18;
        iVar2 = FUN_00421960(piVar1);
        DAT_005ae898 = DAT_005ae898 + iVar2;
        if (DAT_005aa7d8 < 0xf) {
          iVar2 = 0;
          if (0 < DAT_005aa7d8) {
            piVar7 = &DAT_005aa870;
            do {
              if (*piVar7 == piVar1[0x39]) break;
              iVar2 = iVar2 + 1;
              piVar7 = piVar7 + 0x13;
            } while (iVar2 < DAT_005aa7d8);
          }
          if (DAT_005aa7d8 <= iVar2) {
            piVar7 = piVar1 + 0x31;
            piVar8 = &DAT_005aa850 + DAT_005aa7d8 * 0x13;
            for (iVar2 = 0x13; iVar2 != 0; iVar2 = iVar2 + -1) {
              *piVar8 = *piVar7;
              piVar7 = piVar7 + 1;
              piVar8 = piVar8 + 1;
            }
            DAT_005aa7d8 = DAT_005aa7d8 + 1;
          }
        }
      }
    }
  }
  FUN_00415c20(&DAT_005aa78c,(int *)0x0,-1);
  FUN_00415c20(&DAT_005aad68,(int *)0x0,-1);
  piVar1 = (int *)FUN_004fbe60(&DAT_005ae974,0,0);
  do {
    if (piVar1 == (int *)0x0) {
      FUN_004a9ad0(0x5ae958);
      FUN_00460440(&DAT_005ae974);
      FUN_0051a860(&DAT_00584ae8,DAT_005af138,DAT_005af13c);
      FUN_0045a0e0(&DAT_00579458,DAT_005ae9c4,DAT_005ae9c8);
      FUN_004f76b0(0x5ae974);
      DAT_005af174 = 0;
      if ((*(int *)(&DAT_005a7d90 + DAT_005a7d8c * 0x400) != DAT_005aa7d4) &&
         (*(int *)(&DAT_005a7d90 + DAT_005a7d8c * 0x400) != DAT_005aadb0)) {
        (/*IC:00462506*/**(code **)(DAT_005876d0 + 0x28))(DAT_005a7990 / 2,DAT_005a7994 / 2,0x140,0xc0);
      }
      if (*(int *)(&DAT_005a7d90 + DAT_005a7d8c * 0x400) == DAT_005aa7d4) {
        iVar2 = FUN_00406a80(&DAT_005ae958,DAT_005aa7d4,-1);
        FUN_0051ab30(&DAT_005876d0,iVar2 % DAT_005ae9c4,iVar2 / DAT_005ae9c4,0x140,0xc0);
      }
      if (*(int *)(&DAT_005a7d90 + DAT_005a7d8c * 0x400) == DAT_005aadb0) {
        iVar2 = FUN_00406a80(&DAT_005ae958,DAT_005aadb0,-1);
        FUN_0051ab30(&DAT_005876d0,iVar2 % DAT_005ae9c4,iVar2 / DAT_005ae9c4,0x140,0xc0);
      }
      FUN_00420310(0x5ae974);
      if ((DAT_005aa7d4 < 0) || (0xf < DAT_005aa7d4)) {
        this = (undefined *)0x0;
      }
      else {
        this = &DAT_005af194 + DAT_005aa7d4 * 0x1d84;
      }
      if ((DAT_005aadb0 < 0) || (0xf < DAT_005aadb0)) {
        this_00 = (undefined *)0x0;
      }
      else {
        this_00 = &DAT_005af194 + DAT_005aadb0 * 0x1d84;
      }
      if (this != (undefined *)0x0) {
        FUN_004bb160(this,1);
      }
      if (this_00 != (undefined *)0x0) {
        FUN_004bb160(this_00,2);
      }
      DAT_005af154 = FUN_00460fb0(0x5aa12c);
      FUN_00460eb0(&DAT_005aa12c,DAT_005af148);
      FUN_0048cdb0();
      return;
    }
    *(undefined1 *)(piVar1 + 0x16b) = 0xff;
    iVar2 = (/*IC:00462415*/**(code **)(*piVar1 + 0x3c))();
    iVar3 = (/*IC:0046241e*/**(code **)(DAT_005aa78c + 0x3c))();
    puVar6 = &DAT_005aa78c;
    if (iVar2 != iVar3) {
      puVar6 = puStack_10;
    }
    iVar2 = 0;
    if (0 < (int)puVar6[0x13]) {
      piVar7 = puVar6 + 0x39;
      do {
        if (*piVar7 == piVar1[0x39]) {
          *(char *)(piVar1 + 0x16b) = (char)iVar2;
          break;
        }
        iVar2 = iVar2 + 1;
        piVar7 = piVar7 + 0x13;
      } while (iVar2 < (int)puVar6[0x13]);
    }
    piVar1 = (int *)FUN_004fbe60(&DAT_005ae974,(int)piVar1,0);
  } while( true );
}


