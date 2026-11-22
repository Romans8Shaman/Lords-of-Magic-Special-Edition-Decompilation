
undefined4 * __fastcall FUN_004b1950(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0054b2d8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004b19f0(param_1);
  local_4 = 0;
  FUN_004b1bb0(param_1 + 0xfc);
  ExceptionList = local_c;
  return param_1;
}


