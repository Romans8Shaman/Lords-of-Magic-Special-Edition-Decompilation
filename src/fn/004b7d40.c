/* Rebuilt from lomse.exe FUN_004b7d40 @ 0x004b7d40 (143 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define CloseHandle (*(__typeof__(BOOL (__stdcall *)(HANDLE)) *)0x0054d054) /* KERNEL32.DLL!CloseHandle via IAT */
#define FUN_004b7dd0 ((undefined4 (__fastcall *)(int))0x004b7dd0)
#define OutputDebugStringA (*(__typeof__(void (__stdcall *)(LPCSTR)) *)0x0054d0f8) /* KERNEL32.DLL!OutputDebugStringA via IAT */
#define _DAT_005cd368 (*(undefined4 *)0x005cd368)
#define s_Exiting_NetInterface__Cleanup____0055d3ec (*(char (*)[])0x0055d3ec)
#define s_Starting_NetInterface__Cleanup___0055d410 (*(char (*)[])0x0055d410)

#define LOM_SELF_004b7d40 1
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall rb_004b7d40(int param_1)

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
