/* Rebuilt from lomse.exe FUN_0053cb80 @ 0x0053cb80 (43 bytes, __stdcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define InitializeCriticalSection (*(__typeof__(void (__stdcall *)(LPCRITICAL_SECTION)) *)0x0054d0e4) /* KERNEL32.DLL!InitializeCriticalSection via IAT */
#define PTR_DAT_00574984 (*(undefined * *)0x00574984)
#define PTR_DAT_005749a4 (*(undefined * *)0x005749a4)
#define PTR_DAT_005749b4 (*(undefined * *)0x005749b4)
#define PTR_DAT_005749c4 (*(undefined * *)0x005749c4)

#define LOM_SELF_0053cb80 1
void __stdcall rb_0053cb80(void)

{
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_005749c4);
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_005749b4);
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_005749a4);
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_00574984);
  return;
}
