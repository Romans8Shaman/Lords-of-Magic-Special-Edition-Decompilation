
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004b7d40(int param_1)

{
  OutputDebugStringA(s_Starting_NetInterface__Cleanup___0055d410);
  *(undefined4 *)(param_1 + 0xd0) = 0;
  *(undefined4 *)(param_1 + 0xd4) = 0;
  *(undefined4 *)(param_1 + 0xd8) = 0;
  _DAT_005cd368 = 0;
  *(undefined4 *)(param_1 + 0x2c8) = 0;
  *(undefined4 *)(param_1 + 0x36c) = 0;
  *(undefined4 *)(param_1 + 0x2cc) = 0;
  *(undefined4 *)(param_1 + 0x100) = 1;
  *(undefined4 *)(param_1 + 0x2c4) = 0xffff;
  if (*(HANDLE *)(param_1 + 0x370) != (HANDLE)0x0) {
    CloseHandle(*(HANDLE *)(param_1 + 0x370));
    *(undefined4 *)(param_1 + 0x370) = 0;
  }
  *(undefined4 *)(param_1 + 0x390) = 1;
  FUN_004b7dd0(param_1);
  *(undefined4 *)(param_1 + 0x390) = 1;
  OutputDebugStringA(s_Exiting_NetInterface__Cleanup____0055d3ec);
  return;
}


