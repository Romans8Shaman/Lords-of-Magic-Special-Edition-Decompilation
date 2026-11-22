
undefined4 * __fastcall FUN_0043b930(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005497a8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004f59a0(param_1);
  *param_1 = &PTR_FUN_0054d4d8;
  DAT_00579080 = DAT_00579080 + 0x94;
  local_4 = 0;
  FUN_0043b8d0((int)param_1);
  ExceptionList = local_c;
  return param_1;
}


