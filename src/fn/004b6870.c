/* Rebuilt from lomse.exe FUN_004b6870 @ 0x004b6870 (140 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define CloseHandle (*(__typeof__(BOOL (__stdcall *)(HANDLE)) *)0x0054d054) /* KERNEL32.DLL!CloseHandle via IAT */
#define DAT_005cd364 (*(HANDLE *)0x005cd364)
#define FUN_004b7d40 ((undefined4 (__fastcall *)(int))0x004b7d40)
#define FUN_004c4e40 ((undefined4 (__fastcall *)(undefined4 *))0x004c4e40)
#define OutputDebugStringA (*(__typeof__(void (__stdcall *)(LPCSTR)) *)0x0054d0f8) /* KERNEL32.DLL!OutputDebugStringA via IAT */
#define PTR_FUN_0054dbf0 (*(undefined * *)0x0054dbf0)
#define s_Exiting__NetInterface_Destructor_0055d2e8 (*(char (*)[])0x0055d2e8)
#define s_Finished__NetInterface_Cleanup___0055d310 (*(char (*)[])0x0055d310)
#define s_Starting__NetInterface_Destructo_0055d334 (*(char (*)[])0x0055d334)

#define LOM_SELF_004b6870 1
void __fastcall rb_004b6870(undefined4 *param_1)

{

  *param_1 = &PTR_FUN_0054dbf0;
  OutputDebugStringA(s_Starting__NetInterface_Destructo_0055d334);
  FUN_004b7d40((int)param_1);
  OutputDebugStringA(s_Finished__NetInterface_Cleanup___0055d310);
  if (DAT_005cd364 != (HANDLE)0x0) {
    CloseHandle(DAT_005cd364);
    DAT_005cd364 = (HANDLE)0x0;
  }
  OutputDebugStringA(s_Exiting__NetInterface_Destructor_0055d2e8);
  FUN_004c4e40(param_1 + 0x28);
  return;
}
