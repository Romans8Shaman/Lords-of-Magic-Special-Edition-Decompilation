/* Rebuilt from lomse.exe FUN_004704a0 @ 0x004704a0 (33 bytes, __stdcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004b6f50 ((undefined4 (__stdcall *)(int))0x004b6f50)
#define OutputDebugStringA (*(__typeof__(void (__stdcall *)(LPCSTR)) *)0x0054d0f8) /* KERNEL32.DLL!OutputDebugStringA via IAT */
#define s_OnPlayerLeave_00557f5c (*(char (*)[])0x00557f5c)

#define LOM_SELF_004704a0 1
void __stdcall rb_004704a0(int param_1)

{
  OutputDebugStringA(s_OnPlayerLeave_00557f5c);
  FUN_004b6f50(*(int *)(param_1 + 4) + 1);
  return;
}
