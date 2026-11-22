/* Rebuilt from lomse.exe FUN_00408a60 @ 0x00408a60 (232 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00555150 (*(undefined4 *)0x00555150)
#define DAT_005a7d8c (*(int *)0x005a7d8c)
#define DAT_005a7d90 (*(undefined *)0x005a7d90)
#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define FUN_00401730 ((undefined4 (__stdcall *)(void *))0x00401730)
#define FUN_0047c6e0 ((undefined4 (__thiscall *)(void *, int *, uint))0x0047c6e0)
#define FUN_0047c9e0 ((uint (__thiscall *)(void *, int))0x0047c9e0)
#define FUN_004c6fc0 ((undefined * (__stdcall *)(void))0x004c6fc0)
#define FUN_00532820 ((undefined4 (__thiscall *)(void *, int, float, int, float, float))0x00532820)

#define LOM_SELF_00408a60 1
undefined4 __thiscall rb_00408a60(void *this,void *param_1,int param_2)

{
  undefined *this_00;
  int iVar1;
  uint uVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  uchar _fr[0xf8] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_ec[4];
  typedef undefined4 _t_local_dc;
  typedef undefined4 _t_local_d8;
  typedef undefined4 _t_local_d4;
  typedef undefined4 _t_local_d0;
  typedef undefined4 _t_local_cc;
#define local_ec (*(_t_local_ec *)(_fr + 0x4))
#define local_dc (*(_t_local_dc *)(_fr + 0x14))
#define local_d8 (*(_t_local_d8 *)(_fr + 0x18))
#define local_d4 (*(_t_local_d4 *)(_fr + 0x1c))
#define local_d0 (*(_t_local_d0 *)(_fr + 0x20))
#define local_cc (*(_t_local_cc *)(_fr + 0x24))
  
  fVar4 = *(float *)((int)param_1 + 0x5a8);
  fVar6 = 0.5;
  fVar5 = *(float *)(param_2 + 0x5a8);
  iVar1 = *(int *)(param_2 + 0x1c);
  iVar3 = *(int *)((int)param_1 + 0x1c);
  this_00 = FUN_004c6fc0();
  iVar1 = FUN_00532820(this_00,iVar3,fVar4,iVar1,fVar5,fVar6);
  if (iVar1 != 0) {
    return 1;
  }
  *(uint *)((int)param_1 + 0x30) = *(uint *)((int)param_1 + 0x30) & 0xfffffffb | 2;
  *(undefined4 *)((int)param_1 + 0x554) = DAT_00555150;
  if (*(int *)((int)param_1 + 0x48) != *(int *)(&DAT_005a7d90 + DAT_005a7d8c * 0x400)) {
    uVar2 = FUN_0047c9e0(&DAT_005aa12c,*(int *)((int)param_1 + 0x48));
    if (uVar2 == 0) goto LAB_00408b32;
  }
  local_d8 = *(undefined4 *)(param_2 + 0x1c);
  local_ec[0] = *(int *)((int)param_1 + 0x28);
  local_ec[1] = 0xffffffff;
  local_d0 = 0xffffffff;
  local_ec[2] = 0xffffffff;
  local_dc = *(undefined4 *)((int)param_1 + 0x1c);
  local_d4 = 0;
  local_cc = 0;
  FUN_0047c6e0(&DAT_005aa12c,local_ec,0x14);
LAB_00408b32:
  FUN_00401730(param_1);
  return 0;
#undef local_ec
#undef local_dc
#undef local_d8
#undef local_d4
#undef local_d0
#undef local_cc
}
