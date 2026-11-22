/* Rebuilt from lomse.exe op_getmilitaryselectionmode @ 0x0052fca0 (79 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005d209c (*(char *)0x005d209c)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)

#define LOM_SELF_0052fca0 1
void __cdecl rb_0052fca0(void *vm)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = (int)DAT_005d209c;
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
