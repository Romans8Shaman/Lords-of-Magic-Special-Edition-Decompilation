/* Rebuilt from lomse.exe FUN_004c5ba0 @ 0x004c5ba0 (87 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DeleteCriticalSection (*(__typeof__(void (__stdcall *)(LPCRITICAL_SECTION)) *)0x0054d0e0) /* KERNEL32.DLL!DeleteCriticalSection via IAT */
#define FUN_004c5210 ((undefined4 (__fastcall *)(int))0x004c5210)
#define FUN_004c5c00 ((undefined4 (__fastcall *)(int *))0x004c5c00)

#define LOM_SELF_004c5ba0 1
void __fastcall rb_004c5ba0(int *param_1)

{

  FUN_004c5c00(param_1);
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x6f));
  FUN_004c5210((int)(param_1 + 4));
  return;
}
