
undefined4 __fastcall FUN_00415470(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00521e00(param_1);
  if (((*(int *)(iVar1 + 0x138) < 1) || ((*(uint *)(iVar1 + 0x14) & 0x80000) == 0)) ||
     ((*(uint *)(iVar1 + 0x14) & 0x140000) != 0)) {
    return 0;
  }
  return 1;
}


