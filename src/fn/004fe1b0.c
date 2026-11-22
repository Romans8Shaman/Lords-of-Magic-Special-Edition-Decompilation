/* Rebuilt from lomse.exe FUN_004fe1b0 @ 0x004fe1b0 (36 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004fe030 ((undefined4 (__fastcall *)(int))0x004fe030)
#define GetTickCount (*(__typeof__(DWORD (__stdcall *)(void)) *)0x0054d0e8) /* KERNEL32.DLL!GetTickCount via IAT */

#define LOM_SELF_004fe1b0 1
void __fastcall rb_004fe1b0(int param_1)

{
  DWORD DVar1;
  
  DVar1 = GetTickCount();
  if (*(uint *)(param_1 + 0x22ec4) < DVar1 - *(int *)(param_1 + 0x22ec8)) {
    FUN_004fe030(param_1);
  }
  return;
}
