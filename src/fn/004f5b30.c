/* Rebuilt from lomse.exe FUN_004f5b30 @ 0x004f5b30 (25 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_0049da80 ((undefined4 (__thiscall *)(void *, uint))0x0049da80)

#define LOM_SELF_004f5b30 1
undefined4 __thiscall rb_004f5b30(void *this,uint param_1)

{
  undefined4 uVar1;
  
  if (*(void **)((int)this + 0x2c) == (void *)0x0) {
    return 0;
  }
  uVar1 = FUN_0049da80(*(void **)((int)this + 0x2c),param_1);
  return uVar1;
}
