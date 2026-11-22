
undefined4 * __fastcall FUN_004b19f0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0054b337;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00539ff0(param_1 + 0x1c,200,4,FUN_004b26b0,FUN_004b2770);
  DAT_00583648 = DAT_00583648 + 0x20;
  local_4 = 0;
  FUN_00494610(param_1 + 0xe4);
  DAT_00583648 = DAT_00583648 + 0x20;
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_00494610(param_1 + 0xec);
  param_1[0xf4] = 0;
  param_1[0xf5] = 0;
  param_1[0x34] = 0;
  param_1[0x4c] = 0;
  param_1[0x66] = 0;
  param_1[0x7e] = 0;
  param_1[0x98] = 0;
  param_1[0xb0] = 0;
  param_1[0xca] = 0;
  param_1[0xe2] = 0;
  param_1[0xfb] = 0;
  *param_1 = 0xffffffff;
  param_1[1] = 0xffffffff;
  param_1[0x35] = 0x32;
  param_1[0x4d] = 0x40;
  param_1[0x67] = 0x86;
  param_1[0x7f] = 0x94;
  param_1[0x99] = 0xda;
  param_1[0xb1] = 0xe8;
  param_1[0xcb] = 0x12e;
  param_1[0xe3] = 0x13c;
  ExceptionList = local_c;
  return param_1;
}


