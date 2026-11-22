
void __fastcall FUN_004c5170(undefined4 *param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  param_1[1] = 0;
  *param_1 = 0;
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  return;
}


