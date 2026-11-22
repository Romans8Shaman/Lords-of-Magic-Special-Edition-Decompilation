
void __fastcall FUN_004380a0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_00549753;
  local_c = ExceptionList;
  local_4 = 1;
  ExceptionList = &local_c;
  FUN_00438100(param_1);
  local_4 = local_4 & 0xffffff00;
  thunk_FUN_00438150(param_1 + 0x14);
  local_4 = 0xffffffff;
  thunk_FUN_00438150(param_1);
  ExceptionList = local_c;
  return;
}


