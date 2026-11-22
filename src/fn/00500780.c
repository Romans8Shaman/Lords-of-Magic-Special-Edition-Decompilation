/* Rebuilt from lomse.exe FUN_00500780 @ 0x00500780 (87 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00476010 ((bool (__thiscall *)(void *, int, int, int, int))0x00476010)
#define FUN_0048ec90 ((undefined4 (__thiscall *)(void *, int *))0x0048ec90)
#define FUN_005005f0 ((int (__thiscall *)(void *, uint))0x005005f0)
#define FUN_00505750 ((undefined4 (__thiscall *)(void *, uint))0x00505750)

#define LOM_SELF_00500780 1
void __thiscall rb_00500780(void *this,uint param_1)

{
  int iVar1;
  void *this_00;
  int *piVar2;
  uchar _fr[0x18] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_10[4];
#define local_10 (*(_t_local_10 *)(_fr + 0x0))
  
  iVar1 = FUN_00505750(this,param_1);
  if (iVar1 != 0) {
    this_00 = (void *)FUN_005005f0(this,param_1);
    piVar2 = (int *)FUN_0048ec90(this_00,local_10);
    FUN_00476010((void *)((int)this + 0x22fbc),*piVar2,piVar2[1],piVar2[2],piVar2[3]);
  }
  return;
#undef local_10
}
