/* Rebuilt from lomse.exe op_blankimpplayer @ 0x0049ef60 (82 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005a7b50 (*(undefined4 *)0x005a7b50)
#define FUN_00492550 ((int (__fastcall *)(int *))0x00492550)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)

#define LOM_SELF_0049ef60 1
void __cdecl rb_0049ef60(void *vm)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = FUN_00492550(&DAT_005a7b50);
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
  *(int *)(iVar1 + 4 + iVar3 * 8) = iVar2;
  return;
}
