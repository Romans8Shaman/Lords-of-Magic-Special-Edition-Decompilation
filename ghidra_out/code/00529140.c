
uint __fastcall FUN_00529140(int *param_1)

{
  int iVar1;
  
  if (param_1[5] == 0) {
    return 0;
  }
  if (*(int *)(param_1[5] + 4) == 3) {
    return 0;
  }
  iVar1 = FUN_00521e00(param_1);
  if (iVar1 == 0) {
    return 0;
  }
  return ~-(uint)(*(int *)(iVar1 + 0x20) != *(int *)(param_1[5] + 4)) & param_1[5];
}


