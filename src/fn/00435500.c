/* Rebuilt from lomse.exe op_getpassivebarterplayer @ 0x00435500 (82 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00435480 ((int (__fastcall *)(int))0x00435480)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)

#define LOM_SELF_00435500 1
void __cdecl rb_00435500(void *vm)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = FUN_00435480(0x584cd4);
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
