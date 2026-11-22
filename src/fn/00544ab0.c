/* Rebuilt from lomse.exe FUN_00544ab0 @ 0x00544ab0 (17 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005d5674 (*(LPTOP_LEVEL_EXCEPTION_FILTER *)0x005d5674)
#define FUN_00544a50 ((int (__stdcall *)(int *))0x00544a50)
#define SetUnhandledExceptionFilter (*(__typeof__(LPTOP_LEVEL_EXCEPTION_FILTER (__stdcall *)(LPTOP_LEVEL_EXCEPTION_FILTER)) *)0x0054d120) /* KERNEL32.DLL!SetUnhandledExceptionFilter via IAT */

#define LOM_SELF_00544ab0 1
void __cdecl rb_00544ab0(void)

{
  DAT_005d5674 = SetUnhandledExceptionFilter(FUN_00544a50);
  return;
}
