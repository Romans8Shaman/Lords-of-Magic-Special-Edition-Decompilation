
undefined4 * __fastcall FUN_00471590(undefined4 *param_1)

{
  int iVar1;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00549f1d;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  param_1[7] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  DAT_00583648 = DAT_00583648 + 0x20;
  local_4 = 0;
  FUN_00494610(param_1 + 0x14);
  DAT_00583648 = DAT_00583648 + 0x20;
  local_4._0_1_ = 1;
  FUN_00494610(param_1 + 0x1c);
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  DAT_00583648 = DAT_00583648 + 0x20;
  local_4._0_1_ = 2;
  FUN_00494610(param_1 + 0x3d);
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  DAT_00583648 = DAT_00583648 + 0x20;
  local_4._0_1_ = 3;
  FUN_00494610(param_1 + 0x4b);
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  local_4 = CONCAT31(local_4._1_3_,4);
  FUN_00539ff0(param_1 + 0x67,0x38,4,FUN_00474e40,thunk_FUN_00495590);
  *param_1 = 0;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0xffffffff;
  param_1[0x62] = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0xffff;
  param_1[0x3b] = 0xfffffc18;
  param_1[0x3c] = 0;
  param_1[1] = 0x10;
  param_1[2] = 0x10;
  if (param_1[7] != 0) {
    Ordinal_403(param_1[7],s_C__lomse_source_storm_h_00555130,0x3f6,0);
  }
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[9] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[10] = 0x27f;
  param_1[6] = 0;
  param_1[0xb] = 0x1df;
  iVar1 = Ordinal_401(0x180,s_C__lomse_source_storm_h_00555130,0x3fa,0);
  param_1[7] = iVar1;
  if (iVar1 != 0) {
    param_1[4] = 0x18;
  }
  param_1[0xc] = 0xffffffff;
  param_1[0xd] = 0xffffffff;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x2e] = 0;
  param_1[0x30] = 0;
  param_1[0x32] = 0;
  param_1[0x2f] = 0;
  param_1[0x31] = 0;
  param_1[0x10] = 0;
  param_1[0x12] = 0;
  param_1[0x34] = 0xff;
  param_1[0x35] = 0xff;
  param_1[0x36] = 0xff;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x33] = 0;
  param_1[0x2c] = 1000;
  param_1[0x2d] = 5000;
  ExceptionList = pvStack_c;
  return param_1;
}


