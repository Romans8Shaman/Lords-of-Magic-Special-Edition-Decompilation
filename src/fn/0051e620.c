/* Rebuilt from lomse.exe op_longmovemerge @ 0x0051e620 (993 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define DAT_005aef04 (*(undefined4 *)0x005aef04)
#define FUN_004026a0 ((undefined4 (__cdecl *)(uint *, uint *, uint *, undefined4 *))0x004026a0)
#define FUN_00404ab0 ((undefined4 (__thiscall *)(void *, undefined4))0x00404ab0)
#define FUN_004207b0 ((uint (__thiscall *)(void *, uint))0x004207b0)
#define FUN_00420b80 ((undefined4 (__thiscall *)(void *, int, undefined4, undefined4, undefined4, undefined4, undefined4))0x00420b80)
#define FUN_00485080 ((undefined4 * (__thiscall *)(void *, int, byte))0x00485080)
#define FUN_004aba70 ((int (__thiscall *)(void *, int, int, uint, uint))0x004aba70)
#define FUN_004acea0 ((undefined4 (__thiscall *)(void *, int, int))0x004acea0)
#define FUN_004c6fc0 ((undefined * (__stdcall *)(void))0x004c6fc0)
#define FUN_004d41c0 ((undefined4 (__thiscall *)(void *, char *))0x004d41c0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define FUN_00521c70 ((undefined4 (__thiscall *)(void *, int, int))0x00521c70)
#define OutputDebugStringA (*(__typeof__(void (__stdcall *)(LPCSTR)) *)0x0054d0f8) /* KERNEL32.DLL!OutputDebugStringA via IAT */
#define s_army_not_found_005577cc (*(char (*)[])0x005577cc)
#define s_no_connected_location__00573efc (*(char (*)[])0x00573efc)

#define LOM_SELF_0051e620 1
void __cdecl rb_0051e620(void *vm)

