/* Rebuilt from lomse.exe FUN_0050f290 @ 0x0050f290 (731 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005a7b78 (*(void * *)0x005a7b78)
#define DAT_005d2d00 (*(uint *)0x005d2d00)
#define DAT_005d2d04 (*(int * *)0x005d2d04)
#define FUN_004026a0 ((undefined4 (__cdecl *)(uint *, uint *, uint *, undefined4 *))0x004026a0)
#define FUN_00404ab0 ((undefined4 (__thiscall *)(void *, undefined4))0x00404ab0)
#define FUN_0040adb0 ((undefined4 (__thiscall *)(void *, undefined4 *))0x0040adb0)
#define FUN_004d05e0 ((undefined4 (__thiscall *)(void *, uint, int *))0x004d05e0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define FUN_004fd4b0 ((undefined4 (__stdcall *)(undefined4 *))0x004fd4b0)

#define LOM_SELF_0050f290 1
undefined4 __thiscall rb_0050f290(void *this, int *volatile param_1)

{
  int *piVar1;
  undefined4 uVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  void *pvVar7;
  uchar _fr[0x40] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef uint _t_uStack_34;
  typedef uint _t_uStack_30;
  typedef uint _t_uStack_2c;
  typedef uint _t_uStack_28;
  typedef undefined4 _t_fStack_24;
  typedef undefined4 _t_fStack_20;
  typedef uint _t_uStack_1c;
  typedef int _t_iStack_18;
  typedef undefined1 _t_auStack_14[20];
#define uStack_34 (*(_t_uStack_34 *)(_fr + 0x4))
#define uStack_30 (*(_t_uStack_30 *)(_fr + 0x8))
#define uStack_2c (*(_t_uStack_2c *)(_fr + 0xc))
#define uStack_28 (*(_t_uStack_28 *)(_fr + 0x10))
#define fStack_24 (*(_t_fStack_24 *)(_fr + 0x14))
#define fStack_20 (*(_t_fStack_20 *)(_fr + 0x18))
#define uStack_1c (*(_t_uStack_1c *)(_fr + 0x1c))
#define iStack_18 (*(_t_iStack_18 *)(_fr + 0x20))
#define auStack_14 (*(_t_auStack_14 *)(_fr + 0x24))
  
  piVar6 = param_1;
  FUN_004fd4b0(param_1);
  pvVar3 = DAT_005a7b78;
  if ((char)DAT_005d2d00 == '\x06') {
    if ((DAT_005d2d00 & 0x100) != 0) {
      return 0;
    }
    uVar2 = *(undefined4 *)((int)this + 0x28);
    if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
      *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
      FUN_004d4550(pvVar3);
      *(undefined4 *)((int)pvVar3 + 0x90) = 0;
      *(undefined4 *)((int)pvVar3 + 0xa4) = 0;
    }
    else {
      iVar4 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
      *(int *)((int)DAT_005a7b78 + 0x54) = iVar4;
      iVar5 = *(int *)((int)pvVar3 + 0x50);
      *(undefined4 *)(iVar5 + iVar4 * 8) = 1;
      *(undefined4 *)(iVar5 + 4 + iVar4 * 8) = uVar2;
    }
    FUN_004d05e0(DAT_005a7b78,DAT_005d2d00,DAT_005d2d04);
    pvVar3 = DAT_005a7b78;
    if (*(int *)((int)DAT_005a7b78 + 0x54) < *(int *)((int)DAT_005a7b78 + 0x58)) {
      piVar1 = (int *)((int)DAT_005a7b78 + 0x50);
      iVar5 = *(int *)((int)DAT_005a7b78 + 0x54) + 1;
      *(int *)((int)DAT_005a7b78 + 0x54) = iVar5;
      uStack_1c = *(uint *)(*piVar1 + -8 + iVar5 * 8);
      iStack_18 = *(undefined4 *)(*piVar1 + -4 + iVar5 * 8);
    }
    else {
      FUN_00404ab0(DAT_005a7b78,6);
      uStack_1c = 0;
    }
    iVar5 = FUN_004026a0(&uStack_1c,(uint *)&fStack_20,&uStack_28,&fStack_24);
    pvVar7 = DAT_005a7b78;
    if (iVar5 == 0) {
      FUN_00404ab0(pvVar3,0xe);
      return 0;
    }
    if (*(int *)((int)DAT_005a7b78 + 0x54) < *(int *)((int)DAT_005a7b78 + 0x58)) {
      piVar1 = (int *)((int)DAT_005a7b78 + 0x50);
      iVar5 = *(int *)((int)DAT_005a7b78 + 0x54) + 1;
      *(int *)((int)DAT_005a7b78 + 0x54) = iVar5;
      uStack_1c = *(uint *)(*piVar1 + -8 + iVar5 * 8);
      iStack_18 = *(undefined4 *)(*piVar1 + -4 + iVar5 * 8);
    }
    else {
      FUN_00404ab0(DAT_005a7b78,6);
      uStack_1c = 0;
    }
    iVar5 = FUN_004026a0(&uStack_1c,(uint *)&fStack_24,&uStack_2c,&fStack_20);
    pvVar3 = DAT_005a7b78;
    if (iVar5 == 0) {
      FUN_00404ab0(pvVar7,0xe);
      return 0;
    }
    if (*(int *)((int)DAT_005a7b78 + 0x54) < *(int *)((int)DAT_005a7b78 + 0x58)) {
      piVar1 = (int *)((int)DAT_005a7b78 + 0x50);
      iVar5 = *(int *)((int)DAT_005a7b78 + 0x54) + 1;
      *(int *)((int)DAT_005a7b78 + 0x54) = iVar5;
      uStack_1c = *(uint *)(*piVar1 + -8 + iVar5 * 8);
      iStack_18 = *(undefined4 *)(*piVar1 + -4 + iVar5 * 8);
    }
    else {
      FUN_00404ab0(DAT_005a7b78,6);
      uStack_1c = 0;
    }
    iVar5 = FUN_004026a0(&uStack_1c,(uint *)&fStack_24,&uStack_30,&fStack_20);
    pvVar7 = DAT_005a7b78;
    if (iVar5 == 0) {
      FUN_00404ab0(pvVar3,0xe);
      return 0;
    }
    FUN_0040adb0(DAT_005a7b78,&uStack_1c);
    iVar5 = FUN_004026a0(&uStack_1c,(uint *)&fStack_24,&uStack_34,&fStack_20);
    pvVar3 = DAT_005a7b78;
    if (iVar5 != 0) {
      FUN_0040adb0(DAT_005a7b78,&uStack_1c);
      iVar5 = FUN_004026a0(&uStack_1c,(uint *)&fStack_24,(uint *)&param_1,&fStack_20);
      pvVar7 = pvVar3;
      if (iVar5 != 0) {
        *piVar6 = (int)param_1;
        piVar6[1] = uStack_34;
        piVar6[2] = uStack_30;
        piVar6[3] = uStack_2c;
        piVar6[4] = uStack_28;
        if (*(int **)((int)this + 0x58) != (int *)0x0) {
          iVar5 = ((undefined4 (__thiscall *)(void *, __typeof__(auStack_14)))(**(code **)(**(int **)((int)this + 0x58) + 0x40)))(*(void **)((int)this + 0x58), auStack_14); /* HAND v76: Ghidra dropped `this` (ECX = this->+0x58), auStack_14 is the 1 stack arg */
          if (iVar5 != 0) {
            iVar5 = -4 - (int)piVar6;
            iVar4 = 5;
            do {
              *piVar6 = *piVar6 + *(int *)(auStack_14 + iVar5 + (int)piVar6);
              piVar6 = piVar6 + 1;
              iVar4 = iVar4 + -1;
            } while (iVar4 != 0);
          }
        }
        return 1;
      }
    }
    *(undefined4 *)((int)pvVar7 + 0x90) = 0xe;
    FUN_004d4550(pvVar7);
    *(undefined4 *)((int)pvVar7 + 0x90) = 0;
    *(undefined4 *)((int)pvVar7 + 0xa4) = 0;
  }
  return 0;
#undef uStack_34
#undef uStack_30
#undef uStack_2c
#undef uStack_28
#undef fStack_24
#undef fStack_20
#undef uStack_1c
#undef iStack_18
#undef auStack_14
}
