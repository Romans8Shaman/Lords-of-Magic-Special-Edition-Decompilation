
void __fastcall FUN_004c67b0(int *param_1)

{
  byte *pbVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int *piVar9;
  int *piVar10;
  uint local_24;
  uint local_20;
  int iStack_1c;
  int local_18;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0054b70b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x6f));
  iVar7 = 0;
  iVar6 = 0;
  local_18 = 0;
  iVar3 = FUN_004c6230((int)param_1);
  if (iVar3 != 0) {
    iVar3 = 0;
    param_1[0x6e] = 0;
    if (0 < param_1[3]) {
      iVar4 = 0;
      do {
        *(undefined1 *)(*param_1 + iVar4) = 0xff;
        *(undefined2 *)(*param_1 + 2 + iVar4) = 0;
        *(undefined2 *)(*param_1 + 4 + iVar4) = 0;
        pbVar1 = (byte *)(*param_1 + 1 + iVar4);
        *pbVar1 = *pbVar1 & 1;
        iVar3 = iVar3 + 1;
        iVar4 = iVar4 + 6;
      } while (iVar3 < param_1[3]);
    }
    piVar9 = (int *)0x0;
    if (0 < param_1[3]) {
      do {
        if ((*(char *)(*param_1 + iVar6) == -1) && ((*(byte *)(*param_1 + iVar6 + 1) & 1) == 0)) {
          FUN_004c62a0(param_1,piVar9,(char)iVar7);
          iVar7 = iVar7 + 1;
        }
        piVar9 = (int *)((int)piVar9 + 1);
        iVar6 = iVar6 + 6;
        local_18 = iVar7;
      } while ((int)piVar9 < param_1[3]);
    }
    do {
      iVar3 = 0;
      local_20 = 0;
      local_24 = 0;
      if (0 < param_1[3]) {
        iVar7 = 0;
        do {
          if (*(char *)(*param_1 + iVar7) == -1) {
            iVar6 = 0;
            do {
              iVar4 = FUN_004c61c0(param_1,iVar3,iVar6);
              cVar2 = *(char *)(*param_1 + iVar4 * 6);
              if (cVar2 != -1) {
                *(char *)(*param_1 + iVar7) = cVar2;
                local_20 = local_20 + 1;
                goto LAB_004c68b4;
              }
              iVar6 = iVar6 + 1;
            } while (iVar6 < 8);
            local_24 = local_24 + 1;
          }
LAB_004c68b4:
          iVar3 = iVar3 + 1;
          iVar7 = iVar7 + 6;
        } while (iVar3 < param_1[3]);
        iVar7 = local_18;
      }
    } while ((local_24 & local_20) != 0);
    iVar3 = param_1[0x6b];
    if ((iVar3 != 0) && (param_1[0x6c] != iVar7)) {
      if (iVar3 != 0) {
        FUN_00539eb0(iVar3,0x19c,*(int *)(iVar3 + -4),FUN_004c5210);
        if (iVar3 + -4 != 0) {
          Ordinal_403(iVar3 + -4,s_C__lomse_source_storm_h_00555130,0x3f6,0);
        }
      }
      param_1[0x6b] = 0;
    }
    if (param_1[0x6b] == 0) {
      piVar9 = (int *)Ordinal_401(iVar7 * 0x19c + 4,s_C__lomse_source_storm_h_00555130,0x3fa,0);
      uStack_4 = 0;
      if (piVar9 == (int *)0x0) {
        piVar10 = (int *)0x0;
      }
      else {
        piVar10 = piVar9 + 1;
        *piVar9 = iVar7;
        FUN_00539ff0(piVar10,0x19c,iVar7,FUN_004c5200,FUN_004c5210);
      }
      uStack_4 = 0xffffffff;
      param_1[0x6b] = (int)piVar10;
      if (piVar10 == (int *)0x0) goto LAB_004c6ab1;
    }
    iVar3 = 0;
    param_1[0x6c] = iVar7;
    if (0 < iVar7) {
      iVar7 = 0;
      do {
        iVar6 = iVar7 + param_1[0x6b];
        iVar7 = iVar7 + 0x19c;
        *(int *)(iVar6 + 0x14) = iVar3;
        iVar3 = iVar3 + 1;
      } while (iVar3 < param_1[0x6c]);
    }
    uVar8 = 0;
    if (0 < param_1[0x6c]) {
      local_18 = 0;
      do {
        iVar3 = 0;
        iVar7 = 0;
        local_24 = 0;
        iStack_1c = 0;
        if (0 < param_1[3]) {
          local_20 = 0;
          do {
            if (*(byte *)(*param_1 + local_20) == uVar8) {
              iVar7 = iVar7 + 1;
              iStack_1c = iStack_1c + iVar3 % param_1[1];
              local_24 = local_24 + iVar3 / param_1[1];
              iVar6 = 0;
              do {
                iVar4 = FUN_004c61c0(param_1,iVar3,iVar6);
                uVar5 = (uint)*(byte *)(*param_1 + iVar4 * 6);
                if (uVar5 != uVar8) {
                  FUN_004c72e0((void *)(local_18 + param_1[0x6b]),iVar3,uVar5);
                }
                iVar6 = iVar6 + 1;
              } while (iVar6 < 8);
            }
            iVar3 = iVar3 + 1;
            local_20 = local_20 + 6;
          } while (iVar3 < param_1[3]);
        }
        if (iVar7 != 0) {
          *(int *)(local_18 + param_1[0x6b]) =
               ((int)local_24 / iVar7) * param_1[1] + iStack_1c / iVar7;
        }
        uVar8 = uVar8 + 1;
        *(int *)(local_18 + 4 + param_1[0x6b]) = iVar7;
        local_18 = local_18 + 0x19c;
      } while ((int)uVar8 < param_1[0x6c]);
    }
  }
LAB_004c6ab1:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x6f));
  ExceptionList = pvStack_c;
  return;
}


