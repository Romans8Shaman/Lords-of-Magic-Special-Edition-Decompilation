/* Rebuilt from lomse.exe FUN_00504740 @ 0x00504740 (110 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_005305b0 ((undefined4 (__thiscall *)(void *, int))0x005305b0)

#define LOM_SELF_00504740 1
undefined4 __thiscall rb_00504740(void *this,uint param_1)

{
  uint uVar1;
  
  if ((*(int *)((int)this + *(int *)((int)this + 0x232a4) * 0x400 + 0x23590) == 3) &&
     (((((uVar1 = param_1 & 0xffff, 999 < uVar1 && (uVar1 < 0x3f2)) ||
        ((1999 < uVar1 && (uVar1 < 0x7da)))) || ((2999 < uVar1 && (uVar1 < 0xbc2)))) ||
      ((3999 < uVar1 && (uVar1 < 0xfaa)))))) {
    FUN_005305b0((void *)((int)this + *(int *)((int)this + 0x232a4) * 0x400 + 0x232a8),uVar1);
    return 1;
  }
  return 0;
}
