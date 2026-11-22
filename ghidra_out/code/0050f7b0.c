
undefined4 __thiscall FUN_0050f7b0(void *this,undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = FUN_004b0ee0(&DAT_005cd304,*(int *)((int)this + 0x48));
  if (iVar1 == 0) {
    return 0;
  }
  *param_1 = *(undefined4 *)(iVar1 + 0x20);
  return *(undefined4 *)(iVar1 + 0x24);
}


