
void __fastcall FUN_004717b0(int param_1)

{
  undefined4 *this;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00549f85;
  pvStack_c = ExceptionList;
  this = *(undefined4 **)(param_1 + 0x170);
  local_4 = 5;
  ExceptionList = &pvStack_c;
  if (this != (undefined4 *)0x0) {
    ExceptionList = &pvStack_c;
    (/*IC:004717e7*/**(code **)*this)(this,1);
  }
  local_4._0_1_ = 4;
  FUN_00539eb0(param_1 + 0x19c,0x38,4,thunk_FUN_00495590);
  DAT_00583648 = DAT_00583648 + -0x20;
  local_4._0_1_ = 3;
  FUN_00495590((int *)(param_1 + 300));
  local_4._0_1_ = 2;
  DAT_00583648 = DAT_00583648 + -0x20;
  FUN_00495590((int *)(param_1 + 0xf4));
  DAT_00583648 = DAT_00583648 + -0x20;
  local_4._0_1_ = 1;
  FUN_00495590((int *)(param_1 + 0x70));
  DAT_00583648 = DAT_00583648 + -0x20;
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_00495590((int *)(param_1 + 0x50));
  if (*(int *)(param_1 + 0x1c) != 0) {
    Ordinal_403(*(int *)(param_1 + 0x1c),s_C__lomse_source_storm_h_00555130,0x3f6,0);
  }
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  ExceptionList = pvStack_c;
  return;
}


