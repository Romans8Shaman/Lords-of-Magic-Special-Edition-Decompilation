/* Rebuilt from lomse.exe op_numcomputers @ 0x004b8b10 (97 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005d1e84 (*(int *)0x005d1e84)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)

#define LOM_SELF_004b8b10 1
void __cdecl rb_004b8b10(void *vm)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if ((DAT_005d1e84 == 0) || (iVar3 = *(int *)(DAT_005d1e84 + 0x100), iVar3 < 1)) {
    iVar3 = 1;
  }
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
