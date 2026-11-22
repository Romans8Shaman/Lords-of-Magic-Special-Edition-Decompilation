
undefined4 * __fastcall FUN_0047ca70(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0054a224;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004f59a0(param_1);
  local_4 = 0;
  param_1[0x14] = 0xffffffff;
  param_1[0x15] = 0xffffffff;
  param_1[0x16] = 0xffffffff;
  param_1[0x17] = 100;
  param_1[0x18] = 0xffffffff;
  FUN_004c3990(param_1 + 0x22);
  local_4._0_1_ = 1;
  FUN_0042d4c0(param_1 + 0x25);
  *param_1 = &PTR_FUN_0054d968;
  DAT_00583410 = DAT_00583410 + 0xc4;
  local_4 = CONCAT31(local_4._1_3_,2);
  FUN_0047ca20((int)param_1);
  ExceptionList = local_c;
  return param_1;
}


