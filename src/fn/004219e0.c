/* Rebuilt from lomse.exe FUN_004219e0 @ 0x004219e0 (1795 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005cd328 (*(undefined *)0x005cd328)
#define FUN_004952c0 ((undefined4 (__thiscall *)(void *, uint, int, int))0x004952c0)
#define FUN_0049aba0 ((undefined4 * (__fastcall *)(undefined4 *))0x0049aba0)
#define FUN_0049b450 ((undefined4 (__thiscall *)(void *, byte *, int *))0x0049b450)
#define FUN_0049c890 ((undefined4 * (__fastcall *)(undefined4 *))0x0049c890)
#define FUN_0049c900 ((undefined4 (__fastcall *)(undefined4 *))0x0049c900)
#define FUN_0049c9d0 ((undefined4 (__thiscall *)(void *, undefined4))0x0049c9d0)
#define FUN_0049cc10 ((undefined4 (__thiscall *)(void *, int *, int, int))0x0049cc10)
#define FUN_0049d510 ((undefined4 (__thiscall *)(void *, void *, uint, int, int, int))0x0049d510)
#define FUN_0049d9a0 ((undefined4 (__fastcall *)(void *))0x0049d9a0)
#define FUN_0049da80 ((undefined4 (__thiscall *)(void *, uint))0x0049da80)
#define FUN_0049dcc0 ((undefined4 (__thiscall *)(void *, int))0x0049dcc0)
#define FUN_0049dd20 ((undefined4 (__thiscall *)(void *, int *))0x0049dd20)
#define FUN_004b0b80 ((uint (__stdcall *)(uint, int *, undefined4))0x004b0b80)
#define FUN_004b0ee0 ((int (__thiscall *)(void *, int))0x004b0ee0)
#define FUN_00523260 ((uint (__thiscall *)(void *, undefined4))0x00523260)
#define FUN_00539eb0 ((undefined4 (__stdcall *)(undefined4, undefined4, int, undefined *))0x00539eb0)
#define FUN_00539ff0 ((undefined4 (__stdcall *)(undefined4, undefined4, int, undefined *, undefined4))0x00539ff0)
#define PTR_DAT_0055cd50 (*(undefined * *)0x0055cd50)
#define PTR_DAT_00574008 (*(undefined * *)0x00574008)
#define thunk_FUN_0049ab20 ((undefined4 (__fastcall *)(int *))0x0049b680)

#define LOM_SELF_004219e0 1
void __thiscall
rb_004219e0(void *this,undefined4 *param_1,undefined4 param_2,undefined4 param_3,uint param_4,
            int param_5)

{
  undefined4 *this_00;
  int iVar1;
  int iVar2;
  byte *pbVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  uint uVar8;
  undefined4 *puVar9;
  uchar _fr[0x528] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_520;
  typedef int _t_local_51c;
  typedef int _t_local_518;
  typedef undefined4 _t_local_504[3];
  typedef int _t_local_4f8;
  typedef int _t_local_4c4[4];
  typedef int _t_local_4b4[3];
  typedef int _t_local_4a8[3];
  typedef undefined1 _t_local_49c[12];
  typedef char _t_local_490;
  typedef undefined1 _t_local_378[12];
  typedef char _t_local_36c;
  typedef undefined1 _t_local_254[12];
  typedef char _t_local_248;
  typedef undefined1 _t_local_130[12];
  typedef char _t_local_124;
#define local_520 (*(_t_local_520 *)(_fr + 0x0))
#define local_51c (*(_t_local_51c *)(_fr + 0x4))
#define local_518 (*(_t_local_518 *)(_fr + 0x8))
#define local_504 (*(_t_local_504 *)(_fr + 0x1c))
#define local_4f8 (*(_t_local_4f8 *)(_fr + 0x28))
#define local_4c4 (*(_t_local_4c4 *)(_fr + 0x5c))
#define local_4b4 (*(_t_local_4b4 *)(_fr + 0x6c))
#define local_4a8 (*(_t_local_4a8 *)(_fr + 0x78))
#define local_49c (*(_t_local_49c *)(_fr + 0x84))
#define local_490 (*(_t_local_490 *)(_fr + 0x90))
#define local_378 (*(_t_local_378 *)(_fr + 0x1a8))
#define local_36c (*(_t_local_36c *)(_fr + 0x1b4))
#define local_254 (*(_t_local_254 *)(_fr + 0x2cc))
#define local_248 (*(_t_local_248 *)(_fr + 0x2d8))
#define local_130 (*(_t_local_130 *)(_fr + 0x3f0))
#define local_124 (*(_t_local_124 *)(_fr + 0x3fc))

  FUN_00539ff0(local_49c,0x124,4,FUN_0049aba0,thunk_FUN_0049ab20);
  puVar7 = (uint *)0x0;
  FUN_0049c890(local_504);
  FUN_0049dd20(local_4a8,(int *)&PTR_DAT_00574008);
  FUN_0049dd20(local_4b4,(int *)&PTR_DAT_0055cd50);
  this_00 = (undefined4 *)*param_1;
  pbVar3 = (byte *)FUN_00523260(this,param_3);
  FUN_0049b450(local_49c,pbVar3,local_4a8);
  if (param_4 != 9) {
    puVar7 = (uint *)FUN_004b0ee0(&DAT_005cd328,*(int *)((int)this + 0x4c));
  }
  if (puVar7 != (uint *)0x0) {
    pbVar3 = (byte *)FUN_004b0b80(*puVar7,(int *)puVar7[1],param_3);
    if (pbVar3 != (byte *)0x0) {
      FUN_0049b450(local_378,pbVar3,local_4b4);
    }
    pbVar3 = (byte *)FUN_004b0b80(puVar7[2],(int *)puVar7[3],param_3);
    if (pbVar3 != (byte *)0x0) {
      FUN_0049b450(local_254,pbVar3,local_4b4);
    }
    pbVar3 = (byte *)FUN_004b0b80(puVar7[4],(int *)puVar7[5],param_3);
    if (pbVar3 != (byte *)0x0) {
      FUN_0049b450(local_130,pbVar3,local_4b4);
    }
  }
  local_520 = 0xf0;
  local_518 = 0xf0;
  iVar6 = 0x140;
  local_51c = 0x140;
  uVar8 = -(uint)(param_4 != 0) & 2;
  if (local_490 != '\0') {
    FUN_0049c9d0(local_504,local_49c);
    FUN_0049da80(local_504,param_4);
    FUN_0049dcc0(local_504,3);
    local_4f8 = param_5 + -1;
    FUN_0049d9a0(local_504);
    piVar4 = (int *)FUN_0049cc10(local_504,local_4c4,0x140,0xf0);
    if (*piVar4 < 0x140) {
      iVar6 = *piVar4;
    }
    if (piVar4[1] < 0xf0) {
      local_520 = piVar4[1];
    }
    if (0x13f < piVar4[2]) {
      local_51c = piVar4[2];
    }
    if (0xef < piVar4[3]) {
      local_518 = piVar4[3];
    }
  }
  if (local_36c != '\0') {
    FUN_0049c9d0(local_504,local_378);
    FUN_0049da80(local_504,uVar8);
    FUN_0049dcc0(local_504,3);
    local_4f8 = param_5 + -1;
    FUN_0049d9a0(local_504);
    piVar4 = (int *)FUN_0049cc10(local_504,local_4c4,0x140,0xf0);
    if (*piVar4 < iVar6) {
      iVar6 = *piVar4;
    }
    if (piVar4[1] < local_520) {
      local_520 = piVar4[1];
    }
    if (local_51c <= piVar4[2]) {
      local_51c = piVar4[2];
    }
    if (local_518 <= piVar4[3]) {
      local_518 = piVar4[3];
    }
  }
  if (local_248 != '\0') {
    FUN_0049c9d0(local_504,local_254);
    FUN_0049da80(local_504,uVar8);
    FUN_0049dcc0(local_504,3);
    local_4f8 = param_5 + -1;
    FUN_0049d9a0(local_504);
    piVar4 = (int *)FUN_0049cc10(local_504,local_4c4,0x140,0xf0);
    if (*piVar4 < iVar6) {
      iVar6 = *piVar4;
    }
    if (piVar4[1] < local_520) {
      local_520 = piVar4[1];
    }
    if (local_51c <= piVar4[2]) {
      local_51c = piVar4[2];
    }
    if (local_518 <= piVar4[3]) {
      local_518 = piVar4[3];
    }
  }
  if (local_124 != '\0') {
    FUN_0049c9d0(local_504,local_130);
    FUN_0049da80(local_504,uVar8);
    FUN_0049dcc0(local_504,3);
    local_4f8 = param_5 + -1;
    FUN_0049d9a0(local_504);
    piVar4 = (int *)FUN_0049cc10(local_504,local_4c4,0x140,0xf0);
    if (*piVar4 < iVar6) {
      iVar6 = *piVar4;
    }
    if (piVar4[1] < local_520) {
      local_520 = piVar4[1];
    }
    if (local_51c <= piVar4[2]) {
      local_51c = piVar4[2];
    }
    if (local_518 <= piVar4[3]) {
      local_518 = piVar4[3];
    }
  }
  FUN_004952c0(this_00,(local_51c - iVar6) + 1,(local_518 - local_520) + 1,1);
  this_00[5] = this_00[5] | 0x10;
  iVar1 = this_00[3];
  iVar2 = this_00[2];
  puVar9 = (undefined4 *)*this_00;
  for (uVar5 = (uint)(iVar1 * iVar2) >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *puVar9 = 0;
    puVar9 = puVar9 + 1;
  }
  for (uVar5 = iVar1 * iVar2 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined1 *)puVar9 = 0;
    puVar9 = (undefined4 *)((int)puVar9 + 1);
  }
  param_1[3] = this_00[1];
  param_1[4] = this_00[2];
  if (param_4 == 9) {
    if (local_490 == '\0') goto LAB_00422093;
    FUN_0049c9d0(local_504,local_49c);
    FUN_0049da80(local_504,9);
    FUN_0049dcc0(local_504,3);
    local_4f8 = param_5 + -1;
    FUN_0049d9a0(local_504);
  }
  else {
    if (local_490 != '\0') {
      FUN_0049c9d0(local_504,local_49c);
      FUN_0049da80(local_504,param_4);
      FUN_0049dcc0(local_504,3);
      local_4f8 = param_5 + -1;
      FUN_0049d9a0(local_504);
      piVar4 = (int *)FUN_0049cc10(local_504,local_4c4,0x140,0xf0);
      FUN_0049d510(local_504,this_00,*piVar4 - iVar6,piVar4[1] - local_520,-1,1);
    }
    if (local_36c != '\0') {
      FUN_0049c9d0(local_504,local_378);
      FUN_0049da80(local_504,uVar8);
      FUN_0049dcc0(local_504,3);
      local_4f8 = param_5 + -1;
      FUN_0049d9a0(local_504);
      piVar4 = (int *)FUN_0049cc10(local_504,local_4c4,0x140,0xf0);
      FUN_0049d510(local_504,this_00,*piVar4 - iVar6,piVar4[1] - local_520,-1,1);
    }
    if (local_248 != '\0') {
      FUN_0049c9d0(local_504,local_254);
      FUN_0049da80(local_504,uVar8);
      FUN_0049dcc0(local_504,3);
      local_4f8 = param_5 + -1;
      FUN_0049d9a0(local_504);
      piVar4 = (int *)FUN_0049cc10(local_504,local_4c4,0x140,0xf0);
      FUN_0049d510(local_504,this_00,*piVar4 - iVar6,piVar4[1] - local_520,-1,1);
    }
    if (local_124 == '\0') goto LAB_00422093;
    FUN_0049c9d0(local_504,local_130);
    FUN_0049da80(local_504,uVar8);
    FUN_0049dcc0(local_504,3);
    local_4f8 = param_5 + -1;
    FUN_0049d9a0(local_504);
  }
  piVar4 = (int *)FUN_0049cc10(local_504,local_4c4,0x140,0xf0);
  FUN_0049d510(local_504,this_00,*piVar4 - iVar6,piVar4[1] - local_520,-1,1);
LAB_00422093:
  FUN_0049c900(local_504);
  FUN_00539eb0(local_49c,0x124,4,thunk_FUN_0049ab20);
  return;
#undef local_520
#undef local_51c
#undef local_518
#undef local_504
#undef local_4f8
#undef local_4c4
#undef local_4b4
#undef local_4a8
#undef local_49c
#undef local_490
#undef local_378
#undef local_36c
#undef local_254
#undef local_248
#undef local_130
#undef local_124
}
