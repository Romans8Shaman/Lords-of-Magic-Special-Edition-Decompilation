
void __thiscall FUN_00404370(void *this,int *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar1 = FUN_004042b0(this,param_1);
  if (iVar1 != 0) {
    return;
  }
  iVar1 = param_1[7];
  iVar3 = *(int *)((int)this + 8);
  if (iVar1 == iVar3) {
    iVar1 = FUN_004041e0(this,param_1);
    if (iVar1 == 0) {
      return;
    }
    iVar1 = param_1[7];
    iVar3 = *(int *)((int)this + 8);
    if (iVar1 == iVar3) {
      return;
    }
  }
  uVar2 = FUN_004a8b50(&DAT_005ae958,iVar1,iVar3);
  iVar1 = FUN_004a8960(&DAT_005ae958,param_1[7],*(int *)((int)this + 8));
  iVar3 = FUN_004edc30(&DAT_005ae958,*(int *)((int)this + 8),param_1[0x15]);
  if ((iVar3 == 0) && (iVar1 < 3)) {
    FUN_004041e0(this,param_1);
    return;
  }
  FUN_00407fd0(this,param_1,0,iVar1,uVar2,0,*(int *)((int)this + 8));
  return;
}


