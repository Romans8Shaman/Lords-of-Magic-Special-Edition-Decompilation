/* Rebuilt from lomse.exe FUN_004b7bc0 @ 0x004b7bc0 (41 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00579274 (*(undefined1 *)0x00579274)

#define LOM_SELF_004b7bc0 1
undefined1 * __thiscall rb_004b7bc0(void *this,int param_1)

{
  if ((param_1 < 0) || (*(int *)((int)this + 0x36c) <= param_1)) {
    return &DAT_00579274;
  }
  return (undefined1 *)(param_1 * 0x1f + 0x2d0 + (int)this);
}
