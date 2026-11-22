/* Rebuilt from lomse.exe FUN_0053c4a0 @ 0x0053c4a0 (38 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005d5240 (*(int *)0x005d5240)
#define ExitProcess (*(__typeof__(void (__stdcall *)(UINT)) *)0x0054d1b0) /* KERNEL32.DLL!ExitProcess via IAT */
#define FUN_005436c0 ((undefined4 (__stdcall *)(void))0x005436c0)
#define FUN_00543700 ((undefined4 (__cdecl *)(int))0x00543700)

#define LOM_SELF_0053c4a0 1
void __cdecl rb_0053c4a0(int param_1)

{
  if (DAT_005d5240 == 1) {
    FUN_005436c0();
  }
  FUN_00543700(param_1);
                    /* WARNING: Subroutine does not return */
  ExitProcess(0xff);
}
