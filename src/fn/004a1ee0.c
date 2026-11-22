/* Rebuilt from lomse.exe op_getdisplaymode @ 0x004a1ee0 (87 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005a7d8c (*(int *)0x005a7d8c)
#define DAT_005a8084 (*(undefined *)0x005a8084)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)

#define LOM_SELF_004a1ee0 1
void __cdecl rb_004a1ee0(void *vm)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  cVar1 = (&DAT_005a8084)[DAT_005a7d8c * 0x400];
  if (*(int *)((int)vm + 0x54) == 0) {
    *(undefined4 *)((int)vm + 0x90) = 3;
    FUN_004d4550(vm);
    *(undefined4 *)((int)vm + 0x90) = 0;
    *(undefined4 *)((int)vm + 0xa4) = 0;
    return;
  }
  iVar3 = *(int *)((int)vm + 0x54) + -1;
  *(int *)((int)vm + 0x54) = iVar3;
  iVar2 = *(int *)((int)vm + 0x50);
  *(undefined4 *)(iVar2 + iVar3 * 8) = 1;
  *(int *)(iVar2 + 4 + iVar3 * 8) = (int)cVar1;
  return;
}
