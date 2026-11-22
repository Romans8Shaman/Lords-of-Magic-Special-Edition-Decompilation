/* Rebuilt from lomse.exe op_inmainview @ 0x004e3f70 (138 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005a7d8c (*(int *)0x005a7d8c)
#define DAT_005a8078 (*(undefined4 *)0x005a8078)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)

#define LOM_SELF_004e3f70 1
void __cdecl rb_004e3f70(void *vm)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (&DAT_005a8078)[DAT_005a7d8c * 0x100];
  if ((iVar1 == 2) || ((4 < iVar1 && (iVar1 < 7)))) {
    if (*(int *)((int)vm + 0x54) != 0) {
      iVar2 = *(int *)((int)vm + 0x54) + -1;
      *(int *)((int)vm + 0x54) = iVar2;
      iVar1 = *(int *)((int)vm + 0x50);
      *(undefined4 *)(iVar1 + iVar2 * 8) = 1;
      *(undefined4 *)(iVar1 + 4 + iVar2 * 8) = 0xffffffff;
      return;
    }
  }
  else if (*(int *)((int)vm + 0x54) != 0) {
    iVar2 = *(int *)((int)vm + 0x54) + -1;
    *(int *)((int)vm + 0x54) = iVar2;
    iVar1 = *(int *)((int)vm + 0x50);
    *(undefined4 *)(iVar1 + iVar2 * 8) = 1;
    *(undefined4 *)(iVar1 + 4 + iVar2 * 8) = 0;
    return;
  }
  *(undefined4 *)((int)vm + 0x90) = 3;
  FUN_004d4550(vm);
  *(undefined4 *)((int)vm + 0x90) = 0;
  *(undefined4 *)((int)vm + 0xa4) = 0;
  return;
}
