
undefined4 * __fastcall FUN_0050a120(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0054c1eb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0049f230(param_1 + 6);
  local_4 = 0;
  FUN_004ef2c0(param_1 + 0x1f);
  param_1[0x21] = 0;
  *param_1 = 0xffffffff;
  param_1[1] = 0xffffffff;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[3] = 0xffffffff;
  param_1[4] = 0xffffffff;
  ExceptionList = local_c;
  return param_1;
}


