/* Rebuilt from lomse.exe FUN_004f5c00 @ 0x004f5c00 (101 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_0049cc10 ((undefined4 (__thiscall *)(void *, int *, int, int))0x0049cc10)

#define LOM_SELF_004f5c00 1
undefined4 __thiscall rb_004f5c00(void *this,int *param_1)

{
  uchar _fr[0x18] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_10;
  typedef int _t_local_c;
  typedef int _t_local_8;
  typedef int _t_local_4;
#define local_10 (*(_t_local_10 *)(_fr + 0x0))
#define local_c (*(_t_local_c *)(_fr + 0x4))
#define local_8 (*(_t_local_8 *)(_fr + 0x8))
#define local_4 (*(_t_local_4 *)(_fr + 0xc))
  
  if ((*(void **)((int)this + 0x2c) != (void *)0x0) && (-1 < *(int *)((int)this + 0x28))) {
    FUN_0049cc10(*(void **)((int)this + 0x2c),&local_10,*(int *)((int)this + 0xc),
                 *(int *)((int)this + 0x10));
    if ((*param_1 <= local_8) &&
       (((param_1[1] <= local_4 && (local_10 <= param_1[2])) && (local_c <= param_1[3])))) {
      return 1;
    }
  }
  return 0;
#undef local_10
#undef local_c
#undef local_8
#undef local_4
}
