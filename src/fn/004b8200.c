/* Rebuilt from lomse.exe op_enumproviders @ 0x004b8200 (94 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005d1e84 (*(int * *)0x005d1e84)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)

#define LOM_SELF_004b8200 1
void __cdecl rb_004b8200(void *vm)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (DAT_005d1e84 == (int *)0x0) {
    uVar2 = 1;
  }
  else {
    uVar2 = ((undefined4 (__thiscall *)(__typeof__(DAT_005d1e84)))(**(code **)(*DAT_005d1e84 + 0x48)))(DAT_005d1e84);
  }
  if (*(int *)((int)vm + 0x54) == 0) {
    *(undefined4 *)((int)vm + 0x90) = 3;
    FUN_004d4550(vm);
    *(undefined4 *)((int)vm + 0x90) = 0;
    *(undefined4 *)((int)vm + 0xa4) = 0;
    return;
  }
  iVar3 = *(int *)((int)vm + 0x54) + -1;
  *(int *)((int)vm + 0x54) = iVar3;
  iVar1 = *(int *)((int)vm + 0x50);
  *(undefined4 *)(iVar1 + iVar3 * 8) = 1;
  *(undefined4 *)(iVar1 + 4 + iVar3 * 8) = uVar2;
  return;
}
