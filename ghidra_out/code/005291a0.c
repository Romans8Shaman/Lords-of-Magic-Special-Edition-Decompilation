
uint __fastcall FUN_005291a0(int *param_1)

{
  uint uVar1;
  
  uVar1 = FUN_00529140(param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return ~-(uint)(*(int *)(param_1[5] + 4) != 1) & param_1[5];
}


