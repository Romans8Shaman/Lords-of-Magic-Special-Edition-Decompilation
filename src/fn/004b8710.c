/* Rebuilt from lomse.exe op_enumnetworkgames @ 0x004b8710 (110 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005d1e84 (*(int * *)0x005d1e84)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)

#define LOM_SELF_004b8710 1
void __cdecl rb_004b8710(void *vm)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (DAT_005d1e84 != (int *)0x0) {
    ((undefined4 (__thiscall *)(__typeof__(DAT_005d1e84)))(**(code **)(*DAT_005d1e84 + 0x1c)))(DAT_005d1e84);
    if (DAT_005d1e84 != (int *)0x0) {
      iVar3 = DAT_005d1e84[0xdb];
      goto LAB_004b8737;
    }
  }
  iVar3 = 1;
LAB_004b8737:
  if (*(int *)((int)vm + 0x54) == 0) {
    *(undefined4 *)((int)vm + 0x90) = 3;
    FUN_004d4550(vm);
    *(undefined4 *)((int)vm + 0x90) = 0;
    *(undefined4 *)((int)vm + 0xa4) = 0;
    return;
  }
  iVar2 = *(int *)((int)vm + 0x54) + -1;
  *(int *)((int)vm + 0x54) = iVar2;
  iVar1 = *(int *)((int)vm + 0x50);
  *(undefined4 *)(iVar1 + iVar2 * 8) = 1;
  *(int *)(iVar1 + 4 + iVar2 * 8) = iVar3;
  return;
}
