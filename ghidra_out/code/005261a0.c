
undefined4 __thiscall FUN_005261a0(void *this,int param_1)

{
  int iVar1;
  
  *(undefined4 *)this = 0;
  if (*(int *)((int)this + 4) < param_1) {
    if (*(int *)((int)this + 8) != 0) {
      Ordinal_403(*(int *)((int)this + 8),s_C__lomse_source_storm_h_00555130,0x3f6,0);
    }
    iVar1 = Ordinal_401(param_1 * 8,s_C__lomse_source_storm_h_00555130,0x3fa,0);
    *(int *)((int)this + 8) = iVar1;
    if (iVar1 == 0) {
      *(undefined4 *)((int)this + 4) = 0;
      return 0;
    }
    *(int *)((int)this + 4) = param_1;
  }
  return 1;
}


