/* Rebuilt from lomse.exe FUN_004371e0 @ 0x004371e0 (116 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00438030 ((undefined4 * (__fastcall *)(undefined4 *))0x00438030)
#define FUN_004c4e20 ((undefined4 * (__fastcall *)(undefined4 *))0x004c4e20)
#define FUN_004c4eb0 ((bool (__thiscall *)(void *, undefined4))0x004c4eb0)
#define InitializeCriticalSection (*(__typeof__(void (__stdcall *)(LPCRITICAL_SECTION)) *)0x0054d0e4) /* KERNEL32.DLL!InitializeCriticalSection via IAT */

#define LOM_SELF_004371e0 1
undefined4 * __fastcall rb_004371e0(undefined4 *param_1)

{

  FUN_004c4e20(param_1);
  FUN_00438030(param_1 + 0x1b);
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x10] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 10));
  FUN_004c4eb0(param_1,0x1200);
  return param_1;
}
