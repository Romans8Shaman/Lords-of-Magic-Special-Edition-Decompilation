/* Rebuilt from lomse.exe FUN_004473e0 @ 0x004473e0 (729 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005a7b78 (*(void * *)0x005a7b78)
#define DAT_005a7cf4 (*(uint *)0x005a7cf4)
#define DAT_005a7cf8 (*(int * *)0x005a7cf8)
#define DAT_005aa188 (*(undefined *)0x005aa188)
#define DAT_005aa18c (*(int * *)0x005aa18c)
#define DAT_005cd2f0 (*(int *)0x005cd2f0)
#define DAT_005cd2f4 (*(int *)0x005cd2f4)
#define FUN_00404ab0 ((undefined4 (__thiscall *)(void *, undefined4))0x00404ab0)
#define FUN_004d05e0 ((undefined4 (__thiscall *)(void *, uint, int *))0x004d05e0)
#define FUN_004d09a0 ((undefined4 (__thiscall *)(void *, uint, int *, int))0x004d09a0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define FUN_00522000 ((undefined4 (__thiscall *)(void *, int *, int *))0x00522000)
#define FUN_00527e90 ((undefined4 (__thiscall *)(void *, int, int *))0x00527e90)
#define FUN_00528320 ((undefined4 (__thiscall *)(void *, int))0x00528320)
#define FUN_0052b090 ((undefined4 (__thiscall *)(void *, int, int))0x0052b090)

#define LOM_SELF_004473e0 1
void __fastcall rb_004473e0(int param_1)

{
  short sVar1;
  undefined4 uVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uchar _fr[0x18] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_10;
  typedef int _t_local_c;
  typedef int _t_local_8;
  typedef int _t_local_4;
#define local_10 (*(_t_local_10 *)(_fr + 0x0))
#define local_c (*(_t_local_c *)(_fr + 0x4))
#define local_8 (*(_t_local_8 *)(_fr + 0x8))
#define local_4 (*(_t_local_4 *)(_fr + 0xc))
  
  iVar4 = *(int *)(param_1 + 0x48);
  if ((iVar4 != 0) && (local_10 = 0, 0 < *(int *)(iVar4 + 0x4c))) {
    iVar6 = 0;
    do {
      iVar5 = *(int *)(iVar6 + 0xc4 + iVar4);
      if (((iVar5 < 0) || (DAT_005cd2f0 <= iVar5)) || (DAT_005cd2f4 == 0)) {
        iVar5 = 0;
      }
      else {
        iVar5 = DAT_005cd2f4 + iVar5 * 1000;
      }
      if (((iVar5 != 0) && (*(int *)(iVar5 + 0x1c) == 0)) && (*(int *)(iVar5 + 0x164) != 8)) {
        local_c = 0;
        FUN_00527e90((void *)(iVar6 + 0xc4 + iVar4),0x2e,&local_c);
        iVar4 = *(int *)(param_1 + 0x48) + iVar6;
        if (local_c <= *(int *)(iVar4 + 0xd0)) {
          FUN_00522000((void *)(iVar4 + 0xc4),&local_4,&local_8);
          iVar4 = local_8 - local_4;
          FUN_0052b090((void *)(iVar6 + 0xc4 + *(int *)(param_1 + 0x48)),0,1);
          if ((0 < iVar4) &&
             (iVar4 = FUN_00528320((void *)(iVar6 + 0xc4 + *(int *)(param_1 + 0x48)),iVar4),
             pvVar3 = DAT_005a7b78, iVar4 != 0)) {
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
              *(int *)(iVar4 + 4 + iVar5 * 8) = local_10;
            }
            FUN_004d09a0(DAT_005a7b78,DAT_005a7cf4,DAT_005a7cf8,-2);
          }
          pvVar3 = DAT_005a7b78;
          if ((char)DAT_005aa188 != '\0') {
            sVar1 = *(short *)(param_1 + 0x56);
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
              *(int *)(iVar4 + 4 + iVar5 * 8) = (int)sVar1;
            }
            pvVar3 = DAT_005a7b78;
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
              *(int *)(iVar4 + 4 + iVar5 * 8) = local_10;
            }
            pvVar3 = DAT_005a7b78;
            if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
              FUN_00404ab0(DAT_005a7b78,3);
            }
            else {
              iVar5 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
              *(int *)((int)DAT_005a7b78 + 0x54) = iVar5;
              iVar4 = *(int *)((int)pvVar3 + 0x50);
              *(undefined4 *)(iVar4 + iVar5 * 8) = 1;
              *(undefined4 *)(iVar4 + 4 + iVar5 * 8) = 0;
            }
            FUN_004d05e0(DAT_005a7b78,(*(uint *)&DAT_005aa188),DAT_005aa18c);
          }
        }
      }
      *(undefined4 *)(iVar6 + 0xd0 + *(int *)(param_1 + 0x48)) = 0;
      iVar4 = *(int *)(param_1 + 0x48);
      local_10 = local_10 + 1;
      iVar6 = iVar6 + 0x4c;
    } while (local_10 < *(int *)(iVar4 + 0x4c));
  }
  return;
#undef local_10
#undef local_c
#undef local_8
#undef local_4
}
