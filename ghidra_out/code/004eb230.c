
undefined4 __fastcall FUN_004eb230(int param_1)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 0x24) == 0) || (*(int *)(param_1 + 4) == 0)) {
    return 0;
  }
  if (*(code **)(param_1 + 0x40) != (code *)0x0) {
    iVar1 = (/*IC:004eb24e*/**(code **)(param_1 + 0x40))();
    if (iVar1 == -1) {
      *(undefined4 *)(param_1 + 4) = 0;
      return 0;
    }
    *(undefined4 *)(param_1 + 4) = 1;
  }
  return 1;
}


