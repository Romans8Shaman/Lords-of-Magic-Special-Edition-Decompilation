
void __fastcall FUN_004c5aa0(undefined4 *param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x6f));
  *param_1 = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[0x6b] = 0;
  param_1[0x6c] = 0;
  param_1[0x6d] = 0;
  FUN_004c5230(param_1 + 4,&DAT_00579274);
  param_1[0x6e] = 0;
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x6f));
  return;
}


