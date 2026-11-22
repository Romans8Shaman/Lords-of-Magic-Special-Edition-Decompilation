
void __fastcall FUN_0050a190(int param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_0054c216;
  local_c = ExceptionList;
  local_4 = 1;
  ExceptionList = &local_c;
  FUN_0050a4b0(param_1);
  local_4 = local_4 & 0xffffff00;
  FUN_004bede0((int *)(param_1 + 0x7c));
  local_4 = 0xffffffff;
  op_sunlight();
  ExceptionList = local_c;
  return;
}


