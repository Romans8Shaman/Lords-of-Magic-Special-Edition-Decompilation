/* Rebuilt from lomse.exe FUN_0047e340 @ 0x0047e340 (228 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_0042d850 ((undefined4 (__thiscall *)(void *, void *, int, int))0x0042d850)
#define FUN_00476010 ((bool (__thiscall *)(void *, int, int, int, int))0x00476010)
#define FUN_0049cb20 ((undefined4 (__thiscall *)(void *, int *, int *, int, uint))0x0049cb20)
#define FUN_0049cc10 ((undefined4 (__thiscall *)(void *, int *, int, int))0x0049cc10)
#define FUN_004b0460 ((undefined4 (__thiscall *)(void *, void *, int, int))0x004b0460)
#define FUN_004fd4d0 ((undefined4 (__thiscall *)(void *, void *))0x004fd4d0)

#define LOM_SELF_0047e340 1
void __thiscall rb_0047e340(void *this, void *volatile param_1)

{
  void *this_00;
  int *piVar1;
  uchar _fr[0x20] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_iStack_14;
  typedef int _t_aiStack_10[4];
#define iStack_14 (*(_t_iStack_14 *)(_fr + 0x4))
#define aiStack_10 (*(_t_aiStack_10 *)(_fr + 0x8))
  
  this_00 = param_1;
  if ((((*(byte *)((int)this + 0x34) & 2) != 0) ||
      (*(int *)((int)this + 0x14) != *(int *)((int)this + 0xc))) ||
     (*(int *)((int)this + 0x18) != *(int *)((int)this + 0x10))) {
    FUN_004fd4d0(this,param_1);
    if (*(void **)((int)this + 0xb8) != (void *)0x0) {
      piVar1 = (int *)FUN_0049cc10(*(void **)((int)this + 0xb8),aiStack_10,*(int *)((int)this + 0xc)
                                   ,*(int *)((int)this + 0x10) + *(int *)((int)this + 0xbc));
      FUN_00476010(this_00,*piVar1,piVar1[1],piVar1[2],piVar1[3]);
    }
    param_1 = (void *)0x0;
    iStack_14 = 0;
    if ((*(int *)((int)this + 0x98) != 0) && (*(void **)((int)this + 0x2c) != (void *)0x0)) {
      FUN_0049cb20(*(void **)((int)this + 0x2c),(int *)&param_1,&iStack_14,
                   *(int *)((int)this + 0x98),0xffffffff);
    }
    FUN_0042d850((void *)((int)this + 0x94),this_00,(int)param_1 + *(int *)((int)this + 0xc),
                 iStack_14 + *(int *)((int)this + 0x10));
    FUN_004b0460((void *)((int)this + 0x88),this_00,*(int *)((int)this + 0xc),
                 *(int *)((int)this + 0x10));
  }
  return;
#undef iStack_14
#undef aiStack_10
}
