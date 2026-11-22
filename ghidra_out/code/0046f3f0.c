
undefined4 __fastcall FUN_0046f3f0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  HMODULE pHVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  int *piVar9;
  int *piVar10;
  int *piVar11;
  undefined4 *puVar12;
  undefined4 *puStack_354;
  byte abStack_350 [4];
  int local_34c;
  byte abStack_348 [312];
  undefined1 auStack_210 [260];
  byte abStack_10c [256];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00549e4e;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  local_34c = param_1;
  if (DAT_005831d8 != 0) {
    DAT_005831d8 = 0;
    ExceptionList = &pvStack_c;
    FUN_004eb110(DAT_005831dc);
  }
  if (DAT_005831dc != (undefined4 *)0x0) {
    FUN_004eb110(DAT_005831dc);
    FUN_004eb080(DAT_005831dc);
    puVar2 = DAT_005831dc;
    if (DAT_005831dc != (undefined4 *)0x0) {
      FUN_004eacf0(DAT_005831dc);
      Ordinal_403(puVar2,s_C__lomse_source_storm_h_00555130,0x3eb,0);
    }
    DAT_005831dc = (undefined4 *)0x0;
  }
  puVar2 = (undefined4 *)Ordinal_401(0x78,s_C__lomse_source_storm_h_00555130,0x3ef,0);
  uStack_4 = 0;
  if (puVar2 == (undefined4 *)0x0) {
    DAT_005831dc = (undefined4 *)0x0;
  }
  else {
    DAT_005831dc = (undefined4 *)FUN_004eab10(puVar2);
  }
  uStack_4 = 0xffffffff;
  if (DAT_005831dc == (undefined4 *)0x0) goto LAB_0046f681;
  GetModuleFileNameA((HMODULE)0x0,(LPSTR)abStack_348,0x104);
  pHVar3 = GetModuleHandleA((LPCSTR)abStack_348);
  if (pHVar3 == (HMODULE)0x0) {
    DebugBreak();
  }
  FUN_0053a8b0(abStack_348,abStack_350,abStack_10c,(byte *)0x0,(byte *)0x0);
  FUN_0053a090(auStack_210,&DAT_00557ab8,(uint)abStack_350,abStack_10c);
  iVar4 = FUN_004eab70(DAT_005831dc,DAT_00584d54,auStack_210,abStack_348,s_LOM_SE_00557ab0);
  if (iVar4 == -2) {
    PostQuitMessage(0);
    ExceptionList = pvStack_c;
    return 0;
  }
  if (iVar4 == -1) {
    OutputDebugStringA(s_InitializeSIGS___got_FAILED_TO_U_00557a7c);
  }
  else {
    if (iVar4 != 0) goto LAB_0046f681;
    iVar4 = FUN_004eb230((int)DAT_005831dc);
    if (iVar4 != 0) {
      *(undefined4 *)(param_1 + 0x36c) = 0;
      *(undefined4 *)(param_1 + 0xd4) = 1;
      *(undefined4 *)(param_1 + 0x390) = 1;
      *(undefined4 *)(param_1 + 0xd0) = 1;
      DAT_00557a78 = FUN_004eb290((int)DAT_005831dc);
      DAT_005831e0 = FUN_004eb270((int)DAT_005831dc);
      iVar4 = FUN_004eb270((int)DAT_005831dc);
      if (0 < iVar4) {
        puStack_354 = (undefined4 *)&DAT_00583138;
        piVar9 = (int *)(param_1 + 0x10);
        iVar5 = 0;
        do {
          iVar1 = iVar5 + 1;
          piVar9[-1] = iVar5;
          *piVar9 = iVar1;
          *(undefined4 *)((int)piVar9 + 0x1d) = 0;
          FUN_004eb2a0(DAT_005831dc,(char *)(piVar9 + 1),0x17,iVar5);
          uVar7 = 0xffffffff;
          piVar10 = piVar9 + 1;
          do {
            piVar11 = piVar10;
            if (uVar7 == 0) break;
            uVar7 = uVar7 - 1;
            piVar11 = (int *)((int)piVar10 + 1);
            iVar5 = *piVar10;
            piVar10 = piVar11;
          } while ((char)iVar5 != '\0');
          piVar9 = (int *)((int)piVar9 + 0x25);
          uVar7 = ~uVar7;
          puVar2 = (undefined4 *)((int)piVar11 - uVar7);
          puVar12 = puStack_354;
          for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
            *puVar12 = *puVar2;
            puVar2 = puVar2 + 1;
            puVar12 = puVar12 + 1;
          }
          for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
            *(undefined1 *)puVar12 = *(undefined1 *)puVar2;
            puVar2 = (undefined4 *)((int)puVar2 + 1);
            puVar12 = (undefined4 *)((int)puVar12 + 1);
          }
          iVar5 = iVar1;
          puStack_354 = puStack_354 + 10;
        } while (iVar1 < iVar4);
        param_1 = local_34c;
      }
      iVar5 = FUN_004eb290((int)DAT_005831dc);
      *(int *)(param_1 + 0x2c4) = iVar5 + 1;
      iVar5 = FUN_004eb290((int)DAT_005831dc);
      *(int *)(param_1 + 0x120) = iVar5 + 1;
      *(undefined4 *)(param_1 + 0xd0) = 1;
      *(int *)(param_1 + 0x100) = iVar4;
      FUN_004b8b80(param_1);
      iVar4 = FUN_004eb280((int)DAT_005831dc);
      if (iVar4 != 0) {
        uVar6 = FUN_004b7dd0(param_1);
        *(undefined4 *)(param_1 + 0x390) = uVar6;
      }
      goto LAB_0046f681;
    }
  }
  FUN_004eb080(DAT_005831dc);
  puVar2 = DAT_005831dc;
  if (DAT_005831dc != (undefined4 *)0x0) {
    FUN_004eacf0(DAT_005831dc);
    Ordinal_403(puVar2,s_C__lomse_source_storm_h_00555130,0x3eb,0);
  }
  DAT_005831dc = (undefined4 *)0x0;
LAB_0046f681:
  if (DAT_005831dc != (undefined4 *)0x0) {
    _strncpy((char *)(param_1 + 0xe0),s_SIGS_Game_00557aa4,0x1d);
    *(undefined1 *)(param_1 + 0xfd) = 0;
    if (DAT_005831dc != (undefined4 *)0x0) {
      FUN_004b6520(1);
      ExceptionList = pvStack_c;
      return 1;
    }
  }
  ExceptionList = pvStack_c;
  return 0;
}


