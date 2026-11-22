/* Rebuilt from lomse.exe op_combat_playerdeadtarget @ 0x004e9330 (603 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005ae974 (*(undefined4 *)0x005ae974)
#define DAT_005ae98c (*(uint *)0x005ae98c)
#define DAT_005ae998 (*(void * *)0x005ae998)
#define FUN_004026a0 ((undefined4 (__cdecl *)(uint *, uint *, uint *, undefined4 *))0x004026a0)
#define FUN_00404ab0 ((undefined4 (__thiscall *)(void *, undefined4))0x00404ab0)
#define FUN_0040adb0 ((undefined4 (__thiscall *)(void *, undefined4 *))0x0040adb0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define FUN_004e91a0 ((undefined4 (__fastcall *)(int))0x004e91a0)
#define FUN_004f6000 ((int (__thiscall *)(void *, int))0x004f6000)

#define LOM_SELF_004e9330 1
void __cdecl rb_004e9330(void *vm)

{
  undefined4 uVar1;
  void *this;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uchar _fr[0x28] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef uint _t_uStack_1c;
  typedef uint _t_uStack_18;
  typedef uint _t_uStack_14;
  typedef uint _t_uStack_10;
  typedef uint _t_uStack_c;
  typedef uint _t_uStack_8;
  typedef undefined4 _t_uStack_4;
#define uStack_1c (*(_t_uStack_1c *)(_fr + 0x4))
#define uStack_18 (*(_t_uStack_18 *)(_fr + 0x8))
#define uStack_14 (*(_t_uStack_14 *)(_fr + 0xc))
#define uStack_10 (*(_t_uStack_10 *)(_fr + 0x10))
#define uStack_c (*(_t_uStack_c *)(_fr + 0x14))
#define uStack_8 (*(_t_uStack_8 *)(_fr + 0x18))
#define uStack_4 (*(_t_uStack_4 *)(_fr + 0x1c))
  
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
  iVar2 = FUN_004026a0(&uStack_8,&uStack_1c,&uStack_10,(undefined4 *)&vm);
  if (iVar2 == 0) {
    FUN_00404ab0(this,0xe);
    return;
  }
  FUN_0040adb0(this,&uStack_8);
  iVar2 = FUN_004026a0(&uStack_8,&uStack_c,&uStack_10,(undefined4 *)&vm);
  if (iVar2 == 0) {
    *(undefined4 *)((int)this + 0x90) = 0xe;
  }
  else {
    FUN_0040adb0(this,&uStack_8);
    iVar2 = FUN_004026a0(&uStack_8,&uStack_14,&uStack_10,(undefined4 *)&vm);
    if (iVar2 == 0) {
      *(undefined4 *)((int)this + 0x90) = 0xe;
    }
    else {
      FUN_0040adb0(this,&uStack_8);
      iVar2 = FUN_004026a0(&uStack_8,&uStack_18,&uStack_10,(undefined4 *)&vm);
      if (iVar2 == 0) {
        *(undefined4 *)((int)this + 0x90) = 0xe;
      }
      else {
        iVar2 = -1;
        iVar5 = 99;
        uStack_10 = DAT_005ae98c;
        vm = DAT_005ae998;
        if ((int)DAT_005ae998 <= (int)DAT_005ae98c) {
          do {
            iVar3 = FUN_004f6000(&DAT_005ae974,(int)vm);
            if ((((iVar3 != 0) && (*(int *)(iVar3 + 4) == 0)) &&
                (*(uint *)(iVar3 + 0x48) == uStack_1c)) &&
               ((((~*(uint *)(iVar3 + 0x30) & 0x100) == 0 && (*(uint *)(iVar3 + 0x28) != uStack_18))
                && (*(uint *)(iVar3 + 0x28) != uStack_14)))) {
              iVar4 = FUN_004e91a0(iVar3);
              if (iVar4 == 0) {
                uVar1 = *(undefined4 *)(iVar3 + 0x28);
                if (*(int *)((int)this + 0x54) == 0) {
                  *(undefined4 *)((int)this + 0x90) = 3;
                  FUN_004d4550(this);
                  *(undefined4 *)((int)this + 0x90) = 0;
                  *(undefined4 *)((int)this + 0xa4) = 0;
                  return;
                }
                iVar2 = *(int *)((int)this + 0x50);
                iVar5 = *(int *)((int)this + 0x54) + -1;
                *(int *)((int)this + 0x54) = iVar5;
                *(undefined4 *)(iVar2 + iVar5 * 8) = 1;
                *(undefined4 *)(iVar2 + 4 + iVar5 * 8) = uVar1;
                return;
              }
              if (iVar2 == -1) {
                iVar2 = *(int *)(iVar3 + 0x28);
                iVar5 = iVar4;
              }
              else {
                iVar4 = FUN_004e91a0(iVar3);
                if (iVar4 < iVar5) {
                  iVar2 = *(int *)(iVar3 + 0x28);
                  iVar5 = iVar4;
                }
              }
            }
            vm = (void *)((int)vm + 1);
          } while ((int)vm <= (int)uStack_10);
        }
        if (*(int *)((int)this + 0x54) != 0) {
          iVar5 = *(int *)((int)this + 0x50);
          iVar3 = *(int *)((int)this + 0x54) + -1;
          *(int *)((int)this + 0x54) = iVar3;
          *(undefined4 *)(iVar5 + iVar3 * 8) = 1;
          *(int *)(iVar5 + 4 + iVar3 * 8) = iVar2;
          return;
        }
        *(undefined4 *)((int)this + 0x90) = 3;
      }
    }
  }
  FUN_004d4550(this);
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  return;
#undef uStack_1c
#undef uStack_18
#undef uStack_14
#undef uStack_10
#undef uStack_c
#undef uStack_8
#undef uStack_4
}
