/* Rebuilt from lomse.exe op_slider @ 0x004ec460 (648 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005a7b50 (*(undefined4 *)0x005a7b50)
#define FUN_004026a0 ((undefined4 (__cdecl *)(uint *, uint *, uint *, undefined4 *))0x004026a0)
#define FUN_00404ab0 ((undefined4 (__thiscall *)(void *, undefined4))0x00404ab0)
#define FUN_0040adb0 ((undefined4 (__thiscall *)(void *, undefined4 *))0x0040adb0)
#define FUN_00492100 ((int (__fastcall *)(int *, undefined4, undefined4))0x00492100)
#define FUN_004d41c0 ((undefined4 (__thiscall *)(void *, char *))0x004d41c0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define FUN_004ecc30 ((undefined4 (__thiscall *)(void *, undefined4))0x004ecc30)
#define s_slider__max_controls_exceeded_00573044 (*(char (*)[])0x00573044)

#define LOM_SELF_004ec460 1
void __cdecl rb_004ec460(void *vm)

{
  void *this;
  int iVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  uchar _fr[0x60] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef uint _t_uStack_58;
  typedef uint _t_uStack_54;
  typedef undefined4 _t_uStack_50;
  typedef uint _t_auStack_4c[4];
  typedef uint _t_auStack_3c[6];
  typedef uint _t_auStack_24[6];
  typedef undefined4 _t_uStack_c;
  typedef undefined4 _t_uStack_8;
  typedef uint _t_uStack_4;
#define uStack_58 (*(_t_uStack_58 *)(_fr + 0x0))
#define uStack_54 (*(_t_uStack_54 *)(_fr + 0x4))
#define uStack_50 (*(_t_uStack_50 *)(_fr + 0x8))
#define auStack_4c (*(_t_auStack_4c *)(_fr + 0xc))
#define auStack_3c (*(_t_auStack_3c *)(_fr + 0x1c))
#define auStack_24 (*(_t_auStack_24 *)(_fr + 0x34))
#define uStack_c (*(_t_uStack_c *)(_fr + 0x4c))
#define uStack_8 (*(_t_uStack_8 *)(_fr + 0x50))
#define uStack_4 (*(_t_uStack_4 *)(_fr + 0x54))
  
  this = vm;
  puVar3 = auStack_4c;
  for (iVar2 = 0x13; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  FUN_0040adb0(vm,&uStack_54);
  iVar2 = FUN_004026a0(&uStack_54,auStack_4c + 3,&uStack_58,(undefined4 *)&vm);
  if (iVar2 != 0) {
    FUN_0040adb0(this,&uStack_54);
    iVar2 = FUN_004026a0(&uStack_54,&uStack_4,&uStack_58,(undefined4 *)&vm);
    if (iVar2 != 0) {
      if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
        iVar2 = *(int *)((int)this + 0x54) + 1;
        *(int *)((int)this + 0x54) = iVar2;
        uStack_c = *(undefined4 *)(*(int *)((int)this + 0x50) + -8 + iVar2 * 8);
        uStack_50 = *(undefined4 *)(*(int *)((int)this + 0x50) + -4 + iVar2 * 8);
      }
      else {
        *(undefined4 *)((int)this + 0x90) = 6;
        FUN_004d4550(this);
        *(undefined4 *)((int)this + 0x90) = 0;
        *(undefined4 *)((int)this + 0xa4) = 0;
        uStack_c = 0;
      }
      uStack_8 = uStack_50;
      if (5 < (int)auStack_4c[3]) {
        FUN_004d41c0(this,s_slider__max_controls_exceeded_00573044);
        if (*(int *)((int)this + 0x54) == 0) {
          FUN_00404ab0(this,3);
          return;
        }
        iVar1 = *(int *)((int)this + 0x54) + -1;
        *(int *)((int)this + 0x54) = iVar1;
        iVar2 = *(int *)((int)this + 0x50);
        *(undefined4 *)(iVar2 + iVar1 * 8) = 1;
        *(undefined4 *)(iVar2 + 4 + iVar1 * 8) = 0xffffffff;
        return;
      }
      if (-1 < (int)auStack_4c[3]) {
        puVar3 = auStack_24 + auStack_4c[3];
        uVar4 = auStack_4c[3];
        do {
          FUN_0040adb0(this,&uStack_54);
          iVar2 = FUN_004026a0(&uStack_54,puVar3,&uStack_58,(undefined4 *)&vm);
          if (iVar2 == 0) goto LAB_004ec62a;
          uVar4 = uVar4 + -1;
          puVar3 = puVar3 + -1;
        } while (-1 < (int)uVar4);
        if (-1 < (int)auStack_4c[3]) {
          puVar3 = auStack_3c + auStack_4c[3];
          uVar4 = auStack_4c[3];
          do {
            FUN_0040adb0(this,&uStack_54);
            iVar2 = FUN_004026a0(&uStack_54,puVar3,&uStack_58,(undefined4 *)&vm);
            if (iVar2 == 0) goto LAB_004ec62a;
            uVar4 = uVar4 + -1;
            puVar3 = puVar3 + -1;
          } while (-1 < (int)uVar4);
        }
      }
      FUN_0040adb0(this,&uStack_54);
      iVar2 = FUN_004026a0(&uStack_54,auStack_4c + 2,&uStack_58,(undefined4 *)&vm);
      if (iVar2 != 0) {
        FUN_0040adb0(this,&uStack_54);
        iVar2 = FUN_004026a0(&uStack_54,auStack_4c + 1,&uStack_58,(undefined4 *)&vm);
        if (iVar2 == 0) {
          FUN_00404ab0(this,0xe);
          return;
        }
        FUN_0040adb0(this,&uStack_54);
        iVar2 = FUN_004026a0(&uStack_54,auStack_4c,&uStack_58,(undefined4 *)&vm);
        if (iVar2 == 0) {
          FUN_00404ab0(this,0xe);
          return;
        }
        iVar2 = FUN_00492100(&DAT_005a7b50,auStack_4c,auStack_4c);
        FUN_004ecc30(this,iVar2);
        return;
      }
LAB_004ec62a:
      *(undefined4 *)((int)this + 0x90) = 0xe;
      FUN_004d4550(this);
      *(undefined4 *)((int)this + 0x90) = 0;
      *(undefined4 *)((int)this + 0xa4) = 0;
      return;
    }
  }
  *(undefined4 *)((int)this + 0x90) = 0xe;
  FUN_004d4550(this);
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  return;
#undef uStack_58
#undef uStack_54
#undef uStack_50
#undef auStack_4c
#undef auStack_3c
#undef auStack_24
#undef uStack_c
#undef uStack_8
#undef uStack_4
}
