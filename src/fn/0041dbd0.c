/* Rebuilt from lomse.exe FUN_0041dbd0 @ 0x0041dbd0 (51 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_0042d750 ((undefined4 (__thiscall *)(void *, int, undefined4, int))0x0042d750)

#define LOM_SELF_0041dbd0 1
void __thiscall rb_0041dbd0(void *this,int param_1,undefined4 param_2,int param_3)

{
  FUN_0042d750((undefined4 *)((int)this + 0x568),param_1,0,-1);
  *(undefined4 *)((int)this + 0x568) = param_2;
  if (-1 < param_3) {
    *(int *)((int)this + 0x56c) = param_3;
  }
  return;
}
