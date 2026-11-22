/* Rebuilt from lomse.exe FUN_004bb160 @ 0x004bb160 (28 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00462de0 ((undefined4 (__thiscall *)(void *, undefined4))0x00462de0)

#define LOM_SELF_004bb160 1
void __thiscall rb_004bb160(void *this,undefined4 param_1)

{
  if ((*(byte *)((int)this + 0x15d8) & 2) != 0) {
    FUN_00462de0((void *)((int)this + 0x15e0),param_1);
  }
  return;
}
