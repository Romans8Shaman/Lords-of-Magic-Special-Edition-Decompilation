
undefined4 FUN_004eb3e0(void)

{
  int iVar1;
  BOOL BVar2;
  
  OutputDebugStringA(s_MonitorThread_Birth_0057302c);
  iVar1 = DAT_0058471c[2];
  do {
    if (iVar1 != 0) {
LAB_004eb4d6:
      OutputDebugStringA(s_MonitorThread_Death_00572fc4);
      CloseHandle(DAT_00584718);
      return 0;
    }
    iVar1 = FUN_004eb230((int)DAT_0058471c);
    if (iVar1 == 0) {
      OutputDebugStringA(s_MonitorThread_Disconnect_00572fdc);
      DAT_0058471c[2] = 1;
      SetEvent(DAT_00584718);
      goto LAB_004eb4d6;
    }
    iVar1 = FUN_004eb130(DAT_0058471c);
    if (iVar1 != 0) {
      OutputDebugStringA(s_MonitorThread_GameStart_00573010);
      SetEvent(DAT_00584718);
      BVar2 = IsIconic(DAT_00584d54);
      if (BVar2 != 0) {
        ShowWindow(DAT_00584d54,9);
      }
      SetForegroundWindow(DAT_00584d54);
      SetFocus(DAT_00584d54);
      iVar1 = FUN_004eb130(DAT_0058471c);
      while (iVar1 != 0) {
        Sleep(0x15e);
        iVar1 = FUN_004eb130(DAT_0058471c);
      }
      OutputDebugStringA(s_MonitorThread_GameEnd_00572ff8);
    }
    Sleep(0x15e);
    iVar1 = DAT_0058471c[2];
  } while( true );
}


