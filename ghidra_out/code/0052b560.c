
undefined4 __thiscall FUN_0052b560(void *this,int param_1)

{
  int *arg1;
  
  arg1 = *(int **)this;
  if (arg1 == (int *)0x0) {
    return 0;
  }
  do {
    if (*arg1 == param_1) {
      *(int *)this = arg1[3];
      if (arg1 != (int *)0x0) {
        Ordinal_403(arg1,s_C__lomse_source_storm_h_00555130,0x3eb,0);
      }
      return 1;
    }
    this = arg1 + 3;
    arg1 = (int *)arg1[3];
  } while (arg1 != (int *)0x0);
  return 0;
}


