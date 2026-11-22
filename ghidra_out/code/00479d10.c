
void __thiscall FUN_00479d10(void *this,int param_1)

{
  int *piVar1;
  
  if (*(int *)((int)this + 0x13b4) != 0) {
    piVar1 = *(int **)((int)this + 0x780);
    *(int *)((int)this + 0x1374) = param_1;
    if (piVar1 != (int *)0x0) {
      if (param_1 < -0x9c3) {
        FUN_0047a7b0((int)this);
        return;
      }
      if (piVar1 != (int *)0x0) {
        (/*IC:00479d46*/**(code **)(*piVar1 + 0x3c))(piVar1,param_1);
        return;
      }
    }
    if ((&DAT_005a8078)[DAT_005a7d8c * 0x100] == 2) {
      FUN_0047af50(&DAT_005ae958);
    }
  }
  return;
}


