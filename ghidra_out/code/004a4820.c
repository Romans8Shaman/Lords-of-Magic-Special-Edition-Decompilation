
undefined1 * __fastcall FUN_004a4820(undefined1 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0054b091;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004f5c90((undefined4 *)(param_1 + 0x1c));
  local_4 = 0;
  FUN_00508ab0((undefined4 *)(param_1 + 0xd8));
  DAT_00583648 = DAT_00583648 + 0x20;
  local_4._0_1_ = 1;
  FUN_00494610((undefined4 *)(param_1 + 0x234));
  local_4._0_1_ = 2;
  DAT_00583648 = DAT_00583648 + 0x20;
  FUN_00494610((undefined4 *)(param_1 + 0x254));
  local_4._0_1_ = 3;
  FUN_00498b70((undefined4 *)(param_1 + 0x278));
  local_4._0_1_ = 4;
  FUN_00531a60((undefined4 *)(param_1 + 0x2e8));
  DAT_005838a4 = DAT_005838a4 + 0x308;
  local_4 = CONCAT31(local_4._1_3_,5);
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x14) = 1;
  *param_1 = 1;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0x80;
  *(undefined4 *)(param_1 + 0x4c) = 0x3f;
  *(undefined4 *)(param_1 + 0x50) = 3;
  *(undefined4 *)(param_1 + 4) = 1;
  *(undefined4 *)(param_1 + 0xa8) = 0;
  *(undefined4 *)(param_1 + 0xac) = 0;
  *(undefined4 *)(param_1 + 0x274) = 0x3dc00000;
  FUN_004b13f0((int)param_1);
  *(undefined4 *)(param_1 + 0x2e4) = 0;
  *(undefined4 *)(param_1 + 0x2d0) = 0;
  *(undefined4 *)(param_1 + 0x2d8) = 0;
  *(undefined4 *)(param_1 + 0x2cc) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2e0) = 0x42340000;
  ExceptionList = local_c;
  return param_1;
}


