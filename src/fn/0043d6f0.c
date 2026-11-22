/* Rebuilt from lomse.exe FUN_0043d6f0 @ 0x0043d6f0 (47 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004d41c0 ((undefined4 (__thiscall *)(void *, char *))0x004d41c0)

#define LOM_SELF_0043d6f0 1
undefined4 __thiscall rb_0043d6f0(void *this,char *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 0x90);
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  if (iVar1 == 0) {
    return 0;
  }
  FUN_004d41c0(this,param_1);
  return 1;
}
