/* Rebuilt from lomse.exe FUN_004b0460 @ 0x004b0460 (189 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00476010 ((bool (__thiscall *)(void *, int, int, int, int))0x00476010)
#define FUN_0049cc10 ((undefined4 (__thiscall *)(void *, int *, int, int))0x0049cc10)

#define LOM_SELF_004b0460 1
void __thiscall rb_004b0460(void *this,void *param_1,int param_2,int param_3)

{
  int *piVar1;
  uchar _fr[0x18] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_10[4];
#define local_10 (*(_t_local_10 *)(_fr + 0x0))
  
  if (*(void **)this != (void *)0x0) {
    piVar1 = (int *)FUN_0049cc10(*(void **)this,local_10,param_2,param_3);
    FUN_00476010(param_1,*piVar1,piVar1[1],piVar1[2],piVar1[3]);
  }
  if (*(void **)((int)this + 4) != (void *)0x0) {
    piVar1 = (int *)FUN_0049cc10(*(void **)((int)this + 4),local_10,param_2,param_3);
    FUN_00476010(param_1,*piVar1,piVar1[1],piVar1[2],piVar1[3]);
  }
  if (*(void **)((int)this + 8) != (void *)0x0) {
    piVar1 = (int *)FUN_0049cc10(*(void **)((int)this + 8),local_10,param_2,param_3);
    FUN_00476010(param_1,*piVar1,piVar1[1],piVar1[2],piVar1[3]);
  }
  return;
#undef local_10
}
