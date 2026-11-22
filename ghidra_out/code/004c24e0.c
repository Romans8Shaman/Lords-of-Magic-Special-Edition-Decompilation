
void __fastcall FUN_004c24e0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_004c1cf0(param_1);
  if (iVar1 != 0) {
    if (0 < *(int *)(param_1 + 0x5bc)) {
      *(int *)(param_1 + 0x5bc) = *(int *)(param_1 + 0x5bc) + -1;
    }
    *(undefined1 *)(param_1 + 0x5c8) = 0;
    *(int *)(param_1 + 0x5c0) = *(int *)(param_1 + 0x5c0) + 1;
  }
  return;
}


