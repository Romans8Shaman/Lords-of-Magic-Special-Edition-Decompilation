
undefined4 __thiscall FUN_0041fa50(void *this,int param_1)

{
  int iVar1;
  
  if (param_1 < 1) {
    return 0;
  }
  FUN_0041fac0(this);
  iVar1 = Ordinal_401(param_1 * 8,s_C__lomse_source_storm_h_00555130,0x3fa,0);
  *(int *)this = iVar1;
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = 0;
  *(int *)((int)this + 4) = param_1;
  if (0 < param_1) {
    do {
      iVar1 = iVar1 + 1;
      *(undefined4 *)(*(int *)this + -8 + iVar1 * 8) = 0;
      *(undefined4 *)(*(int *)this + -4 + iVar1 * 8) = 0;
    } while (iVar1 < param_1);
  }
  return 1;
}


