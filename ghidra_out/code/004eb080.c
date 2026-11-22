
undefined4 __fastcall FUN_004eb080(undefined4 *param_1)

{
  OutputDebugStringA(s_ASIGSSession__Close_00572ec4);
  param_1[1] = 0;
  *param_1 = 0;
  if (param_1[4] != 0) {
    param_1[2] = 1;
    FUN_004eb2f0((LPCSTR)(param_1 + 4));
  }
  if ((param_1[9] != 0) && ((code *)param_1[0xc] != (code *)0x0)) {
    (/*IC:004eb0c5*/*(code *)param_1[0xc])();
    OutputDebugStringA(s_Unloading_SIGS_DLL_00572eb0);
    FreeLibrary((HMODULE)param_1[9]);
    param_1[9] = 0;
    ShowWindow(DAT_00584d54,9);
    SetForegroundWindow(DAT_00584d54);
    SetFocus(DAT_00584d54);
  }
  return 1;
}


