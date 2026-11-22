/* Rebuilt from lomse.exe op_addextramilitaryunitnow @ 0x004866e0 (747 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define DAT_005cd18c (*(undefined *)0x005cd18c)
#define DAT_005cd2f0 (*(int *)0x005cd2f0)
#define DAT_005cd2f4 (*(int *)0x005cd2f4)
#define FUN_004026a0 ((undefined4 (__cdecl *)(uint *, uint *, uint *, undefined4 *))0x004026a0)
#define FUN_00404ab0 ((undefined4 (__thiscall *)(void *, undefined4))0x00404ab0)
#define FUN_0040adb0 ((undefined4 (__thiscall *)(void *, undefined4 *))0x0040adb0)
#define FUN_0041be40 ((undefined4 (__cdecl *)(void *, undefined4 *))0x0041be40)
#define FUN_00480130 ((undefined4 (__thiscall *)(void *, int, void *, int, int, undefined4, int, undefined4, int *, int *, uint, int))0x00480130)
#define FUN_00485080 ((undefined4 * (__thiscall *)(void *, int, byte))0x00485080)
#define FUN_004d41c0 ((undefined4 (__thiscall *)(void *, char *))0x004d41c0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define FUN_0052b560 ((undefined4 (__thiscall *)(void *, int))0x0052b560)
#define s_bad_unit_type_0055b4a8 (*(char (*)[])0x0055b4a8)

#define LOM_SELF_004866e0 1
void __cdecl rb_004866e0(void *vm)

{
  void *this;
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  uchar _fr[0x38] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_iStack_2c;
  typedef int _t_iStack_28;
  typedef uint _t_uStack_24;
  typedef uint _t_uStack_20;
  typedef void * _t_pvStack_1c;
  typedef uint _t_uStack_18;
  typedef uint _t_uStack_14;
  typedef undefined4 _t_fStack_10;
  typedef undefined4 _t_fStack_c;
  typedef uint _t_uStack_8;
  typedef undefined4 _t_uStack_4;
#define iStack_2c (*(_t_iStack_2c *)(_fr + 0x4))
#define iStack_28 (*(_t_iStack_28 *)(_fr + 0x8))
#define uStack_24 (*(_t_uStack_24 *)(_fr + 0xc))
#define uStack_20 (*(_t_uStack_20 *)(_fr + 0x10))
#define pvStack_1c (*(_t_pvStack_1c *)(_fr + 0x14))
#define uStack_18 (*(_t_uStack_18 *)(_fr + 0x18))
#define uStack_14 (*(_t_uStack_14 *)(_fr + 0x1c))
#define fStack_10 (*(_t_fStack_10 *)(_fr + 0x20))
#define fStack_c (*(_t_fStack_c *)(_fr + 0x24))
#define uStack_8 (*(_t_uStack_8 *)(_fr + 0x28))
#define uStack_4 (*(_t_uStack_4 *)(_fr + 0x2c))
  
  this = vm;
  iVar1 = FUN_0041be40(vm,&iStack_2c);
  if (iVar1 != 0) {
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
    iVar1 = FUN_004026a0(&uStack_8,&uStack_14,(uint *)&fStack_c,&fStack_10);
    if (iVar1 == 0) {
      FUN_00404ab0(this,0xe);
      return;
    }
    FUN_0040adb0(this,&uStack_8);
    iVar1 = FUN_004026a0(&uStack_8,&uStack_20,(uint *)&fStack_10,&fStack_c);
    if (iVar1 == 0) {
      *(undefined4 *)((int)this + 0x90) = 0xe;
    }
    else {
      FUN_0040adb0(this,&uStack_8);
      iVar1 = FUN_004026a0(&uStack_8,&uStack_24,(uint *)&fStack_10,&fStack_c);
      if (iVar1 == 0) {
        *(undefined4 *)((int)this + 0x90) = 0xe;
      }
      else {
        FUN_0040adb0(this,&uStack_8);
        iVar1 = FUN_004026a0(&uStack_8,(uint *)&pvStack_1c,(uint *)&fStack_10,&fStack_c);
        if (iVar1 == 0) {
          *(undefined4 *)((int)this + 0x90) = 0xe;
        }
        else {
          FUN_0040adb0(this,&uStack_8);
          iVar1 = FUN_004026a0(&uStack_8,&uStack_18,(uint *)&fStack_10,&fStack_c);
          if (iVar1 == 0) {
            *(undefined4 *)((int)this + 0x90) = 0xe;
          }
          else {
            if ((((int)uStack_24 < 0) || (DAT_005cd2f0 <= (int)uStack_24)) || (DAT_005cd2f4 == 0)) {
              iVar1 = 0;
            }
            else {
              iVar1 = DAT_005cd2f4 + uStack_24 * 1000;
            }
            if (iVar1 == 0) {
              FUN_004d41c0(this,s_bad_unit_type_0055b4a8);
              return;
            }
            FUN_00480130(&DAT_005aa12c,uStack_18,pvStack_1c,uStack_20,uStack_24,
                         *(undefined4 *)(iVar1 + 0xec),-1,*(undefined4 *)(iVar1 + 0xe8),&iStack_28,
                         (int *)&vm,0,(int)*(char *)(iStack_2c + 0x5ac));
            puVar2 = FUN_00485080(&DAT_005aa12c,iStack_28,0x2f);
            if (puVar2 != (undefined4 *)0x0) {
              if (0 < (int)uStack_14) {
                puVar2[(int)vm * 0x13 + 0x35] = uStack_14 << 8;
              }
              FUN_0052b560(&DAT_005cd18c,puVar2[((int)vm + 3) * 0x13]);
              puVar2[((int)vm + 3) * 0x13] = *(undefined4 *)(iStack_2c + 0xe4);
            }
            if (*(int *)((int)this + 0x54) == 0) {
              *(undefined4 *)((int)this + 0x90) = 3;
              FUN_004d4550(this);
              *(undefined4 *)((int)this + 0x90) = 0;
              *(undefined4 *)((int)this + 0xa4) = 0;
            }
            else {
              iVar1 = *(int *)((int)this + 0x50);
              iVar3 = *(int *)((int)this + 0x54) + -1;
              *(int *)((int)this + 0x54) = iVar3;
              *(undefined4 *)(iVar1 + iVar3 * 8) = 1;
              *(int *)(iVar1 + 4 + iVar3 * 8) = iStack_28;
            }
            if (*(int *)((int)this + 0x54) != 0) {
              iVar3 = *(int *)((int)this + 0x54) + -1;
              *(int *)((int)this + 0x54) = iVar3;
              iVar1 = *(int *)((int)this + 0x50);
              *(undefined4 *)(iVar1 + iVar3 * 8) = 1;
              *(void **)(iVar1 + 4 + iVar3 * 8) = vm;
              return;
            }
            *(undefined4 *)((int)this + 0x90) = 3;
          }
        }
      }
    }
    FUN_004d4550(this);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
  }
  return;
#undef iStack_2c
#undef iStack_28
#undef uStack_24
#undef uStack_20
#undef pvStack_1c
#undef uStack_18
#undef uStack_14
#undef fStack_10
#undef fStack_c
#undef uStack_8
#undef uStack_4
}
