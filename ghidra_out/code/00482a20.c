
void __thiscall FUN_00482a20(void *this,int param_1,int param_2,int param_3)

{
  int iVar1;
  void *this_00;
  
  if ((param_1 < 0) || (0xf < param_1)) {
    this_00 = (void *)0x0;
  }
  else {
    this_00 = (void *)((int)this + param_1 * 0x1d84 + 0x5068);
  }
  FUN_004bbf20(this_00,param_2);
  if (*(int *)(&DAT_005a7d90 + DAT_005a7d8c * 0x400) == param_1) {
    if (DAT_005d1e84 == 0) {
      iVar1 = 1;
    }
    else {
      iVar1 = FUN_004b7dd0(DAT_005d1e84);
    }
    if ((iVar1 != param_2) && (param_3 != 0)) {
      iVar1 = FUN_0048a400(0x584ae8);
      if (iVar1 != 0) {
        FUN_0052cef0(&DAT_00584ae8,*(int *)((int)this + 0x228a8),1);
      }
    }
  }
  return;
}


