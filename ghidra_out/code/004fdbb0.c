
void __fastcall FUN_004fdbb0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0054be0e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_0054e860;
  local_4 = 0;
  param_1[0x6b] = param_1[0x6b] + -0x202cc;
  FUN_00519980((int)param_1);
  DAT_00583648 = DAT_00583648 + -0x20;
  local_4 = 0xffffffff;
  FUN_00495590(param_1 + 0xa1);
  ExceptionList = local_c;
  return;
}


