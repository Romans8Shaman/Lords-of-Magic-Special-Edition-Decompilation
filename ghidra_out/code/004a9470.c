
undefined4 __fastcall FUN_004a9470(void *param_1)

{
  void *this;
  float fVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  float *pfVar7;
  int iVar8;
  short *psVar9;
  short *psVar10;
  int *piVar11;
  int iVar12;
  int iVar13;
  undefined4 *puVar14;
  int iStack_65c;
  int iStack_658;
  int iStack_654;
  int iStack_650;
  int iStack_64c;
  int iStack_648;
  float *pfStack_644;
  int aiStack_62c [8];
  short asStack_60c [256];
  float afStack_40c [256];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0054b12e;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (*(int *)((int)param_1 + 0xa8) != 0) {
    DAT_005838a4 = DAT_005838a4 + *(int *)((int)param_1 + 0xbc) * *(int *)((int)param_1 + 0xb8) * -8
    ;
    ExceptionList = &pvStack_c;
    if (*(int *)((int)param_1 + 0xa8) != 0) {
      ExceptionList = &pvStack_c;
      Ordinal_403(*(int *)((int)param_1 + 0xa8),s_C__lomse_source_storm_h_00555130,0x3eb,0);
    }
  }
  iVar2 = Ordinal_401(*(int *)((int)param_1 + 0xb8) * *(int *)((int)param_1 + 0xbc) * 8,
                      s_C__lomse_source_storm_h_00555130,0x3fa,0);
  *(int *)((int)param_1 + 0xa8) = iVar2;
  uVar4 = 0;
  if (iVar2 != 0) {
    DAT_005838a4 = DAT_005838a4 + *(int *)((int)param_1 + 0xb8) * *(int *)((int)param_1 + 0xbc) * 8;
    if (*(int *)((int)param_1 + 0xac) != 0) {
      DAT_005838a4 = DAT_005838a4 +
                     *(int *)((int)param_1 + 0xb8) * *(int *)((int)param_1 + 0xbc) * -0x10;
      iVar2 = *(int *)((int)param_1 + 0xac);
      if (iVar2 != 0) {
        FUN_00539eb0(iVar2,0x10,*(int *)(iVar2 + -4),FUN_0046ba20);
        if (iVar2 + -4 != 0) {
          Ordinal_403(iVar2 + -4,s_C__lomse_source_storm_h_00555130,0x3f6,0);
        }
      }
    }
    iVar2 = *(int *)((int)param_1 + 0xb8) * *(int *)((int)param_1 + 0xbc);
    piVar3 = (int *)Ordinal_401(iVar2 * 0x10 + 4,s_C__lomse_source_storm_h_00555130,0x3fa,0);
    uStack_4 = 0;
    if (piVar3 == (int *)0x0) {
      piVar11 = (int *)0x0;
    }
    else {
      piVar11 = piVar3 + 1;
      *piVar3 = iVar2;
      FUN_00539ff0(piVar11,0x10,iVar2,&LAB_00474de0,FUN_0046ba20);
    }
    uStack_4 = 0xffffffff;
    *(int **)((int)param_1 + 0xac) = piVar11;
    if (piVar11 == (int *)0x0) {
      uVar4 = 0;
    }
    else {
      DAT_005838a4 = DAT_005838a4 +
                     *(int *)((int)param_1 + 0xb8) * *(int *)((int)param_1 + 0xbc) * 0x10;
      iStack_65c = 0;
      if (0 < *(int *)((int)param_1 + 0xbc)) {
        do {
          iVar2 = *(int *)((int)param_1 + 0xb8);
          iVar12 = 0;
          if (0 < iVar2) {
            do {
              iVar13 = iStack_65c * iVar2 + iVar12;
              iVar5 = FUN_004a5170(param_1,iVar12 + *(int *)((int)param_1 + 0xb0),
                                   iStack_65c + *(int *)((int)param_1 + 0xb4));
              iVar2 = *(int *)((int)param_1 + 0x54);
              iVar8 = *(int *)((int)param_1 + 0xa8);
              iVar5 = iVar5 * 8;
              *(undefined4 *)(iVar8 + iVar13 * 8) = *(undefined4 *)(iVar2 + iVar5);
              *(undefined4 *)(iVar8 + 4 + iVar13 * 8) = *(undefined4 *)(iVar2 + 4 + iVar5);
              iVar2 = (int)*(short *)(*(int *)((int)param_1 + 0x54) + iVar5);
              if ((iVar2 < 0) || (*(int *)((int)param_1 + 0x230) <= iVar2)) {
                puVar6 = (undefined4 *)0x0;
              }
              else {
                puVar6 = (undefined4 *)(iVar2 * 0x10 + *(int *)((int)param_1 + 0x22c));
              }
              if (puVar6 == (undefined4 *)0x0) {
                FUN_005047d0(s_bad_coordinates_0055cbd0);
              }
              puVar14 = (undefined4 *)(iVar13 * 0x10 + *(int *)((int)param_1 + 0xac));
              iVar12 = iVar12 + 1;
              *puVar14 = *puVar6;
              puVar14[1] = puVar6[1];
              puVar14[2] = puVar6[2];
              puVar14[3] = puVar6[3];
              iVar2 = *(int *)((int)param_1 + 0xb8);
            } while (iVar12 < iVar2);
          }
          iStack_65c = iStack_65c + 1;
        } while (iStack_65c < *(int *)((int)param_1 + 0xbc));
      }
      FUN_004a4be0(param_1,&DAT_005aec64);
      iVar2 = FUN_004a4f20(param_1,*(int *)((int)param_1 + 0xb8) << 4,
                           *(int *)((int)param_1 + 0xbc) << 4,1);
      uVar4 = 0;
      if (iVar2 != 0) {
        *(undefined4 *)((int)param_1 + 8) = 1;
        iStack_654 = 0;
        if (0 < *(int *)((int)param_1 + 0xbc)) {
          do {
            iStack_64c = iStack_654 * *(int *)((int)param_1 + 0xb8);
            iStack_658 = 0;
            if (0 < *(int *)((int)param_1 + 0xb8)) {
              iStack_650 = iStack_64c * 8;
              iStack_64c = iStack_64c * 0x10;
              do {
                FUN_004aafe0(param_1,(int *)(iStack_64c + *(int *)((int)param_1 + 0xac)),asStack_60c
                             ,afStack_40c);
                iStack_65c = 0;
                pfStack_644 = afStack_40c;
                psVar9 = asStack_60c;
                while( true ) {
                  pfVar7 = pfStack_644 + 0x10;
                  psVar10 = psVar9 + 0x10;
                  iStack_648 = 0x10;
                  iVar2 = iStack_658 << 4;
                  do {
                    iVar12 = FUN_004a5170(param_1,iVar2,iStack_65c + iStack_654 * 0x10);
                    iVar12 = iVar12 * 8;
                    piVar3 = (int *)FUN_00509420((void *)((int)param_1 + 0xd8),(int)*psVar9);
                    uVar4 = FUN_00509570((void *)((int)param_1 + 0xd8),piVar3);
                    iVar2 = iVar2 + 1;
                    psVar9 = psVar9 + 1;
                    *(short *)(*(int *)((int)param_1 + 0x54) + iVar12) = (short)uVar4;
                    *(undefined2 *)(*(int *)((int)param_1 + 0x54) + 2 + iVar12) =
                         *(undefined2 *)(iStack_650 + 2 + *(int *)((int)param_1 + 0xa8));
                    fVar1 = *pfStack_644;
                    pfStack_644 = pfStack_644 + 1;
                    iStack_648 = iStack_648 + -1;
                    *(float *)(*(int *)((int)param_1 + 0x54) + 4 + iVar12) = fVar1;
                  } while (iStack_648 != 0);
                  iStack_65c = iStack_65c + 1;
                  if (0xf < iStack_65c) break;
                  pfStack_644 = pfVar7;
                  psVar9 = psVar10;
                }
                iStack_658 = iStack_658 + 1;
                iStack_64c = iStack_64c + 0x10;
                iStack_650 = iStack_650 + 8;
              } while (iStack_658 < *(int *)((int)param_1 + 0xb8));
            }
            iStack_654 = iStack_654 + 1;
          } while (iStack_654 < *(int *)((int)param_1 + 0xbc));
        }
        iStack_65c = 0;
        iStack_658 = 0;
        if (0 < *(int *)((int)param_1 + 0x60)) {
          do {
            iVar2 = 0;
            if (0 < *(int *)((int)param_1 + 0x5c)) {
              this = (void *)((int)param_1 + 0xd8);
              do {
                iVar8 = FUN_00508f10(this,(int)*(short *)(*(int *)((int)param_1 + 0x54) +
                                                         iStack_658 * 8));
                iVar12 = 0;
                do {
                  iVar5 = *(int *)((int)&DAT_0055caf0 + iVar12) + iVar2;
                  if ((((iVar5 < 1) || (*(int *)((int)param_1 + 0x5c) + -1 <= iVar5)) ||
                      (iVar13 = *(int *)((int)&DAT_0055cb10 + iVar12) + iStack_65c, iVar13 < 1)) ||
                     (*(int *)((int)param_1 + 0x60) + -1 <= iVar13)) {
                    iVar5 = iStack_658;
                  }
                  else {
                    iVar5 = FUN_004a5170(param_1,iVar5,iVar13);
                  }
                  iVar13 = iVar12 + 4;
                  *(int *)((int)aiStack_62c + iVar12) =
                       (int)*(short *)(*(int *)((int)param_1 + 0x54) + iVar5 * 8);
                  iVar12 = iVar13;
                } while (iVar13 < 0x20);
                piVar3 = FUN_00509280(this,iVar8,(int)aiStack_62c);
                if ((piVar3 == (int *)0x0) || (*piVar3 < 1)) {
                  piVar3 = (int *)FUN_00509420(this,iVar8);
                }
                uVar4 = FUN_00509570(this,piVar3);
                iVar2 = iVar2 + 1;
                *(short *)(*(int *)((int)param_1 + 0x54) + iStack_658 * 8) = (short)uVar4;
                iStack_658 = iStack_658 + 1;
              } while (iVar2 < *(int *)((int)param_1 + 0x5c));
            }
            iStack_65c = iStack_65c + 1;
          } while (iStack_65c < *(int *)((int)param_1 + 0x60));
        }
        iVar2 = 0;
        if (0 < *(int *)((int)param_1 + 0x68)) {
          do {
            iVar12 = iVar2 * 8;
            iVar8 = iVar2 * 8;
            iVar2 = iVar2 + 1;
            *(uint *)(*(int *)((int)param_1 + 100) + 4 + iVar8) =
                 *(uint *)(*(int *)((int)param_1 + 100) + 4 + iVar12) | 0xff;
          } while (iVar2 < *(int *)((int)param_1 + 0x68));
        }
        FUN_004aaf50(param_1,1,1,1);
        *(undefined4 *)((int)param_1 + 0x14) = 0;
        uVar4 = FUN_00519a10(&DAT_005876d0);
        FUN_004a9ca0(param_1,1);
        FUN_004c5ef0(&DAT_005aef04,*(int *)((int)param_1 + 0x6c),*(int *)((int)param_1 + 0x70));
      }
    }
  }
  ExceptionList = pvStack_c;
  return uVar4;
}


