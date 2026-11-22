
undefined4 FUN_00508a60(int *param_1)

{
  int iVar1;
  undefined *this;
  
  iVar1 = *param_1;
  if ((iVar1 < 0) || (0xf < iVar1)) {
    this = (undefined *)0x0;
  }
  else {
    this = &DAT_005af194 + iVar1 * 0x1d84;
  }
  if (this == (undefined *)0x0) {
    return 0;
  }
  FUN_005080d0(this,param_1[1],param_1[2],param_1[3]);
  return 1;
}


