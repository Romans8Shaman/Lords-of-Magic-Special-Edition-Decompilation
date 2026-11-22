
void __fastcall FUN_004c5ba0(int *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0054b6eb;
  pvStack_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  FUN_004c5c00(param_1);
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x6f));
  local_4 = 0xffffffff;
  FUN_004c5210((int)(param_1 + 4));
  ExceptionList = pvStack_c;
  return;
}


