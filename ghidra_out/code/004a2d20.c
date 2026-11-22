
undefined4 __thiscall FUN_004a2d20(void *this,int param_1)

{
  int iVar1;
  
  if (param_1 < 1) {
    return 0;
  }
  FUN_004a2c10((int)this);
  iVar1 = Ordinal_401(param_1 << 9,s_C__lomse_source_storm_h_00555130,0x3fa,0);
  *(int *)((int)this + 0x14) = iVar1;
  if (iVar1 == 0) {
    return 0;
  }
  *(int *)((int)this + 0xc) = param_1;
  *(undefined4 *)((int)this + 0x10) = 0;
  return 1;
}


