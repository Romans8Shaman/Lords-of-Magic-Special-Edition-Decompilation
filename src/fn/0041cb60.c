/* Rebuilt from lomse.exe FUN_0041cb60 @ 0x0041cb60 (653 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005a7d8c (*(int *)0x005a7d8c)
#define DAT_005a8078 (*(undefined4 *)0x005a8078)
#define DAT_005aee6c (*(undefined4 *)0x005aee6c)
#define DAT_005af194 (*(undefined *)0x005af194)
#define FUN_004287c0 ((undefined4 (__thiscall *)(void *, int))0x004287c0)
#define FUN_004beef0 ((undefined4 (__thiscall *)(void *, int))0x004beef0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define FUN_004efe80 ((int (__thiscall *)(void *, int))0x004efe80)
#define FUN_00521e00 ((int (__fastcall *)(int *))0x00521e00)
#define FUN_00525fc0 ((undefined4 (__fastcall *)(int *))0x00525fc0)

#define LOM_SELF_0041cb60 1
void __thiscall rb_0041cb60(void *this,void *param_1,uint param_2)

{
  int *this_00;
  undefined4 uVar1;
  byte bVar2;
  bool bVar3;
  void *pvVar4;
  uint uVar5;
  int iVar6;
  byte *pbVar7;
  int iVar8;
  uint uVar9;
  uchar _fr[0x18] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef undefined * _t_local_10;
  typedef int _t_local_c;
#define local_10 (*(_t_local_10 *)(_fr + 0x0))
#define local_c (*(_t_local_c *)(_fr + 0x4))
  
  uVar5 = param_2;
  pvVar4 = param_1;
  iVar8 = *(int *)((int)this + 0x4c);
  iVar6 = 0;
  local_c = 0;
  if (iVar8 == 1) {
    param_2 = 0;
    iVar6 = 1;
  }
  else {
    uVar9 = 0;
    if (0 < iVar8) {
      do {
        if ((uVar5 & 1 << ((byte)uVar9 & 0x1f)) != 0) {
          iVar6 = iVar6 + 1;
          param_2 = uVar9;
        }
        uVar9 = uVar9 + 1;
      } while ((int)uVar9 < iVar8);
    }
  }
  if (iVar6 == 1) {
    iVar8 = *(int *)((int)this + 0x48);
    if ((iVar8 < 0) || (0xf < iVar8)) {
      local_10 = (undefined *)0x0;
    }
    else {
      local_10 = &DAT_005af194 + iVar8 * 0x1d84;
    }
    if (local_10 == (undefined *)0x0) {
      if (*(int *)((int)param_1 + 0x54) != 0) {
        iVar6 = *(int *)((int)param_1 + 0x54) + -1;
        *(int *)((int)param_1 + 0x54) = iVar6;
        iVar8 = *(int *)((int)param_1 + 0x50);
        *(undefined4 *)(iVar8 + iVar6 * 8) = 1;
        *(undefined4 *)(iVar8 + 4 + iVar6 * 8) = 0;
        return;
      }
      goto LAB_0041cdc6;
    }
    param_1 = (void *)0x0;
    if (0 < (int)DAT_005aee6c) {
      do {
        pbVar7 = (byte *)FUN_004efe80(&DAT_005aee6c,(int)param_1);
        if ((pbVar7 != (byte *)0x0) &&
           (iVar8 = FUN_004beef0(local_10 + 0x34,*(int *)(pbVar7 + 0x48)), iVar8 == 1)) {
          bVar3 = false;
          this_00 = (int *)((int)this + param_2 * 0x4c + 0xc4);
          if (this_00 != (int *)0x0) {
            if ((&DAT_005a8078)[DAT_005a7d8c * 0x100] == 3) {
              bVar2 = *pbVar7 & 1;
            }
            else {
              if ((this_00 == (int *)0x0) || ((&DAT_005a8078)[DAT_005a7d8c * 0x100] != 2))
              goto LAB_0041cca6;
              bVar2 = *pbVar7 & 2;
            }
            if (bVar2 != 0) {
              bVar3 = true;
            }
          }
LAB_0041cca6:
          iVar8 = FUN_00521e00(this_00);
          if (bVar3) {
            bVar3 = false;
            iVar6 = FUN_00525fc0(this_00);
            if (((iVar6 == 0) && (*(int *)(pbVar7 + 0x38) <= *(int *)(this_00[5] + 0xc))) &&
               (((iVar8 != 0 && (*(int *)(iVar8 + 0x1c) == *(int *)(pbVar7 + 8))) ||
                (iVar8 = FUN_004287c0(this_00,(int)param_1), iVar8 != 0)))) {
              bVar3 = true;
            }
            if (bVar3) {
              if (*(int *)((int)pvVar4 + 0x54) == 0) {
                *(undefined4 *)((int)pvVar4 + 0x90) = 3;
                FUN_004d4550(pvVar4);
                *(undefined4 *)((int)pvVar4 + 0x90) = 0;
                *(undefined4 *)((int)pvVar4 + 0xa4) = 0;
              }
              else {
                iVar8 = *(int *)((int)pvVar4 + 0x50);
                iVar6 = *(int *)((int)pvVar4 + 0x54) + -1;
                *(int *)((int)pvVar4 + 0x54) = iVar6;
                *(undefined4 *)(iVar8 + iVar6 * 8) = 1;
                *(void **)(iVar8 + 4 + iVar6 * 8) = param_1;
              }
              uVar1 = *(undefined4 *)(pbVar7 + 0x3c);
              if (*(int *)((int)pvVar4 + 0x54) == 0) {
                *(undefined4 *)((int)pvVar4 + 0x90) = 3;
                FUN_004d4550(pvVar4);
                *(undefined4 *)((int)pvVar4 + 0x90) = 0;
                *(undefined4 *)((int)pvVar4 + 0xa4) = 0;
              }
              else {
                iVar8 = *(int *)((int)pvVar4 + 0x50);
                iVar6 = *(int *)((int)pvVar4 + 0x54) + -1;
                *(int *)((int)pvVar4 + 0x54) = iVar6;
                *(undefined4 *)(iVar8 + iVar6 * 8) = 1;
                *(undefined4 *)(iVar8 + 4 + iVar6 * 8) = uVar1;
              }
              local_c = local_c + 1;
            }
          }
        }
        param_1 = (void *)((int)param_1 + 1);
      } while ((int)param_1 < (int)DAT_005aee6c);
    }
  }
  if (*(int *)((int)pvVar4 + 0x54) != 0) {
    iVar8 = *(int *)((int)pvVar4 + 0x50);
    iVar6 = *(int *)((int)pvVar4 + 0x54) + -1;
    *(int *)((int)pvVar4 + 0x54) = iVar6;
    *(undefined4 *)(iVar8 + iVar6 * 8) = 1;
    *(int *)(iVar8 + 4 + iVar6 * 8) = local_c;
    return;
  }
LAB_0041cdc6:
  *(undefined4 *)((int)pvVar4 + 0x90) = 3;
  FUN_004d4550(pvVar4);
  *(undefined4 *)((int)pvVar4 + 0x90) = 0;
  *(undefined4 *)((int)pvVar4 + 0xa4) = 0;
  return;
#undef local_10
#undef local_c
}
