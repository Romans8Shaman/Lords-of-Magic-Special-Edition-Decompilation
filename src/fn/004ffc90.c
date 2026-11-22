/* Rebuilt from lomse.exe FUN_004ffc90 @ 0x004ffc90 (53 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005d2ca0 (*(int *)0x005d2ca0)
#define FUN_004ffa80 ((undefined4 (__fastcall *)(void *))0x004ffa80)

#define LOM_SELF_004ffc90 1
void __fastcall rb_004ffc90(void *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)((int)param_1 + 0x25318);
  if (iVar1 != 0) {
    *(int *)((int)param_1 + 0x25630) = *(int *)((int)param_1 + 0x25630) + 1;
    do {
      if (DAT_005d2ca0 != 0) break;
      FUN_004ffa80(param_1);
    } while (*(int *)((int)param_1 + 0x25318) == iVar1);
    *(int *)((int)param_1 + 0x25630) = *(int *)((int)param_1 + 0x25630) + -1;
  }
  return;
}
