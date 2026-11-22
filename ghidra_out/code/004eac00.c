
undefined4 __fastcall FUN_004eac00(int param_1)

{
  DWORD DVar1;
  int iVar2;
  BOOL BVar3;
  tagMSG local_1c;
  
  DVar1 = WaitForSingleObject(DAT_00584718,300);
  while (DVar1 == 0x102) {
    iVar2 = PeekMessageA(&local_1c,(HWND)0x0,0,0,0);
    while (iVar2 != 0) {
      if (local_1c.message == 0x12) {
        return 0;
      }
      BVar3 = GetMessageA(&local_1c,(HWND)0x0,0,0);
      if (BVar3 != 0) {
        TranslateMessage(&local_1c);
        DispatchMessageA(&local_1c);
      }
      iVar2 = PeekMessageA(&local_1c,(HWND)0x0,0,0,0);
    }
    DVar1 = WaitForSingleObject(DAT_00584718,300);
  }
  ResetEvent(DAT_00584718);
  if (*(int *)(param_1 + 8) == 0) {
    OutputDebugStringA(s_NewGame_ACK_00572b30);
    return 1;
  }
  OutputDebugStringA(s_NewGame_NAK_00572b40);
  return 0;
}


