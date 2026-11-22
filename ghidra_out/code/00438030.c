
undefined4 * __fastcall FUN_00438030(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00549733;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00438120(param_1);
  local_4 = 0;
  FUN_00438120(param_1 + 0x14);
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_00438180(param_1,300);
  FUN_00438180(param_1 + 0x14,900);
  ExceptionList = local_c;
  return param_1;
}


