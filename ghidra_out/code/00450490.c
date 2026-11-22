
undefined4 __fastcall FUN_00450490(int *param_1)

{
  int iVar1;
  undefined *this;
  int aiStack_14 [5];
  
  DAT_005ae94c = param_1;
  FUN_004d05e0(DAT_005a7b78,DAT_005a7d34,DAT_005a7d38);
  iVar1 = (/*IC:004504b9*/**(code **)(*param_1 + 0x3c))(param_1);
  if ((iVar1 < 0) || (0xf < iVar1)) {
    this = (undefined *)0x0;
  }
  else {
    this = &DAT_005af194 + iVar1 * 0x1d84;
  }
  if (this != (undefined *)0x0) {
    iVar1 = (/*IC:004504ee*/**(code **)(*param_1 + 0x40))(param_1,aiStack_14);
    if (iVar1 != 0) {
      FUN_004bfd40(this,aiStack_14);
    }
  }
  if ((int *)param_1[0x11] != (int *)0x0) {
    FUN_0041b6d0((int *)param_1[0x11]);
  }
  FUN_00453120((int)param_1);
  return 1;
}


