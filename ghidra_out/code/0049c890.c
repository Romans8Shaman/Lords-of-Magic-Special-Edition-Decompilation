
undefined4 * __fastcall FUN_0049c890(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0054ae9b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0052b240(param_1 + 0xc);
  *param_1 = &PTR_FUN_0054da30;
  DAT_0058372c = DAT_0058372c + 0x40;
  local_4 = 0;
  FUN_0049c830((int)param_1);
  param_1[0xd] = 0;
  FUN_0049da80(param_1,0);
  ExceptionList = local_c;
  return param_1;
}


