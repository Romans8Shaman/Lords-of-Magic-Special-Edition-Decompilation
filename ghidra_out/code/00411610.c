
undefined4 * __fastcall FUN_00411610(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005492ec;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004f59a0(param_1);
  local_4 = 0;
  *(undefined1 *)(param_1 + 0x30) = 0;
  FUN_00539ff0(param_1 + 0x31,0x4c,0xf,FUN_00526e40,thunk_FUN_00526ea0);
  local_4._0_1_ = 1;
  FUN_004c3990(param_1 + 0x157);
  local_4._0_1_ = 2;
  FUN_0042d4c0(param_1 + 0x15a);
  *param_1 = &PTR_FUN_0054d3a8;
  DAT_005787c0 = DAT_005787c0 + 0x5dc;
  local_4 = CONCAT31(local_4._1_3_,3);
  FUN_00411520((int)param_1);
  ExceptionList = local_c;
  return param_1;
}


