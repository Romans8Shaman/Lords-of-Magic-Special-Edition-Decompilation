
void __fastcall FUN_0047bd80(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_0054a1b6;
  local_c = ExceptionList;
  local_4 = 1;
  ExceptionList = &local_c;
  FUN_004c4bb0(param_1 + 2);
  FUN_004c4bb0(param_1 + 8);
  param_1[1] = 0;
  *param_1 = 0;
  if (param_1[0x21] != 0) {
    DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1b));
    DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xe));
    DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x14));
  }
  local_4 = local_4 & 0xffffff00;
  thunk_FUN_004c4bb0(param_1 + 8);
  local_4 = 0xffffffff;
  thunk_FUN_004c4bb0(param_1 + 2);
  ExceptionList = local_c;
  return;
}


