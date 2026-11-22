/* Rebuilt from lomse.exe op_getmyfaithtype @ 0x004b46d0 (115 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005d1e84 (*(int *)0x005d1e84)
#define FUN_004b6030 ((undefined4 (__stdcall *)(int))0x004b6030)
#define FUN_004b6b70 ((undefined4 (__cdecl *)(int))0x004b6b70)
#define FUN_004b7dd0 ((undefined4 (__fastcall *)(int))0x004b7dd0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)

#define LOM_SELF_004b46d0 1
void __cdecl rb_004b46d0(void *vm)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (DAT_005d1e84 == 0) {
    iVar1 = 1;
  }
  else {
    iVar1 = FUN_004b7dd0(DAT_005d1e84);
  }
  iVar1 = FUN_004b6030(iVar1 + -1);
  uVar2 = FUN_004b6b70(iVar1);
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
