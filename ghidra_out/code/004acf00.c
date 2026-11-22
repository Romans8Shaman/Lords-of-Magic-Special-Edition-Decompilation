
undefined4 * __fastcall FUN_004acf00(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0054b198;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004f59a0(param_1);
  *param_1 = &PTR_FUN_0054daf8;
  DAT_00583a00 = DAT_00583a00 + 0x148;
  local_4 = 0;
  FUN_004acfe0((int)param_1);
  ExceptionList = local_c;
  return param_1;
}


