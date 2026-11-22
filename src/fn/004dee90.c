/* Rebuilt from lomse.exe op_exitapp @ 0x004dee90 (21 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00500bb0 ((undefined4 (__fastcall *)(int))0x00500bb0)
#define OutputDebugStringA (*(__typeof__(void (__stdcall *)(LPCSTR)) *)0x0054d0f8) /* KERNEL32.DLL!OutputDebugStringA via IAT */
#define s_exitapp_00572944 (*(char (*)[])0x00572944)

#define LOM_SELF_004dee90 1
void __cdecl rb_004dee90(void *vm)

{
  OutputDebugStringA(s_exitapp_00572944);
  FUN_00500bb0(0x584ae8);
  return;
}
