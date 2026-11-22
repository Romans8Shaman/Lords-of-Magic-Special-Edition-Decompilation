/* Rebuilt from lomse.exe FUN_00505750 @ 0x00505750 (78 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_0048fc00 ((undefined4 (__thiscall *)(void *, uint))0x0048fc00)
#define FUN_005005f0 ((int (__thiscall *)(void *, uint))0x005005f0)

#define LOM_SELF_00505750 1
undefined4 __thiscall rb_00505750(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  int *this_00;
  
  piVar1 = (int *)FUN_005005f0(this,param_1);
  if ((piVar1 == (int *)0x0) || (this_00 = *(int **)((int)this + 0x25318), this_00 == (int *)0x0)) {
    return 0;
  }
  while( true ) {
    if (this_00 == piVar1) {
      return 1;
    }
    iVar2 = FUN_0048fc00(this_00,param_1);
    if (iVar2 != 0) break;
    this_00 = (int *)*this_00;
    if (this_00 == (int *)0x0) {
      return 0;
    }
  }
  return 1;
}
