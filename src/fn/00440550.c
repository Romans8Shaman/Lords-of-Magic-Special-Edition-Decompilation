/* Rebuilt from lomse.exe op_satellitegetstrongholdlevel @ 0x00440550 (559 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define FUN_004026a0 ((undefined4 (__cdecl *)(uint *, uint *, uint *, undefined4 *))0x004026a0)
#define FUN_00404ab0 ((undefined4 (__thiscall *)(void *, undefined4))0x00404ab0)
#define FUN_0043dbb0 ((uint (__fastcall *)(int))0x0043dbb0)
#define FUN_0043dbd0 ((uint (__fastcall *)(int))0x0043dbd0)
#define FUN_00485400 ((undefined * (__thiscall *)(void *, int, byte))0x00485400)
#define FUN_004d41c0 ((undefined4 (__thiscall *)(void *, char *))0x004d41c0)
#define s_building_in_upgradebuilding_does_0055663c (*(char (*)[])0x0055663c)

#define LOM_SELF_00440550 1
void __cdecl rb_00440550(void *vm)

{
  undefined4 uVar1;
  void *this;
  void *pvVar2;
  int iVar3;
  int *this_00;
  int iVar4;
  int *this_01;
  int iVar5;
  uchar _fr[0x18] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef uint _t_uStack_10;
  typedef uint _t_uStack_c;
  typedef uint _t_uStack_8;
  typedef undefined4 _t_uStack_4;
#define uStack_10 (*(_t_uStack_10 *)(_fr + 0x0))
#define uStack_c (*(_t_uStack_c *)(_fr + 0x4))
#define uStack_8 (*(_t_uStack_8 *)(_fr + 0x8))
#define uStack_4 (*(_t_uStack_4 *)(_fr + 0xc))
  
  this = vm;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar3 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar3;
    uStack_8 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar3 * 8);
    uStack_4 = *(undefined4 *)(*(int *)((int)vm + 0x50) + -4 + iVar3 * 8);
  }
  else {
    FUN_00404ab0(vm,6);
    uStack_8 = 0;
  }
  iVar3 = FUN_004026a0(&uStack_8,&uStack_10,&uStack_c,(undefined4 *)&vm);
  if (iVar3 == 0) {
    FUN_00404ab0(this,0xe);
  }
  else {
    this_00 = (int *)FUN_00485400(&DAT_005aa12c,uStack_10,7);
    if (this_00 != (int *)0x0) {
      this_01 = (int *)FUN_0043dbb0((int)this_00);
      vm = (void *)FUN_0043dbd0((int)this_00);
      if (this_01 != (int *)0x0) {
        if (vm != (void *)0x0) {
          iVar3 = ((undefined4 (__thiscall *)(__typeof__(this_01)))(**(code **)(*this_01 + 0x3c)))(this_01);
          iVar4 = ((undefined4 (__thiscall *)(__typeof__(this_00)))(**(code **)(*this_00 + 0x3c)))(this_00);
          if (iVar3 == iVar4) {
            iVar3 = ((undefined4 (__thiscall *)(__typeof__(vm)))(**(code **)(*(int *)vm + 0x3c)))(vm);
            iVar4 = ((undefined4 (__thiscall *)(__typeof__(this_00)))(**(code **)(*this_00 + 0x3c)))(this_00);
            if (iVar3 == iVar4) {
              iVar3 = this_01[0x35];
              iVar4 = *(int *)((int)vm + 0xd4);
              if (iVar3 < iVar4) {
                if (*(int *)((int)this + 0x54) != 0) {
                  iVar5 = *(int *)((int)this + 0x54) + -1;
                  *(int *)((int)this + 0x54) = iVar5;
                  iVar3 = *(int *)((int)this + 0x50);
                  *(undefined4 *)(iVar3 + iVar5 * 8) = 1;
                  *(int *)(iVar3 + 4 + iVar5 * 8) = iVar4;
                  return;
                }
              }
              else if (*(int *)((int)this + 0x54) != 0) {
                iVar4 = *(int *)((int)this + 0x50);
                iVar5 = *(int *)((int)this + 0x54) + -1;
                *(int *)((int)this + 0x54) = iVar5;
                *(undefined4 *)(iVar4 + iVar5 * 8) = 1;
                *(int *)(iVar4 + 4 + iVar5 * 8) = iVar3;
                return;
              }
              goto LAB_0044076e;
            }
          }
        }
        if (this_01 != (int *)0x0) {
          iVar3 = ((undefined4 (__thiscall *)(__typeof__(this_01)))(**(code **)(*this_01 + 0x3c)))(this_01);
          iVar4 = ((undefined4 (__thiscall *)(__typeof__(this_00)))(**(code **)(*this_00 + 0x3c)))(this_00);
          if (iVar3 == iVar4) {
            iVar3 = this_01[0x35];
            if (*(int *)((int)this + 0x54) != 0) {
              iVar4 = *(int *)((int)this + 0x50);
              iVar5 = *(int *)((int)this + 0x54) + -1;
              *(int *)((int)this + 0x54) = iVar5;
              *(undefined4 *)(iVar4 + iVar5 * 8) = 1;
              *(int *)(iVar4 + 4 + iVar5 * 8) = iVar3;
              return;
            }
            goto LAB_0044076e;
          }
        }
      }
      pvVar2 = vm;
      if (vm != (void *)0x0) {
        iVar3 = ((undefined4 (__thiscall *)(__typeof__(vm)))(**(code **)(*(int *)vm + 0x3c)))(vm);
        iVar4 = ((undefined4 (__thiscall *)(__typeof__(this_00)))(**(code **)(*this_00 + 0x3c)))(this_00);
        if (iVar3 == iVar4) {
          uVar1 = *(undefined4 *)((int)pvVar2 + 0xd4);
          if (*(int *)((int)this + 0x54) != 0) {
            iVar3 = *(int *)((int)this + 0x50);
            iVar4 = *(int *)((int)this + 0x54) + -1;
            *(int *)((int)this + 0x54) = iVar4;
            *(undefined4 *)(iVar3 + iVar4 * 8) = 1;
            *(undefined4 *)(iVar3 + 4 + iVar4 * 8) = uVar1;
            return;
          }
          goto LAB_0044076e;
        }
      }
      if (*(int *)((int)this + 0x54) != 0) {
        iVar4 = *(int *)((int)this + 0x54) + -1;
        *(int *)((int)this + 0x54) = iVar4;
        iVar3 = *(int *)((int)this + 0x50);
        *(undefined4 *)(iVar3 + iVar4 * 8) = 1;
        *(undefined4 *)(iVar3 + 4 + iVar4 * 8) = 0xffffffff;
        return;
      }
      goto LAB_0044076e;
    }
    FUN_004d41c0(this,s_building_in_upgradebuilding_does_0055663c);
  }
  if (*(int *)((int)this + 0x54) != 0) {
    iVar4 = *(int *)((int)this + 0x54) + -1;
    *(int *)((int)this + 0x54) = iVar4;
    iVar3 = *(int *)((int)this + 0x50);
    *(undefined4 *)(iVar3 + iVar4 * 8) = 1;
    *(undefined4 *)(iVar3 + 4 + iVar4 * 8) = 0xffffffff;
    return;
  }
LAB_0044076e:
  FUN_00404ab0(this,3);
  return;
#undef uStack_10
#undef uStack_c
#undef uStack_8
#undef uStack_4
}
