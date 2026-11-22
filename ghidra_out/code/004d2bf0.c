
undefined4 __thiscall FUN_004d2bf0(void *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  int *arg1;
  
  piVar2 = (int *)0x0;
  arg1 = *(int **)((int)this + 0x84);
  if (arg1 == (int *)0x0) {
    return 0;
  }
  do {
    if (*arg1 == param_1) {
      if (piVar2 == (int *)0x0) {
        *(int *)((int)this + 0x84) = arg1[1];
      }
      else {
        piVar2[1] = arg1[1];
      }
      if (*arg1 != 0) {
        Ordinal_403(*arg1,s_C__lomse_source_storm_h_00555130,0x3f6,0);
      }
      if (arg1 != (int *)0x0) {
        Ordinal_403(arg1,s_C__lomse_source_storm_h_00555130,0x3eb,0);
      }
      *(int *)((int)this + 0xa9c) = *(int *)((int)this + 0xa9c) + -8;
      return 1;
    }
    piVar1 = arg1 + 1;
    piVar2 = arg1;
    arg1 = (int *)*piVar1;
  } while ((int *)*piVar1 != (int *)0x0);
  return 0;
}


