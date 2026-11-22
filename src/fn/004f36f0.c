/* Rebuilt from lomse.exe FUN_004f36f0 @ 0x004f36f0 (19 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_004f36f0 1
void __thiscall rb_004f36f0(void *this,int param_1)

{
  *(undefined4 *)((int)this + 0x28) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)((int)this + 0x30) = *(undefined4 *)(param_1 + 0xc);
  return;
}
