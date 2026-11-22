/* Rebuilt from lomse.exe FUN_00422e90 @ 0x00422e90 (269 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005a7b78 (*(void * *)0x005a7b78)
#define DAT_005a7bf4 (*(uint *)0x005a7bf4)
#define DAT_005a7bf8 (*(int * *)0x005a7bf8)
#define DAT_005a7d8c (*(int *)0x005a7d8c)
#define DAT_005a7d90 (*(undefined *)0x005a7d90)
#define FUN_004d09a0 ((undefined4 (__thiscall *)(void *, uint, int *, int))0x004d09a0)
#define thunk_FUN_00526ea0 ((undefined4 (__fastcall *)(int))0x00526e90)

#define LOM_SELF_00422e90 1
undefined4 __thiscall rb_00422e90(void *this,int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uchar _fr[0x60] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef undefined4 _t_local_58[5];
  typedef undefined4 _t_local_44;
  typedef undefined4 _t_local_40;
  typedef undefined4 _t_local_3c;
#define local_58 (*(_t_local_58 *)(_fr + 0x0))
#define local_44 (*(_t_local_44 *)(_fr + 0x14))
#define local_40 (*(_t_local_40 *)(_fr + 0x18))
#define local_3c (*(_t_local_3c *)(_fr + 0x1c))

  if ((((param_1 < 0) || (param_2 < 0)) || (param_1 == param_2)) ||
     ((*(int *)((int)this + 0x4c) <= param_1 || (*(int *)((int)this + 0x4c) <= param_2)))) {
    uVar1 = 0;
  }
  else {
    puVar5 = (undefined4 *)((int)this + param_1 * 0x4c + 0xc4);
    puVar3 = puVar5;
    puVar4 = local_58;
    for (iVar2 = 0x13; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    puVar3 = (undefined4 *)((int)this + param_2 * 0x4c + 0xc4);
    puVar4 = puVar3;
    for (iVar2 = 0x13; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    puVar5 = local_58;
    for (iVar2 = 0x13; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar3 = puVar3 + 1;
    }
    local_40 = 0;
    local_3c = 0;
    local_44 = 0;
    ((undefined4 (__thiscall *)(__typeof__(this)))(**(code **)(*(int *)this + 0x2c)))(this);
    if ((*(int *)((int)this + 0x48) == *(int *)(&DAT_005a7d90 + DAT_005a7d8c * 0x400)) &&
       ((*(byte *)((int)this + 0x30) & 0x20) != 0)) {
      FUN_004d09a0(DAT_005a7b78,DAT_005a7bf4,DAT_005a7bf8,0);
    }
    thunk_FUN_00526ea0((int)local_58);
    uVar1 = 1;
  }
  return uVar1;
#undef local_58
#undef local_44
#undef local_40
#undef local_3c
}
