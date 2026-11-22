/* Rebuilt from lomse.exe FUN_0043d1a0 @ 0x0043d1a0 (45 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005ae958 (*(undefined *)0x005ae958)
#define FUN_0043d0a0 ((undefined4 (__thiscall *)(void *, int *))0x0043d0a0)
#define FUN_004a7d50 ((int (__thiscall *)(void *, int *, int))0x004a7d50)

#define LOM_SELF_0043d1a0 1
undefined4 __thiscall rb_0043d1a0(void *this,int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_0043d0a0(this,param_1);
  if (iVar1 == 0) {
    return 0;
  }
  FUN_004a7d50(&DAT_005ae958,this,*(int *)((int)this + 0x1c));
  return 1;
}
