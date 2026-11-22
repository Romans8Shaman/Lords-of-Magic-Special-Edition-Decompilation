
undefined4 __thiscall FUN_00427760(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  
  FUN_004277b0(this);
  iVar1 = Ordinal_401(param_1,s_C__lomse_source_storm_h_00555130,0x3fa,0);
  *(int *)this = iVar1;
  if (iVar1 == 0) {
    return 0;
  }
  *(int *)((int)this + 4) = param_1;
  iVar1 = 0;
  if (0 < param_1) {
    do {
      iVar2 = iVar1 + 1;
      *(undefined1 *)(iVar1 + *(int *)this) = 0x10;
      iVar1 = iVar2;
    } while (iVar2 < param_1);
  }
  return 1;
}


