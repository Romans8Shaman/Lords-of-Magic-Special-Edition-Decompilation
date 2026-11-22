
void FUN_00402020(void *param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  int local_20 [8];
  
  iVar4 = 0;
  piVar3 = local_20;
  do {
    iVar1 = FUN_004a8300(&DAT_005ae958,
                         *(int *)(DAT_005ae970 + (iVar4 + *(int *)((int)param_1 + 0x1c) * 8) * 4),0)
    ;
    uVar2 = FUN_00482ac0(&DAT_005aa12c,iVar1,0);
    if (((uVar2 == 0) || (*(int *)(uVar2 + 0x48) == *(int *)((int)param_1 + 0x48))) ||
       (*(int *)(uVar2 + 0x74) != *(int *)((int)param_1 + 0x28))) {
      *piVar3 = 0;
    }
    else {
      *piVar3 = 1;
    }
    iVar4 = iVar4 + 1;
    piVar3 = piVar3 + 1;
  } while (iVar4 < 8);
  iVar4 = 0;
  piVar3 = &DAT_00555158;
  do {
    uVar2 = *(int *)((int)param_1 + 0x44) + *piVar3 & 7;
    if (local_20[uVar2] != 0) break;
    piVar3 = piVar3 + 1;
    iVar4 = iVar4 + 1;
  } while ((int)piVar3 < 0x555178);
  if (7 < iVar4) {
    for (iVar4 = FUN_004fbe60(&DAT_005ae974,0,9); iVar4 != 0;
        iVar4 = FUN_004fbe60(&DAT_005ae974,iVar4,9)) {
      if (*(int *)(iVar4 + 0x5c) == *(int *)((int)param_1 + 0x28)) {
        iVar1 = FUN_004a8b50(&DAT_005ae958,*(int *)((int)param_1 + 0x1c),*(int *)(iVar4 + 0x1c));
        local_20[iVar1] = 1;
      }
    }
    iVar4 = 0;
    piVar3 = &DAT_00555158;
    do {
      uVar2 = *(int *)((int)param_1 + 0x44) + *piVar3 & 7;
      if (local_20[uVar2] != 0) break;
      piVar3 = piVar3 + 1;
      iVar4 = iVar4 + 1;
    } while ((int)piVar3 < 0x555178);
    if (7 < iVar4) {
      return;
    }
  }
  FUN_004193e0(param_1,uVar2);
  return;
}


