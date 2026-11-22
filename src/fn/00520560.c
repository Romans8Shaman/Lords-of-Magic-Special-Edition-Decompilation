/* Rebuilt from lomse.exe op_longmovemergeat @ 0x00520560 (1350 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define DAT_005ae958 (*(undefined *)0x005ae958)
#define DAT_005aef04 (*(undefined4 *)0x005aef04)
#define FUN_004026a0 ((undefined4 (__cdecl *)(uint *, uint *, uint *, undefined4 *))0x004026a0)
#define FUN_00404ab0 ((undefined4 (__thiscall *)(void *, undefined4))0x00404ab0)
#define FUN_004207b0 ((uint (__thiscall *)(void *, uint))0x004207b0)
#define FUN_00420890 ((undefined4 (__thiscall *)(void *, int))0x00420890)
#define FUN_00420b80 ((undefined4 (__thiscall *)(void *, int, undefined4, undefined4, undefined4, undefined4, undefined4))0x00420b80)
#define FUN_00485080 ((undefined4 * (__thiscall *)(void *, int, byte))0x00485080)
#define FUN_004a8360 ((undefined4 * (__thiscall *)(void *, int))0x004a8360)
#define FUN_004a8b50 ((int (__thiscall *)(void *, int, int))0x004a8b50)
#define FUN_004acea0 ((undefined4 (__thiscall *)(void *, int, int))0x004acea0)
#define FUN_004c6fc0 ((undefined * (__stdcall *)(void))0x004c6fc0)
#define FUN_004d41c0 ((undefined4 (__thiscall *)(void *, char *))0x004d41c0)
#define FUN_00521c70 ((undefined4 (__thiscall *)(void *, int, int))0x00521c70)
#define s_armies_can_t_reach_location_00573f8c (*(char (*)[])0x00573f8c)
#define s_army_not_found_005577cc (*(char (*)[])0x005577cc)
#define s_different_owners_00573fb4 (*(char (*)[])0x00573fb4)
#define s_same_army_00573fa8 (*(char (*)[])0x00573fa8)

#define LOM_SELF_00520560 1
void __cdecl rb_00520560(void *vm)

{
  void *this;
  int iVar1;
  undefined4 *this_00;
  undefined4 *this_01;
  uint uVar2;
  undefined4 *this_02;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uchar _fr[0x38] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef uint _t_uStack_2c;
  typedef uint _t_uStack_28;
  typedef uint _t_uStack_24;
  typedef uint _t_uStack_20;
  typedef undefined4 _t_uStack_1c;
  typedef uint _t_uStack_18;
  typedef uint _t_uStack_14;
  typedef uint _t_uStack_10;
  typedef undefined4 * _t_puStack_c;
  typedef undefined4 * _t_puStack_8;
  typedef undefined4 _t_uStack_4;
#define uStack_2c (*(_t_uStack_2c *)(_fr + 0x4))
#define uStack_28 (*(_t_uStack_28 *)(_fr + 0x8))
#define uStack_24 (*(_t_uStack_24 *)(_fr + 0xc))
#define uStack_20 (*(_t_uStack_20 *)(_fr + 0x10))
#define uStack_1c (*(_t_uStack_1c *)(_fr + 0x14))
#define uStack_18 (*(_t_uStack_18 *)(_fr + 0x18))
#define uStack_14 (*(_t_uStack_14 *)(_fr + 0x1c))
#define uStack_10 (*(_t_uStack_10 *)(_fr + 0x20))
#define puStack_c (*(_t_puStack_c *)(_fr + 0x24))
#define puStack_8 (*(_t_puStack_8 *)(_fr + 0x28))
#define uStack_4 (*(_t_uStack_4 *)(_fr + 0x2c))
  
  this = vm;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar1 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar1;
    uStack_20 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar1 * 8);
    uStack_1c = *(undefined4 *)(*(int *)((int)vm + 0x50) + -4 + iVar1 * 8);
  }
  else {
    FUN_00404ab0(vm,6);
    uStack_20 = 0;
    uStack_1c = uStack_4;
  }
  iVar1 = FUN_004026a0(&uStack_20,(uint *)&vm,(uint *)&puStack_c,(undefined4 *)&puStack_8);
  if (iVar1 == 0) {
    FUN_00404ab0(this,0xe);
    return;
  }
  if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
    iVar1 = *(int *)((int)this + 0x54) + 1;
    *(int *)((int)this + 0x54) = iVar1;
    uStack_20 = *(uint *)(*(int *)((int)this + 0x50) + -8 + iVar1 * 8);
    uStack_1c = *(undefined4 *)(*(int *)((int)this + 0x50) + -4 + iVar1 * 8);
  }
  else {
    FUN_00404ab0(this,6);
    uStack_20 = 0;
    uStack_1c = uStack_4;
  }
  iVar1 = FUN_004026a0(&uStack_20,&uStack_28,(uint *)&puStack_c,(undefined4 *)&puStack_8);
  if (iVar1 == 0) {
    FUN_00404ab0(this,0xe);
    return;
  }
  if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
    iVar1 = *(int *)((int)this + 0x54) + 1;
    *(int *)((int)this + 0x54) = iVar1;
    uStack_20 = *(uint *)(*(int *)((int)this + 0x50) + -8 + iVar1 * 8);
    uStack_1c = *(undefined4 *)(*(int *)((int)this + 0x50) + -4 + iVar1 * 8);
  }
  else {
    FUN_00404ab0(this,6);
    uStack_20 = 0;
    uStack_1c = uStack_4;
  }
  iVar1 = FUN_004026a0(&uStack_20,&uStack_18,(uint *)&puStack_c,(undefined4 *)&puStack_8);
  if (iVar1 == 0) {
    FUN_00404ab0(this,0xe);
    return;
  }
  if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
    iVar1 = *(int *)((int)this + 0x54) + 1;
    *(int *)((int)this + 0x54) = iVar1;
    uStack_20 = *(uint *)(*(int *)((int)this + 0x50) + -8 + iVar1 * 8);
    uStack_1c = *(undefined4 *)(*(int *)((int)this + 0x50) + -4 + iVar1 * 8);
  }
  else {
    FUN_00404ab0(this,6);
    uStack_20 = 0;
    uStack_1c = uStack_4;
  }
  iVar1 = FUN_004026a0(&uStack_20,&uStack_2c,(uint *)&puStack_c,(undefined4 *)&puStack_8);
  if (iVar1 == 0) {
    FUN_00404ab0(this,0xe);
    return;
  }
  if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
    iVar1 = *(int *)((int)this + 0x54) + 1;
    *(int *)((int)this + 0x54) = iVar1;
    uStack_20 = *(uint *)(*(int *)((int)this + 0x50) + -8 + iVar1 * 8);
    uStack_1c = *(undefined4 *)(*(int *)((int)this + 0x50) + -4 + iVar1 * 8);
  }
  else {
    FUN_00404ab0(this,6);
    uStack_20 = 0;
    uStack_1c = uStack_4;
  }
  iVar1 = FUN_004026a0(&uStack_20,&uStack_10,(uint *)&puStack_c,(undefined4 *)&puStack_8);
  if (iVar1 == 0) {
    FUN_00404ab0(this,0xe);
    return;
  }
  if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
    iVar1 = *(int *)((int)this + 0x54) + 1;
    *(int *)((int)this + 0x54) = iVar1;
    uStack_20 = *(uint *)(*(int *)((int)this + 0x50) + -8 + iVar1 * 8);
    uStack_1c = *(undefined4 *)(*(int *)((int)this + 0x50) + -4 + iVar1 * 8);
  }
  else {
    FUN_00404ab0(this,6);
    uStack_20 = 0;
    uStack_1c = uStack_4;
  }
  iVar1 = FUN_004026a0(&uStack_20,&uStack_14,(uint *)&puStack_c,(undefined4 *)&puStack_8);
  if (iVar1 == 0) {
    FUN_00404ab0(this,0xe);
    return;
  }
  this_00 = FUN_00485080(&DAT_005aa12c,uStack_14,0x2f);
  puStack_c = this_00;
  this_01 = FUN_00485080(&DAT_005aa12c,uStack_10,0x2f);
  puStack_8 = this_01;
  if ((this_00 == (undefined4 *)0x0) || (this_01 == (undefined4 *)0x0)) {
    FUN_004d41c0(this,s_army_not_found_005577cc);
    return;
  }
  if (this_00[0x12] != this_01[0x12]) {
    FUN_004d41c0(this,s_different_owners_00573fb4);
    return;
  }
  if (this_00 == this_01) {
    FUN_004d41c0(this,s_same_army_00573fa8);
    return;
  }
  uVar2 = FUN_004207b0(this_00,uStack_2c);
  uStack_24 = FUN_004207b0(this_01,uStack_18);
  uStack_20 = ((int)uStack_28 < 0) - 1 & 0x80000;
  if ((uVar2 & 0x100000) == 0) {
    if (((uVar2 & 0x40000) == 0) || ((uVar2 & 0x80000) == 0)) {
      if ((uVar2 & 0x40000) == 0) {
        if ((uVar2 & 0x80000) == 0) {
          iVar1 = 0;
        }
        else {
          iVar1 = FUN_004acea0(&DAT_005aef04,this_00[7],(int)vm);
        }
      }
      else {
        iVar1 = FUN_00521c70(&DAT_005aef04,this_00[7],(int)vm);
      }
    }
    else {
      iVar1 = 1;
    }
  }
  else {
    iVar1 = 1;
  }
  if (iVar1 == 0) {
LAB_00520a7e:
    FUN_004d41c0(this,s_armies_can_t_reach_location_00573f8c);
    return;
  }
  if ((uStack_24 & 0x100000) == 0) {
    if (((uStack_24 & 0x40000) == 0) || ((uStack_24 & 0x80000) == 0)) {
      if ((uStack_24 & 0x40000) == 0) {
        if ((uStack_24 & 0x80000) == 0) {
          iVar1 = 0;
        }
        else {
          iVar1 = FUN_004acea0(&DAT_005aef04,this_01[7],(int)vm);
        }
      }
      else {
        iVar1 = FUN_00521c70(&DAT_005aef04,this_01[7],(int)vm);
      }
    }
    else {
      iVar1 = 1;
    }
  }
  else {
    iVar1 = 1;
  }
  if (iVar1 == 0) goto LAB_00520a7e;
  this_02 = FUN_004a8360(&DAT_005ae958,(int)vm);
  if (this_00 == this_02) {
LAB_00520989:
    iVar1 = this_01[7];
  }
  else {
    if (this_01 != this_02) goto LAB_00520a1c;
    if (this_00 == this_02) goto LAB_00520989;
    iVar1 = this_00[7];
  }
  iVar4 = this_02[7];
  puVar3 = FUN_004c6fc0();
  iVar1 = FUN_004a8b50(puVar3,iVar1,iVar4);
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  iVar4 = this_02[7];
  puVar3 = FUN_004c6fc0();
  iVar1 = *(int *)(*(int *)(puVar3 + 0x18) + (iVar1 + iVar4 * 8) * 4);
  iVar4 = FUN_00420890(this_02,iVar1);
  if (iVar4 == 0) {
    iVar6 = 0;
    iVar4 = iVar1 << 5;
    do {
      puVar3 = FUN_004c6fc0();
      iVar1 = *(int *)(*(int *)(puVar3 + 0x18) + iVar4);
      iVar5 = FUN_00420890(this_02,iVar1);
      if (iVar5 != 0) break;
      iVar6 = iVar6 + 1;
      iVar4 = iVar4 + 4;
    } while (iVar6 < 8);
    if (7 < iVar6) {
      return;
    }
    this_00 = puStack_c;
  }
  FUN_00420b80(this_02,iVar1,0,~uStack_2c,0xffffffff,0xffffffff,0);
  this_01 = puStack_8;
LAB_00520a1c:
  uVar2 = uStack_20;
  if (this_00 != this_02) {
    FUN_00420b80(this_00,(int)vm,uStack_20 | 0x108040,uStack_2c,this_01[10],uStack_28,0);
  }
  if (this_01 == this_02) {
    return;
  }
  FUN_00420b80(this_01,(int)vm,uVar2 | 0x108040,uStack_18,this_00[10],uStack_28,0);
  return;
#undef uStack_2c
#undef uStack_28
#undef uStack_24
#undef uStack_20
#undef uStack_1c
#undef uStack_18
#undef uStack_14
#undef uStack_10
#undef puStack_c
#undef puStack_8
#undef uStack_4
}
