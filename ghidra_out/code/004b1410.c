
undefined4 __thiscall FUN_004b1410(void *this,int param_1)

{
  int iVar1;
  
  if (param_1 < 1) {
    return 0;
  }
  FUN_004b1460((int)this);
  *(int *)((int)this + 0xd4) = param_1;
  iVar1 = Ordinal_401(param_1 * 4,s_C__lomse_source_storm_h_00555130,0x3fa,0);
  *(int *)((int)this + 200) = iVar1;
  return (uint)(iVar1 != 0);
}


