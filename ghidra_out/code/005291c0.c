
uint __fastcall FUN_005291c0(int *param_1)

{
  uint uVar1;
  
  uVar1 = FUN_00529140(param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return param_1[5] & (*(int *)(param_1[5] + 4) != 2) - 1;
}


