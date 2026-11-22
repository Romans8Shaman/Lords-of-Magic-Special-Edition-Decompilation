/* Rebuilt from lomse.exe FUN_0049f150 @ 0x0049f150 (30 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_0049c900 ((undefined4 (__fastcall *)(undefined4 *))0x0049c900)
#define FUN_0049f130 ((undefined4 (__cdecl *)(int))0x0049f130)

#define LOM_SELF_0049f150 1
undefined4 * __thiscall rb_0049f150(void *this,byte param_1)

{
  FUN_0049c900(this);
  if ((param_1 & 1) != 0) {
    FUN_0049f130((int)this);
  }
  return this;
}
