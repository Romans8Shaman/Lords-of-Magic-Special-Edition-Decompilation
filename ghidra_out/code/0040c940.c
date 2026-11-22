
undefined4 FUN_0040c940(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_48 [13];
  uint local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00549098;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0040c580((int)local_48);
  puVar2 = local_48;
  for (iVar1 = 0xe; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *param_1;
    param_1 = param_1 + 1;
    puVar2 = puVar2 + 1;
  }
  local_4 = 0;
  FUN_0040c820(&DAT_005aeea0,local_48,local_14,1,0,0);
  local_4 = 0xffffffff;
  FUN_0040c5a0();
  ExceptionList = local_c;
  return 1;
}


