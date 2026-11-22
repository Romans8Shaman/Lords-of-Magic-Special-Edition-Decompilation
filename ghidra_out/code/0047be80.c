
undefined4 __thiscall FUN_0047be80(void *this,undefined4 *param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  uint local_c [3];
  
  lpCriticalSection = (LPCRITICAL_SECTION)((int)this + 0x38);
  EnterCriticalSection(lpCriticalSection);
  iVar1 = FUN_004c4c10((void *)((int)this + 8),param_1);
  LeaveCriticalSection(lpCriticalSection);
  while (iVar1 == 0) {
    FUN_00474a60(&DAT_005a9e04,local_c);
    FUN_00474af0(&DAT_005a9e04);
    Sleep(100);
    FUN_00474a90(&DAT_005a9e04,local_c);
    EnterCriticalSection(lpCriticalSection);
    iVar1 = FUN_004c4c10((void *)((int)this + 8),param_1);
    LeaveCriticalSection(lpCriticalSection);
  }
  SetEvent(*(HANDLE *)this);
  return 1;
}


