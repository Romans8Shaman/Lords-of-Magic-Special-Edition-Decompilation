
void __fastcall FUN_004baa70(LPCRITICAL_SECTION param_1)

{
  EnterCriticalSection(param_1);
  param_1[1].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
  LeaveCriticalSection(param_1);
  return;
}


