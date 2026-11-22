
void __thiscall FUN_00401fd0(void *this,void *param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = FUN_00482ac0(&DAT_005aa12c,*(int *)((int)this + 0xc),0);
  if ((uVar1 == 0) && (uVar1 = FUN_00482ac0(&DAT_005aa12c,*(int *)((int)this + 4),0), uVar1 == 0)) {
    return;
  }
  iVar2 = FUN_004a8b50(&DAT_005ae958,*(int *)((int)param_1 + 0x1c),*(int *)(uVar1 + 0x1c));
  FUN_004193e0(param_1,iVar2);
  return;
}


