/* Rebuilt from lomse.exe FUN_0040efd0 @ 0x0040efd0 (160 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00578150 (*(int *)0x00578150)
#define FUN_0040eb60 ((undefined4 (__stdcall *)(void))0x0040eb60)
#define FUN_0040f3a0 ((int (__fastcall *)(int))0x0040f3a0)
#define FUN_0040f4e0 ((int (__thiscall *)(void *, int))0x0040f4e0)

#define LOM_SELF_0040efd0 1
undefined4 __thiscall rb_0040efd0(void *this,undefined4 *param_1)

{
  undefined4 uVar1;
  bool bVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uchar _fr[0x58] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef undefined4 _t_local_50[19];
  typedef undefined4 _t_local_4;
#define local_50 (*(_t_local_50 *)(_fr + 0x0))
#define local_4 (*(_t_local_4 *)(_fr + 0x4c))
  
  bVar2 = false;
  puVar3 = (undefined4 *)FUN_0040f4e0(this,param_1[1]);
  if (puVar3 == (undefined4 *)0x0) {
    bVar2 = true;
    puVar3 = (undefined4 *)FUN_0040f3a0((int)this);
    if (puVar3 == (undefined4 *)0x0) {
      return 0xffffffff;
    }
  }
  DAT_00578150 = DAT_00578150 + 0x50;
  puVar5 = puVar3;
  puVar6 = local_50;
  for (iVar4 = 0x14; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  puVar5 = puVar3;
  for (iVar4 = 0x14; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = *param_1;
    param_1 = param_1 + 1;
    puVar5 = puVar5 + 1;
  }
  if (bVar2) {
    puVar3[0x13] = *(undefined4 *)this;
    *(undefined4 **)this = puVar3;
  }
  else {
    puVar3[0x13] = local_4;
    puVar3[3] = local_50[3];
    puVar3[2] = local_50[2];
  }
  uVar1 = puVar3[1];
  FUN_0040eb60();
  return uVar1;
#undef local_50
#undef local_4
}
