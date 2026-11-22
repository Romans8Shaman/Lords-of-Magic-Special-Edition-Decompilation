
undefined4 * __fastcall FUN_0047bd20(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0054a18b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004c4af0(param_1 + 2);
  local_4 = 0;
  FUN_004c4af0(param_1 + 8);
  param_1[1] = 0;
  *param_1 = 0;
  param_1[0x1a] = 0;
  param_1[0x21] = 0;
  ExceptionList = local_c;
  return param_1;
}


