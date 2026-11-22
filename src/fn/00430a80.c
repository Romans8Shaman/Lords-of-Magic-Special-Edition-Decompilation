/* Rebuilt from lomse.exe op_bargraph @ 0x00430a80 (606 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005a7b50 (*(undefined4 *)0x005a7b50)
#define FUN_004026a0 ((undefined4 (__cdecl *)(uint *, uint *, uint *, undefined4 *))0x004026a0)
#define FUN_00404ab0 ((undefined4 (__thiscall *)(void *, undefined4))0x00404ab0)
#define FUN_0040adb0 ((undefined4 (__thiscall *)(void *, undefined4 *))0x0040adb0)
#define FUN_004921c0 ((int (__fastcall *)(int *, undefined4, undefined4))0x004921c0)
#define FUN_004d41c0 ((undefined4 (__thiscall *)(void *, char *))0x004d41c0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define s_bargraph___invalid_amount_type_00555f80 (*(char (*)[])0x00555f80)

#define LOM_SELF_00430a80 1
void __cdecl rb_00430a80(void *vm)

{
  int iVar1;
  void *this;
  int iVar2;
  int iVar3;
  uint *puVar4;
  uchar _fr[0x40] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef uint _t_uStack_34;
  typedef uint _t_uStack_30;
  typedef undefined4 _t_uStack_2c;
  typedef uint _t_auStack_28[4];
  typedef uint _t_uStack_18;
  typedef uint _t_uStack_14;
  typedef uint _t_uStack_10;
  typedef uint _t_uStack_c;
  typedef uint _t_uStack_8;
  typedef undefined4 _t_uStack_4;
#define uStack_34 (*(_t_uStack_34 *)(_fr + 0x4))
#define uStack_30 (*(_t_uStack_30 *)(_fr + 0x8))
#define uStack_2c (*(_t_uStack_2c *)(_fr + 0xc))
#define auStack_28 (*(_t_auStack_28 *)(_fr + 0x10))
#define uStack_18 (*(_t_uStack_18 *)(_fr + 0x20))
#define uStack_14 (*(_t_uStack_14 *)(_fr + 0x24))
#define uStack_10 (*(_t_uStack_10 *)(_fr + 0x28))
#define uStack_c (*(_t_uStack_c *)(_fr + 0x2c))
#define uStack_8 (*(_t_uStack_8 *)(_fr + 0x30))
#define uStack_4 (*(_t_uStack_4 *)(_fr + 0x34))
  
  this = vm;
  puVar4 = auStack_28;
  for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  FUN_0040adb0(vm,&uStack_30);
  iVar2 = FUN_004026a0(&uStack_30,&uStack_c,&uStack_34,(undefined4 *)&vm);
  if (iVar2 != 0) {
    FUN_0040adb0(this,&uStack_30);
    iVar2 = FUN_004026a0(&uStack_30,&uStack_10,&uStack_34,(undefined4 *)&vm);
    if (iVar2 != 0) {
      FUN_0040adb0(this,&uStack_30);
      iVar2 = FUN_004026a0(&uStack_30,&uStack_14,&uStack_34,(undefined4 *)&vm);
      if (iVar2 != 0) {
        FUN_0040adb0(this,&uStack_30);
        iVar2 = FUN_004026a0(&uStack_30,&uStack_18,&uStack_34,(undefined4 *)&vm);
        if (iVar2 != 0) {
          FUN_0040adb0(this,&uStack_30);
          iVar2 = FUN_004026a0(&uStack_30,auStack_28 + 3,&uStack_34,(undefined4 *)&vm);
          if (iVar2 != 0) {
            if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
              iVar2 = *(int *)((int)this + 0x54) + 1;
              *(int *)((int)this + 0x54) = iVar2;
              uStack_8 = *(uint *)(*(int *)((int)this + 0x50) + -8 + iVar2 * 8);
              uStack_2c = *(undefined4 *)(*(int *)((int)this + 0x50) + -4 + iVar2 * 8);
            }
            else {
              *(undefined4 *)((int)this + 0x90) = 6;
              FUN_004d4550(this);
              *(undefined4 *)((int)this + 0x90) = 0;
              *(undefined4 *)((int)this + 0xa4) = 0;
              uStack_8 = 0;
            }
            uStack_4 = uStack_2c;
            FUN_0040adb0(this,&uStack_30);
            iVar2 = FUN_004026a0(&uStack_30,auStack_28 + 1,&uStack_34,(undefined4 *)&vm);
            if (iVar2 == 0) {
              FUN_00404ab0(this,0xe);
              return;
            }
            FUN_0040adb0(this,&uStack_30);
            iVar2 = FUN_004026a0(&uStack_30,auStack_28,&uStack_34,(undefined4 *)&vm);
            if (iVar2 == 0) {
              FUN_00404ab0(this,0xe);
              return;
            }
            if (((char)uStack_8 == '\x06') && ((uStack_8 & 0x100) == 0)) {
              auStack_28[2] = 0;
            }
            else {
              iVar2 = FUN_004026a0(&uStack_8,auStack_28 + 2,&uStack_34,(undefined4 *)&vm);
              if (iVar2 == 0) {
                FUN_004d41c0(this,s_bargraph___invalid_amount_type_00555f80);
                return;
              }
            }
            iVar2 = FUN_004921c0(&DAT_005a7b50,auStack_28,auStack_28);
            if (*(int *)((int)this + 0x54) == 0) {
              FUN_00404ab0(this,3);
              return;
            }
            iVar3 = *(int *)((int)this + 0x54) + -1;
            *(int *)((int)this + 0x54) = iVar3;
            iVar1 = *(int *)((int)this + 0x50);
            *(undefined4 *)(iVar1 + iVar3 * 8) = 1;
            *(int *)(iVar1 + 4 + iVar3 * 8) = iVar2;
            return;
          }
        }
      }
    }
  }
  *(undefined4 *)((int)this + 0x90) = 0xe;
  FUN_004d4550(this);
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  return;
#undef uStack_34
#undef uStack_30
#undef uStack_2c
#undef auStack_28
#undef uStack_18
#undef uStack_14
#undef uStack_10
#undef uStack_c
#undef uStack_8
#undef uStack_4
}
