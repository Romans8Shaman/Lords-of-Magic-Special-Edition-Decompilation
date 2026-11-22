
uint __fastcall FUN_00529180(int *param_1)

{
  uint uVar1;
  
  uVar1 = FUN_00529140(param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return ~-(uint)(*(int *)(param_1[5] + 4) != 0) & param_1[5];
}


