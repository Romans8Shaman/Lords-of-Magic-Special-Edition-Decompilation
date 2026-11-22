/* Rebuilt from lomse.exe op_getbarterproc @ 0x004e3370 (79 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005a7c3c (*(undefined4 *)0x005a7c3c)
#define DAT_005a7c40 (*(undefined4 *)0x005a7c40)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)

#define LOM_SELF_004e3370 1
void __cdecl rb_004e3370(void *vm)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  
  uVar3 = DAT_005a7c40;
  uVar2 = DAT_005a7c3c;
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
