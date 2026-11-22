/* Rebuilt from lomse.exe FUN_00448a60 @ 0x00448a60 (515 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005a7b78 (*(void * *)0x005a7b78)
#define DAT_005a7cf4 (*(uint *)0x005a7cf4)
#define DAT_005a7cf8 (*(int * *)0x005a7cf8)
#define DAT_005cd2f0 (*(int *)0x005cd2f0)
#define DAT_005cd2f4 (*(int *)0x005cd2f4)
#define FUN_0044bdd0 ((undefined4 (__thiscall *)(void *, undefined4))0x0044bdd0)
#define FUN_004d09a0 ((undefined4 (__thiscall *)(void *, uint, int *, int))0x004d09a0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define FUN_00522000 ((undefined4 (__thiscall *)(void *, int *, int *))0x00522000)
#define FUN_00527e90 ((undefined4 (__thiscall *)(void *, int, int *))0x00527e90)
#define FUN_00528320 ((undefined4 (__thiscall *)(void *, int))0x00528320)
#define FUN_00529180 ((uint (__fastcall *)(int *))0x00529180)
#define FUN_0052b090 ((undefined4 (__thiscall *)(void *, int, int))0x0052b090)
#define FUN_0052b0e0 ((undefined4 (__thiscall *)(void *, int))0x0052b0e0)

#define LOM_SELF_00448a60 1
void __fastcall rb_00448a60(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  int iVar5;
  uchar _fr[0x20] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_14;
  typedef int _t_local_10;
  typedef int _t_local_c;
  typedef int _t_local_8;
  typedef int _t_local_4;
#define local_14 (*(_t_local_14 *)(_fr + 0x4))
#define local_10 (*(_t_local_10 *)(_fr + 0x8))
#define local_c (*(_t_local_c *)(_fr + 0xc))
#define local_8 (*(_t_local_8 *)(_fr + 0x10))
#define local_4 (*(_t_local_4 *)(_fr + 0x14))
  
  iVar2 = *(int *)(param_1 + 0x48);
  if ((iVar2 != 0) && (local_10 = 0, 0 < *(int *)(iVar2 + 0x4c))) {
    iVar5 = 0;
    do {
      iVar3 = *(int *)(iVar5 + 0xc4 + iVar2);
      if (((iVar3 < 0) || (DAT_005cd2f0 <= iVar3)) || (DAT_005cd2f4 == 0)) {
        iVar3 = 0;
      }
      else {
        iVar3 = DAT_005cd2f4 + iVar3 * 1000;
      }
      if (((iVar3 != 0) && (*(int *)(iVar3 + 0x1c) == 5)) &&
         (iVar2 = FUN_0052b0e0((void *)(iVar5 + 0xc4 + iVar2),5), iVar2 == 0)) {
        local_c = 0;
        FUN_00527e90((void *)(iVar5 + 0xc4 + *(int *)(param_1 + 0x48)),0x2e,&local_c);
        *(int *)(iVar5 + 0xd0 + *(int *)(param_1 + 0x48)) = local_c;
        FUN_00522000((void *)(iVar5 + 0xc4 + *(int *)(param_1 + 0x48)),&local_4,&local_8);
        if ((0 < local_8 - local_4) &&
           (iVar2 = FUN_00528320((void *)(iVar5 + 0xc4 + *(int *)(param_1 + 0x48)),local_8 - local_4
                                ), pvVar4 = DAT_005a7b78, iVar2 != 0)) {
          uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x48) + 0x28);
          if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
            *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
            FUN_004d4550(pvVar4);
            *(undefined4 *)((int)pvVar4 + 0x90) = 0;
            *(undefined4 *)((int)pvVar4 + 0xa4) = 0;
          }
          else {
            iVar3 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
            *(int *)((int)DAT_005a7b78 + 0x54) = iVar3;
            iVar2 = *(int *)((int)pvVar4 + 0x50);
            *(undefined4 *)(iVar2 + iVar3 * 8) = 1;
            *(undefined4 *)(iVar2 + 4 + iVar3 * 8) = uVar1;
          }
          pvVar4 = DAT_005a7b78;
          if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
            *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
            FUN_004d4550(pvVar4);
            *(undefined4 *)((int)pvVar4 + 0x90) = 0;
            *(undefined4 *)((int)pvVar4 + 0xa4) = 0;
          }
          else {
            iVar2 = *(int *)((int)DAT_005a7b78 + 0x50);
            iVar3 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
            *(int *)((int)DAT_005a7b78 + 0x54) = iVar3;
            *(undefined4 *)(iVar2 + iVar3 * 8) = 1;
            *(int *)(iVar2 + 4 + iVar3 * 8) = local_10;
          }
          FUN_004d09a0(DAT_005a7b78,DAT_005a7cf4,DAT_005a7cf8,-2);
        }
        pvVar4 = (void *)FUN_00529180((int *)(iVar5 + 0xc4 + *(int *)(param_1 + 0x48)));
        if (pvVar4 != (void *)0x0) {
          local_14 = 0;
          FUN_00527e90((void *)(iVar5 + 0xc4 + *(int *)(param_1 + 0x48)),0x48,&local_14);
          if (local_14 < 0) {
            local_14 = 0;
          }
          FUN_0044bdd0(pvVar4,local_14);
        }
        FUN_0052b090((void *)(iVar5 + 0xc4 + *(int *)(param_1 + 0x48)),5,1);
      }
      iVar2 = *(int *)(param_1 + 0x48);
      local_10 = local_10 + 1;
      iVar5 = iVar5 + 0x4c;
    } while (local_10 < *(int *)(iVar2 + 0x4c));
  }
  return;
#undef local_14
#undef local_10
#undef local_c
#undef local_8
#undef local_4
}
