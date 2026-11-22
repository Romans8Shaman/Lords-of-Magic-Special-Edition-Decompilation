/* Rebuilt from lomse.exe FUN_0049c9d0 @ 0x0049c9d0 (47 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_0049c830 ((undefined4 (__fastcall *)(int))0x0049c830)
#define FUN_0049ca00 ((undefined4 (__fastcall *)(int))0x0049ca00)
#define FUN_0049da80 ((undefined4 (__thiscall *)(void *, uint))0x0049da80)

#define LOM_SELF_0049c9d0 1
undefined4 __thiscall rb_0049c9d0(void *this,undefined4 param_1)

{
  FUN_0049c830((int)this);
  *(undefined4 *)((int)this + 0x3c) = param_1;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  FUN_0049da80(this,0);
  FUN_0049ca00((int)this);
  return 1;
}
