/* Rebuilt from lomse.exe op_getdoorwaypresent @ 0x00488330 (81 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005ae8b8 (*(int *)0x005ae8b8)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)

#define LOM_SELF_00488330 1
void __cdecl rb_00488330(void *vm)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  
  bVar3 = DAT_005ae8b8 != 0;
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
  *(uint *)(iVar1 + 4 + iVar2 * 8) = -(uint)bVar3;
  return;
}
