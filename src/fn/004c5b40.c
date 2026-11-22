/* Rebuilt from lomse.exe FUN_004c5b40 @ 0x004c5b40 (83 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004c5200 ((undefined4 * (__fastcall *)(undefined4 *))0x004c5200)
#define FUN_004c5aa0 ((undefined4 (__fastcall *)(undefined4 *))0x004c5aa0)
#define InitializeCriticalSection (*(__typeof__(void (__stdcall *)(LPCRITICAL_SECTION)) *)0x0054d0e4) /* KERNEL32.DLL!InitializeCriticalSection via IAT */

#define LOM_SELF_004c5b40 1
undefined4 * __fastcall rb_004c5b40(undefined4 *param_1)

{

  FUN_004c5200(param_1 + 4);
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x6f));
  FUN_004c5aa0(param_1);
  return param_1;
}
