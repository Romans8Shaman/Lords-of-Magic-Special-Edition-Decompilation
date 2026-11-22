/* Rebuilt from lomse.exe FUN_00481f40 @ 0x00481f40 (55 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define timeGetTime (*(__typeof__(DWORD (__stdcall *)(void)) *)0x0054d33c) /* WINMM.DLL!timeGetTime via IAT */

#define LOM_SELF_00481f40 1
void __fastcall rb_00481f40(int param_1)

{
  DWORD DVar1;
  
  DVar1 = timeGetTime();
  *(DWORD *)(param_1 + 0x505c) = *(int *)(param_1 + 0x505c) + (DVar1 - *(int *)(param_1 + 0x5058));
  DVar1 = timeGetTime();
  *(DWORD *)(param_1 + 0x5058) = DVar1;
  *(undefined4 *)(param_1 + 0x5060) = 0;
  return;
}
