/* Rebuilt from lomse.exe FUN_004ad2b0 @ 0x004ad2b0 (214 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_0049cc10 ((undefined4 (__thiscall *)(void *, int *, int, int))0x0049cc10)

#define LOM_SELF_004ad2b0 1
undefined4 __thiscall rb_004ad2b0(void *this, int *volatile param_1)

{
  int *piVar1;
  uchar _fr[0x28] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_iStack_20;
  typedef int _t_iStack_1c;
  typedef int _t_iStack_18;
  typedef int _t_iStack_14;
  typedef int _t_aiStack_10[4];
#define iStack_20 (*(_t_iStack_20 *)(_fr + 0x0))
#define iStack_1c (*(_t_iStack_1c *)(_fr + 0x4))
#define iStack_18 (*(_t_iStack_18 *)(_fr + 0x8))
#define iStack_14 (*(_t_iStack_14 *)(_fr + 0xc))
#define aiStack_10 (*(_t_aiStack_10 *)(_fr + 0x10))
  
  if ((*(void **)((int)this + 0x2c) != (void *)0x0) && (-1 < *(int *)((int)this + 0x28))) {
    FUN_0049cc10(*(void **)((int)this + 0x2c),&iStack_20,*(int *)((int)this + 0xc),
                 *(int *)((int)this + 0x10));
    if ((*param_1 <= iStack_18) &&
       (((param_1[1] <= iStack_14 && (iStack_20 <= param_1[2])) && (iStack_1c <= param_1[3])))) {
      return 1;
    }
    if (*(void **)((int)this + 0xe4) != (void *)0x0) {
      piVar1 = (int *)FUN_0049cc10(*(void **)((int)this + 0xe4),aiStack_10,*(int *)((int)this + 0xc)
                                   ,*(int *)((int)this + 0xdc) + *(int *)((int)this + 0x10));
      if (((*param_1 <= piVar1[2]) && (param_1[1] <= piVar1[3])) &&
         ((*piVar1 <= param_1[2] && (piVar1[1] <= param_1[3])))) {
        return 1;
      }
    }
  }
  return 0;
#undef iStack_20
#undef iStack_1c
#undef iStack_18
#undef iStack_14
#undef aiStack_10
}
