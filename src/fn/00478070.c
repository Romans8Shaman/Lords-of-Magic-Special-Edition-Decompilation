/* Rebuilt from lomse.exe FUN_00478070 @ 0x00478070 (105 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005832e4 (*(int *)0x005832e4)

#define LOM_SELF_00478070 1
int __thiscall rb_00478070(void *this,undefined4 param_1)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 4);
  if (*(int *)this <= iVar1) {
    return -1;
  }
  if (*(int *)((int)this + 8) == 0) {
    return -1;
  }
  DAT_005832e4 = DAT_005832e4 + 4;
  *(undefined4 *)(*(int *)((int)this + 8) + iVar1 * 4) = param_1;
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  DAT_005832e4 = DAT_005832e4 + -4;
  return iVar1;
}
