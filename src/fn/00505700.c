/* Rebuilt from lomse.exe FUN_00505700 @ 0x00505700 (68 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_0048fc00 ((undefined4 (__thiscall *)(void *, uint))0x0048fc00)
#define FUN_005005f0 ((int (__thiscall *)(void *, uint))0x005005f0)

#define LOM_SELF_00505700 1
undefined4 __thiscall rb_00505700(void *this,uint param_1)

{
  int iVar1;
  int *this_00;
  
  iVar1 = FUN_005005f0(this,param_1);
  if ((iVar1 == 0) || (this_00 = *(int **)((int)this + 0x25318), this_00 == (int *)0x0)) {
    return 0;
  }
  do {
    iVar1 = FUN_0048fc00(this_00,param_1);
    if (iVar1 != 0) {
      return 1;
    }
    this_00 = (int *)*this_00;
  } while (this_00 != (int *)0x0);
  return 0;
}
