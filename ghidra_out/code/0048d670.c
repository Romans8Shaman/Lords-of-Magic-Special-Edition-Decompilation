
void __fastcall FUN_0048d670(int param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0054a8ab;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_0048d6d0(param_1);
  DAT_00583648 = DAT_00583648 + -0x20;
  local_4 = 0xffffffff;
  FUN_00495590((int *)(param_1 + 0x58));
  ExceptionList = local_c;
  return;
}


