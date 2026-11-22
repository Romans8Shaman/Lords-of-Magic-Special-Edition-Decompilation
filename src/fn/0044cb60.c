/* Rebuilt from lomse.exe op_loadvirtualarmy @ 0x0044cb60 (211 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

/* register-held (not in _fr, see gen.py regvar_locals): uStack_4 */
#define DAT_005869f4 (*(undefined4 *)0x005869f4)
#define FUN_0044c630 ((undefined4 (__thiscall *)(void *, uint))0x0044c630)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)

#define LOM_SELF_0044cb60 1
void __cdecl rb_0044cb60(void *vm)

{
  int iVar1;
  undefined4 uVar2;
  char cVar3;
  int iVar4;
  uint uStack_4;
  
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar1 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar1;
    cVar3 = (char)*(undefined4 *)(*(int *)((int)vm + 0x50) + -8 + iVar1 * 8);
    uStack_4 = *(uint *)(*(int *)((int)vm + 0x50) + -4 + iVar1 * 8);
  }
  else {
    *(undefined4 *)((int)vm + 0x90) = 6;
    FUN_004d4550(vm);
    *(undefined4 *)((int)vm + 0x90) = 0;
    cVar3 = '\0';
    *(undefined4 *)((int)vm + 0xa4) = 0;
  }
  iVar1 = *(int *)((int)vm + 0x90);
  *(undefined4 *)((int)vm + 0x90) = 0;
  *(undefined4 *)((int)vm + 0xa4) = 0;
  if (iVar1 == 0) {
    if (cVar3 == '\b') goto LAB_0044cbe5;
    *(undefined4 *)((int)vm + 0x90) = 0xe;
    FUN_004d4550(vm);
    *(undefined4 *)((int)vm + 0x90) = 0;
    *(undefined4 *)((int)vm + 0xa4) = 0;
  }
  uStack_4 = 0;
LAB_0044cbe5:
  uVar2 = FUN_0044c630(&DAT_005869f4,uStack_4);
  if (*(int *)((int)vm + 0x54) == 0) {
    *(undefined4 *)((int)vm + 0x90) = 3;
    FUN_004d4550(vm);
    *(undefined4 *)((int)vm + 0x90) = 0;
    *(undefined4 *)((int)vm + 0xa4) = 0;
    return;
  }
  iVar4 = *(int *)((int)vm + 0x54) + -1;
  *(int *)((int)vm + 0x54) = iVar4;
  iVar1 = *(int *)((int)vm + 0x50);
  *(undefined4 *)(iVar1 + iVar4 * 8) = 1;
  *(undefined4 *)(iVar1 + 4 + iVar4 * 8) = uVar2;
  return;
}
