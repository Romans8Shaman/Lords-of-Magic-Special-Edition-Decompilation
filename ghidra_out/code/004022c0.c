
undefined4 __thiscall FUN_004022c0(void *this,void *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_00402150(param_1,*(int *)((int)this + 4));
  if (iVar1 == 0) {
    return 0;
  }
  iVar2 = FUN_00420620(iVar1);
  if ((iVar2 != 0) && (iVar2 = FUN_00458170(), iVar2 != 0)) {
    return 0;
  }
  iVar2 = FUN_004a8b50(&DAT_005ae958,*(int *)((int)param_1 + 0x1c),*(int *)(iVar1 + 0x1c));
  iVar1 = FUN_004019f0(param_1,iVar1,iVar2);
  if (iVar1 != 0) {
    FUN_0041efa0(param_1,3);
  }
  return 1;
}


