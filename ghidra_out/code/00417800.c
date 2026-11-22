
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00417800(int param_1,undefined4 unused_reg_1,undefined4 unused_stack_0)

{
  int iVar1;
  undefined *this;
  
  _DAT_005867a0 = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0x54c) = 0xffffffff;
  if (-1 < *(int *)(param_1 + 0x550)) {
    iVar1 = *(int *)(param_1 + 0x48);
    if ((iVar1 < 0) || (0xf < iVar1)) {
      this = (undefined *)0x0;
    }
    else {
      this = &DAT_005af194 + iVar1 * 0x1d84;
    }
    if (this != (undefined *)0x0) {
      FUN_004bb140(this,param_1);
    }
  }
  *(undefined4 *)(param_1 + 0x550) = 0xffffffff;
  if (-1 < *(int *)(param_1 + 0x538)) {
    FUN_00427950(&DAT_005aeefc,(int *)(param_1 + 0x538));
  }
  return;
}


