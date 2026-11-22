/* Rebuilt from lomse.exe FUN_0050f790 @ 0x0050f790 (23 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005cd304 (*(undefined *)0x005cd304)
#define FUN_004b0ee0 ((int (__thiscall *)(void *, int))0x004b0ee0)

#define LOM_SELF_0050f790 1
undefined4 __fastcall rb_0050f790(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_004b0ee0(&DAT_005cd304,*(int *)(param_1 + 0x48));
  if (iVar1 == 0) {
    return 0;
  }
  return *(undefined4 *)(iVar1 + 0x24);
}
