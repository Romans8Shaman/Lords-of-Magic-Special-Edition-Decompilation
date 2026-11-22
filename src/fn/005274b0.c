/* Rebuilt from lomse.exe FUN_005274b0 @ 0x005274b0 (814 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005a7d8c (*(int *)0x005a7d8c)
#define DAT_005a8078 (*(undefined4 *)0x005a8078)
#define DAT_005aa78c (*(undefined4 *)0x005aa78c)
#define DAT_005aa7d4 (*(int *)0x005aa7d4)
#define DAT_005aad68 (*(undefined4 *)0x005aad68)
#define DAT_005aadb0 (*(int *)0x005aadb0)
#define DAT_005ae974 (*(undefined4 *)0x005ae974)
#define FUN_00415430 ((int (__fastcall *)(int))0x00415430)
#define FUN_004154a0 ((int (__fastcall *)(int))0x004154a0)
#define FUN_0044b490 ((undefined4 (__fastcall *)(undefined4 *))0x0044b490)
#define FUN_0044b4e0 ((undefined4 (__fastcall *)(undefined4 *))0x0044b4e0)
#define FUN_0044b4f0 ((undefined4 (__cdecl *)(undefined4))0x0044b4f0)
#define FUN_0044c0c0 ((undefined4 * (__stdcall *)(int, int *))0x0044c0c0)
#define FUN_004e7ea0 ((undefined4 (__fastcall *)(int))0x004e7ea0)
#define FUN_004fbe60 ((undefined4 (__thiscall *)(void *, int, int))0x004fbe60)
#define FUN_00521e00 ((int (__fastcall *)(int *))0x00521e00)

#define LOM_SELF_005274b0 1
undefined4 __thiscall rb_005274b0(void *this,undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  uchar _fr[0x30] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_24;
  typedef undefined4 _t_local_20[2];
  typedef undefined4 _t_local_18;
  typedef undefined4 _t_local_10;
#define local_24 (*(_t_local_24 *)(_fr + 0x4))
#define local_20 (*(_t_local_20 *)(_fr + 0x8))
#define local_18 (*(_t_local_18 *)(_fr + 0x10))
#define local_10 (*(_t_local_10 *)(_fr + 0x18))

  puVar7 = *(undefined4 **)this;
  *(uint *)((int)this + 0x24) = *(uint *)((int)this + 0x24) | 8;
  *(undefined4 *)((int)this + 0x48) = 0xffffffff;
  if (param_1 != puVar7) {
    iVar1 = FUN_00521e00(this);
    if (iVar1 == 0) {
      return 0;
    }
    *(undefined4 **)this = param_1;
    iVar2 = FUN_00521e00(this);
    if (iVar2 == 0) {
      *(undefined4 **)this = puVar7;
      return 0;
    }
    if ((*(int *)(iVar2 + 0x20) != *(int *)(iVar1 + 0x20)) ||
       (*(int *)(iVar2 + 0x120) != *(int *)(iVar1 + 0x120))) {
      FUN_0044b490(local_20);
      iVar5 = *(int *)((int)this + 0x14);
      if (iVar5 == 0) {
        local_10 = 0xffffffff;
        local_18 = 0;
      }
      else {
        local_10 = *(undefined4 *)(iVar5 + 0x10);
        local_18 = *(undefined4 *)(iVar5 + 8);
      }
      if ((1 < *(int *)(iVar1 + 0x120)) && ((&DAT_005a8078)[DAT_005a7d8c * 0x100] == 3)) {
        puVar3 = FUN_0044c0c0(*(int *)((int)this + 0x20),&local_24);
        if (puVar3 == (undefined4 *)0x0) {
LAB_005276d9:
          *(undefined4 **)this = puVar7;
          FUN_0044b4e0(local_20);
          return 0;
        }
        if (puVar3[0x12] == DAT_005aa7d4) {
          puVar8 = &DAT_005aa78c;
          param_1 = &DAT_005aa78c;
        }
        else {
          if (puVar3[0x12] != DAT_005aadb0) goto LAB_005276d9;
          param_1 = &DAT_005aad68;
          puVar8 = &DAT_005aad68;
        }
        if ((*(char *)(puVar3 + 0x16b) < '\0') ||
           ((int)puVar8[0x13] <= (int)*(char *)(puVar3 + 0x16b))) goto LAB_005276d9;
        puVar4 = (undefined4 *)FUN_004fbe60(&DAT_005ae974,0,0);
        if (puVar4 != (undefined4 *)0x0) {
          do {
            if (((puVar4 != puVar3) && (puVar4[0x12] == puVar3[0x12])) &&
               (*(char *)(puVar4 + 0x16b) == *(char *)(puVar3 + 0x16b))) break;
            puVar4 = (undefined4 *)FUN_004fbe60(&DAT_005ae974,(int)puVar4,0);
          } while (puVar4 != (undefined4 *)0x0);
          if (puVar4 != (undefined4 *)0x0) {
            iVar5 = FUN_004154a0((int)puVar8);
            iVar6 = FUN_00415430((int)puVar8);
            iVar1 = puVar8[0x13];
            if ((8 < (iVar1 - iVar5) - iVar6) || (0xe < iVar1)) {
              *(undefined4 **)this = puVar7;
              FUN_0044b4e0(local_20);
              return 0;
            }
            puVar7 = this;
            puVar8 = puVar8 + iVar1 * 0x13 + 0x31;
            for (iVar5 = 0x13; iVar5 != 0; iVar5 = iVar5 + -1) {
              *puVar8 = *puVar7;
              puVar7 = puVar7 + 1;
              puVar8 = puVar8 + 1;
            }
            *(undefined1 *)(puVar3 + 0x16b) = *(undefined1 *)(param_1 + 0x13);
            param_1[0x13] = param_1[0x13] + 1;
            *(int *)((int)this + 0x20) = *(int *)((int)this + 0x20) + puVar3[10] + 100000;
            *(uint *)((int)this + 0x24) = *(uint *)((int)this + 0x24) | 0x100;
          }
        }
      }
      if (*(int *)(iVar2 + 0x20) < 0) {
        if (((1 < *(int *)(iVar2 + 0x120)) && ((&DAT_005a8078)[DAT_005a7d8c * 0x100] != 3)) &&
           (puVar7 = *(undefined4 **)((int)this + 0x14), puVar7 != (undefined4 *)0x0)) {
          ((undefined4 (__thiscall *)(__typeof__(puVar7), __typeof__(1)))(**(code **)*puVar7))(puVar7,1);
          iVar1 = FUN_0044b4f0(3);
          *(int *)((int)this + 0x14) = iVar1;
          *(undefined4 *)(iVar1 + 0x44) = 1;
          iVar2 = 0;
          puVar7 = (undefined4 *)(iVar1 + 0x2c);
          do {
            iVar2 = iVar2 + 1;
            puVar7[-6] = *(undefined4 *)((int)this + 4);
            *puVar7 = 0;
            puVar7 = puVar7 + 1;
          } while (iVar2 < *(int *)(iVar1 + 0x44));
        }
      }
      else {
        puVar7 = *(undefined4 **)((int)this + 0x14);
        if (puVar7 != (undefined4 *)0x0) {
          ((undefined4 (__thiscall *)(__typeof__(puVar7), __typeof__(1)))(**(code **)*puVar7))(puVar7,1);
          iVar1 = FUN_0044b4f0(*(undefined4 *)(iVar2 + 0x20));
          *(int *)((int)this + 0x14) = iVar1;
          if (iVar1 != 0) {
            *(undefined4 *)(iVar1 + 0x10) = local_10;
            *(undefined4 *)(*(int *)((int)this + 0x14) + 8) = local_18;
          }
          if ((&DAT_005a8078)[DAT_005a7d8c * 0x100] == 3) {
            FUN_004e7ea0(0x5aa78c);
            FUN_004e7ea0(0x5aad68);
          }
        }
      }
      FUN_0044b4e0(local_20);
    }
  }
  return 1;
#undef local_24
#undef local_20
#undef local_18
#undef local_10
}
