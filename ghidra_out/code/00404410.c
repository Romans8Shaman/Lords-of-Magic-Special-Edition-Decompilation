
void __thiscall FUN_00404410(void *this,int *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int local_8;
  int local_4;
  
  if (param_1[7] == *(int *)((int)this + 8)) {
    iVar1 = FUN_00403780(param_1[10]);
    if (-1 < iVar1) {
      FUN_004074b0((void *)((int)this + 0x1c),&local_8);
      iVar1 = FUN_004a51c0(&DAT_005ae958,local_8,local_4);
      *(int *)((int)this + 8) = iVar1;
      *(undefined4 *)this = 8;
      return;
    }
  }
  else {
    uVar2 = FUN_004a8b50(&DAT_005ae958,param_1[7],*(int *)((int)this + 8));
    iVar1 = FUN_004a8960(&DAT_005ae958,param_1[7],*(int *)((int)this + 8));
    iVar3 = FUN_004edc30(&DAT_005ae958,*(int *)((int)this + 8),param_1[0x15]);
    if ((iVar3 == 0) && (iVar1 < 3)) {
      iVar1 = FUN_00403780(param_1[10]);
      if (-1 < iVar1) {
        FUN_004074b0((void *)((int)this + 0x1c),&local_8);
        iVar1 = FUN_004a51c0(&DAT_005ae958,local_8,local_4);
        *(int *)((int)this + 8) = iVar1;
        *(undefined4 *)this = 8;
      }
      FUN_00401730(param_1);
      return;
    }
    FUN_00407fd0(this,param_1,0,iVar1,uVar2,0,*(int *)((int)this + 8));
  }
  return;
}


