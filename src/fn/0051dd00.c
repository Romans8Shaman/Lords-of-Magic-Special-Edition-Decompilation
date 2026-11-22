/* Rebuilt from lomse.exe op_numturnstoreachcity @ 0x0051dd00 (644 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define DAT_005aef04 (*(undefined4 *)0x005aef04)
#define DAT_005aef10 (*(int *)0x005aef10)
#define DAT_005af0bc (*(int *)0x005af0bc)
#define FUN_004026a0 ((undefined4 (__cdecl *)(uint *, uint *, uint *, undefined4 *))0x004026a0)
#define FUN_00404ab0 ((undefined4 (__thiscall *)(void *, undefined4))0x00404ab0)
#define FUN_00482ac0 ((uint (__thiscall *)(void *, int, int))0x00482ac0)
#define FUN_00485080 ((undefined4 * (__thiscall *)(void *, int, byte))0x00485080)
#define FUN_004acea0 ((undefined4 (__thiscall *)(void *, int, int))0x004acea0)
#define FUN_004c6660 ((undefined4 (__fastcall *)(int *))0x004c6660)
#define FUN_004d41c0 ((undefined4 (__thiscall *)(void *, char *))0x004d41c0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define FUN_0051bd60 ((int (__thiscall *)(void *, int, int, int))0x0051bd60)
#define s_army_not_found_005577cc (*(char (*)[])0x005577cc)
#define s_city_not_found_00573e84 (*(char (*)[])0x00573e84)

#define LOM_SELF_0051dd00 1
void __cdecl rb_0051dd00(void *vm)

{
  void *this;
  int iVar1;
  undefined4 *this_00;
  int iVar2;
  uint uVar3;
  int iVar4;
  uchar _fr[0x20] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef uint _t_uStack_14;
  typedef uint _t_uStack_10;
  typedef uint _t_uStack_c;
  typedef uint _t_uStack_8;
  typedef undefined4 _t_uStack_4;
#define uStack_14 (*(_t_uStack_14 *)(_fr + 0x4))
#define uStack_10 (*(_t_uStack_10 *)(_fr + 0x8))
#define uStack_c (*(_t_uStack_c *)(_fr + 0xc))
#define uStack_8 (*(_t_uStack_8 *)(_fr + 0x10))
#define uStack_4 (*(_t_uStack_4 *)(_fr + 0x14))
  
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
  iVar1 = FUN_004026a0(&uStack_8,&uStack_10,&uStack_c,(undefined4 *)&vm);
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
  iVar1 = FUN_004026a0(&uStack_8,&uStack_14,&uStack_c,(undefined4 *)&vm);
  if (iVar1 == 0) {
    FUN_00404ab0(this,0xe);
    return;
  }
  this_00 = FUN_00485080(&DAT_005aa12c,uStack_14,0x2f);
  if (this_00 == (undefined4 *)0x0) {
    FUN_004d41c0(this,s_army_not_found_005577cc);
    if (*(int *)((int)this + 0x54) != 0) {
      iVar2 = *(int *)((int)this + 0x54) + -1;
      *(int *)((int)this + 0x54) = iVar2;
      iVar1 = *(int *)((int)this + 0x50);
      *(undefined4 *)(iVar1 + iVar2 * 8) = 1;
      *(undefined4 *)(iVar1 + 4 + iVar2 * 8) = 0xffffffff;
      return;
    }
  }
  else {
    vm = (void *)FUN_00482ac0(&DAT_005aa12c,uStack_10,3);
    if (vm != (void *)0x0) {
      uVar3 = this_00[0x15];
      iVar1 = *(int *)((int)vm + 0x1c);
      iVar2 = this_00[7];
      if ((uVar3 & 0x100000) == 0) {
        if (((uVar3 & 0x40000) == 0) || ((uVar3 & 0x80000) == 0)) {
          if ((uVar3 & 0x40000) == 0) {
            if ((uVar3 & 0x80000) != 0) {
              uVar3 = FUN_004acea0(&DAT_005aef04,iVar2,iVar1);
              goto LAB_0051df39;
            }
          }
          else {
            if (DAT_005af0bc == 0) {
              FUN_004c6660(&DAT_005aef04);
            }
            if ((((-1 < iVar2) && (-1 < iVar1)) && (iVar2 < DAT_005aef10)) && (iVar1 < DAT_005aef10)
               ) {
              uVar3 = (uint)(*(short *)(DAT_005aef04 + 2 + iVar2 * 6) ==
                            *(short *)(DAT_005aef04 + 2 + iVar1 * 6));
              goto LAB_0051df39;
            }
          }
          uVar3 = 0;
        }
        else {
          uVar3 = 1;
        }
      }
      else {
        uVar3 = 1;
      }
LAB_0051df39:
      if (uVar3 == 0) {
        iVar1 = -1;
      }
      else {
        iVar1 = FUN_0051bd60(this_00,*(int *)((int)vm + 0x1c),0,0);
      }
      if (*(int *)((int)this + 0x54) == 0) {
        FUN_00404ab0(this,3);
        return;
      }
      iVar4 = *(int *)((int)this + 0x54) + -1;
      *(int *)((int)this + 0x54) = iVar4;
      iVar2 = *(int *)((int)this + 0x50);
      *(undefined4 *)(iVar2 + iVar4 * 8) = 1;
      *(int *)(iVar2 + 4 + iVar4 * 8) = iVar1;
      return;
    }
    FUN_004d41c0(this,s_city_not_found_00573e84);
    if (*(int *)((int)this + 0x54) != 0) {
      iVar2 = *(int *)((int)this + 0x54) + -1;
      *(int *)((int)this + 0x54) = iVar2;
      iVar1 = *(int *)((int)this + 0x50);
      *(undefined4 *)(iVar1 + iVar2 * 8) = 1;
      *(undefined4 *)(iVar1 + 4 + iVar2 * 8) = 0xffffffff;
      return;
    }
  }
  *(undefined4 *)((int)this + 0x90) = 3;
  FUN_004d4550(this);
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  return;
#undef uStack_14
#undef uStack_10
#undef uStack_c
#undef uStack_8
#undef uStack_4
}
