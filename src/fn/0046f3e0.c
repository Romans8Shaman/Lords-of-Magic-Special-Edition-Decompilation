/* Rebuilt from lomse.exe FUN_0046f3e0 @ 0x0046f3e0 (11 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define Sleep (*(__typeof__(void (__stdcall *)(DWORD)) *)0x0054d0d0) /* KERNEL32.DLL!Sleep via IAT */

#define LOM_SELF_0046f3e0 1
undefined4 __cdecl rb_0046f3e0(void)

{
  Sleep(100);
  return 0;
}
