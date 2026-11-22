
undefined4 __fastcall FUN_00431310(int *param_1)

{
  short sVar1;
  int iVar2;
  undefined *puVar3;
  void *pvVar4;
  uint uVar5;
  short *psVar6;
  undefined *puVar7;
  undefined *puVar8;
  int local_8;
  int local_4;
  
  FUN_004311a0((int)param_1);
  local_8 = 0;
  do {
    if (local_8 == 0) {
      FUN_00482ac0(&DAT_005aa12c,*param_1,0);
      FUN_00482ac0(&DAT_005aa12c,param_1[1],0);
      iVar2 = param_1[2];
      if ((iVar2 < 0) || (0xf < iVar2)) {
        puVar7 = (undefined *)0x0;
      }
      else {
        puVar7 = &DAT_005af194 + iVar2 * 0x1d84;
      }
      iVar2 = param_1[3];
      if ((iVar2 < 0) || (0xf < iVar2)) {
        puVar8 = (undefined *)0x0;
      }
      else {
        puVar8 = &DAT_005af194 + iVar2 * 0x1d84;
      }
    }
    else {
      FUN_00482ac0(&DAT_005aa12c,*param_1,0);
      FUN_00482ac0(&DAT_005aa12c,param_1[1],0);
      iVar2 = param_1[2];
      if ((iVar2 < 0) || (0xf < iVar2)) {
        puVar8 = (undefined *)0x0;
      }
      else {
        puVar8 = &DAT_005af194 + iVar2 * 0x1d84;
      }
      iVar2 = param_1[3];
      if ((iVar2 < 0) || (0xf < iVar2)) {
        puVar7 = (undefined *)0x0;
      }
      else {
        puVar7 = &DAT_005af194 + iVar2 * 0x1d84;
      }
    }
    local_4 = 7;
    psVar6 = (short *)((int)param_1 + (uint)(local_8 != 0) * 0x2a + 0x28);
    do {
      switch((char)psVar6[2]) {
      case '\x01':
        *(int *)(puVar7 + 0xcfc) = *(int *)(puVar7 + 0xcfc) + *psVar6 * 0x100;
        *(uint *)(puVar7 + 0x15d8) = *(uint *)(puVar7 + 0x15d8) | 0x40;
        *(int *)(puVar8 + 0xcfc) = *(int *)(puVar8 + 0xcfc) + *psVar6 * -0x100;
        *(uint *)(puVar8 + 0x15d8) = *(uint *)(puVar8 + 0x15d8) | 0x40;
        iVar2 = *(int *)(puVar8 + 0x15a8);
        if ((iVar2 < 0) || (0xf < iVar2)) {
          puVar3 = (undefined *)0x0;
        }
        else {
          puVar3 = puVar7 + iVar2 * 0x88 + 0xd28;
        }
        if ((puVar3 != (undefined *)0x0) &&
           (sVar1 = *psVar6, iVar2 = *(int *)(puVar3 + 0x48),
           *(int *)(puVar3 + 0x48) = iVar2 - sVar1, iVar2 - sVar1 < 0)) {
          *(undefined4 *)(puVar3 + 0x48) = 0;
        }
        iVar2 = *(int *)(puVar7 + 0x15a8);
        if ((iVar2 < 0) || (0xf < iVar2)) {
          puVar3 = (undefined *)0x0;
        }
        else {
          puVar3 = puVar8 + iVar2 * 0x88 + 0xd28;
        }
        if (puVar3 != (undefined *)0x0) {
          *(int *)(puVar3 + 0x48) = *(int *)(puVar3 + 0x48) + (int)*psVar6;
        }
        break;
      case '\x02':
        *(int *)(puVar7 + 0xd04) = *(int *)(puVar7 + 0xd04) + *psVar6 * 0x100;
        *(uint *)(puVar7 + 0x15d8) = *(uint *)(puVar7 + 0x15d8) | 0x40;
        *(int *)(puVar8 + 0xd04) = *(int *)(puVar8 + 0xd04) + *psVar6 * -0x100;
        *(uint *)(puVar8 + 0x15d8) = *(uint *)(puVar8 + 0x15d8) | 0x40;
        iVar2 = *(int *)(puVar8 + 0x15a8);
        if ((iVar2 < 0) || (0xf < iVar2)) {
          puVar3 = (undefined *)0x0;
        }
        else {
          puVar3 = puVar7 + iVar2 * 0x88 + 0xd28;
        }
        if ((puVar3 != (undefined *)0x0) &&
           (sVar1 = *psVar6, iVar2 = *(int *)(puVar3 + 0x40),
           *(int *)(puVar3 + 0x40) = iVar2 - sVar1, iVar2 - sVar1 < 0)) {
          *(undefined4 *)(puVar3 + 0x40) = 0;
        }
        iVar2 = *(int *)(puVar7 + 0x15a8);
        if ((iVar2 < 0) || (0xf < iVar2)) {
          puVar3 = (undefined *)0x0;
        }
        else {
          puVar3 = puVar8 + iVar2 * 0x88 + 0xd28;
        }
        if (puVar3 != (undefined *)0x0) {
          *(int *)(puVar3 + 0x40) = *(int *)(puVar3 + 0x40) + (int)*psVar6;
        }
        break;
      case '\x03':
        *(int *)(puVar7 + 0xd08) = *(int *)(puVar7 + 0xd08) + *psVar6 * 0x100;
        *(uint *)(puVar7 + 0x15d8) = *(uint *)(puVar7 + 0x15d8) | 0x40;
        *(int *)(puVar8 + 0xd08) = *(int *)(puVar8 + 0xd08) + *psVar6 * -0x100;
        *(uint *)(puVar8 + 0x15d8) = *(uint *)(puVar8 + 0x15d8) | 0x40;
        iVar2 = *(int *)(puVar8 + 0x15a8);
        if ((iVar2 < 0) || (0xf < iVar2)) {
          puVar3 = (undefined *)0x0;
        }
        else {
          puVar3 = puVar7 + iVar2 * 0x88 + 0xd28;
        }
        if ((puVar3 != (undefined *)0x0) &&
           (sVar1 = *psVar6, iVar2 = *(int *)(puVar3 + 0x44),
           *(int *)(puVar3 + 0x44) = iVar2 - sVar1, iVar2 - sVar1 < 0)) {
          *(undefined4 *)(puVar3 + 0x44) = 0;
        }
        iVar2 = *(int *)(puVar7 + 0x15a8);
        if ((iVar2 < 0) || (0xf < iVar2)) {
          puVar3 = (undefined *)0x0;
        }
        else {
          puVar3 = puVar8 + iVar2 * 0x88 + 0xd28;
        }
        if (puVar3 != (undefined *)0x0) {
          *(int *)(puVar3 + 0x44) = *(int *)(puVar3 + 0x44) + (int)*psVar6;
        }
        break;
      case '\x04':
        *(int *)(puVar7 + 0xd0c) = *(int *)(puVar7 + 0xd0c) + *psVar6 * 0x100;
        *(uint *)(puVar7 + 0x15d8) = *(uint *)(puVar7 + 0x15d8) | 0x40;
        *(int *)(puVar8 + 0xd0c) = *(int *)(puVar8 + 0xd0c) + *psVar6 * -0x100;
        *(uint *)(puVar8 + 0x15d8) = *(uint *)(puVar8 + 0x15d8) | 0x40;
        break;
      case '\x06':
        FUN_004bef40(puVar7 + 0x34,(int)*psVar6);
        FUN_004a1c10((int)puVar8,(int)puVar7,(int)*psVar6);
        break;
      case '\a':
        FUN_004317f0(param_1,puVar8,(int)puVar7,(int)*psVar6);
        break;
      case '\b':
        pvVar4 = (void *)FUN_00482ac0(&DAT_005aa12c,(int)*psVar6,3);
        if (*(int **)((int)pvVar4 + 0x44) != (int *)0x0) {
          FUN_004245a0(*(int **)((int)pvVar4 + 0x44));
        }
        *(undefined4 *)((int)pvVar4 + 0x68) = *(undefined4 *)(puVar7 + 0x15a8);
        FUN_0044ea50(pvVar4,*(int *)(puVar7 + 0x15a8));
        break;
      case '\t':
        pvVar4 = (void *)FUN_00482ac0(&DAT_005aa12c,(int)*psVar6,2);
        if (*(int **)((int)pvVar4 + 0x48) != (int *)0x0) {
          FUN_004245a0(*(int **)((int)pvVar4 + 0x48));
        }
        *(undefined4 *)((int)pvVar4 + 0x4c) = *(undefined4 *)(puVar7 + 0x15a8);
        FUN_00446580(pvVar4,*(int *)(puVar7 + 0x15a8));
        break;
      case '\v':
        uVar5 = FUN_00482ac0(&DAT_005aa12c,(int)*psVar6,1);
        if (*(int **)(uVar5 + 0x58) != (int *)0x0) {
          FUN_004245a0(*(int **)(uVar5 + 0x58));
        }
        *(undefined4 *)(uVar5 + 0x5c) = *(undefined4 *)(puVar7 + 0x15a8);
      }
      psVar6 = psVar6 + 3;
      local_4 = local_4 + -1;
    } while (local_4 != 0);
    local_8 = local_8 + 1;
  } while (local_8 < 2);
  return 1;
}


