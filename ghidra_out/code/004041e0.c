
undefined4 __thiscall FUN_004041e0(void *this,void *param_1)

{
  int iVar1;
  uint uVar2;
  int local_8;
  int local_4;
  
  iVar1 = FUN_004074b0((void *)((int)this + 0x1c),&local_8);
  if (iVar1 != 0) {
    iVar1 = FUN_004a51c0(&DAT_005ae958,local_8,local_4);
    *(int *)((int)this + 8) = iVar1;
    iVar1 = FUN_00413530(param_1,iVar1);
    *(int *)((int)this + 8) = iVar1;
    if (iVar1 == -1) {
      FUN_00403c30(this,param_1);
      *(undefined4 *)((int)this + 0xc) = 0xffffffff;
    }
    return 1;
  }
  uVar2 = FUN_00482ac0(&DAT_005aa12c,*(int *)((int)this + 0xc),0);
  if (uVar2 != 0) {
    iVar1 = FUN_00407d50(uVar2);
    if (iVar1 == 0) {
      iVar1 = FUN_00506110(param_1,uVar2);
      if (iVar1 != 0) {
        *(undefined4 *)((int)this + 8) = 0xffffffff;
        *(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 0xc);
        *(undefined4 *)this = 2;
        return 0;
      }
    }
  }
  FUN_00403c30(this,param_1);
  *(undefined4 *)((int)this + 0xc) = 0xffffffff;
  return 0;
}


