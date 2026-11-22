
void __fastcall FUN_004b19a0(int param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0054b2f8;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  op_sunlight();
  local_4 = 0xffffffff;
  FUN_004b1b20(param_1);
  ExceptionList = local_c;
  return;
}


