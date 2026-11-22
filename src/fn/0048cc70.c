/* Rebuilt from lomse.exe FUN_0048cc70 @ 0x0048cc70 (43 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00489960 ((undefined4 (__fastcall *)(undefined4 *))0x00489960)

#define LOM_SELF_0048cc70 1
int __thiscall rb_0048cc70(void *this,undefined1 param_1)

{
  FUN_00489960((undefined4 *)((int)this + 9));
  *(undefined1 *)((int)this + 4) = param_1;
  *(undefined1 *)((int)this + 6) = 0xff;
  *(undefined1 *)((int)this + 8) = 0;
  return (int)this;
}