{
  void *this;
  int iVar1;
  undefined4 *this_00;
  undefined4 *this_01;
  uint uVar2;
  uint uVar3;
  undefined *this_02;
  uint uVar4;
  int iVar5;
  undefined4 fVar6;
  uchar _fr[0x28] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef uint _t_uStack_20;
  typedef uint _t_uStack_1c;
  typedef uint _t_uStack_18;
  typedef uint _t_uStack_14;
  typedef undefined4 _t_fStack_10;
  typedef undefined4 _t_fStack_c;
  typedef uint _t_uStack_8;
  typedef undefined4 _t_uStack_4;
#define uStack_20 (*(_t_uStack_20 *)(_fr + 0x0))
#define uStack_1c (*(_t_uStack_1c *)(_fr + 0x4))
#define uStack_18 (*(_t_uStack_18 *)(_fr + 0x8))
#define uStack_14 (*(_t_uStack_14 *)(_fr + 0xc))
#define fStack_10 (*(_t_fStack_10 *)(_fr + 0x10))
#define fStack_c (*(_t_fStack_c *)(_fr + 0x14))
#define uStack_8 (*(_t_uStack_8 *)(_fr + 0x18))
#define uStack_4 (*(_t_uStack_4 *)(_fr + 0x1c))
  
  this = vm;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar1 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar1;
    uStack_8 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar1 * 8);
    uStack_4 = *(undefined4 *)(*(int *)((int)vm + 0x50) + -4 + iVar1 * 8);
  }
  else {
    FUN_00404ab0(vm,6);
    uStack_8 = 0;
  }
  iVar1 = FUN_004026a0(&uStack_8,(uint *)&vm,(uint *)&fStack_c,&fStack_10);
  if (iVar1 == 0) {
    *(undefined4 *)((int)this + 0x90) = 0xe;
    FUN_004d4550(this);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
    return;
  }
  if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
    iVar1 = *(int *)((int)this + 0x54) + 1;
    *(int *)((int)this + 0x54) = iVar1;
    uStack_8 = *(uint *)(*(int *)((int)this + 0x50) + -8 + iVar1 * 8);
    uStack_4 = *(undefined4 *)(*(int *)((int)this + 0x50) + -4 + iVar1 * 8);
  }
  else {
    FUN_00404ab0(this,6);
    uStack_8 = 0;
  }
  iVar1 = FUN_004026a0(&uStack_8,&uStack_1c,(uint *)&fStack_10,&fStack_c);
  if (iVar1 == 0) {
    FUN_00404ab0(this,0xe);
    return;
  }
  if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
    iVar1 = *(int *)((int)this + 0x54) + 1;
    *(int *)((int)this + 0x54) = iVar1;
    uStack_8 = *(uint *)(*(int *)((int)this + 0x50) + -8 + iVar1 * 8);
    uStack_4 = *(undefined4 *)(*(int *)((int)this + 0x50) + -4 + iVar1 * 8);
  }
  else {
    FUN_00404ab0(this,6);
    uStack_8 = 0;
  }
  iVar1 = FUN_004026a0(&uStack_8,&uStack_20,(uint *)&fStack_10,&fStack_c);
  if (iVar1 == 0) {
    FUN_00404ab0(this,0xe);
    return;
  }
  if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
    iVar1 = *(int *)((int)this + 0x54) + 1;
    *(int *)((int)this + 0x54) = iVar1;
    uStack_8 = *(uint *)(*(int *)((int)this + 0x50) + -8 + iVar1 * 8);
    uStack_4 = *(undefined4 *)(*(int *)((int)this + 0x50) + -4 + iVar1 * 8);
  }
  else {
    FUN_00404ab0(this,6);
    uStack_8 = 0;
  }
  iVar1 = FUN_004026a0(&uStack_8,&uStack_14,(uint *)&fStack_10,&fStack_c);
  if (iVar1 == 0) {
    FUN_00404ab0(this,0xe);
    return;
  }
  if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
    iVar1 = *(int *)((int)this + 0x54) + 1;
    *(int *)((int)this + 0x54) = iVar1;
    uStack_8 = *(uint *)(*(int *)((int)this + 0x50) + -8 + iVar1 * 8);
    uStack_4 = *(undefined4 *)(*(int *)((int)this + 0x50) + -4 + iVar1 * 8);
  }
  else {
    FUN_00404ab0(this,6);
    uStack_8 = 0;
  }
  iVar1 = FUN_004026a0(&uStack_8,&uStack_18,(uint *)&fStack_10,&fStack_c);
  if (iVar1 == 0) {
    FUN_00404ab0(this,0xe);
    return;
  }
  this_00 = FUN_00485080(&DAT_005aa12c,uStack_18,0x2f);
  this_01 = FUN_00485080(&DAT_005aa12c,uStack_14,0x2f);
  if ((this_00 == (undefined4 *)0x0) || (this_01 == (undefined4 *)0x0)) {
    FUN_004d41c0(this,s_army_not_found_005577cc);
  }
  else {
    uVar2 = FUN_004207b0(this_00,uStack_20);
    fStack_10 = __BC(undefined4, FUN_004207b0(this_01,uStack_1c));
    uVar3 = __BC(uint, fStack_10) & uVar2;
    uVar4 = ((int)vm < 0) - 1 & 0x80000;
    if ((uVar3 & 0x100000) == 0) {
      if (((uVar3 & 0x40000) == 0) || ((uVar3 & 0x80000) == 0)) {
        if ((uVar3 & 0x40000) == 0) {
          if ((uVar3 & 0x80000) == 0) {
            iVar1 = 0;
          }
          else {
            iVar1 = FUN_004acea0(&DAT_005aef04,this_00[7],this_01[7]);
          }
        }
        else {
          iVar1 = FUN_00521c70(&DAT_005aef04,this_00[7],this_01[7]);
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
      iVar1 = this_01[7];
      iVar5 = this_00[7];
      fVar6 = fStack_10;
      this_02 = FUN_004c6fc0();
      iVar1 = FUN_004aba70(this_02,iVar5,iVar1,uVar2,__BC(uint, fVar6));
      if (iVar1 < 0) {
        OutputDebugStringA(s_no_connected_location__00573efc);
        return;
      }
      FUN_00420b80(this_00,iVar1,uVar4 | 0x108040,uStack_20,this_01[10],vm,0);
      FUN_00420b80(this_01,iVar1,uVar4 | 0x108040,uStack_1c,this_00[10],vm,0);
      return;
    }
    if (uStack_20 != 0) {
      FUN_00420b80(this_00,this_01[7],uVar4 | 0x8040,uStack_20,this_01[10],vm,0);
    }
    if (uStack_1c != 0) {
      FUN_00420b80(this_01,this_00[7],uVar4 | 0x8040,uStack_1c,this_00[10],vm,0);
      return;
    }
  }
  return;
#undef uStack_20
#undef uStack_1c
#undef uStack_18
#undef uStack_14
#undef fStack_10
#undef fStack_c
#undef uStack_8
#undef uStack_4
}
