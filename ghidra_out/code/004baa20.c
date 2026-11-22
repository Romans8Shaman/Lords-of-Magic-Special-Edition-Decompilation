
LPCRITICAL_SECTION __fastcall FUN_004baa20(LPCRITICAL_SECTION param_1)

{
  param_1[1].LockCount = 0;
  param_1[2].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
  param_1[2].LockCount = 0;
  param_1[2].RecursionCount = 0;
  param_1[2].OwningThread = (HANDLE)0x0;
  InitializeCriticalSection(param_1);
  return param_1;
}


