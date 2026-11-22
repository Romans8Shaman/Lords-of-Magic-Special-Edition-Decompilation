
void FUN_004b36d0(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  DWORD DVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  char *pcVar10;
  char *pcStack_14;
  int iStack_10;
  uint uStack_c;
  undefined4 uStack_8;
  undefined1 auStack_4 [4];
  
  pcStack_14 = (char *)0x0;
  if (DAT_00586628 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_0058662c);
    DAT_00586628 = 1;
    iStack_10 = 0;
    do {
      iVar3 = iStack_10;
      piVar1 = &DAT_005863c8 + iStack_10 * 0x4b;
      if (((&DAT_005863cc)[iStack_10 * 0x4b] != 0) &&
         (piVar2 = (int *)*piVar1, piVar2 != (int *)0x0)) {
        (/*IC:004b3739*/**(code **)(*piVar2 + 0x10))(piVar2,&uStack_c,auStack_4);
        iVar4 = (&DAT_005863d0)[iVar3 * 0x4b];
        if (iVar4 == 0) {
          uVar8 = (&DAT_005863dc)[iVar3 * 0x4b];
          uVar9 = 0;
LAB_004b378b:
          uVar7 = uVar8 - uVar9;
          iVar4 = (/*IC:004b37a6*/**(code **)(*(int *)*piVar1 + 0x2c))
                            ((int *)*piVar1,uVar9,uVar7,&pcStack_14,&uStack_8,0,0,0);
          if (iVar4 == 0) {
            DVar5 = FUN_0053ac20((undefined4 *)(&DAT_005863cc)[iVar3 * 0x4b]);
            if ((int)((DVar5 + uVar8) - uVar9) < (int)(&DAT_005863d8)[iVar3 * 0x4b]) {
              uVar9 = FUN_005397f0(pcStack_14,uVar7,1,(int *)(&DAT_005863cc)[iVar3 * 0x4b]);
              if ((int)uVar9 < 1) {
                (/*IC:004b3987*/**(code **)(*(int *)*piVar1 + 0x4c))((int *)*piVar1,pcStack_14,uStack_8,0,0);
                goto LAB_004b38b6;
              }
            }
            else {
              pcVar10 = pcStack_14;
              for (uVar9 = uVar7 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
                pcVar10[0] = '\0';
                pcVar10[1] = '\0';
                pcVar10[2] = '\0';
                pcVar10[3] = '\0';
                pcVar10 = pcVar10 + 4;
              }
              for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
                *pcVar10 = '\0';
                pcVar10 = pcVar10 + 1;
              }
              uVar9 = (&DAT_005863d8)[iVar3 * 0x4b] - DVar5;
              FUN_005397f0(pcStack_14,uVar9,1,(int *)(&DAT_005863cc)[iVar3 * 0x4b]);
              iVar4 = (&DAT_005863e4)[iVar3 * 0x4b];
              (&DAT_00583ae0)[iStack_10] = (&DAT_005863d0)[iVar3 * 0x4b];
              if (iVar4 == 0) {
                if ((&DAT_005863f0)[iVar3 * 0x4b] == 1) {
                  (&DAT_005863d0)[iVar3 * 0x4b] = 1;
                }
                else {
                  FUN_004b3c50((int)piVar1);
LAB_004b391b:
                  FUN_005397f0(pcStack_14 + uVar9,(&DAT_005863e0)[iVar3 * 0x4b] - uVar9,1,
                               (int *)(&DAT_005863cc)[iVar3 * 0x4b]);
                }
              }
              else if (iVar4 == 3) {
                if ((&DAT_005863f0)[iVar3 * 0x4b] != 1) {
                  uVar6 = FUN_004fe6e0(&DAT_00584ae8,s_wav_music_m_life_wav_0055ce68);
                  (&DAT_005863cc)[iVar3 * 0x4b] = uVar6;
                  FUN_004b3990((int)piVar1);
                  goto LAB_004b391b;
                }
                (&DAT_005863d0)[iVar3 * 0x4b] = 1;
              }
              else if (iVar4 == 2) {
                (&DAT_005863d0)[iVar3 * 0x4b] = 1;
              }
              else if (iVar4 == 1) {
                (&DAT_005863d0)[iVar3 * 0x4b] = 1;
              }
            }
            (/*IC:004b3838*/**(code **)(*(int *)*piVar1 + 0x4c))((int *)*piVar1,pcStack_14,uStack_8,0,0);
            if ((&DAT_005863d0)[iVar3 * 0x4b] == 0) {
              uVar6 = DAT_00586770;
              if (iStack_10 != 0) {
                uVar6 = DAT_00586778;
              }
              (/*IC:004b385c*/**(code **)(*(int *)*piVar1 + 0x3c))((int *)*piVar1,uVar6);
              (/*IC:004b386a*/**(code **)(*(int *)*piVar1 + 0x30))((int *)*piVar1,0,0,1);
              (&DAT_005863d0)[iVar3 * 0x4b] = 2;
              (&DAT_005863ec)[iVar3 * 0x4b] = 0;
            }
          }
        }
        else if (iVar4 == 2) {
          uVar8 = (&DAT_005863e0)[iVar3 * 0x4b];
          if (uVar8 <= uStack_c) {
            uVar9 = 0;
            (&DAT_005863d0)[iVar3 * 0x4b] = 3;
            goto LAB_004b378b;
          }
        }
        else if (iVar4 == 3) {
          uVar9 = (&DAT_005863e0)[iVar3 * 0x4b];
          if (uStack_c < uVar9) {
            uVar8 = (&DAT_005863dc)[iVar3 * 0x4b];
            (&DAT_005863d0)[iVar3 * 0x4b] = 2;
            goto LAB_004b378b;
          }
        }
        else if (iVar4 == 1) {
          if ((((&DAT_00583ae0)[iVar3] == 2) && ((uint)(&DAT_005863e0)[iVar3 * 0x4b] <= uStack_c))
             || (((&DAT_00583ae0)[iVar3] == 3 && (uStack_c < (uint)(&DAT_005863e0)[iVar3 * 0x4b]))))
          {
            FUN_004b32c0(piVar1);
            (&DAT_005863ec)[iVar3 * 0x4b] = 1;
            (&DAT_005863f0)[iVar3 * 0x4b] = 0;
          }
        }
      }
LAB_004b38b6:
      iStack_10 = iStack_10 + 1;
    } while (iStack_10 < 2);
    DAT_00586628 = 0;
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_0058662c);
  }
  return;
}


