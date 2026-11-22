/* Rebuilt from lomse.exe op_enemycombinedarmy @ 0x0052f870 (153 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005a7d8c (*(int *)0x005a7d8c)
#define DAT_005a7d90 (*(undefined *)0x005a7d90)
#define DAT_005aa7d4 (*(int *)0x005aa7d4)
#define DAT_005aadb0 (*(int *)0x005aadb0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)

#define LOM_SELF_0052f870 1
void __cdecl rb_0052f870(void *vm)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (*(int *)(&DAT_005a7d90 + DAT_005a7d8c * 0x400) == DAT_005aa7d4) {
    uVar3 = 0xfffffffb;
  }
  else {
    if (*(int *)(&DAT_005a7d90 + DAT_005a7d8c * 0x400) != DAT_005aadb0) {
      if (*(int *)((int)vm + 0x54) != 0) {
        iVar2 = *(int *)((int)vm + 0x54) + -1;
        *(int *)((int)vm + 0x54) = iVar2;
        iVar1 = *(int *)((int)vm + 0x50);
        *(undefined4 *)(iVar1 + iVar2 * 8) = 1;
        *(undefined4 *)(iVar1 + 4 + iVar2 * 8) = 0xffffffff;
        return;
      }
      goto LAB_0052f8e9;
    }
    uVar3 = 0xfffffffc;
  }
  if (*(int *)((int)vm + 0x54) != 0) {
    iVar2 = *(int *)((int)vm + 0x54) + -1;
    *(int *)((int)vm + 0x54) = iVar2;
    iVar1 = *(int *)((int)vm + 0x50);
    *(undefined4 *)(iVar1 + iVar2 * 8) = 1;
    *(undefined4 *)(iVar1 + 4 + iVar2 * 8) = uVar3;
    return;
  }
LAB_0052f8e9:
  *(undefined4 *)((int)vm + 0x90) = 3;
  FUN_004d4550(vm);
  *(undefined4 *)((int)vm + 0x90) = 0;
  *(undefined4 *)((int)vm + 0xa4) = 0;
  return;
}
