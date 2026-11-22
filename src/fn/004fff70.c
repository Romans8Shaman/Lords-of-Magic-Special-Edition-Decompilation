/* Rebuilt from lomse.exe op_getclosepopupsproc @ 0x004fff70 (79 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aa120 (*(undefined4 *)0x005aa120)
#define DAT_005aa124 (*(undefined4 *)0x005aa124)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)

#define LOM_SELF_004fff70 1
void __cdecl rb_004fff70(void *vm)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  
  uVar3 = DAT_005aa124;
  uVar2 = DAT_005aa120;
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
  *(undefined4 *)(iVar1 + iVar4 * 8) = uVar2;
  *(undefined4 *)(iVar1 + 4 + iVar4 * 8) = uVar3;
  return;
}
