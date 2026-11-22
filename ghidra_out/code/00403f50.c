
void __thiscall FUN_00403f50(void *this,int *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  if (param_1[7] == *(int *)((int)this + 8)) {
    if ((*(int *)this == 0x32) && (uVar1 = FUN_0047c9e0(&DAT_005aa12c,param_1[0x12]), uVar1 != 0)) {
      iVar2 = FUN_00407a10((int)param_1);
      if (iVar2 == 0) {
        FUN_00403c30(this,param_1);
        return;
      }
      return;
    }
  }
  else {
    uVar1 = FUN_004a8b50(&DAT_005ae958,param_1[7],*(int *)((int)this + 8));
    iVar2 = FUN_004a8960(&DAT_005ae958,param_1[7],*(int *)((int)this + 8));
    iVar3 = FUN_004edc30(&DAT_005ae958,*(int *)((int)this + 8),param_1[0x15]);
    if ((iVar3 != 0) || (2 < iVar2)) {
      FUN_00407fd0(this,param_1,0,iVar2,uVar1,0,*(int *)((int)this + 8));
      return;
    }
  }
  FUN_00403c30(this,param_1);
  return;
}


