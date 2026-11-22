
undefined4 __fastcall FUN_0052b210(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00521e00(param_1);
  if ((iVar1 != 0) && ((*(uint *)(iVar1 + 0x14) & 0x2000000) != 0)) {
    iVar1 = FUN_0042c650((int)param_1);
    if (0 < iVar1) {
      return 1;
    }
  }
  return 0;
}


