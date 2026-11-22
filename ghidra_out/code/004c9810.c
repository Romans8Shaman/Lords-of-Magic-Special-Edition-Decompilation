
undefined4 __fastcall FUN_004c9810(undefined4 *param_1)

{
  BOOL BVar1;
  
  if ((HWND)*param_1 != (HWND)0x0) {
    BVar1 = IsWindowVisible((HWND)*param_1);
    if (BVar1 != 0) {
      return 1;
    }
  }
  return 0;
}


