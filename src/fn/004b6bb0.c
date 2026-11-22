/* Rebuilt from lomse.exe FUN_004b6bb0 @ 0x004b6bb0 (33 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_004b6bb0 1
void __thiscall rb_004b6bb0(void *this,int param_1,int param_2)

{
  *(undefined4 *)((int)this + param_2 * 4 + 0x4b34) = 0xffffffff;
  *(undefined4 *)((int)this + param_1 * 4 + 0x4b74) = 0;
  return;
}
