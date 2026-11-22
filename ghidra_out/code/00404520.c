
void __thiscall FUN_00404520(void *this,int *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = FUN_004a8b50(&DAT_005ae958,param_1[7],*(int *)((int)this + 8));
  iVar2 = FUN_004a8960(&DAT_005ae958,param_1[7],*(int *)((int)this + 8));
  iVar3 = FUN_004edc30(&DAT_005ae958,*(int *)((int)this + 8),param_1[0x15]);
  if ((iVar3 == 0) && (iVar2 < 2)) {
    FUN_004045a0(this,param_1);
    return;
  }
  FUN_00407fd0(this,param_1,0,iVar2,uVar1,0,*(int *)((int)this + 8));
  return;
}


