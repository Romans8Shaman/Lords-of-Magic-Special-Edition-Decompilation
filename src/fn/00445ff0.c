/* Rebuilt from lomse.exe op_buybuildingoffaith @ 0x00445ff0 (618 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define DAT_005ae94c (*(int *)0x005ae94c)
#define FUN_004026a0 ((undefined4 (__cdecl *)(uint *, uint *, uint *, undefined4 *))0x004026a0)
#define FUN_00404ab0 ((undefined4 (__thiscall *)(void *, undefined4))0x00404ab0)
#define FUN_0040adb0 ((undefined4 (__thiscall *)(void *, undefined4 *))0x0040adb0)
#define FUN_0044f1c0 ((undefined4 (__stdcall *)(undefined4, undefined4, undefined4, undefined4, undefined4))0x0044f1c0)
#define FUN_00452a50 ((undefined4 (__stdcall *)(int))0x00452a50)
#define FUN_00482ac0 ((uint (__thiscall *)(void *, int, int))0x00482ac0)
#define FUN_004d41c0 ((undefined4 (__thiscall *)(void *, char *))0x004d41c0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define FUN_0050f7b0 ((undefined4 (__thiscall *)(void *, undefined4 *))0x0050f7b0)
#define s_No_building_or_city_00556824 (*(char (*)[])0x00556824)

#define LOM_SELF_00445ff0 1
void __cdecl rb_00445ff0(void *vm)

{
  void *this;
  int iVar1;
  uint uVar2;
  uint uVar3;
  int *this_00;
  int *this_01;
  int iVar4;
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
  iVar1 = FUN_004026a0(&uStack_8,&uStack_20,(uint *)&fStack_c,&fStack_10);
  if (iVar1 == 0) {
    FUN_00404ab0(this,0xe);
    return;
  }
  FUN_0040adb0(this,&uStack_8);
  iVar1 = FUN_004026a0(&uStack_8,&uStack_1c,(uint *)&fStack_10,&fStack_c);
  if (iVar1 != 0) {
    FUN_0040adb0(this,&uStack_8);
    iVar1 = FUN_004026a0(&uStack_8,&uStack_18,(uint *)&fStack_10,&fStack_c);
    if (iVar1 != 0) {
      FUN_0040adb0(this,&uStack_8);
      iVar1 = FUN_004026a0(&uStack_8,&uStack_14,(uint *)&fStack_10,&fStack_c);
      if (iVar1 != 0) {
        FUN_0040adb0(this,&uStack_8);
        iVar1 = FUN_004026a0(&uStack_8,(uint *)&vm,(uint *)&fStack_10,&fStack_c);
        if (iVar1 != 0) {
          if (vm == (void *)0xfffffffd) {
            vm = *(void **)(DAT_005ae94c + 0x28);
          }
          uVar2 = FUN_00482ac0(&DAT_005aa12c,(int)vm,3);
          uVar3 = FUN_00482ac0(&DAT_005aa12c,(int)vm,2);
          if ((uVar2 == 0) && (uVar3 == 0)) {
            if (vm == (void *)0xffffffff) {
              FUN_004d41c0(this,s_No_building_or_city_00556824);
              return;
            }
            this_00 = (int *)FUN_00482ac0(&DAT_005aa12c,(int)vm,1);
            if (this_00 != (int *)0x0) {
              iVar1 = FUN_0050f7b0(this_00,&fStack_10);
              if (iVar1 != 0) {
                iVar1 = FUN_00452a50(__BC(int, fStack_10));
                if (iVar1 != -1) {
                  this_01 = (int *)FUN_00482ac0(&DAT_005aa12c,iVar1,3);
                  if (this_01 != (int *)0x0) {
                    iVar1 = ((undefined4 (__thiscall *)(__typeof__(this_00)))(**(code **)(*this_00 + 0x3c)))(this_00);
                    iVar4 = ((undefined4 (__thiscall *)(__typeof__(this_01)))(**(code **)(*this_01 + 0x3c)))(this_01);
                    if (iVar1 == iVar4) {
                      FUN_0044f1c0(vm,uStack_14,uStack_18,uStack_1c,uStack_20);
                      return;
                    }
                  }
                }
              }
            }
          }
          FUN_0044f1c0(vm,uStack_14,uStack_18,uStack_1c,uStack_20);
          return;
        }
      }
    }
  }
  *(undefined4 *)((int)this + 0x90) = 0xe;
  FUN_004d4550(this);
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
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
