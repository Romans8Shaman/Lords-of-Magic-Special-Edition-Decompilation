
void __thiscall FUN_004bb030(void *this,int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  EnterCriticalSection(this);
  if (*(int *)((int)this + 0x18) == 3) {
    if (param_1 == (int *)0x0) {
      OutputDebugStringA(s_CPlanAttack__AnalyzePath___calcu_0055d69c);
    }
    else {
      iVar2 = 0;
      if (0 < *(int *)((int)this + 0x34)) {
        iVar3 = 0;
        do {
          iVar1 = *(int *)((int)this + 0x30) + iVar3;
          iVar2 = iVar2 + 1;
          iVar3 = iVar3 + 0x10;
          *(undefined4 *)(iVar1 + 8) = *(undefined4 *)(*param_1 + *(int *)(iVar1 + 4) * 4);
        } while (iVar2 < *(int *)((int)this + 0x34));
      }
    }
    *(undefined4 *)((int)this + 0x18) = 4;
  }
  LeaveCriticalSection(this);
  return;
}


