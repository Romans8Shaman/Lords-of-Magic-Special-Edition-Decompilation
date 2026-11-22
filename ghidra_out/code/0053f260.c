
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_0053f260(UINT param_1,int param_2,int param_3)

{
  HANDLE hProcess;
  undefined4 *puVar1;
  undefined4 *puVar2;
  UINT uExitCode;
  
  FUN_0053f320();
  if (DAT_005d52f0 == 1) {
    uExitCode = param_1;
    hProcess = GetCurrentProcess();
    TerminateProcess(hProcess,uExitCode);
  }
  _DAT_005d52ec = 1;
  DAT_005d52e8 = (undefined1)param_3;
  if (param_2 == 0) {
    if ((DAT_005d6b34 != (undefined4 *)0x0) &&
       (puVar2 = (undefined4 *)(DAT_005d6b30 + -4), puVar1 = DAT_005d6b34, DAT_005d6b34 <= puVar2))
    {
      do {
        if ((code *)*puVar2 != (code *)0x0) {
          (/*IC:0053f2bd*/*(code *)*puVar2)();
          puVar1 = DAT_005d6b34;
        }
        puVar2 = puVar2 + -1;
      } while (puVar1 <= puVar2);
    }
    FUN_0053f340((undefined4 *)&DAT_00555114,(undefined4 *)&DAT_00555120);
  }
  FUN_0053f340((undefined4 *)&DAT_00555124,(undefined4 *)&DAT_0055512c);
  if (param_3 == 0) {
    DAT_005d52f0 = 1;
                    /* WARNING: Subroutine does not return */
    ExitProcess(param_1);
  }
  FUN_0053f330();
  return;
}


