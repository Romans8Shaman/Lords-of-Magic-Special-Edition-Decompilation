/* Rebuilt from lomse.exe FUN_0044a820 @ 0x0044a820 (30 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004b7c20 ((bool (__thiscall *)(void *, char *))0x004b7c20)

#define LOM_SELF_0044a820 1
void __thiscall rb_0044a820(void *this,char *param_1,undefined4 param_2)

{
  *(undefined4 *)((int)this + *(int *)((int)this + 0x2c8) * 4 + 0x394) = param_2;
  FUN_004b7c20(this,param_1);
  return;
}
