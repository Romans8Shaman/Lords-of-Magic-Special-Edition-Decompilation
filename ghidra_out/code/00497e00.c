
undefined4 __fastcall FUN_00497e00(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x20) + -1;
  if ((-1 < iVar1) && ((*(byte *)(param_1 + 0x1c) & 1) != 0)) {
    *(int *)(param_1 + 0x20) = iVar1;
  }
  return *(undefined4 *)(param_1 + 0x20);
}


