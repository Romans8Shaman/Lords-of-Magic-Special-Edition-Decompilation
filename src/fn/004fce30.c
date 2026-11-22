/* Rebuilt from lomse.exe op_enumallplayeractivearmies @ 0x004fce30 (558 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005ae974 (*(undefined4 *)0x005ae974)
#define FUN_004026a0 ((undefined4 (__cdecl *)(uint *, uint *, uint *, undefined4 *))0x004026a0)
#define FUN_00404ab0 ((undefined4 (__thiscall *)(void *, undefined4))0x00404ab0)
#define FUN_00407d50 ((undefined4 (__fastcall *)(int))0x00407d50)
#define FUN_0040adb0 ((undefined4 (__thiscall *)(void *, undefined4 *))0x0040adb0)
#define FUN_0041da00 ((undefined4 (__fastcall *)(int))0x0041da00)
#define FUN_00420620 ((undefined4 (__fastcall *)(int))0x00420620)
#define FUN_004d05e0 ((undefined4 (__thiscall *)(void *, uint, int *))0x004d05e0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define FUN_004fbed0 ((undefined4 * (__thiscall *)(void *, int))0x004fbed0)
#define FUN_005071c0 ((undefined4 (__thiscall *)(void *, int))0x005071c0)

#define LOM_SELF_004fce30 1
void __cdecl rb_004fce30(void *vm)

{
  int iVar1;
  int *this;
  void *this_00;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  uchar _fr[0x28] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef uint _t_uStack_1c;
  typedef int * _t_piStack_18;
  typedef undefined4 _t_fStack_14;
  typedef uint _t_uStack_10;
  typedef int * _t_piStack_c;
  typedef uint _t_auStack_8[2];
#define uStack_1c (*(_t_uStack_1c *)(_fr + 0x4))
#define piStack_18 (*(_t_piStack_18 *)(_fr + 0x8))
#define fStack_14 (*(_t_fStack_14 *)(_fr + 0xc))
#define uStack_10 (*(_t_uStack_10 *)(_fr + 0x10))
#define piStack_c (*(_t_piStack_c *)(_fr + 0x14))
#define auStack_8 (*(_t_auStack_8 *)(_fr + 0x18))
  
  this_00 = vm;
  FUN_0040adb0(vm,&uStack_10);
  iVar2 = FUN_0041da00((int)this_00);
  if (iVar2 == 0) {
    if (((char)uStack_10 == '\x06') && ((uStack_10 & 0x100) == 0)) goto LAB_004fce82;
    *(undefined4 *)((int)this_00 + 0x90) = 0x12;
    FUN_004d4550(this_00);
    *(undefined4 *)((int)this_00 + 0x90) = 0;
    *(undefined4 *)((int)this_00 + 0xa4) = 0;
  }
  uStack_10 = 0;
LAB_004fce82:
  if ((char)uStack_10 == '\0') {
    return;
  }
  FUN_0040adb0(this_00,auStack_8);
  iVar2 = FUN_004026a0(auStack_8,(uint *)&vm,(uint *)&fStack_14,(undefined4 *)&piStack_18);
  if (iVar2 != 0) {
    FUN_0040adb0(this_00,auStack_8);
    iVar2 = FUN_004026a0(auStack_8,&uStack_1c,(uint *)&piStack_18,&fStack_14);
    if (iVar2 != 0) {
      piVar3 = FUN_004fbed0(&DAT_005ae974,0);
joined_r0x004fcf18:
      do {
        do {
          this = piVar3;
          if (this == (int *)0x0) {
            return;
          }
          piStack_18 = FUN_004fbed0(&DAT_005ae974,(int)this);
          uVar4 = ((undefined4 (__thiscall *)(__typeof__(this)))(**(code **)(*this + 0x3c)))(this);
          piVar3 = piStack_18;
        } while (uVar4 != uStack_1c);
        if ((int)vm < 0) {
          if ((((~this[0xc] & 0x100U) == 0) ||
              (iVar2 = FUN_00407d50((int)this), piVar3 = piStack_18, iVar2 != 0)) ||
             (iVar2 = FUN_00420620((int)this), piVar3 = piStack_18, iVar2 != 0))
          goto joined_r0x004fcf18;
          iVar2 = this[10];
          if (*(int *)((int)this_00 + 0x54) == 0) {
            *(undefined4 *)((int)this_00 + 0x90) = 3;
            FUN_004d4550(this_00);
            *(undefined4 *)((int)this_00 + 0x90) = 0;
            *(undefined4 *)((int)this_00 + 0xa4) = 0;
          }
          else {
            iVar1 = *(int *)((int)this_00 + 0x50);
            iVar5 = *(int *)((int)this_00 + 0x54) + -1;
            *(int *)((int)this_00 + 0x54) = iVar5;
            *(undefined4 *)(iVar1 + iVar5 * 8) = 1;
            *(int *)(iVar1 + 4 + iVar5 * 8) = iVar2;
          }
          FUN_004d05e0(this_00,uStack_10,piStack_c);
          iVar2 = *(int *)((int)this_00 + 0x6c);
          *(undefined4 *)((int)this_00 + 0x6c) = *(undefined4 *)((int)this_00 + 0x70);
        }
        else {
          if ((((~this[0xc] & 0x100U) == 0) ||
              (iVar2 = FUN_00407d50((int)this), piVar3 = piStack_18, iVar2 != 0)) ||
             ((iVar2 = FUN_00420620((int)this), piVar3 = piStack_18, iVar2 != 0 ||
              (iVar2 = FUN_005071c0(this,(int)vm), piVar3 = piStack_18, iVar2 == 0))))
          goto joined_r0x004fcf18;
          iVar2 = this[10];
          if (*(int *)((int)this_00 + 0x54) == 0) {
            FUN_00404ab0(this_00,3);
          }
          else {
            iVar1 = *(int *)((int)this_00 + 0x50);
            iVar5 = *(int *)((int)this_00 + 0x54) + -1;
            *(int *)((int)this_00 + 0x54) = iVar5;
            *(undefined4 *)(iVar1 + iVar5 * 8) = 1;
            *(int *)(iVar1 + 4 + iVar5 * 8) = iVar2;
          }
          FUN_004d05e0(this_00,uStack_10,piStack_c);
          iVar2 = *(int *)((int)this_00 + 0x6c);
          *(undefined4 *)((int)this_00 + 0x6c) = *(undefined4 *)((int)this_00 + 0x70);
        }
        piVar3 = piStack_18;
        if (iVar2 != 0) {
          return;
        }
      } while( true );
    }
  }
  *(undefined4 *)((int)this_00 + 0x90) = 0xe;
  FUN_004d4550(this_00);
  *(undefined4 *)((int)this_00 + 0x90) = 0;
  *(undefined4 *)((int)this_00 + 0xa4) = 0;
  return;
#undef uStack_1c
#undef piStack_18
#undef fStack_14
#undef uStack_10
#undef piStack_c
#undef auStack_8
}
