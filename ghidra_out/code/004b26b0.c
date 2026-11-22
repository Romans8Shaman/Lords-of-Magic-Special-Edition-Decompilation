
undefined4 * __fastcall FUN_004b26b0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0054b3b1;
  local_c = ExceptionList;
  DAT_00583648 = DAT_00583648 + 0x20;
  ExceptionList = &local_c;
  FUN_00494610(param_1 + 2);
  DAT_00583648 = DAT_00583648 + 0x20;
  local_4 = 0;
  FUN_00494610(param_1 + 10);
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  local_4._0_1_ = 1;
  DAT_00583648 = DAT_00583648 + 0x20;
  FUN_00494610(param_1 + 0x1a);
  DAT_00583648 = DAT_00583648 + 0x20;
  local_4 = CONCAT31(local_4._1_3_,2);
  FUN_00494610(param_1 + 0x22);
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  ExceptionList = local_c;
  return param_1;
}


