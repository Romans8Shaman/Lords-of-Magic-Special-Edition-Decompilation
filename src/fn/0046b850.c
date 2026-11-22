/* Rebuilt from lomse.exe op_beep @ 0x0046b850 (20 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define MessageBeep (*(__typeof__(BOOL (__stdcall *)(UINT)) *)0x0054d294) /* USER32.DLL!MessageBeep via IAT */
#define OutputDebugStringA (*(__typeof__(void (__stdcall *)(LPCSTR)) *)0x0054d0f8) /* KERNEL32.DLL!OutputDebugStringA via IAT */
#define s_SF_Beep_005578e0 (*(char (*)[])0x005578e0)

#define LOM_SELF_0046b850 1
void __cdecl rb_0046b850(void)

{
  OutputDebugStringA(s_SF_Beep_005578e0);
  MessageBeep(0x40);
  return;
}
