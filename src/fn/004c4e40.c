/* Rebuilt from lomse.exe FUN_004c4e40 @ 0x004c4e40 (19 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DeleteCriticalSection (*(__typeof__(void (__stdcall *)(LPCRITICAL_SECTION)) *)0x0054d0e0) /* KERNEL32.DLL!DeleteCriticalSection via IAT */
#define FUN_004c4e60 ((undefined4 (__fastcall *)(undefined4 *))0x004c4e60)

#define LOM_SELF_004c4e40 1
void __fastcall rb_004c4e40(undefined4 *param_1)

{
  FUN_004c4e60(param_1);
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  return;
}
