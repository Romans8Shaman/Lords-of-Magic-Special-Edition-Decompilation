
undefined4 __thiscall FUN_004b3580(void *this,LPCSTR param_1,int param_2)

{
  int iVar1;
  
  if (DAT_005867bc == 0) {
    return 0;
  }
  if (((param_2 != 0) || (-0x9c4 < DAT_00586770)) && ((param_2 != 1 || (-0x9c4 < DAT_00586778)))) {
    FUN_004b32c0(this);
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_0058662c);
    *(undefined4 *)((int)this + 8) = 0;
    iVar1 = FUN_004b3320(this,param_1);
    if (iVar1 == 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_0058662c);
      return 0;
    }
    FUN_0053a090((undefined1 *)((int)this + 0x2c),&DAT_0055ce54,(uint)param_1);
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_0058662c);
  }
  return 1;
}


