
uint __fastcall FUN_004c5140(int *param_1)

{
  int iVar1;
  int iVar2;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  iVar1 = *param_1;
  iVar2 = param_1[1];
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  return (uint)(iVar1 == iVar2);
}


