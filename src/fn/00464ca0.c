/* Rebuilt from lomse.exe op_currentplay @ 0x00464ca0 (131 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005577c8 (*(int *)0x005577c8)
#define DAT_005af194 (*(undefined *)0x005af194)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)

#define LOM_SELF_00464ca0 1
void __cdecl rb_00464ca0(void *vm)

{
  undefined4 uVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  
  if ((DAT_005577c8 < 0) || (0xf < DAT_005577c8)) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar3 = &DAT_005af194 + DAT_005577c8 * 0x1d84;
  }
  if ((puVar3 != (undefined *)0x0) && (puVar3 != (undefined *)0xffffea20)) {
    uVar1 = *(undefined4 *)(puVar3 + 0x15f0);
    if (*(int *)((int)vm + 0x54) != 0) {
      iVar4 = *(int *)((int)vm + 0x54) + -1;
      *(int *)((int)vm + 0x54) = iVar4;
      iVar2 = *(int *)((int)vm + 0x50);
      *(undefined4 *)(iVar2 + iVar4 * 8) = 1;
      *(undefined4 *)(iVar2 + 4 + iVar4 * 8) = uVar1;
      return;
    }
    *(undefined4 *)((int)vm + 0x90) = 3;
    FUN_004d4550(vm);
    *(undefined4 *)((int)vm + 0x90) = 0;
    *(undefined4 *)((int)vm + 0xa4) = 0;
  }
  return;
}
