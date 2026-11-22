
void FUN_004087b0(void *param_1)

{
  void *this;
  uint uVar1;
  int iVar2;
  int iVar3;
  
  this = param_1;
  if (*(int *)((int)param_1 + 0x538) < 0) {
    return;
  }
  uVar1 = FUN_00482ac0(&DAT_005aa12c,*(int *)((int)param_1 + 0x54c),0);
  if (uVar1 == 0) {
    return;
  }
  iVar2 = FUN_00407d50(uVar1);
  if ((iVar2 == 0) &&
     (((iVar2 = FUN_00420620(uVar1), iVar2 == 0 || (iVar2 = FUN_00458170(), iVar2 == 0)) &&
      (iVar2 = FUN_00506110(this,uVar1), iVar2 != 0)))) {
    if (*(int *)(uVar1 + 0x1c) == *(int *)((int)this + 0x548)) {
      return;
    }
    iVar3 = FUN_004a8960(&DAT_005ae958,*(int *)((int)this + 0x548),*(int *)(uVar1 + 0x1c));
    param_1 = *(void **)((int)this + 0x538);
    iVar2 = 0;
    while (-1 < (int)param_1) {
      iVar2 = iVar2 + 1;
      FUN_00427880(&DAT_005aeefc,(int *)&param_1,0);
    }
    if (iVar3 <= iVar2 >> 1) {
      return;
    }
  }
  FUN_004176d0(this,0);
  return;
}


