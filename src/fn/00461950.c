/* Rebuilt from lomse.exe op_defenderlost_q @ 0x00461950 (96 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aadb0 (*(int *)0x005aadb0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define FUN_0050b9d0 ((int (__fastcall *)(int))0x0050b9d0)

#define LOM_SELF_00461950 1
void __cdecl rb_00461950(void *vm)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  
  iVar1 = FUN_0050b9d0(0x5aa12c);
  bVar3 = iVar1 != DAT_005aadb0;
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
  *(uint *)(iVar1 + 4 + iVar2 * 8) = bVar3 - 1;
  return;
}
