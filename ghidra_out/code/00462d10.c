
void __fastcall FUN_00462d10(int param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00549de8;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_004986b0(param_1);
  local_4 = 0xffffffff;
  FUN_00539eb0(param_1 + 0x5e4,0x10,10,op_sunlight);
  ExceptionList = local_c;
  return;
}


