
undefined4 __thiscall FUN_004c5020(void *this,undefined4 *param_1,uint param_2)

{
  int iVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar2;
  int iVar3;
  
  iVar1 = param_2 + 4;
  lpCriticalSection = (LPCRITICAL_SECTION)((int)this + 0x10);
  EnterCriticalSection(lpCriticalSection);
  iVar2 = *(int *)((int)this + 4);
  iVar3 = *(int *)this;
  if (iVar3 < iVar2) {
    iVar3 = (*(int *)((int)this + 8) - iVar2) + iVar3;
  }
  else if (iVar3 == iVar2) {
    iVar3 = *(int *)((int)this + 8);
  }
  else {
    iVar3 = iVar3 - iVar2;
  }
  if (iVar1 < iVar3) {
    FUN_004c4f20(this,&param_2,4);
    FUN_004c4f20(this,param_1,param_2);
    LeaveCriticalSection(lpCriticalSection);
    return 1;
  }
  LeaveCriticalSection(lpCriticalSection);
  return 0;
}


