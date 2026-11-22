/* Rebuilt from lomse.exe FUN_0042d980 @ 0x0042d980 (101 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_0049cd80 ((undefined4 (__thiscall *)(void *, uint, uint, int, int, int))0x0049cd80)
#define FUN_0049e070 ((undefined4 (__thiscall *)(void *, void *, int, int, int, int, int))0x0049e070)

#define LOM_SELF_0042d980 1
void __thiscall rb_0042d980(void *this,uint param_1,uint param_2,int param_3)

{
  if (param_3 == 2) {
    if ((*(void **)((int)this + 0x1c) != (void *)0x0) &&
       (*(void **)((int)this + 0x18) != (void *)0x0)) {
      FUN_0049e070(*(void **)((int)this + 0x18),*(void **)((int)this + 0x1c),param_1,param_2,-1,1,
                   *(int *)this);
      *(uint *)((int)this + 0x20) = *(uint *)((int)this + 0x20) | 4;
      return;
    }
    if (*(void **)((int)this + 0x18) != (void *)0x0) {
      FUN_0049cd80(*(void **)((int)this + 0x18),param_1,param_2,-1,1,2);
      *(uint *)((int)this + 0x20) = *(uint *)((int)this + 0x20) | 4;
    }
  }
  return;
}
