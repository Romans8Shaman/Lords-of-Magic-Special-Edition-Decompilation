/* Rebuilt from lomse.exe FUN_004fd4d0 @ 0x004fd4d0 (100 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00476010 ((bool (__thiscall *)(void *, int, int, int, int))0x00476010)
#define FUN_0049cc10 ((undefined4 (__thiscall *)(void *, int *, int, int))0x0049cc10)

#define LOM_SELF_004fd4d0 1
void __thiscall rb_004fd4d0(void *this,void *param_1)

{
  int *piVar1;
  uchar _fr[0x18] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_10[4];
#define local_10 (*(_t_local_10 *)(_fr + 0x0))
  
  if ((*(void **)((int)this + 0x2c) != (void *)0x0) &&
     ((((*(byte *)((int)this + 0x34) & 2) != 0 ||
       (*(int *)((int)this + 0x14) != *(int *)((int)this + 0xc))) ||
      (*(int *)((int)this + 0x18) != *(int *)((int)this + 0x10))))) {
    piVar1 = (int *)FUN_0049cc10(*(void **)((int)this + 0x2c),local_10,*(int *)((int)this + 0xc),
                                 *(int *)((int)this + 0x10));
    FUN_00476010(param_1,*piVar1,piVar1[1],piVar1[2],piVar1[3]);
  }
  return;
#undef local_10
}
