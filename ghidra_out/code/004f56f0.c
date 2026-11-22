
undefined4 * __fastcall FUN_004f56f0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0054b993;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_LAB_0054de30;
  local_4 = 0;
  FUN_0052b240(param_1 + 4);
  local_4 = CONCAT31(local_4._1_3_,1);
  *param_1 = &PTR_LAB_0054de68;
  FUN_004f5750((int)param_1);
  ExceptionList = local_c;
  return param_1;
}


