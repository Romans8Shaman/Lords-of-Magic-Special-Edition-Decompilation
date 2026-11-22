
void FUN_004e3a70(int param_1)

{
  uint uVar1;
  DWORD DVar2;
  BOOL BVar3;
  tagMSG local_1c;
  
  Sleep(0xfa);
  PeekMessageA(&local_1c,(HWND)0x0,0x201,0x201,1);
  PeekMessageA(&local_1c,(HWND)0x0,0x202,0x202,1);
  PeekMessageA(&local_1c,(HWND)0x0,0x100,0x108,1);
  DVar2 = GetTickCount();
  uVar1 = (DVar2 - 0xfa) + param_1;
  DVar2 = GetTickCount();
  if (DVar2 < uVar1) {
    while( true ) {
      Sleep(100);
      BVar3 = PeekMessageA(&local_1c,(HWND)0x0,0x202,0x202,1);
      if (BVar3 != 0) break;
      BVar3 = PeekMessageA(&local_1c,(HWND)0x0,0x100,0x108,1);
      if (BVar3 != 0) {
        return;
      }
      DVar2 = GetTickCount();
      if (uVar1 <= DVar2) {
        return;
      }
    }
    PeekMessageA(&local_1c,(HWND)0x0,0x201,0x201,1);
  }
  return;
}


