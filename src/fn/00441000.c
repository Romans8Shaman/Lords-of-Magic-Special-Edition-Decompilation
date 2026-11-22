/* Rebuilt from lomse.exe FUN_00441000 @ 0x00441000 (731 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00578f58 (*(uint *)0x00578f58)
#define DAT_00578f5c (*(int * *)0x00578f5c)
#define DAT_005a7b78 (*(void * *)0x005a7b78)
#define FUN_004026a0 ((undefined4 (__cdecl *)(uint *, uint *, uint *, undefined4 *))0x004026a0)
#define FUN_00404ab0 ((undefined4 (__thiscall *)(void *, undefined4))0x00404ab0)
#define FUN_0040adb0 ((undefined4 (__thiscall *)(void *, undefined4 *))0x0040adb0)
#define FUN_004d05e0 ((undefined4 (__thiscall *)(void *, uint, int *))0x004d05e0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define FUN_004fd4b0 ((undefined4 (__stdcall *)(undefined4 *))0x004fd4b0)

#define LOM_SELF_00441000 1
undefined4 __thiscall rb_00441000(void *this, int *volatile param_1)

{
  int *piVar1;
  undefined4 uVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  void *pvVar7;
  uchar _fr[0x40] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef uint _t_local_34;
  typedef uint _t_local_30;
  typedef uint _t_local_2c;
  typedef uint _t_local_28;
  typedef undefined4 _t_local_24;
  typedef undefined4 _t_local_20;
  typedef uint _t_local_1c;
  typedef undefined4 _t_local_18;
  typedef int _t_local_14[5];
#define local_34 (*(_t_local_34 *)(_fr + 0x4))
#define local_30 (*(_t_local_30 *)(_fr + 0x8))
#define local_2c (*(_t_local_2c *)(_fr + 0xc))
#define local_28 (*(_t_local_28 *)(_fr + 0x10))
#define local_24 (*(_t_local_24 *)(_fr + 0x14))
#define local_20 (*(_t_local_20 *)(_fr + 0x18))
#define local_1c (*(_t_local_1c *)(_fr + 0x1c))
#define local_18 (*(_t_local_18 *)(_fr + 0x20))
#define local_14 (*(_t_local_14 *)(_fr + 0x24))
  
  piVar6 = param_1;
  FUN_004fd4b0(param_1);
  pvVar3 = DAT_005a7b78;
  if ((char)DAT_00578f58 == '\x06') {
    if ((DAT_00578f58 & 0x100) != 0) {
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
    FUN_004d05e0(DAT_005a7b78,DAT_00578f58,DAT_00578f5c);
    pvVar3 = DAT_005a7b78;
    if (*(int *)((int)DAT_005a7b78 + 0x54) < *(int *)((int)DAT_005a7b78 + 0x58)) {
      piVar1 = (int *)((int)DAT_005a7b78 + 0x50);
      iVar5 = *(int *)((int)DAT_005a7b78 + 0x54) + 1;
      *(int *)((int)DAT_005a7b78 + 0x54) = iVar5;
      local_1c = *(uint *)(*piVar1 + -8 + iVar5 * 8);
      local_18 = *(undefined4 *)(*piVar1 + -4 + iVar5 * 8);
    }
    else {
      FUN_00404ab0(DAT_005a7b78,6);
      local_1c = 0;
    }
    iVar5 = FUN_004026a0(&local_1c,(uint *)&local_20,&local_28,&local_24);
    pvVar7 = DAT_005a7b78;
    if (iVar5 == 0) {
      FUN_00404ab0(pvVar3,0xe);
      return 0;
    }
    if (*(int *)((int)DAT_005a7b78 + 0x54) < *(int *)((int)DAT_005a7b78 + 0x58)) {
      piVar1 = (int *)((int)DAT_005a7b78 + 0x50);
      iVar5 = *(int *)((int)DAT_005a7b78 + 0x54) + 1;
      *(int *)((int)DAT_005a7b78 + 0x54) = iVar5;
      local_1c = *(uint *)(*piVar1 + -8 + iVar5 * 8);
      local_18 = *(undefined4 *)(*piVar1 + -4 + iVar5 * 8);
    }
    else {
      FUN_00404ab0(DAT_005a7b78,6);
      local_1c = 0;
    }
    iVar5 = FUN_004026a0(&local_1c,(uint *)&local_24,&local_2c,&local_20);
    pvVar3 = DAT_005a7b78;
    if (iVar5 == 0) {
      FUN_00404ab0(pvVar7,0xe);
      return 0;
    }
    if (*(int *)((int)DAT_005a7b78 + 0x54) < *(int *)((int)DAT_005a7b78 + 0x58)) {
      piVar1 = (int *)((int)DAT_005a7b78 + 0x50);
      iVar5 = *(int *)((int)DAT_005a7b78 + 0x54) + 1;
      *(int *)((int)DAT_005a7b78 + 0x54) = iVar5;
      local_1c = *(uint *)(*piVar1 + -8 + iVar5 * 8);
      local_18 = *(undefined4 *)(*piVar1 + -4 + iVar5 * 8);
    }
    else {
      FUN_00404ab0(DAT_005a7b78,6);
      local_1c = 0;
    }
    iVar5 = FUN_004026a0(&local_1c,(uint *)&local_24,&local_30,&local_20);
    pvVar7 = DAT_005a7b78;
    if (iVar5 == 0) {
      FUN_00404ab0(pvVar3,0xe);
      return 0;
    }
    FUN_0040adb0(DAT_005a7b78,&local_1c);
    iVar5 = FUN_004026a0(&local_1c,(uint *)&local_24,&local_34,&local_20);
    pvVar3 = DAT_005a7b78;
    if (iVar5 != 0) {
      FUN_0040adb0(DAT_005a7b78,&local_1c);
      iVar5 = FUN_004026a0(&local_1c,(uint *)&local_24,(uint *)&param_1,&local_20);
      pvVar7 = pvVar3;
      if (iVar5 != 0) {
        *piVar6 = (int)param_1;
        piVar6[1] = local_34;
        piVar6[2] = local_30;
        piVar6[3] = local_2c;
        piVar6[4] = local_28;
        piVar1 = *(int **)((int)this + 0x48);
        if (piVar1 != (int *)0x0) {
          iVar5 = ((undefined4 (__thiscall *)(__typeof__(piVar1), __typeof__(local_14)))(**(code **)(*piVar1 + 0x40)))(piVar1,local_14);
          if (iVar5 != 0) {
            iVar5 = (int)local_14 - (int)piVar6;
            iVar4 = 5;
            do {
              *piVar6 = *piVar6 + *(int *)(iVar5 + (int)piVar6);
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
#undef local_34
#undef local_30
#undef local_2c
#undef local_28
#undef local_24
#undef local_20
#undef local_1c
#undef local_18
#undef local_14
}
