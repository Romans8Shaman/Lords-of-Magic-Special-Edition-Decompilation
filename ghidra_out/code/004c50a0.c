
undefined4 __thiscall FUN_004c50a0(void *this,undefined4 *param_1,int *param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  void *local_4;
  
  lpCriticalSection = (LPCRITICAL_SECTION)((int)this + 0x10);
  local_4 = this;
  EnterCriticalSection(lpCriticalSection);
  iVar1 = *(int *)this;
  if (iVar1 == *(int *)((int)this + 4)) {
    *param_2 = 0;
    LeaveCriticalSection(lpCriticalSection);
    return 0;
  }
  FUN_004c4fa0(this,&local_4,4);
  if (param_1 == (undefined4 *)0x0) {
    *(int *)this = iVar1;
    *param_2 = (int)local_4;
  }
  else {
    if (*param_2 < (int)local_4) {
      *(int *)this = iVar1;
      *param_2 = (int)local_4;
      LeaveCriticalSection(lpCriticalSection);
      return 0;
    }
    *param_2 = (int)local_4;
    FUN_004c4fa0(this,param_1,(uint)local_4);
  }
  LeaveCriticalSection(lpCriticalSection);
  return 1;
}


