/* Rebuilt from lomse.exe FUN_00479640 @ 0x00479640 (107 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005863c8 (*(int *)0x005863c8)
#define FUN_004b32c0 ((undefined4 (__fastcall *)(int *))0x004b32c0)
#define GetTickCount (*(__typeof__(DWORD (__stdcall *)(void)) *)0x0054d0e8) /* KERNEL32.DLL!GetTickCount via IAT */

#define LOM_SELF_00479640 1
void __fastcall rb_00479640(int param_1)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  
  if ((*(int *)(param_1 + 0x13b4) != 0) && (*(int *)(param_1 + 0xfc0) != 0)) {
    for (iVar4 = *(int *)(param_1 + 0x1368); -2000 < iVar4; iVar4 = iVar4 + -0x14) {
      uVar3 = GetTickCount();
      uVar1 = uVar3 + 0x19;
      while (uVar3 < uVar1) {
        uVar3 = GetTickCount();
      }
      if (DAT_005863c8 == 0) {
        return;
      }
      piVar2 = *(int **)(param_1 + 0xfc0);
      ((undefined4 (__stdcall *)(__typeof__(piVar2), __typeof__(iVar4)))(**(code **)(*piVar2 + 0x3c)))(piVar2,iVar4);
    }
    FUN_004b32c0((int *)(param_1 + 0xfc0));
  }
  return;
}
