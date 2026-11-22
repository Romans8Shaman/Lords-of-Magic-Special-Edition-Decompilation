/* Rebuilt from lomse.exe FUN_004739e0 @ 0x004739e0 (95 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00473930 ((undefined4 (__fastcall *)(int))0x00473930)
#define GetTickCount (*(__typeof__(DWORD (__stdcall *)(void)) *)0x0054d0e8) /* KERNEL32.DLL!GetTickCount via IAT */

#define LOM_SELF_004739e0 1
void __fastcall rb_004739e0(int param_1)

{
  DWORD DVar1;
  
  if (*(int *)(param_1 + 0x38) == 1) {
    DVar1 = GetTickCount();
    if (*(uint *)(param_1 + 0xb0) < DVar1 - *(int *)(param_1 + 0xb8)) {
      DVar1 = GetTickCount();
      *(DWORD *)(param_1 + 0xb8) = DVar1;
      *(undefined4 *)(param_1 + 0x38) = 2;
      return;
    }
  }
  else if (*(int *)(param_1 + 0x38) == 2) {
    DVar1 = GetTickCount();
    if (*(uint *)(param_1 + 0xb4) < DVar1 - *(int *)(param_1 + 0xb8)) {
      FUN_00473930(param_1);
    }
  }
  return;
}
