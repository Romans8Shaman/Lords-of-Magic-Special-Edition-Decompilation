
undefined4 __thiscall FUN_004b9d60(void *this,int param_1)

{
  int iVar1;
  
  FUN_004b9dc0(this);
  if (param_1 < 1) {
    return 0;
  }
  iVar1 = Ordinal_401(param_1 * 4,s_C__lomse_source_storm_h_00555130,0x3fa,0);
  *(int *)this = iVar1;
  if (iVar1 == 0) {
    return 0;
  }
  *(int *)((int)this + 8) = param_1;
  *(undefined4 *)((int)this + 4) = 0;
  return 1;
}


