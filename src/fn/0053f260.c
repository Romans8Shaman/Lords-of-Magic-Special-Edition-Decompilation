/* Rebuilt from lomse.exe FUN_0053f260 @ 0x0053f260 (174 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00555114 (*(undefined *)0x00555114)
#define DAT_00555120 (*(undefined *)0x00555120)
#define DAT_00555124 (*(undefined *)0x00555124)
#define DAT_0055512c (*(undefined *)0x0055512c)
#define DAT_005d52e8 (*(undefined1 *)0x005d52e8)
#define DAT_005d52f0 (*(int *)0x005d52f0)
#define DAT_005d6b30 (*(int *)0x005d6b30)
#define DAT_005d6b34 (*(undefined4 * *)0x005d6b34)
#define ExitProcess (*(__typeof__(void (__stdcall *)(UINT)) *)0x0054d1b0) /* KERNEL32.DLL!ExitProcess via IAT */
#define FUN_0053f320 ((undefined4 (__stdcall *)(void))0x0053f320)
#define FUN_0053f330 ((undefined4 (__stdcall *)(void))0x0053f330)
#define FUN_0053f340 ((undefined4 (__cdecl *)(undefined4 *, undefined4 *))0x0053f340)
#define GetCurrentProcess (*(__typeof__(HANDLE (__stdcall *)(void)) *)0x0054d18c) /* KERNEL32.DLL!GetCurrentProcess via IAT */
#define TerminateProcess (*(__typeof__(BOOL (__stdcall *)(HANDLE, UINT)) *)0x0054d190) /* KERNEL32.DLL!TerminateProcess via IAT */
#define _DAT_005d52ec (*(undefined4 *)0x005d52ec)

#define LOM_SELF_0053f260 1
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl rb_0053f260(UINT param_1,int param_2,int param_3)

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
          ((undefined4 (__stdcall *)(void))(*(code *)*puVar2))();
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
    return; /* HAND: original returns after ExitProcess (no unlock) */
  }
  FUN_0053f330();
  return;
}
