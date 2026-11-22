
void __fastcall thunk_FUN_004c9900(undefined4 *param_1)

{
  if ((HWND)*param_1 != (HWND)0x0) {
    DestroyWindow((HWND)*param_1);
    *param_1 = 0;
  }
  return;
}


