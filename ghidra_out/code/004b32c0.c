
void __fastcall FUN_004b32c0(int *param_1)

{
  int *piVar1;
  
  if (DAT_005867bc != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_0058662c);
    piVar1 = (int *)*param_1;
    if (piVar1 != (int *)0x0) {
      (/*IC:004b32e0*/**(code **)(*piVar1 + 0x48))(piVar1);
      (/*IC:004b32e8*/**(code **)(*(int *)*param_1 + 8))((int *)*param_1);
      *param_1 = 0;
    }
    if ((int *)param_1[1] != (int *)0x0) {
      FUN_005394d0((int *)param_1[1]);
      param_1[1] = 0;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_0058662c);
  }
  return;
}


