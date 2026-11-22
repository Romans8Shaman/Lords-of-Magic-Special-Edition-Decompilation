/* Rebuilt from lomse.exe FUN_004f5bb0 @ 0x004f5bb0 (75 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_0049cc10 ((undefined4 (__thiscall *)(void *, int *, int, int))0x0049cc10)

#define LOM_SELF_004f5bb0 1
undefined4 __thiscall rb_004f5bb0(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  uchar _fr[0x18] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_10[4];
#define local_10 (*(_t_local_10 *)(_fr + 0x0))
  
  if (*(void **)((int)this + 0x2c) == (void *)0x0) {
    return 0;
  }
  puVar1 = (undefined4 *)
           FUN_0049cc10(*(void **)((int)this + 0x2c),local_10,*(int *)((int)this + 0x14),
                        *(int *)((int)this + 0x18));
  *param_1 = *puVar1;
  param_1[1] = puVar1[1];
  param_1[2] = puVar1[2];
  param_1[3] = puVar1[3];
  return 1;
#undef local_10
}
