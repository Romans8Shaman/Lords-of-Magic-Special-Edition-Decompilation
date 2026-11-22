
undefined4 * __fastcall FUN_004ef6f0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0054b848;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004f59a0(param_1);
  local_4 = 0;
  *param_1 = &PTR_FUN_0054dd88;
  FUN_004ef600((int)param_1);
  ExceptionList = local_c;
  return param_1;
}


