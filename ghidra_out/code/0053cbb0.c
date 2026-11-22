
undefined4 __cdecl FUN_0053cbb0(int param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  undefined4 extraout_EAX;
  
  if (*(int *)(&DAT_00574980 + param_1 * 4) == 0) {
    lpCriticalSection = (LPCRITICAL_SECTION)FUN_0053c1f0(0x18);
    if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
      __amsg_exit(0x11);
    }
    FUN_0053cbb0(0x11);
    if (*(int *)(&DAT_00574980 + param_1 * 4) == 0) {
      InitializeCriticalSection(lpCriticalSection);
      *(LPCRITICAL_SECTION *)(&DAT_00574980 + param_1 * 4) = lpCriticalSection;
    }
    else {
      FUN_0053bce0((undefined *)lpCriticalSection);
    }
    FUN_0053cc30(0x11);
  }
  EnterCriticalSection(*(LPCRITICAL_SECTION *)(&DAT_00574980 + param_1 * 4));
  return extraout_EAX;
}


