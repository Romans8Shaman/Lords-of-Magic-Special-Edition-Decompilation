/* Rebuilt from lomse.exe FUN_004ee920 @ 0x004ee920 (45 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00462d70 ((undefined4 (__thiscall *)(void *, undefined4))0x00462d70)

#define LOM_SELF_004ee920 1
void __thiscall rb_004ee920(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)((int)this + 0x15ac) = param_2;
  *(undefined4 *)((int)this + 0x15a8) = param_1;
  *(undefined4 *)((int)this + 0x15b0) = param_3;
  FUN_00462d70((void *)((int)this + 0x15e0),param_1);
  return;
}
