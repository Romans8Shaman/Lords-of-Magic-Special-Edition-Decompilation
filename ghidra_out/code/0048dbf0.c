
void __thiscall FUN_0048dbf0(void *this,undefined4 param_1,uint param_2,LONG param_3)

{
  int iVar1;
  void *pvVar2;
  
  iVar1 = FUN_00492790(&DAT_005a7b50,*(int *)((int)this + 0xc));
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0xd0) = 0xffffffff;
    return;
  }
  pvVar2 = (void *)FUN_00493330(&DAT_005a7b50,*(int *)((int)this + 0xc));
  if (pvVar2 != (void *)0x0) {
    FUN_00495900(pvVar2,0);
    return;
  }
  iVar1 = FUN_00492820(&DAT_005a7b50,*(int *)((int)this + 0xc));
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x230) = 0;
    return;
  }
  pvVar2 = (void *)FUN_005005f0(&DAT_00584ae8,*(uint *)((int)this + 0xc));
  if (pvVar2 != (void *)0x0) {
    FUN_0048dc80(pvVar2,param_1,param_2,param_3);
  }
  return;
}


