
void __fastcall FUN_004b6870(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0054b4ae;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_0054dbf0;
  local_4 = 0;
  OutputDebugStringA(s_Starting__NetInterface_Destructo_0055d334);
  FUN_004b7d40((int)param_1);
  OutputDebugStringA(s_Finished__NetInterface_Cleanup___0055d310);
  if (DAT_005cd364 != (HANDLE)0x0) {
    CloseHandle(DAT_005cd364);
    DAT_005cd364 = (HANDLE)0x0;
  }
  OutputDebugStringA(s_Exiting__NetInterface_Destructor_0055d2e8);
  local_4 = 0xffffffff;
  FUN_004c4e40(param_1 + 0x28);
  ExceptionList = local_c;
  return;
}


