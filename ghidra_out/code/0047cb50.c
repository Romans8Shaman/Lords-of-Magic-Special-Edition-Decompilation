
void __fastcall FUN_0047cb50(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_0054a254;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_0054d968;
  local_4 = 2;
  DAT_00583410 = DAT_00583410 + -0xc4;
  FUN_0047cb00((int)param_1);
  local_4._0_1_ = 1;
  thunk_FUN_0042d4f0((int)(param_1 + 0x25));
  local_4 = (uint)local_4._1_3_ << 8;
  thunk_FUN_004b0260(param_1 + 0x22);
  local_4 = 0xffffffff;
  FUN_004f59f0(param_1);
  ExceptionList = local_c;
  return;
}


