/* Rebuilt from lomse.exe FUN_005056a0 @ 0x005056a0 (93 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_0048fc00 ((undefined4 (__thiscall *)(void *, uint))0x0048fc00)
#define FUN_005005f0 ((int (__thiscall *)(void *, uint))0x005005f0)

#define LOM_SELF_005056a0 1
undefined4 __thiscall rb_005056a0(void *this,uint param_1)

{
  void *this_00;
  int iVar1;
  int *piVar2;
  
  this_00 = (void *)FUN_005005f0(this,param_1);
  if ((this_00 == (void *)0x0) || (piVar2 = *(int **)((int)this + 0x25318), piVar2 == (int *)0x0)) {
    return 0;
  }
  do {
    iVar1 = FUN_0048fc00(this_00,((int)piVar2 - *(int *)((int)this + 0x255a0) >> 7) + 0x11000000);
    if (iVar1 != 0) {
      return 1;
    }
    piVar2 = (int *)*piVar2;
  } while (piVar2 != (int *)0x0);
  return 0;
}
