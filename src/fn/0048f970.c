/* Rebuilt from lomse.exe op_dialoginfo @ 0x0048f970 (647 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00584ae8 (*(undefined *)0x00584ae8)
#define DAT_005aa128 (*(undefined4 *)0x005aa128)
#define FUN_004026a0 ((undefined4 (__cdecl *)(uint *, uint *, uint *, undefined4 *))0x004026a0)
#define FUN_00404ab0 ((undefined4 (__thiscall *)(void *, undefined4))0x00404ab0)
#define FUN_0040adb0 ((undefined4 (__thiscall *)(void *, undefined4 *))0x0040adb0)
#define FUN_0048d760 ((undefined4 (__thiscall *)(void *, int, int, int, undefined4, undefined4, undefined4, undefined4, undefined4, undefined4, undefined4, undefined4))0x0048d760)
#define FUN_0048d810 ((int (__thiscall *)(void *, int))0x0048d810)
#define FUN_0048ea90 ((undefined4 (__thiscall *)(void *, undefined4))0x0048ea90)
#define FUN_0048eb00 ((undefined4 (__thiscall *)(void *, undefined4))0x0048eb00)
#define FUN_004d41c0 ((undefined4 (__thiscall *)(void *, char *))0x004d41c0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define FUN_005005f0 ((int (__thiscall *)(void *, uint))0x005005f0)
#define FUN_00505750 ((undefined4 (__thiscall *)(void *, uint))0x00505750)
#define s_bad_dialog_identifier_0055c384 (*(char (*)[])0x0055c384)
#define s_dialoginfo_failed_0055c3a8 (*(char (*)[])0x0055c3a8)

#define LOM_SELF_0048f970 1
void __cdecl rb_0048f970(void *vm)

{
  void *this;
  undefined4 *puVar1;
  int iVar2;
  void *this_00;
  uint *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uchar _fr[0x40] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef uint _t_uStack_34;
  typedef uint _t_uStack_30;
  typedef uint _t_uStack_2c;
  typedef undefined4 _t_fStack_28;
  typedef undefined4 _t_fStack_24;
  typedef undefined4 _t_uStack_20;
  typedef undefined4 _t_uStack_1c;
  typedef undefined4 _t_uStack_18;
  typedef undefined4 _t_uStack_14;
  typedef undefined4 _t_uStack_10;
  typedef undefined4 _t_uStack_c;
  typedef uint _t_uStack_8;
  typedef undefined4 _t_uStack_4;
#define uStack_34 (*(_t_uStack_34 *)(_fr + 0x4))
#define uStack_30 (*(_t_uStack_30 *)(_fr + 0x8))
#define uStack_2c (*(_t_uStack_2c *)(_fr + 0xc))
#define fStack_28 (*(_t_fStack_28 *)(_fr + 0x10))
#define fStack_24 (*(_t_fStack_24 *)(_fr + 0x14))
#define uStack_20 (*(_t_uStack_20 *)(_fr + 0x18))
#define uStack_1c (*(_t_uStack_1c *)(_fr + 0x1c))
#define uStack_18 (*(_t_uStack_18 *)(_fr + 0x20))
#define uStack_14 (*(_t_uStack_14 *)(_fr + 0x24))
#define uStack_10 (*(_t_uStack_10 *)(_fr + 0x28))
#define uStack_c (*(_t_uStack_c *)(_fr + 0x2c))
#define uStack_8 (*(_t_uStack_8 *)(_fr + 0x30))
#define uStack_4 (*(_t_uStack_4 *)(_fr + 0x34))
  
  this = vm;
  puVar1 = (undefined4 *)FUN_0040adb0(vm,&uStack_8);
  uStack_18 = *puVar1;
  uStack_14 = puVar1[1];
  if ((char)uStack_18 != '\0') {
    if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
      iVar2 = *(int *)((int)this + 0x54) + 1;
      *(int *)((int)this + 0x54) = iVar2;
      uStack_20 = *(undefined4 *)(*(int *)((int)this + 0x50) + -8 + iVar2 * 8);
      uStack_1c = *(undefined4 *)(*(int *)((int)this + 0x50) + -4 + iVar2 * 8);
    }
    else {
      FUN_00404ab0(this,6);
      uStack_1c = uStack_4;
      uStack_20 = 0;
    }
    if ((char)uStack_20 != '\0') {
      puVar1 = (undefined4 *)FUN_0040adb0(this,&uStack_8);
      uStack_10 = *puVar1;
      uStack_c = puVar1[1];
      if ((char)uStack_10 != '\0') {
        if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
          iVar2 = *(int *)((int)this + 0x54) + 1;
          *(int *)((int)this + 0x54) = iVar2;
          uVar4 = *(undefined4 *)(*(int *)((int)this + 0x50) + -8 + iVar2 * 8);
          uVar5 = *(undefined4 *)(*(int *)((int)this + 0x50) + -4 + iVar2 * 8);
        }
        else {
          FUN_00404ab0(this,6);
          uVar4 = 0;
          uVar5 = uStack_4;
        }
        if ((char)uVar4 != '\0') {
          FUN_0040adb0(this,&uStack_8);
          iVar2 = FUN_004026a0(&uStack_8,(uint *)&vm,(uint *)&fStack_24,&fStack_28);
          if (iVar2 != 0) {
            FUN_0040adb0(this,&uStack_8);
            iVar2 = FUN_004026a0(&uStack_8,&uStack_30,(uint *)&fStack_28,&fStack_24);
            if (iVar2 != 0) {
              FUN_0040adb0(this,&uStack_8);
              iVar2 = FUN_004026a0(&uStack_8,&uStack_2c,(uint *)&fStack_28,&fStack_24);
              if (iVar2 != 0) {
                FUN_0040adb0(this,&uStack_8);
                iVar2 = FUN_004026a0(&uStack_8,&uStack_34,(uint *)&fStack_28,&fStack_24);
                if (iVar2 != 0) {
                  iVar2 = FUN_00505750(&DAT_00584ae8,uStack_34);
                  if (iVar2 != 0) {
                    DAT_005aa128 = 1;
                  }
                  this_00 = (void *)FUN_005005f0(&DAT_00584ae8,uStack_34);
                  if (this_00 == (void *)0x0) {
                    FUN_004d41c0(this,s_bad_dialog_identifier_0055c384);
                    return;
                  }
                  iVar2 = FUN_0048d760(this_00,uStack_2c,uStack_30,(int)vm,uVar4,uVar5,uStack_10,
                                       uStack_c,uStack_20,uStack_1c,uStack_18,uStack_14);
                  if (iVar2 == 0) {
                    FUN_004d41c0(this,s_dialoginfo_failed_0055c3a8);
                    return;
                  }
                  if (*(void **)((int)this_00 + 0x78) == (void *)0x0) {
                    return;
                  }
                  puVar3 = (uint *)FUN_0048d810(*(void **)((int)this_00 + 0x78),
                                                *(int *)((int)this_00 + 0x7c));
                  if (puVar3 == (uint *)0x0) {
                    return;
                  }
                  uStack_30 = *puVar3;
                  vm = (void *)puVar3[1];
                  FUN_0048ea90(this_00,*(int *)(*(int *)((int)this_00 + 0x78) + 0x3c) + uStack_30);
                  FUN_0048eb00(this_00,*(int *)(*(int *)((int)this_00 + 0x78) + 0x40) + (int)vm);
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
        }
      }
    }
  }
  return;
#undef uStack_34
#undef uStack_30
#undef uStack_2c
#undef fStack_28
#undef fStack_24
#undef uStack_20
#undef uStack_1c
#undef uStack_18
#undef uStack_14
#undef uStack_10
#undef uStack_c
#undef uStack_8
#undef uStack_4
}
