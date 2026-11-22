
undefined4 __thiscall FUN_004e74a0(void *this,int param_1,int param_2)

{
  int iVar1;
  
  FUN_004e7300((int)this);
  iVar1 = param_2 + param_1 * 5;
  if ((iVar1 < 0) || (0x1f < iVar1)) {
    return 0xffffffff;
  }
  return (&DAT_00584690)[iVar1];
}


