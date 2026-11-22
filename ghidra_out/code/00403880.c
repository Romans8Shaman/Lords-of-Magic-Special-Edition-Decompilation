
undefined4 __thiscall FUN_00403880(void *this,int *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = FUN_00482ac0(&DAT_005aa12c,*(int *)((int)this + 4),0);
  if (uVar1 == 0) {
    return 0;
  }
  if (param_1[7] == *(int *)(uVar1 + 0x1c)) {
    return 0;
  }
  uVar2 = FUN_004a8b50(&DAT_005ae958,param_1[7],*(int *)(uVar1 + 0x1c));
  if (uVar2 == 8) {
    return 0;
  }
  iVar3 = FUN_004a8960(&DAT_005ae958,param_1[7],*(int *)(uVar1 + 0x1c));
  if (iVar3 < 3) {
    FUN_00401730(param_1);
    return 0;
  }
  FUN_00407fd0(this,param_1,uVar1,iVar3,uVar2,3,*(int *)(uVar1 + 0x1c));
  return 1;
}


