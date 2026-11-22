/* Rebuilt from lomse.exe op_canaffordbuilding_q @ 0x00445120 (612 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define FUN_004026a0 ((undefined4 (__cdecl *)(uint *, uint *, uint *, float *))0x004026a0)
#define FUN_0040adb0 ((undefined4 (__thiscall *)(void *, undefined4 *))0x0040adb0)
#define FUN_0041d1d0 ((undefined4 (__thiscall *)(void *, undefined4, undefined4))0x0041d1d0)
#define FUN_00445830 ((undefined4 (__thiscall *)(void *, undefined4 *, int, int, int, int))0x00445830)
#define FUN_0044ede0 ((undefined4 (__thiscall *)(void *, undefined4 *, int, int, int))0x0044ede0)
#define FUN_00452a50 ((undefined4 (__stdcall *)(int))0x00452a50)
#define FUN_00482ac0 ((uint (__thiscall *)(void *, int, int))0x00482ac0)
#define FUN_004d41c0 ((undefined4 (__thiscall *)(void *, char *))0x004d41c0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define FUN_0050f7b0 ((undefined4 (__thiscall *)(void *, undefined4 *))0x0050f7b0)
#define s_invalid_data_005567d8 (*(char (*)[])0x005567d8)

#define LOM_SELF_00445120 1
void __cdecl rb_00445120(void *vm)

{
  void *this;
  int iVar1;
  int *piVar2;
  int *this_00;
  int iVar3;
  uchar _fr[0x28] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef uint _t_uStack_20;
  typedef uint _t_uStack_1c;
  typedef uint _t_uStack_18;
  typedef uint _t_uStack_14;
  typedef float _t_fStack_10;
  typedef undefined4 _t_uStack_c;
  typedef uint _t_auStack_8[2];
#define uStack_20 (*(_t_uStack_20 *)(_fr + 0x0))
#define uStack_1c (*(_t_uStack_1c *)(_fr + 0x4))
#define uStack_18 (*(_t_uStack_18 *)(_fr + 0x8))
#define uStack_14 (*(_t_uStack_14 *)(_fr + 0xc))
#define fStack_10 (*(_t_fStack_10 *)(_fr + 0x10))
#define uStack_c (*(_t_uStack_c *)(_fr + 0x14))
#define auStack_8 (*(_t_auStack_8 *)(_fr + 0x18))
  
  this = vm;
  FUN_0040adb0(vm,auStack_8);
  iVar1 = FUN_004026a0(auStack_8,&uStack_1c,&uStack_14,&fStack_10);
  if (iVar1 == 0) {
LAB_004451df:
    *(undefined4 *)((int)this + 0x90) = 0xe;
    FUN_004d4550(this);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
    FUN_004d41c0(this,s_invalid_data_005567d8);
    return;
  }
  FUN_0040adb0(this,auStack_8);
  iVar1 = FUN_004026a0(auStack_8,(uint *)&vm,&uStack_14,&fStack_10);
  if (iVar1 == 0) goto LAB_004451df;
  FUN_0040adb0(this,auStack_8);
  iVar1 = FUN_004026a0(auStack_8,&uStack_18,&uStack_14,&fStack_10);
  if (iVar1 == 0) goto LAB_004451df;
  FUN_0040adb0(this,auStack_8);
  iVar1 = FUN_004026a0(auStack_8,&uStack_20,&uStack_14,&fStack_10);
  if (iVar1 == 0) goto LAB_004451df;
  piVar2 = (int *)FUN_00482ac0(&DAT_005aa12c,uStack_20,2);
  if (piVar2 == (int *)0x0) {
    if (uStack_20 != 0xffffffff) {
      piVar2 = (int *)FUN_00482ac0(&DAT_005aa12c,uStack_20,1);
      if (piVar2 != (int *)0x0) {
        iVar1 = FUN_0050f7b0(piVar2,&uStack_14);
        if (iVar1 != 0) {
          iVar1 = FUN_00452a50(uStack_14);
          if (iVar1 != -1) {
            this_00 = (int *)FUN_00482ac0(&DAT_005aa12c,iVar1,3);
            if (this_00 != (int *)0x0) {
              iVar1 = ((undefined4 (__thiscall *)(__typeof__(piVar2)))(**(code **)(*piVar2 + 0x3c)))(piVar2);
              iVar3 = ((undefined4 (__thiscall *)(__typeof__(this_00)))(**(code **)(*this_00 + 0x3c)))(this_00);
              if (iVar1 == iVar3) {
                fStack_10 = 0.0;
                iVar1 = ((undefined4 (__thiscall *)(__typeof__(this_00)))(**(code **)(*this_00 + 0x3c)))(this_00);
                iVar1 = FUN_0044ede0(this_00,&fStack_10,uStack_18,uStack_1c,iVar1);
                if (iVar1 != 0) {
                  if (*(int *)((int)this + 0x54) != 0) {
                    iVar3 = *(int *)((int)this + 0x54) + -1;
                    *(int *)((int)this + 0x54) = iVar3;
                    iVar1 = *(int *)((int)this + 0x50);
                    *(undefined4 *)(iVar1 + iVar3 * 8) = 1;
                    *(undefined4 *)(iVar1 + 4 + iVar3 * 8) = 0xffffffff;
                    return;
                  }
                  goto LAB_0044535f;
                }
              }
            }
          }
        }
      }
    }
  }
  else {
    if ((int)vm < 0) {
      vm = (void *)(int)*(short *)((int)piVar2 + 0x56);
    }
    iVar1 = ((undefined4 (__thiscall *)(__typeof__(piVar2)))(**(code **)(*piVar2 + 0x3c)))(piVar2);
    iVar1 = FUN_00445830(piVar2,&uStack_c,(int)vm,uStack_18,uStack_1c,iVar1);
    if (iVar1 != 0) {
      FUN_0041d1d0(this,1,0xffffffff);
      return;
    }
  }
  if (*(int *)((int)this + 0x54) != 0) {
    iVar3 = *(int *)((int)this + 0x54) + -1;
    *(int *)((int)this + 0x54) = iVar3;
    iVar1 = *(int *)((int)this + 0x50);
    *(undefined4 *)(iVar1 + iVar3 * 8) = 1;
    *(undefined4 *)(iVar1 + 4 + iVar3 * 8) = 0;
    return;
  }
LAB_0044535f:
  *(undefined4 *)((int)this + 0x90) = 3;
  FUN_004d4550(this);
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  return;
#undef uStack_20
#undef uStack_1c
#undef uStack_18
#undef uStack_14
#undef fStack_10
#undef uStack_c
#undef auStack_8
}
