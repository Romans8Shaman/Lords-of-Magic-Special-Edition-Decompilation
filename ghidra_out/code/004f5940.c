
undefined4 __fastcall FUN_004f5940(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xc) + -1;
  *(int *)(param_1 + 0xc) = iVar1;
  if (iVar1 < 1) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    return 1;
  }
  return 0;
}


