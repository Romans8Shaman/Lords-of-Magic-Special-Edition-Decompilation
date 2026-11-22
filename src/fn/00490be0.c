/* Rebuilt from lomse.exe op_additem @ 0x00490be0 (639 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00584ae8 (*(undefined *)0x00584ae8)
#define FUN_004026a0 ((undefined4 (__cdecl *)(uint *, uint *, uint *, undefined4 *))0x004026a0)
#define FUN_00404ab0 ((undefined4 (__thiscall *)(void *, undefined4))0x00404ab0)
#define FUN_0040adb0 ((undefined4 (__thiscall *)(void *, undefined4 *))0x0040adb0)
#define FUN_0041d1d0 ((undefined4 (__thiscall *)(void *, undefined4, undefined4))0x0041d1d0)
#define FUN_0048d970 ((int (__thiscall *)(void *, uint, int, int, undefined4, undefined4, undefined4, undefined4, undefined4, undefined4))0x0048d970)
#define FUN_004d41c0 ((undefined4 (__thiscall *)(void *, char *))0x004d41c0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define FUN_005005f0 ((int (__thiscall *)(void *, uint))0x005005f0)
#define s_additem_failed_0055c484 (*(char (*)[])0x0055c484)
#define s_additem_failed___max_exceeded_0055c4fc (*(char (*)[])0x0055c4fc)
#define s_bad_dialog_identifier_0055c384 (*(char (*)[])0x0055c384)
#define s_cannot_add_open_dialog_as_an_ite_0055c4b4 (*(char (*)[])0x0055c4b4)
#define s_duplicate_item_in_same_position_0055c494 (*(char (*)[])0x0055c494)
#define s_duplicate_subdialogs_not_support_0055c4d8 (*(char (*)[])0x0055c4d8)

#define LOM_SELF_00490be0 1
void __cdecl rb_00490be0(void *vm)

{
  void *this;
  int iVar1;
  void *this_00;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char *pcVar5;
  uchar _fr[0x38] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef uint _t_uStack_2c;
  typedef uint _t_uStack_28;
  typedef uint _t_uStack_24;
  typedef undefined4 _t_fStack_20;
  typedef undefined4 _t_fStack_1c;
  typedef undefined4 _t_uStack_18;
  typedef undefined4 _t_uStack_14;
  typedef uint _t_uStack_10;
  typedef undefined4 _t_uStack_c;
  typedef undefined4 _t_uStack_8;
  typedef undefined4 _t_uStack_4;
#define uStack_2c (*(_t_uStack_2c *)(_fr + 0x4))
#define uStack_28 (*(_t_uStack_28 *)(_fr + 0x8))
#define uStack_24 (*(_t_uStack_24 *)(_fr + 0xc))
#define fStack_20 (*(_t_fStack_20 *)(_fr + 0x10))
#define fStack_1c (*(_t_fStack_1c *)(_fr + 0x14))
#define uStack_18 (*(_t_uStack_18 *)(_fr + 0x18))
#define uStack_14 (*(_t_uStack_14 *)(_fr + 0x1c))
#define uStack_10 (*(_t_uStack_10 *)(_fr + 0x20))
#define uStack_c (*(_t_uStack_c *)(_fr + 0x24))
#define uStack_8 (*(_t_uStack_8 *)(_fr + 0x28))
#define uStack_4 (*(_t_uStack_4 *)(_fr + 0x2c))
  
  this = vm;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar1 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar1;
    uStack_18 = *(undefined4 *)(*(int *)((int)vm + 0x50) + -8 + iVar1 * 8);
    uStack_14 = *(undefined4 *)(*(int *)((int)vm + 0x50) + -4 + iVar1 * 8);
  }
  else {
    FUN_00404ab0(vm,6);
    uStack_18 = 0;
    uStack_14 = uStack_4;
  }
  if ((char)uStack_18 != '\0') {
    if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
      iVar1 = *(int *)((int)this + 0x54) + 1;
      *(int *)((int)this + 0x54) = iVar1;
      uStack_8 = *(undefined4 *)(*(int *)((int)this + 0x50) + -8 + iVar1 * 8);
      uVar3 = *(undefined4 *)(*(int *)((int)this + 0x50) + -4 + iVar1 * 8);
    }
    else {
      FUN_00404ab0(this,6);
      uStack_8 = 0;
      uVar3 = uStack_4;
    }
    if ((char)uStack_8 != '\0') {
      if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
        iVar1 = *(int *)((int)this + 0x54) + 1;
        *(int *)((int)this + 0x54) = iVar1;
        uVar2 = *(undefined4 *)(*(int *)((int)this + 0x50) + -8 + iVar1 * 8);
        uVar4 = *(undefined4 *)(*(int *)((int)this + 0x50) + -4 + iVar1 * 8);
      }
      else {
        FUN_00404ab0(this,6);
        uVar2 = 0;
        uVar4 = uStack_4;
      }
      if ((char)uVar2 != '\0') {
        if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
          iVar1 = *(int *)((int)this + 0x54) + 1;
          *(int *)((int)this + 0x54) = iVar1;
          uStack_10 = *(uint *)(*(int *)((int)this + 0x50) + -8 + iVar1 * 8);
          uStack_c = *(undefined4 *)(*(int *)((int)this + 0x50) + -4 + iVar1 * 8);
        }
        else {
          FUN_00404ab0(this,6);
          uStack_10 = 0;
          uStack_c = uStack_4;
        }
        iVar1 = FUN_004026a0(&uStack_10,&uStack_2c,(uint *)&fStack_1c,&fStack_20);
        if (iVar1 == 0) {
          FUN_00404ab0(this,0xe);
          return;
        }
        FUN_0040adb0(this,&uStack_10);
        iVar1 = FUN_004026a0(&uStack_10,&uStack_28,(uint *)&fStack_20,&fStack_1c);
        if (iVar1 != 0) {
          FUN_0040adb0(this,&uStack_10);
          iVar1 = FUN_004026a0(&uStack_10,&uStack_24,(uint *)&fStack_20,&fStack_1c);
          if (iVar1 != 0) {
            FUN_0040adb0(this,&uStack_10);
            iVar1 = FUN_004026a0(&uStack_10,(uint *)&vm,(uint *)&fStack_20,&fStack_1c);
            if (iVar1 != 0) {
              this_00 = (void *)FUN_005005f0(&DAT_00584ae8,(uint)vm);
              if (this_00 == (void *)0x0) {
                FUN_004d41c0(this,s_bad_dialog_identifier_0055c384);
                return;
              }
              iVar1 = FUN_0048d970(this_00,uStack_24,uStack_28,uStack_2c,uVar2,uVar4,uStack_8,uVar3,
                                   uStack_18,uStack_14);
              if (iVar1 < 0) {
                if (iVar1 == -1) {
                  pcVar5 = s_additem_failed___max_exceeded_0055c4fc;
                }
                else if (iVar1 == -2) {
                  pcVar5 = s_duplicate_subdialogs_not_support_0055c4d8;
                }
                else if (iVar1 == -3) {
                  pcVar5 = s_cannot_add_open_dialog_as_an_ite_0055c4b4;
                }
                else if (iVar1 == -4) {
                  pcVar5 = s_duplicate_item_in_same_position_0055c494;
                }
                else {
                  pcVar5 = s_additem_failed_0055c484;
                }
                FUN_004d41c0(this,pcVar5);
                iVar1 = -1;
              }
              FUN_0041d1d0(this,1,iVar1);
              return;
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
  return;
#undef uStack_2c
#undef uStack_28
#undef uStack_24
#undef fStack_20
#undef fStack_1c
#undef uStack_18
#undef uStack_14
#undef uStack_10
#undef uStack_c
#undef uStack_8
#undef uStack_4
}
