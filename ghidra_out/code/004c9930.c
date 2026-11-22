
void __fastcall FUN_004c9930(undefined4 *param_1)

{
  if ((HWND)*param_1 == (HWND)0x0) {
    return;
  }
  ShowWindow((HWND)*param_1,0);
  DAT_00584d58 = 0;
  PostMessageA((HWND)0x0,0x1c,1,0);
  FUN_004753d0(0x584ae8);
  return;
}


