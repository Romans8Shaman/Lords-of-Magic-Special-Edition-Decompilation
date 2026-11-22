/* Rebuilt from lomse.exe op_numturnstoreachsprite @ 0x0051df90 (525 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005ae974 (*(undefined4 *)0x005ae974)
#define DAT_005aef04 (*(undefined4 *)0x005aef04)
#define DAT_005aef10 (*(int *)0x005aef10)
#define DAT_005af0bc (*(int *)0x005af0bc)
#define FUN_004026a0 ((undefined4 (__cdecl *)(uint *, uint *, uint *, undefined4 *))0x004026a0)
#define FUN_00404ab0 ((undefined4 (__thiscall *)(void *, undefined4))0x00404ab0)
#define FUN_0041be40 ((undefined4 (__cdecl *)(void *, undefined4 *))0x0041be40)
#define FUN_004c6660 ((undefined4 (__fastcall *)(int *))0x004c6660)
#define FUN_004d41c0 ((undefined4 (__thiscall *)(void *, char *))0x004d41c0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define FUN_004f6000 ((int (__thiscall *)(void *, int))0x004f6000)
#define FUN_0051bd60 ((int (__thiscall *)(void *, int, int, int))0x0051bd60)
#define s_sprite_not_found_00573e94 (*(char (*)[])0x00573e94)

#define LOM_SELF_0051df90 1
void __cdecl rb_0051df90(void *vm)

{
  uint uVar1;
  void *this;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  uchar _fr[0x20] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef uint _t_uStack_14;
  typedef undefined4 _t_fStack_10;
  typedef uint _t_uStack_c;
  typedef uint _t_uStack_8;
  typedef undefined4 _t_uStack_4;
#define uStack_14 (*(_t_uStack_14 *)(_fr + 0x4))
#define fStack_10 (*(_t_fStack_10 *)(_fr + 0x8))
#define uStack_c (*(_t_uStack_c *)(_fr + 0xc))
#define uStack_8 (*(_t_uStack_8 *)(_fr + 0x10))
#define uStack_4 (*(_t_uStack_4 *)(_fr + 0x14))
  
  this = vm;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar2 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar2;
    uStack_8 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar2 * 8);
    uStack_4 = *(undefined4 *)(*(int *)((int)vm + 0x50) + -4 + iVar2 * 8);
  }
  else {
    FUN_00404ab0(vm,6);
    uStack_8 = 0;
  }
  iVar2 = FUN_004026a0(&uStack_8,&uStack_14,&uStack_c,&fStack_10);
  if (iVar2 == 0) {
    *(undefined4 *)((int)this + 0x90) = 0xe;
    goto LAB_0051e182;
  }
  iVar2 = FUN_0041be40(this,&vm);
  if (iVar2 == 0) {
    return;
  }
  iVar2 = FUN_004f6000(&DAT_005ae974,uStack_14);
  if (iVar2 == 0) {
    FUN_004d41c0(this,s_sprite_not_found_00573e94);
    if (*(int *)((int)this + 0x54) != 0) {
      iVar3 = *(int *)((int)this + 0x54) + -1;
      *(int *)((int)this + 0x54) = iVar3;
      iVar2 = *(int *)((int)this + 0x50);
      *(undefined4 *)(iVar2 + iVar3 * 8) = 1;
      *(undefined4 *)(iVar2 + 4 + iVar3 * 8) = 0xffffffff;
      return;
    }
  }
  else {
    iVar3 = *(int *)(iVar2 + 0x1c);
    uVar1 = *(uint *)((int)vm + 0x54);
    iVar4 = *(int *)((int)vm + 0x1c);
    if ((uVar1 & 0x100000) == 0) {
      if (((uVar1 & 0x40000) == 0) || ((uVar1 & 0x80000) == 0)) {
        if ((uVar1 & 0x40000) == 0) {
          if ((uVar1 & 0x80000) != 0) {
            if (DAT_005af0bc == 0) {
              FUN_004c6660(&DAT_005aef04);
            }
            if ((((-1 < iVar4) && (-1 < iVar3)) && (iVar4 < DAT_005aef10)) && (iVar3 < DAT_005aef10)
               ) {
              bVar5 = *(short *)(DAT_005aef04 + 4 + iVar4 * 6) ==
                      *(short *)(DAT_005aef04 + 4 + iVar3 * 6);
              goto LAB_0051e13a;
            }
          }
        }
        else {
          if (DAT_005af0bc == 0) {
            FUN_004c6660(&DAT_005aef04);
          }
          if (((-1 < iVar4) && (-1 < iVar3)) && ((iVar4 < DAT_005aef10 && (iVar3 < DAT_005aef10))))
          {
            bVar5 = *(short *)(DAT_005aef04 + 2 + iVar4 * 6) ==
                    *(short *)(DAT_005aef04 + 2 + iVar3 * 6);
            goto LAB_0051e13a;
          }
        }
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
    }
    else {
      bVar5 = true;
    }
LAB_0051e13a:
    if (bVar5) {
      iVar2 = FUN_0051bd60(vm,*(int *)(iVar2 + 0x1c),0,0);
    }
    else {
      iVar2 = -1;
    }
    if (*(int *)((int)this + 0x54) != 0) {
      iVar4 = *(int *)((int)this + 0x54) + -1;
      *(int *)((int)this + 0x54) = iVar4;
      iVar3 = *(int *)((int)this + 0x50);
      *(undefined4 *)(iVar3 + iVar4 * 8) = 1;
      *(int *)(iVar3 + 4 + iVar4 * 8) = iVar2;
      return;
    }
  }
  *(undefined4 *)((int)this + 0x90) = 3;
LAB_0051e182:
  FUN_004d4550(this);
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  return;
#undef uStack_14
#undef fStack_10
#undef uStack_c
#undef uStack_8
#undef uStack_4
}
