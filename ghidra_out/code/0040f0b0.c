
undefined4 FUN_0040f0b0(int *param_1)

{
  int iVar1;
  int *piVar2;
  int local_5c [4];
  byte local_4c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00549218;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0040eb30(local_5c);
  local_4 = 0;
  piVar2 = local_5c;
  for (iVar1 = 0x13; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar2 = *param_1;
    param_1 = param_1 + 1;
    piVar2 = piVar2 + 1;
  }
  if ((local_4c & 2) == 0) {
    FUN_0040efd0(&DAT_005aeed0,local_5c);
  }
  else {
    FUN_0040f140(&DAT_005aeed0,local_5c[1]);
  }
  local_4 = 0xffffffff;
  FUN_0040eb60();
  ExceptionList = local_c;
  return 1;
}


