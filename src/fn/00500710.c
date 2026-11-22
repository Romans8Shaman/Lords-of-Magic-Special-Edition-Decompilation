/* Rebuilt from lomse.exe FUN_00500710 @ 0x00500710 (103 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00476010 ((bool (__thiscall *)(void *, int, int, int, int))0x00476010)
#define FUN_0048d810 ((int (__thiscall *)(void *, int))0x0048d810)
#define FUN_0048eb70 ((undefined4 (__thiscall *)(void *, int *))0x0048eb70)
#define FUN_005005f0 ((int (__thiscall *)(void *, uint))0x005005f0)
#define FUN_00505750 ((undefined4 (__thiscall *)(void *, uint))0x00505750)

#define LOM_SELF_00500710 1
void __thiscall rb_00500710(void *this,uint param_1,int param_2)

{
  int iVar1;
  void *pvVar2;
  int *piVar3;
  uchar _fr[0x18] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_10[4];
#define local_10 (*(_t_local_10 *)(_fr + 0x0))
  
  iVar1 = FUN_00505750(this,param_1);
  if (iVar1 != 0) {
    pvVar2 = (void *)FUN_005005f0(this,param_1);
    pvVar2 = (void *)FUN_0048d810(pvVar2,param_2);
    if (pvVar2 != (void *)0x0) {
      piVar3 = (int *)FUN_0048eb70(pvVar2,local_10);
      FUN_00476010((void *)((int)this + 0x22fbc),*piVar3,piVar3[1],piVar3[2],piVar3[3]);
    }
  }
  return;
#undef local_10
}
