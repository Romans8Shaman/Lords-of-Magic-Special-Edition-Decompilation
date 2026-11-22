/* Rebuilt from lomse.exe FUN_00421700 @ 0x00421700 (210 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_0042da60 ((undefined4 (__thiscall *)(void *, int *, int, int))0x0042da60)
#define FUN_0049cc10 ((undefined4 (__thiscall *)(void *, int *, int, int))0x0049cc10)
#define FUN_004b0860 ((undefined4 (__thiscall *)(void *, int *, int, int))0x004b0860)
#define FUN_004f5c00 ((undefined4 (__thiscall *)(void *, int *))0x004f5c00)

#define LOM_SELF_00421700 1
undefined4 __thiscall rb_00421700(void *this, int *volatile param_1)

{
  int iVar1;
  uchar _fr[0x18] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_iStack_10;
  typedef int _t_iStack_c;
  typedef int _t_iStack_8;
  typedef int _t_iStack_4;
#define iStack_10 (*(_t_iStack_10 *)(_fr + 0x0))
#define iStack_c (*(_t_iStack_c *)(_fr + 0x4))
#define iStack_8 (*(_t_iStack_8 *)(_fr + 0x8))
#define iStack_4 (*(_t_iStack_4 *)(_fr + 0xc))
  
  iVar1 = FUN_004f5c00(this,param_1);
  if (iVar1 != 0) {
    return 1;
  }
  iVar1 = FUN_004b0860((void *)((int)this + 0x55c),param_1,*(int *)((int)this + 0xc),
                       *(int *)((int)this + 0x10));
  if (iVar1 != 0) {
    return 1;
  }
  iVar1 = FUN_0042da60((void *)((int)this + 0x568),param_1,*(int *)((int)this + 0xc),
                       *(int *)((int)this + 0x10));
  if (iVar1 != 0) {
    return 1;
  }
  if (*(void **)((int)this + 0x58c) != (void *)0x0) {
    FUN_0049cc10(*(void **)((int)this + 0x58c),&iStack_10,*(int *)((int)this + 0xc),
                 *(int *)((int)this + 0x590) + *(int *)((int)this + 0x10));
    if ((((*param_1 <= iStack_8) && (param_1[1] <= iStack_4)) && (iStack_10 <= param_1[2])) &&
       (iStack_c <= param_1[3])) {
      return 1;
    }
  }
  return 0;
#undef iStack_10
#undef iStack_c
#undef iStack_8
#undef iStack_4
}
