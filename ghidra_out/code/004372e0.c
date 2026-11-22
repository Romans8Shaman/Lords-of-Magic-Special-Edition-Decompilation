
void __fastcall FUN_004372e0(undefined4 *param_1)

{
  FUN_004c5170(param_1);
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 10));
  param_1[0x10] = 0;
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 10));
  return;
}


