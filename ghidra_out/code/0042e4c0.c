
undefined4 * __fastcall FUN_0042e4c0(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00549648;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00411610(param_1);
  local_4 = 0;
  FUN_00411610(param_1 + 0x177);
  param_1[0x30c] = 0;
  param_1[0x30e] = 0;
  puVar1 = param_1 + 0x2fd;
  iVar2 = 0xf;
  do {
    puVar1[-0xf] = 0;
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  ExceptionList = local_c;
  return param_1;
}


