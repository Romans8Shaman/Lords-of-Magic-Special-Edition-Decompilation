
uint __fastcall FUN_0052be20(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined4 unused_reg_1;
  int *piVar7;
  int local_fa0 [1000];
  
  iVar1 = DAT_005cd2f0;
  if (0 < DAT_005cd2f0) {
    piVar7 = local_fa0;
    for (iVar4 = DAT_005cd2f0; iVar4 != 0; iVar4 = iVar4 + -1) {
      *piVar7 = -1;
      piVar7 = piVar7 + 1;
    }
  }
  iVar4 = 0;
  piVar6 = (int *)(param_1 + 0x18);
  piVar7 = piVar6;
  do {
    uVar2 = FUN_00482ac0(&DAT_005aa12c,*piVar7,0);
    if ((uVar2 != 0) && (*(int *)(uVar2 + 0x48) == *(int *)(&DAT_005a7d90 + DAT_005a7d8c * 0x400)))
    {
      uVar3 = FUN_00431160(uVar2,unused_reg_1,0);
      if (uVar3 != 0) {
        return uVar2;
      }
      iVar5 = *(int *)(uVar2 + 0xc4 + *(int *)(uVar2 + 0x50) * 0x4c);
      local_fa0[iVar5] = local_fa0[iVar5] + 1;
    }
    iVar4 = iVar4 + 1;
    piVar7 = piVar7 + 3;
  } while (iVar4 < 0x1e);
  iVar5 = 1;
  uVar2 = 0;
  iVar1 = iVar1 + -1;
  iVar4 = 0;
  if (1 < iVar1) {
    piVar7 = local_fa0;
    do {
      piVar7 = piVar7 + 1;
      if (local_fa0[0] < *piVar7) {
        iVar4 = iVar5;
        local_fa0[0] = *piVar7;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar1);
  }
  iVar5 = 0;
  if (0 < iVar1) {
    do {
      uVar2 = FUN_00482ac0(&DAT_005aa12c,*piVar6,0);
      if (((uVar2 != 0) &&
          (*(int *)(uVar2 + 0x48) == *(int *)(&DAT_005a7d90 + DAT_005a7d8c * 0x400))) &&
         (*(int *)(uVar2 + 0xc4 + *(int *)(uVar2 + 0x50) * 0x4c) == iVar4)) {
        return uVar2;
      }
      iVar5 = iVar5 + 1;
      piVar6 = piVar6 + 3;
    } while (iVar5 < iVar1);
  }
  return uVar2;
}


