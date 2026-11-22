
void __fastcall FUN_0051b7d0(int param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0054c39e;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_0051b820(param_1);
  local_4 = 0xffffffff;
  FUN_004baa40((LPCRITICAL_SECTION)(param_1 + 0xe0));
  ExceptionList = local_c;
  return;
}


