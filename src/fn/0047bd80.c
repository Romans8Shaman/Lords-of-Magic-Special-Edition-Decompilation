/* Rebuilt from lomse.exe FUN_0047bd80 @ 0x0047bd80 (153 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DeleteCriticalSection (*(__typeof__(void (__stdcall *)(LPCRITICAL_SECTION)) *)0x0054d0e0) /* KERNEL32.DLL!DeleteCriticalSection via IAT */
#define FUN_004c4bb0 ((undefined4 (__fastcall *)(undefined4 *))0x004c4bb0)
#define thunk_FUN_004c4bb0 ((undefined4 (__fastcall *)(undefined4 *))0x004c4b00)

#define LOM_SELF_0047bd80 1
void __fastcall rb_0047bd80(undefined4 *param_1)

{

  FUN_004c4bb0(param_1 + 2);
  FUN_004c4bb0(param_1 + 8);
  param_1[1] = 0;
  *param_1 = 0;
  if (param_1[0x21] != 0) {
    DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1b));
    DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xe));
    DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x14));
  }
  thunk_FUN_004c4bb0(param_1 + 8);
  thunk_FUN_004c4bb0(param_1 + 2);
  return;
}
