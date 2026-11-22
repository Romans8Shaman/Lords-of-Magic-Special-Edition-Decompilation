/* Rebuilt from lomse.exe FUN_004acea0 @ 0x004acea0 (83 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004c6660 ((undefined4 (__fastcall *)(int *))0x004c6660)

#define LOM_SELF_004acea0 1
uint __thiscall rb_004acea0(void *this,int param_1,int param_2)

{
  if (*(int *)((int)this + 0x1b8) == 0) {
    FUN_004c6660(this);
  }
  if ((((param_1 < 0) || (param_2 < 0)) || (*(int *)((int)this + 0xc) <= param_1)) ||
     (*(int *)((int)this + 0xc) <= param_2)) {
    return 0;
  }
  return (uint)(*(short *)(*(int *)this + 4 + param_1 * 6) ==
               *(short *)(*(int *)this + 4 + param_2 * 6));
}
