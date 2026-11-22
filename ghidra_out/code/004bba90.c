
undefined4 * __fastcall FUN_004bba90(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0054b58a;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0042d4c0(param_1);
  local_4 = 0;
  FUN_004ef2c0(param_1 + 0xd);
  local_4._0_1_ = 1;
  FUN_00539ff0(param_1 + 0x34a,0x88,0x10,FUN_0050a120,FUN_0050a190);
  local_4._0_1_ = 2;
  FUN_00462c90(param_1 + 0x578);
  local_4._0_1_ = 3;
  FUN_0051b790(param_1 + 0x719);
  local_4 = CONCAT31(local_4._1_3_,4);
  param_1[0x56a] = 0;
  param_1[0x577] = 1;
  param_1[10] = 0;
  param_1[0x574] = 0xffffffff;
  param_1[0x575] = 0xffffffff;
  param_1[0x570] = 0xffffffff;
  param_1[0x571] = 0xffffffff;
  param_1[0xb] = 0;
  param_1[0x56d] = 0xffffffff;
  param_1[0x56e] = 0xffffffff;
  param_1[0x56f] = 0xffffffff;
  param_1[0x10] = 0;
  param_1[0x19] = 0xffffffff;
  FUN_00508090((int)param_1);
  ExceptionList = local_c;
  return param_1;
}


