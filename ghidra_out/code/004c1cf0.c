
undefined4 __fastcall FUN_004c1cf0(int param_1)

{
  undefined4 *puVar1;
  
  if (*(int *)(param_1 + 0x5b0) != -1) {
    puVar1 = FUN_00485080(&DAT_005aa12c,*(int *)(param_1 + 0x5b0),0x2f);
    if (puVar1 != (undefined4 *)0x0) {
      return 1;
    }
    *(undefined4 *)(param_1 + 0x5b0) = 0xffffffff;
  }
  return 0;
}


