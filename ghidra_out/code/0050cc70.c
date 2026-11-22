
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0050cc70(int *param_1)

{
  int iVar1;
  undefined *this;
  int iVar2;
  int aiStack_14 [5];
  
  iVar1 = (/*IC:0050cc7a*/**(code **)(*param_1 + 0x3c))(param_1);
  if ((iVar1 < 0) || (0xf < iVar1)) {
    this = (undefined *)0x0;
  }
  else {
    this = &DAT_005af194 + iVar1 * 0x1d84;
  }
  if (this != (undefined *)0x0) {
    iVar1 = (/*IC:0050ccaf*/**(code **)(*param_1 + 0x40))(param_1,aiStack_14);
    if (iVar1 != 0) {
      FUN_004bfd40(this,aiStack_14);
    }
  }
  if ((int *)param_1[0x16] != (int *)0x0) {
    FUN_0041b6d0((int *)param_1[0x16]);
  }
  iVar1 = 0;
  if (0 < *(short *)((int)param_1 + 0x4e)) {
    iVar2 = 0;
    do {
      if (*(int *)(param_1[0x14] + 8 + iVar2) != 0) {
        _DAT_005cd1f4 = iVar1;
        FUN_0041b6d0(*(int **)(param_1[0x14] + 8 + iVar2));
      }
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + 0xc;
    } while (iVar1 < *(short *)((int)param_1 + 0x4e));
  }
  _DAT_005cd1f4 = 0xffffffff;
  return;
}


