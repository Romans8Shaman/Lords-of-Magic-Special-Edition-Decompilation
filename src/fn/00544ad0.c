/* Rebuilt from lomse.exe FUN_00544ad0 @ 0x00544ad0 (13 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005d5674 (*(LPTOP_LEVEL_EXCEPTION_FILTER *)0x005d5674)
#define SetUnhandledExceptionFilter (*(__typeof__(LPTOP_LEVEL_EXCEPTION_FILTER (__stdcall *)(LPTOP_LEVEL_EXCEPTION_FILTER)) *)0x0054d120) /* KERNEL32.DLL!SetUnhandledExceptionFilter via IAT */

#define LOM_SELF_00544ad0 1
void __cdecl rb_00544ad0(void)

{
  SetUnhandledExceptionFilter(DAT_005d5674);
  return;
}
