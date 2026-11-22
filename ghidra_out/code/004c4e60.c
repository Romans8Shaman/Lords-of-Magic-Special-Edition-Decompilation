
void __fastcall FUN_004c4e60(undefined4 *param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  if (param_1[3] != 0) {
    Ordinal_403(param_1[3],s_C__lomse_source_storm_h_00555130,0x3eb,0);
  }
  param_1[3] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[2] = 0;
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  return;
}


