
undefined4 __cdecl FUN_005394d0(int *param_1)

{
  undefined4 uVar1;
  
  if ((*(byte *)(param_1 + 3) & 0x40) == 0) {
    FUN_0053cc50((uint)param_1);
    uVar1 = FUN_00539510(param_1);
    FUN_0053ccc0((uint)param_1);
    return uVar1;
  }
  param_1[3] = 0;
  return 0xffffffff;
}


