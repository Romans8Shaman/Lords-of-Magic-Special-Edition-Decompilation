
void __fastcall FUN_004bbe80(int param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_0054b5ea;
  local_c = ExceptionList;
  local_4 = 4;
  ExceptionList = &local_c;
  FUN_004bbe50(param_1);
  local_4._0_1_ = 3;
  FUN_0051b7d0(param_1 + 0x1c64);
  local_4._0_1_ = 2;
  FUN_00462d10(param_1 + 0x15e0);
  local_4._0_1_ = 1;
  FUN_00539eb0(param_1 + 0xd28,0x88,0x10,FUN_0050a190);
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_004bede0((int *)(param_1 + 0x34));
  local_4 = 0xffffffff;
  thunk_FUN_0042d4f0(param_1);
  ExceptionList = local_c;
  return;
}


