
void __cdecl op_testvisit(void *vm)

{
  char cVar1;
  FILE *_File;
  DWORD DVar2;
  int iVar3;
  uint uVar4;
  DWORD DVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  code *pcVar12;
  bool bVar13;
  int iStack_24c;
  int iStack_248;
  int iStack_244;
  int iStack_240;
  FILE *pFStack_23c;
  int iStack_238;
  DWORD DStack_234;
  DWORD DStack_230;
  DWORD DStack_22c;
  char acStack_228 [52];
  char acStack_1f4 [500];
  
  iVar3 = FUN_0041be40(vm,&iStack_248);
  iStack_24c = DAT_005ae9c8;
  iVar7 = DAT_005ae9c4;
  if (iVar3 != 0) {
    iVar3 = DAT_005ae9c8 * DAT_005ae9c4;
    iStack_240 = DAT_005ae9c4;
    if (DAT_005d3838 != iVar3) {
      FUN_00531b20(&DAT_005d3830,iVar3);
    }
    DStack_22c = GetTickCount();
    pFStack_23c = (FILE *)FUN_00539610(s_VISITEST_TXT_0057447c,&DAT_00556168);
    uVar8 = 0;
    if (0 < iVar3) {
      iVar7 = 0;
      do {
        uVar4 = *(uint *)(iStack_248 + 0x54);
        iVar6 = *(int *)(iStack_248 + 0x1c);
        if ((uVar4 & 0x100000) == 0) {
          if (((uVar4 & 0x40000) == 0) || ((uVar4 & 0x80000) == 0)) {
            if ((uVar4 & 0x40000) == 0) {
              if ((uVar4 & 0x80000) != 0) {
                if (DAT_005af0bc == 0) {
                  FUN_004c6660(&DAT_005aef04);
                }
                if ((((-1 < iVar6) && (-1 < iVar7)) && (iVar6 < DAT_005aef10)) &&
                   ((int)uVar8 < DAT_005aef10)) {
                  bVar13 = *(short *)(DAT_005aef04 + 4 + iVar6 * 6) ==
                           *(short *)(DAT_005aef04 + 4 + iVar7);
                  goto LAB_00533686;
                }
              }
            }
            else {
              if (DAT_005af0bc == 0) {
                FUN_004c6660(&DAT_005aef04);
              }
              if (((-1 < iVar6) && (-1 < iVar7)) &&
                 ((iVar6 < DAT_005aef10 && ((int)uVar8 < DAT_005aef10)))) {
                bVar13 = *(short *)(DAT_005aef04 + 2 + iVar6 * 6) ==
                         *(short *)(DAT_005aef04 + 2 + iVar7);
                goto LAB_00533686;
              }
            }
            bVar13 = false;
          }
          else {
            bVar13 = true;
          }
        }
        else {
          bVar13 = true;
        }
LAB_00533686:
        if (bVar13) {
          uVar4 = FUN_00531fb0(&DAT_005ae958,uVar8,iStack_248);
          *(uint *)(DAT_005d3834 + uVar8 * 4) = uVar4;
        }
        else {
          *(undefined4 *)(DAT_005d3834 + uVar8 * 4) = 0x7fffffff;
        }
        uVar8 = uVar8 + 1;
        iVar7 = iVar7 + 6;
      } while ((int)uVar8 < iVar3);
      iVar7 = iStack_240;
    }
    pcVar12 = GetTickCount_exref;
    DVar5 = GetTickCount();
    DStack_230 = DVar5;
    FUN_00531c70(&DAT_005d3830,*(int *)(iStack_248 + 0x1c));
    DStack_234 = GetTickCount();
    if (0 < iStack_24c) {
      iStack_238 = iVar7 * 4;
      iStack_244 = 0;
      do {
        acStack_1f4[0] = '\0';
        if (0 < iVar7) {
          iVar3 = iStack_244;
          do {
            uVar8 = *(uint *)(DAT_005d3830 + iVar3);
            if (uVar8 == 0x7fffffff) {
              pcVar9 = &DAT_00574478;
            }
            else if (uVar8 == 0x7ffffffe) {
              pcVar9 = &DAT_00574474;
            }
            else {
              if (999 < (int)uVar8) {
                uVar8 = 999;
              }
              FUN_0053a090(acStack_228,&DAT_00574470,uVar8);
              pcVar9 = acStack_228;
            }
            uVar8 = 0xffffffff;
            do {
              pcVar11 = pcVar9;
              if (uVar8 == 0) break;
              uVar8 = uVar8 - 1;
              pcVar11 = pcVar9 + 1;
              cVar1 = *pcVar9;
              pcVar9 = pcVar11;
            } while (cVar1 != '\0');
            uVar8 = ~uVar8;
            iVar3 = iVar3 + 4;
            iVar6 = -1;
            pcVar9 = acStack_1f4;
            do {
              pcVar10 = pcVar9;
              if (iVar6 == 0) break;
              iVar6 = iVar6 + -1;
              pcVar10 = pcVar9 + 1;
              cVar1 = *pcVar9;
              pcVar9 = pcVar10;
            } while (cVar1 != '\0');
            pcVar9 = pcVar11 + -uVar8;
            pcVar11 = pcVar10 + -1;
            for (uVar4 = uVar8 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
              *(undefined4 *)pcVar11 = *(undefined4 *)pcVar9;
              pcVar9 = pcVar9 + 4;
              pcVar11 = pcVar11 + 4;
            }
            iVar7 = iVar7 + -1;
            for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
              *pcVar11 = *pcVar9;
              pcVar9 = pcVar9 + 1;
              pcVar11 = pcVar11 + 1;
            }
          } while (iVar7 != 0);
          iVar7 = iStack_240;
        }
        FID_conflict__fwprintf(pFStack_23c,(wchar_t *)&DAT_0055e438,acStack_1f4);
        iStack_244 = iStack_244 + iStack_238;
        iStack_24c = iStack_24c + -1;
      } while (iStack_24c != 0);
      DVar5 = DStack_230;
      pcVar12 = GetTickCount_exref;
    }
    iVar7 = (/*IC:005337da*/*pcVar12)();
    _File = pFStack_23c;
    FID_conflict__fwprintf
              (pFStack_23c,(wchar_t *)s_Time_to_set_cost___d_00574458,DVar5 - DStack_22c);
    DVar2 = DStack_234;
    FID_conflict__fwprintf(_File,(wchar_t *)s_Time_to_calculate___d_00574440,DStack_234 - DVar5);
    FID_conflict__fwprintf(_File,(wchar_t *)s_Time_to_write___d_0057442c,iVar7 - DVar2);
    FUN_005394d0((int *)_File);
  }
  return;
}


