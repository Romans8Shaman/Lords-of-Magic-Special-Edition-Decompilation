
void __thiscall FUN_00403d30(void *this,void *param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = FUN_00482ac0(&DAT_005aa12c,*(int *)((int)this + 4),0);
  if (((uVar1 == 0) || (iVar2 = FUN_00407d50(uVar1), iVar2 != 0)) ||
     (iVar2 = FUN_00506110(param_1,uVar1), iVar2 == 0)) {
    FUN_00403c30(this,param_1);
    return;
  }
  iVar2 = *(int *)((int)this + 8);
  if (iVar2 != -1) {
    if (iVar2 != *(int *)(uVar1 + 0x1c)) {
      iVar2 = FUN_004a8960(&DAT_005ae958,*(int *)((int)param_1 + 0x1c),iVar2);
      if (2 < iVar2) {
        *(undefined4 *)((int)this + 8) = 0xffffffff;
        FUN_004045a0(this,param_1);
        return;
      }
      FUN_00404f90((int)param_1,uVar1);
    }
    FUN_004045a0(this,param_1);
    return;
  }
  *(int *)((int)this + 8) = *(int *)(uVar1 + 0x1c);
  *(uint *)((int)param_1 + 0x30) = *(uint *)((int)param_1 + 0x30) | 2;
  iVar2 = FUN_00404e60(&DAT_005aa12c,*(int *)((int)param_1 + 0x28),*(undefined4 *)((int)this + 8));
  if (iVar2 == 0) {
    *(uint *)((int)param_1 + 0x30) = *(uint *)((int)param_1 + 0x30) & 0xfffffffd;
    FUN_00404f90((int)param_1,uVar1);
    return;
  }
  return;
}


