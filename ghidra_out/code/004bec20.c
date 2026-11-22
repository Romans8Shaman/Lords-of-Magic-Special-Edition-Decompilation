
undefined4 __thiscall FUN_004bec20(void *this,int *param_1)

{
  int iVar1;
  undefined *this_00;
  
  iVar1 = *param_1;
  if ((iVar1 < 0) || (0xf < iVar1)) {
    this_00 = (undefined *)0x0;
  }
  else {
    this_00 = &DAT_005af194 + iVar1 * 0x1d84;
  }
  if (this_00 == (undefined *)0x0) {
    return 0;
  }
  FUN_004bde00(this_00,param_1[2],param_1[1],param_1[3]);
  FUN_004869d0(this,*param_1);
  return 1;
}


