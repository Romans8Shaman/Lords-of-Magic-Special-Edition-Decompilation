
void __thiscall FUN_00479a00(void *this,int param_1)

{
  int *piVar1;
  
  if (*(int *)((int)this + 0x13b4) != 0) {
    piVar1 = *(int **)((int)this + 0xfc0);
    *(int *)((int)this + 0x1368) = param_1;
    if (piVar1 != (int *)0x0) {
      if (param_1 < -0x9c3) {
        FUN_004b32c0((int *)((int)this + 0xfc0));
        return;
      }
      if (piVar1 != (int *)0x0) {
        (/*IC:00479a40*/**(code **)(*piVar1 + 0x3c))(piVar1,param_1);
        return;
      }
    }
    if ((&DAT_005a8078)[DAT_005a7d8c * 0x100] == 2) {
      FUN_004b40b0(this,DAT_005a7d8c);
    }
  }
  return;
}


