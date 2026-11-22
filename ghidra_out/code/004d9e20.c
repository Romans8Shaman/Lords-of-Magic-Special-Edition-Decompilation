
void __cdecl op_break(void)

{
  HWND hWnd;
  
  hWnd = GetFocus();
  ShowWindow(DAT_00584d54,6);
  OutputDebugStringA(s_Minimized_window__00572670);
  DebugBreak();
  SetActiveWindow(DAT_00584d54);
  if (hWnd != (HWND)0x0) {
    SetFocus(hWnd);
  }
  return;
}


