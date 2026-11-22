
void __fastcall FUN_0049c900(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0054aebb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_0054da30;
  local_4 = 0;
  DAT_0058372c = DAT_0058372c + -0x40;
  FUN_0049cac0((int)param_1);
  local_4 = 0xffffffff;
  thunk_FUN_004b9b30(param_1 + 0xc);
  ExceptionList = local_c;
  return;
}


