/* Rebuilt from lomse.exe FUN_004485c0 @ 0x004485c0 (687 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005a7b78 (*(void * *)0x005a7b78)
#define DAT_005a7d84 (*(uint *)0x005a7d84)
#define DAT_005a7d88 (*(int * *)0x005a7d88)
#define DAT_005cd2f0 (*(int *)0x005cd2f0)
#define DAT_005cd2f4 (*(int *)0x005cd2f4)
#define FUN_004d09a0 ((undefined4 (__thiscall *)(void *, uint, int *, int))0x004d09a0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define FUN_00504f00 ((int (__cdecl *)(int, int))0x00504f00)
#define FUN_00521fc0 ((int (__fastcall *)(int *))0x00521fc0)
#define FUN_00522000 ((undefined4 (__thiscall *)(void *, int *, int *))0x00522000)
#define FUN_00527d00 ((undefined4 (__thiscall *)(void *, undefined4, undefined4 *))0x00527d00)
#define FUN_0052b090 ((undefined4 (__thiscall *)(void *, int, int))0x0052b090)
#define FUN_0052b0e0 ((undefined4 (__thiscall *)(void *, int))0x0052b0e0)

#define LOM_SELF_004485c0 1
void __fastcall rb_004485c0(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uchar _fr[0x20] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_14;
  typedef int _t_local_10;
  typedef int _t_local_c[2];
  typedef undefined4 _t_local_4;
#define local_14 (*(_t_local_14 *)(_fr + 0x4))
#define local_10 (*(_t_local_10 *)(_fr + 0x8))
#define local_c (*(_t_local_c *)(_fr + 0xc))
#define local_4 (*(_t_local_4 *)(_fr + 0x14))
  
  iVar4 = *(int *)(param_1 + 0x48);
  if ((iVar4 != 0) && (local_14 = 0, 0 < *(int *)(iVar4 + 0x4c))) {
    iVar7 = 0;
    do {
      iVar5 = *(int *)(iVar7 + 0xc4 + iVar4);
      if (((iVar5 < 0) || (DAT_005cd2f0 <= iVar5)) || (DAT_005cd2f4 == 0)) {
        iVar5 = 0;
      }
      else {
        iVar5 = DAT_005cd2f4 + iVar5 * 1000;
      }
      if (((((iVar5 != 0) && (*(int *)(iVar5 + 0x1c) == 3)) &&
           ((iVar5 = *(int *)(iVar5 + 0x164), iVar5 == 1 || ((iVar5 == 0 || (iVar5 == 2)))))) &&
          (iVar4 = FUN_00521fc0((int *)(iVar7 + 0xc4 + iVar4)), 0x14 < iVar4)) &&
         (iVar4 = FUN_0052b0e0((void *)(iVar7 + 0xc4 + *(int *)(param_1 + 0x48)),3), iVar4 == 0)) {
        FUN_0052b090((void *)(iVar7 + 0xc4 + *(int *)(param_1 + 0x48)),3,1);
        *(int *)(iVar7 + 0xd4 + *(int *)(param_1 + 0x48)) =
             *(int *)(iVar7 + 0xd4 + *(int *)(param_1 + 0x48)) + 0x28a00;
        FUN_00522000((void *)(iVar7 + 0xc4 + *(int *)(param_1 + 0x48)),&local_10,local_c);
        iVar4 = FUN_00504f00(0xc,0x14);
        FUN_00527d00((void *)(iVar7 + 0xc4 + *(int *)(param_1 + 0x48)),0x98,
                     (undefined4 *)(local_10 - iVar4));
        pvVar3 = DAT_005a7b78;
        if (DAT_005a7d84 != 0) {
          uVar2 = *(undefined4 *)(*(int *)(param_1 + 0x48) + 0x28);
          if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
            *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
            FUN_004d4550(pvVar3);
            *(undefined4 *)((int)pvVar3 + 0x90) = 0;
            *(undefined4 *)((int)pvVar3 + 0xa4) = 0;
          }
          else {
            iVar5 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
            *(int *)((int)DAT_005a7b78 + 0x54) = iVar5;
            iVar4 = *(int *)((int)pvVar3 + 0x50);
            *(undefined4 *)(iVar4 + iVar5 * 8) = 1;
            *(undefined4 *)(iVar4 + 4 + iVar5 * 8) = uVar2;
          }
          pvVar3 = DAT_005a7b78;
          if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
            *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
            FUN_004d4550(pvVar3);
            *(undefined4 *)((int)pvVar3 + 0x90) = 0;
            *(undefined4 *)((int)pvVar3 + 0xa4) = 0;
          }
          else {
            iVar4 = *(int *)((int)DAT_005a7b78 + 0x50);
            iVar5 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
            *(int *)((int)DAT_005a7b78 + 0x54) = iVar5;
            *(undefined4 *)(iVar4 + iVar5 * 8) = 1;
            *(int *)(iVar4 + 4 + iVar5 * 8) = local_14;
          }
          pvVar3 = DAT_005a7b78;
          if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
            *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
            FUN_004d4550(pvVar3);
            *(undefined4 *)((int)pvVar3 + 0x90) = 0;
            *(undefined4 *)((int)pvVar3 + 0xa4) = 0;
          }
          else {
            iVar5 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
            *(int *)((int)DAT_005a7b78 + 0x54) = iVar5;
            iVar4 = *(int *)((int)pvVar3 + 0x50);
            *(undefined4 *)(iVar4 + iVar5 * 8) = 1;
            *(undefined4 *)(iVar4 + 4 + iVar5 * 8) = 3;
          }
          FUN_004d09a0(DAT_005a7b78,DAT_005a7d84,DAT_005a7d88,-2);
          pvVar3 = DAT_005a7b78;
          if (*(int *)((int)DAT_005a7b78 + 0x54) < *(int *)((int)DAT_005a7b78 + 0x58)) {
            piVar1 = (int *)((int)DAT_005a7b78 + 0x50);
            iVar4 = *(int *)((int)DAT_005a7b78 + 0x54) + 1;
            *(int *)((int)DAT_005a7b78 + 0x54) = iVar4;
            uVar6 = *(uint *)(*piVar1 + -8 + iVar4 * 8);
            local_4 = *(undefined4 *)(*piVar1 + -4 + iVar4 * 8);
          }
          else {
            *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 6;
            FUN_004d4550(pvVar3);
            *(undefined4 *)((int)pvVar3 + 0x90) = 0;
            *(undefined4 *)((int)pvVar3 + 0xa4) = 0;
            uVar6 = 0;
          }
          uVar6 = uVar6 & 0xff;
          if (((uVar6 != 1) && (uVar6 != 2)) && (uVar6 != 4)) {
            *(undefined4 *)((int)pvVar3 + 0x90) = 0xe;
            FUN_004d4550(pvVar3);
            *(undefined4 *)((int)pvVar3 + 0x90) = 0;
            *(undefined4 *)((int)pvVar3 + 0xa4) = 0;
          }
        }
      }
      local_14 = local_14 + 1;
      *(undefined4 *)(iVar7 + 0xd0 + *(int *)(param_1 + 0x48)) = 0;
      iVar4 = *(int *)(param_1 + 0x48);
      iVar7 = iVar7 + 0x4c;
    } while (local_14 < *(int *)(iVar4 + 0x4c));
  }
  return;
#undef local_14
#undef local_10
#undef local_c
#undef local_4
}
