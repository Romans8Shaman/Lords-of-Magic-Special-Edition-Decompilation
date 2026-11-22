
void __fastcall FUN_004b2770(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_0054b3ef;
  local_c = ExceptionList;
  local_4 = 3;
  ExceptionList = &local_c;
  FUN_004b2820(param_1);
  DAT_00583648 = DAT_00583648 + -0x20;
  local_4._0_1_ = 2;
  FUN_00495590(param_1 + 0x22);
  DAT_00583648 = DAT_00583648 + -0x20;
  local_4._0_1_ = 1;
  FUN_00495590(param_1 + 0x1a);
  local_4 = (uint)local_4._1_3_ << 8;
  DAT_00583648 = DAT_00583648 + -0x20;
  FUN_00495590(param_1 + 10);
  DAT_00583648 = DAT_00583648 + -0x20;
  local_4 = 0xffffffff;
  FUN_00495590(param_1 + 2);
  ExceptionList = local_c;
  return;
}


