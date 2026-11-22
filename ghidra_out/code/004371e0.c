
undefined4 * __fastcall FUN_004371e0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005496f3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004c4e20(param_1);
  local_4 = 0;
  FUN_00438030(param_1 + 0x1b);
  local_4 = CONCAT31(local_4._1_3_,1);
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x10] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 10));
  FUN_004c4eb0(param_1,0x1200);
  ExceptionList = local_c;
  return param_1;
}


