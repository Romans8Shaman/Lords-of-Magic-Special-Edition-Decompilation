
undefined4 * __fastcall FUN_0044e850(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00549b28;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004f59a0(param_1);
  *param_1 = &PTR_FUN_0054d630;
  DAT_005792b0 = DAT_005792b0 + 0x34c;
  local_4 = 0;
  param_1[0x1d] = 0;
  param_1[0x20] = 0;
  param_1[0xd2] = 0;
  FUN_0044e700((int)param_1);
  ExceptionList = local_c;
  return param_1;
}


