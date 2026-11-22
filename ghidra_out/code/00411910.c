
void __fastcall FUN_00411910(undefined4 *param_1)

{
  undefined4 *puVar1;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_0054938c;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_0054d3a8;
  puVar1 = (undefined4 *)param_1[0x163];
  local_4 = 3;
  if (puVar1 != (undefined4 *)0x0) {
    (/*IC:00411952*/**(code **)*puVar1)(puVar1,1);
  }
  puVar1 = (undefined4 *)param_1[0x166];
  if (puVar1 != (undefined4 *)0x0) {
    (/*IC:00411962*/**(code **)*puVar1)(puVar1,1);
  }
  local_4._0_1_ = 2;
  DAT_005787c0 = DAT_005787c0 + -0x5dc;
  thunk_FUN_0042d4f0((int)(param_1 + 0x15a));
  local_4._0_1_ = 1;
  thunk_FUN_004b0260(param_1 + 0x157);
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_00539eb0(param_1 + 0x31,0x4c,0xf,thunk_FUN_00526ea0);
  local_4 = 0xffffffff;
  FUN_004f59f0(param_1);
  ExceptionList = pvStack_c;
  return;
}


