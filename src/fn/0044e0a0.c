/* Rebuilt from lomse.exe op_getvirtualarmyid @ 0x0044e0a0 (80 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005869f4 (*(int *)0x005869f4)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)

#define LOM_SELF_0044e0a0 1
void __cdecl rb_0044e0a0(void *vm)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = *(undefined4 *)(DAT_005869f4 + 0x28);
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
  *(undefined4 *)(iVar2 + 4 + iVar3 * 8) = uVar1;
  return;
}
