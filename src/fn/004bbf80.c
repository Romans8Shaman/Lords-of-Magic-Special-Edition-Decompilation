/* Rebuilt from lomse.exe FUN_004bbf80 @ 0x004bbf80 (70 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00462d70 ((undefined4 (__thiscall *)(void *, undefined4))0x00462d70)
#define FUN_0051b890 ((undefined4 (__thiscall *)(void *, undefined4))0x0051b890)

#define LOM_SELF_004bbf80 1
void __thiscall rb_004bbf80(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)((int)this + 0x15b0) = param_3;
  *(undefined4 *)((int)this + 0x15a8) = param_1;
  *(undefined4 *)((int)this + 0x15ac) = param_2;
  FUN_00462d70((void *)((int)this + 0x15e0),param_1);
  FUN_0051b890((void *)((int)this + 0x1c64),param_1);
  *(undefined4 *)((int)this + 0x40) = 0;
  return;
}
