/* Rebuilt from lomse.exe FUN_004a2d80 @ 0x004a2d80 (23 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_004a2d80 1
void __thiscall rb_004a2d80(void *this,int param_1)

{
  *(undefined4 *)((int)this + 0x24) = 10;
  *(uint *)this = -(uint)(param_1 != 0) & 2;
  return;
}
