
void __fastcall FUN_00500bb0(int param_1)

{
  BOOL BVar1;
  
  BVar1 = IsWindow(*(HWND *)(param_1 + 0x26c));
  if (BVar1 != 0) {
    OutputDebugStringA(s_App__Exit_00573614);
    PostMessageA(*(HWND *)(param_1 + 0x26c),0x10,0,0);
  }
  return;
}


