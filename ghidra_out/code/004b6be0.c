
undefined4 __thiscall FUN_004b6be0(void *this,int param_1,int param_2)

{
  char cVar1;
  bool bVar2;
  void *pvVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  char *pcVar10;
  char *pcVar11;
  int local_8;
  
  if (param_2 < 0) {
    bVar2 = true;
    local_8 = -1;
  }
  else {
    bVar2 = false;
    local_8 = FUN_004b6b30(param_2);
    if (*(int *)((int)this + local_8 * 4 + 0x4b74) != 0) {
      return 0;
    }
  }
  FUN_00483c90(&DAT_005aa12c,param_1,param_2);
  if ((param_1 < 0) || (0xf < param_1)) {
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar4 = &DAT_005af194 + param_1 * 0x1d84;
  }
  uVar8 = 0xffffffff;
  pcVar10 = &DAT_00579274;
  do {
    pcVar11 = pcVar10;
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    pcVar11 = pcVar10 + 1;
    cVar1 = *pcVar10;
    pcVar10 = pcVar11;
  } while (cVar1 != '\0');
  uVar8 = ~uVar8;
  pcVar10 = pcVar11 + -uVar8;
  pcVar11 = puVar4 + 0x44;
  for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
    *(undefined4 *)pcVar11 = *(undefined4 *)pcVar10;
    pcVar10 = pcVar10 + 4;
    pcVar11 = pcVar11 + 4;
  }
  for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
    *pcVar11 = *pcVar10;
    pcVar10 = pcVar10 + 1;
    pcVar11 = pcVar11 + 1;
  }
  iVar5 = *(int *)((int)this + param_1 * 4 + 0x4b34);
  if (iVar5 != -1) {
    iVar5 = FUN_004b6b30(iVar5);
    FUN_004b6bb0(this,iVar5,param_1);
    if (((char)DAT_00584428 == '\x06') && ((DAT_00584428 & 0x100) == 0)) {
      FUN_0041d1d0(DAT_005a7b78,1,0);
      FUN_0041d1d0(DAT_005a7b78,1,0);
      pvVar3 = DAT_005a7b78;
      if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
        FUN_00404ab0(DAT_005a7b78,3);
      }
      else {
        iVar6 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
        *(int *)((int)DAT_005a7b78 + 0x54) = iVar6;
        iVar7 = *(int *)((int)pvVar3 + 0x50);
        *(undefined4 *)(iVar7 + iVar6 * 8) = 1;
        *(int *)(iVar7 + 4 + iVar6 * 8) = iVar5;
      }
      FUN_004d05e0(DAT_005a7b78,DAT_00584428,DAT_0058442c);
    }
  }
  *(int *)((int)this + param_1 * 4 + 0x4b34) = param_2;
  if (((!bVar2) &&
      (*(undefined4 *)((int)this + local_8 * 4 + 0x4b74) = 1, (char)DAT_00584428 == '\x06')) &&
     ((DAT_00584428 & 0x100) == 0)) {
    if (*(int *)((int)this + 0x4b2c) == 0) {
      iVar5 = 1;
    }
    else {
      iVar5 = FUN_004b7dd0(*(int *)((int)this + 0x4b2c));
    }
    pvVar3 = DAT_005a7b78;
    if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
      *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
      FUN_004d4550(pvVar3);
      *(undefined4 *)((int)pvVar3 + 0x90) = 0;
      *(undefined4 *)((int)pvVar3 + 0xa4) = 0;
    }
    else {
      iVar6 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
      *(int *)((int)DAT_005a7b78 + 0x54) = iVar6;
      iVar7 = *(int *)((int)pvVar3 + 0x50);
      *(undefined4 *)(iVar7 + iVar6 * 8) = 1;
      *(uint *)(iVar7 + 4 + iVar6 * 8) = (param_1 + 1 != iVar5) - 1;
    }
    pvVar3 = DAT_005a7b78;
    if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
      *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
      FUN_004d4550(pvVar3);
      *(undefined4 *)((int)pvVar3 + 0x90) = 0;
      *(undefined4 *)((int)pvVar3 + 0xa4) = 0;
    }
    else {
      iVar7 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
      *(int *)((int)DAT_005a7b78 + 0x54) = iVar7;
      iVar5 = *(int *)((int)pvVar3 + 0x50);
      *(undefined4 *)(iVar5 + iVar7 * 8) = 1;
      *(undefined4 *)(iVar5 + 4 + iVar7 * 8) = 0xffffffff;
    }
    pvVar3 = DAT_005a7b78;
    if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
      *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
      FUN_004d4550(pvVar3);
      *(undefined4 *)((int)pvVar3 + 0x90) = 0;
      *(undefined4 *)((int)pvVar3 + 0xa4) = 0;
    }
    else {
      iVar5 = *(int *)((int)DAT_005a7b78 + 0x50);
      iVar7 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
      *(int *)((int)DAT_005a7b78 + 0x54) = iVar7;
      *(undefined4 *)(iVar5 + iVar7 * 8) = 1;
      *(int *)(iVar5 + 4 + iVar7 * 8) = local_8;
    }
    FUN_004d05e0(DAT_005a7b78,DAT_00584428,DAT_0058442c);
  }
  return 1;
}


