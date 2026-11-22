
undefined4 * __fastcall FUN_004c5b40(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0054b6cb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004c5200(param_1 + 4);
  local_4 = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x6f));
  FUN_004c5aa0(param_1);
  ExceptionList = local_c;
  return param_1;
}


