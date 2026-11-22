
undefined4 __fastcall FUN_004eaed0(int param_1)

{
  FARPROC pFVar1;
  
  pFVar1 = GetProcAddress(*(HMODULE *)(param_1 + 0x24),s_InitializeDLL_00572ea0);
  *(FARPROC *)(param_1 + 0x2c) = pFVar1;
  pFVar1 = GetProcAddress(*(HMODULE *)(param_1 + 0x24),s_CloseDLL_00572e94);
  *(FARPROC *)(param_1 + 0x30) = pFVar1;
  pFVar1 = GetProcAddress(*(HMODULE *)(param_1 + 0x24),s_CheckGameConnectStatus_00572e7c);
  *(FARPROC *)(param_1 + 0x40) = pFVar1;
  pFVar1 = GetProcAddress(*(HMODULE *)(param_1 + 0x24),s_GameClose_00572e70);
  *(FARPROC *)(param_1 + 0x44) = pFVar1;
  pFVar1 = GetProcAddress(*(HMODULE *)(param_1 + 0x24),s_CheckForAnyTCPMessage_00572e58);
  *(FARPROC *)(param_1 + 0x34) = pFVar1;
  pFVar1 = GetProcAddress(*(HMODULE *)(param_1 + 0x24),s_PeekForTCPMessage_00572e44);
  *(FARPROC *)(param_1 + 0x38) = pFVar1;
  pFVar1 = GetProcAddress(*(HMODULE *)(param_1 + 0x24),s_GetNumberOfPlayers_00572e30);
  *(FARPROC *)(param_1 + 0x48) = pFVar1;
  pFVar1 = GetProcAddress(*(HMODULE *)(param_1 + 0x24),s_SendTCPMessage_00572e20);
  *(FARPROC *)(param_1 + 0x4c) = pFVar1;
  pFVar1 = GetProcAddress(*(HMODULE *)(param_1 + 0x24),s_SendTCPPointMessage_00572e0c);
  *(FARPROC *)(param_1 + 0x50) = pFVar1;
  pFVar1 = GetProcAddress(*(HMODULE *)(param_1 + 0x24),s_RecvTCPMessage_00572dfc);
  *(FARPROC *)(param_1 + 0x3c) = pFVar1;
  pFVar1 = GetProcAddress(*(HMODULE *)(param_1 + 0x24),s_GetPlayerXName_00572dec);
  *(FARPROC *)(param_1 + 0x54) = pFVar1;
  pFVar1 = GetProcAddress(*(HMODULE *)(param_1 + 0x24),s_GetMyPlayerNumber_00572dd8);
  *(FARPROC *)(param_1 + 0x58) = pFVar1;
  pFVar1 = GetProcAddress(*(HMODULE *)(param_1 + 0x24),s_GetGameOption_00572dc8);
  *(FARPROC *)(param_1 + 0x5c) = pFVar1;
  pFVar1 = GetProcAddress(*(HMODULE *)(param_1 + 0x24),s_TellMeGameMessReceived_00572db0);
  *(FARPROC *)(param_1 + 0x60) = pFVar1;
  pFVar1 = GetProcAddress(*(HMODULE *)(param_1 + 0x24),s_FreeGameMessageBuffer_00572d98);
  *(FARPROC *)(param_1 + 100) = pFVar1;
  pFVar1 = GetProcAddress(*(HMODULE *)(param_1 + 0x24),s_PingTime_00572d8c);
  *(FARPROC *)(param_1 + 0x68) = pFVar1;
  pFVar1 = GetProcAddress(*(HMODULE *)(param_1 + 0x24),s_TellMeSpecialChatReceived_00572d70);
  *(FARPROC *)(param_1 + 0x6c) = pFVar1;
  pFVar1 = GetProcAddress(*(HMODULE *)(param_1 + 0x24),s_TellMePlayerLeftGame_00572d58);
  *(FARPROC *)(param_1 + 0x70) = pFVar1;
  pFVar1 = GetProcAddress(*(HMODULE *)(param_1 + 0x24),s_GetUDPPlayerData_00572d44);
  *(FARPROC *)(param_1 + 0x74) = pFVar1;
  if (((((((*(int *)(param_1 + 0x2c) == 0) || (*(int *)(param_1 + 0x30) == 0)) ||
         (*(int *)(param_1 + 0x40) == 0)) ||
        ((*(int *)(param_1 + 0x44) == 0 || (*(int *)(param_1 + 0x34) == 0)))) ||
       ((*(int *)(param_1 + 0x38) == 0 ||
        ((*(int *)(param_1 + 0x48) == 0 || (*(int *)(param_1 + 0x4c) == 0)))))) ||
      (*(int *)(param_1 + 0x50) == 0)) ||
     (((((*(int *)(param_1 + 0x3c) == 0 || (*(int *)(param_1 + 0x54) == 0)) ||
        (*(int *)(param_1 + 0x58) == 0)) ||
       (((*(int *)(param_1 + 0x5c) == 0 || (*(int *)(param_1 + 0x60) == 0)) ||
        ((*(int *)(param_1 + 100) == 0 ||
         ((*(int *)(param_1 + 0x68) == 0 || (*(int *)(param_1 + 0x70) == 0)))))))) ||
      ((*(int *)(param_1 + 0x6c) == 0 || (pFVar1 == (FARPROC)0x0)))))) {
    return 0;
  }
  return 1;
}


