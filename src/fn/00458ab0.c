/* Rebuilt from lomse.exe op_getwallheight @ 0x00458ab0 (95 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define _DAT_005ae940 (*(float *)0x005ae940)

#define LOM_SELF_00458ab0 1
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl rb_00458ab0(void *vm)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar2 = __BC(undefined4, _DAT_005ae940);
  if (*(int *)((int)vm + 0x54) == 0) {
    *(undefined4 *)((int)vm + 0x90) = 3;
    FUN_004d4550(vm);
    *(undefined4 *)((int)vm + 0x90) = 0;
    *(undefined4 *)((int)vm + 0xa4) = 0;
    return;
  }
  iVar1 = *(int *)((int)vm + 0x50);
  iVar3 = *(int *)((int)vm + 0x54) + -1;
  *(int *)((int)vm + 0x54) = iVar3;
  *(undefined4 *)(iVar1 + iVar3 * 8) = 4;
  *(undefined4 *)(iVar1 + 4 + iVar3 * 8) = uVar2;
  return;
}
