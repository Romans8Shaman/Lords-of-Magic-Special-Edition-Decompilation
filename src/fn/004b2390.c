/* Rebuilt from lomse.exe FUN_004b2390 @ 0x004b2390 (56 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005a7b78 (*(void * *)0x005a7b78)
#define FUN_004d05e0 ((undefined4 (__thiscall *)(void *, uint, int *))0x004d05e0)

#define LOM_SELF_004b2390 1
undefined4 __thiscall rb_004b2390(void *this,undefined4 *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  uVar1 = *(uint *)((int)this + 0x5cc);
  puVar3 = (undefined4 *)((int)this + 0x520);
  for (iVar2 = 0x29; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *param_1;
    param_1 = param_1 + 1;
    puVar3 = puVar3 + 1;
  }
  FUN_004d05e0(DAT_005a7b78,uVar1,*(int **)((int)this + 0x5d0));
  return 1;
}
