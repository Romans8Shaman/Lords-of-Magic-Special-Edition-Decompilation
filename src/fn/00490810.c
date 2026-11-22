/* Rebuilt from lomse.exe op_currentdialog @ 0x00490810 (78 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005a79bc (*(undefined4 *)0x005a79bc)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)

#define LOM_SELF_00490810 1
void __cdecl rb_00490810(void *vm)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar2 = DAT_005a79bc;
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
