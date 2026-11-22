
undefined4 __thiscall FUN_00438180(void *this,int param_1)

{
  int iVar1;
  
  if (param_1 < 1) {
    return 0;
  }
  *(int *)((int)this + 4) = param_1;
  *(undefined4 *)this = 0;
  iVar1 = Ordinal_401(param_1 << 4,s_C__lomse_source_storm_h_00555130,0x3fa,0);
  *(int *)((int)this + 8) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((int)this + 4) = 0;
    return 0;
  }
  return 1;
}


