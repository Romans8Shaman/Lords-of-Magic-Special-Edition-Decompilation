/* Rebuilt from lomse.exe FUN_00507b60 @ 0x00507b60 (1324 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005a7b78 (*(void * *)0x005a7b78)
#define DAT_005a7cdc (*(uint *)0x005a7cdc)
#define DAT_005a7ce0 (*(int * *)0x005a7ce0)
#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define DAT_005ae974 (*(undefined4 *)0x005ae974)
#define DAT_005aee70 (*(int *)0x005aee70)
#define FUN_00482ac0 ((uint (__thiscall *)(void *, int, int))0x00482ac0)
#define FUN_00485080 ((undefined4 * (__thiscall *)(void *, int, byte))0x00485080)
#define FUN_0049f320 ((undefined4 (__thiscall *)(void *, int, int, int))0x0049f320)
#define FUN_004bcb60 ((undefined4 (__thiscall *)(void *, int))0x004bcb60)
#define FUN_004bcb90 ((undefined4 (__thiscall *)(void *, int))0x004bcb90)
#define FUN_004beef0 ((undefined4 (__thiscall *)(void *, int))0x004beef0)
#define FUN_004bef40 ((undefined4 (__thiscall *)(void *, int))0x004bef40)
#define FUN_004d05e0 ((undefined4 (__thiscall *)(void *, uint, int *))0x004d05e0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define FUN_004fbed0 ((undefined4 * (__thiscall *)(void *, int))0x004fbed0)
#define FUN_00507b00 ((undefined4 (__thiscall *)(void *, int))0x00507b00)

#define LOM_SELF_00507b60 1
undefined4 __thiscall rb_00507b60(void *this,int *param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  void *pvVar4;
  undefined4 *puVar5;
  int *this_00;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uchar _fr[0x30] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef void * _t_pvStack_24;
  typedef void * _t_local_1c;
  typedef int _t_local_14;
  typedef byte * _t_pbStack_10;
  typedef int _t_iStack_c;
#define pvStack_24 (*(_t_pvStack_24 *)(_fr + 0x4))
#define local_1c (*(_t_local_1c *)(_fr + 0xc))
#define local_14 (*(_t_local_14 *)(_fr + 0x14))
#define pbStack_10 (*(_t_pbStack_10 *)(_fr + 0x18))
#define iStack_c (*(_t_iStack_c *)(_fr + 0x1c))
  
  iVar1 = param_1[3];
  if (iVar1 == 1) {
    if (param_1[4] == 4) {
      puVar5 = FUN_00485080(&DAT_005aa12c,*param_1,0x2f);
      if (puVar5 != (undefined4 *)0x0) {
        FUN_00507b00(puVar5,param_1[1]);
      }
      this_00 = (int *)FUN_00482ac0(this,param_1[1],3);
      FUN_00485080(this,param_1[1],0x2f);
      iVar1 = DAT_005aee70;
      if (this_00 != (int *)0x0) {
        iVar6 = puVar5[0x12];
        if ((iVar6 < 0) || (0xf < iVar6)) {
          local_1c = (void *)0x0;
        }
        else {
          local_1c = (void *)((int)this + iVar6 * 0x1d84 + 0x5068);
        }
        iVar6 = ((undefined4 (__thiscall *)(__typeof__(this_00)))(**(code **)(*this_00 + 0x3c)))(this_00);
        if ((iVar6 < 0) || (0xf < iVar6)) {
          pvStack_24 = (void *)0x0;
        }
        else {
          pvStack_24 = (void *)((int)this + iVar6 * 0x1d84 + 0x5068);
        }
        if ((local_1c != (void *)0x0) && (pvStack_24 != (void *)0x0)) {
          iVar6 = ((undefined4 (__thiscall *)(__typeof__(this_00)))(**(code **)(*this_00 + 0x3c)))(this_00);
          FUN_004bcb90(local_1c,iVar6);
          FUN_004bcb90(pvStack_24,puVar5[0x12]);
          iVar6 = ((undefined4 (__thiscall *)(__typeof__(this_00)))(**(code **)(*this_00 + 0x3c)))(this_00);
          if ((iVar6 < 0) || (0xf < iVar6)) {
            iVar6 = 0;
          }
          else {
            iVar6 = (int)local_1c + iVar6 * 0x88 + 0xd28;
          }
          if (iVar6 != 0) {
            iVar11 = 0;
            if (0 < iVar1) {
              do {
                iVar7 = FUN_004beef0((void *)((int)pvStack_24 + 0x34),iVar11);
                if (iVar7 != 0) {
                  iVar7 = FUN_004beef0((void *)(iVar6 + 0x7c),iVar11);
                  if (iVar7 == 0) {
                    FUN_004bef40((void *)(iVar6 + 0x7c),iVar11);
                  }
                }
                iVar11 = iVar11 + 1;
              } while (iVar11 < iVar1);
            }
            iVar11 = 0;
            do {
              FUN_0049f320((void *)(iVar6 + 0x18),iVar11,100,100);
              iVar11 = iVar11 + 1;
            } while (iVar11 < 5);
            *(undefined4 *)(iVar6 + 0x78) = 0;
          }
          puVar8 = FUN_004fbed0(&DAT_005ae974,0);
          while (puVar3 = puVar8, puVar3 != (undefined4 *)0x0) {
            puVar8 = FUN_004fbed0(&DAT_005ae974,(int)puVar3);
            iVar6 = 0;
            if (0 < (int)puVar5[0x13]) {
              pbStack_10 = (byte *)(puVar3 + 0x38);
              do {
                for (iVar11 = *(int *)pbStack_10; iVar11 != 0; iVar11 = *(int *)(iVar11 + 0x14)) {
                  uVar12 = 1 << ((char)puVar5[0x12] + 8U & 0x1f);
                  uVar9 = ((undefined4 (__thiscall *)(__typeof__(this_00)))(**(code **)(*this_00 + 0x3c)))(this_00);
                  uVar2 = *(uint *)(iVar11 + 0x10);
                  if (((uVar2 & 1 << ((char)uVar9 + 8U & 0x1f)) != 0) && ((uVar2 & uVar12) == 0)) {
                    *(uint *)(iVar11 + 0x10) = uVar12 | uVar2;
                  }
                }
                iVar6 = iVar6 + 1;
                pbStack_10 = (byte *)((int)pbStack_10 + 0x4c);
              } while (iVar6 < (int)puVar5[0x13]);
            }
          }
          iVar6 = 0;
          pbStack_10 = (byte *)((int)this + 0x6640);
          iStack_c = (int)pvStack_24 + 0xd28;
          do {
            if ((((iVar6 != puVar5[0x12]) &&
                 (iVar11 = ((undefined4 (__thiscall *)(__typeof__(this_00)))(**(code **)(*this_00 + 0x3c)))(this_00), iVar6 != iVar11)) &&
                ((*pbStack_10 & 1) != 0)) && (iVar6 != 0xf)) {
              iVar11 = FUN_004bcb60(pvStack_24,iVar6);
              iVar7 = 0;
              if (0 < iVar11) {
                FUN_004bcb90(local_1c,iVar6);
              }
              if ((iVar6 < 0) || (0xf < iVar6)) {
                local_14 = 0;
              }
              else {
                local_14 = (int)local_1c + (iStack_c - (int)pvStack_24);
              }
              if ((iVar6 < 0) || (0xf < iVar6)) {
                iVar11 = 0;
              }
              else {
                iVar11 = iStack_c;
              }
              if (((local_14 != 0) && (iVar11 != 0)) && (0 < iVar1)) {
                do {
                  iVar10 = FUN_004beef0((void *)(iVar11 + 0x7c),iVar7);
                  if (iVar10 != 0) {
                    iVar10 = FUN_004beef0((void *)(local_14 + 0x7c),iVar7);
                    if (iVar10 == 0) {
                      FUN_004bef40((void *)(local_14 + 0x7c),iVar7);
                    }
                  }
                  iVar7 = iVar7 + 1;
                } while (iVar7 < iVar1);
              }
            }
            iVar6 = iVar6 + 1;
            pbStack_10 = pbStack_10 + 0x1d84;
            iStack_c = iStack_c + 0x88;
          } while (iVar6 < 0x10);
        }
      }
    }
  }
  else if (iVar1 == 3) {
    if ((param_1[4] == -2) &&
       (puVar5 = FUN_00485080(&DAT_005aa12c,param_1[1],0x2f), puVar5 != (undefined4 *)0x0)) {
      *(char *)(puVar5 + 0x172) = *(char *)(puVar5 + 0x172) + '\x01';
    }
  }
  else if (((iVar1 == 4) && (param_1[4] == -2)) &&
          (puVar5 = FUN_00485080(&DAT_005aa12c,param_1[1],0x2f), puVar5 != (undefined4 *)0x0)) {
    *(char *)(puVar5 + 0x172) = *(char *)(puVar5 + 0x172) + '\x01';
  }
  pvVar4 = DAT_005a7b78;
  iVar1 = *param_1;
  if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
    *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
    FUN_004d4550(pvVar4);
    *(undefined4 *)((int)pvVar4 + 0x90) = 0;
    *(undefined4 *)((int)pvVar4 + 0xa4) = 0;
  }
  else {
    iVar11 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
    *(int *)((int)DAT_005a7b78 + 0x54) = iVar11;
    iVar6 = *(int *)((int)pvVar4 + 0x50);
    *(undefined4 *)(iVar6 + iVar11 * 8) = 1;
    *(int *)(iVar6 + 4 + iVar11 * 8) = iVar1;
  }
  pvVar4 = DAT_005a7b78;
  iVar1 = param_1[1];
  if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
    *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
    FUN_004d4550(pvVar4);
    *(undefined4 *)((int)pvVar4 + 0x90) = 0;
    *(undefined4 *)((int)pvVar4 + 0xa4) = 0;
  }
  else {
    iVar11 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
    *(int *)((int)DAT_005a7b78 + 0x54) = iVar11;
    iVar6 = *(int *)((int)pvVar4 + 0x50);
    *(undefined4 *)(iVar6 + iVar11 * 8) = 1;
    *(int *)(iVar6 + 4 + iVar11 * 8) = iVar1;
  }
  pvVar4 = DAT_005a7b78;
  iVar1 = param_1[2];
  if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
    *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
    FUN_004d4550(pvVar4);
    *(undefined4 *)((int)pvVar4 + 0x90) = 0;
    *(undefined4 *)((int)pvVar4 + 0xa4) = 0;
  }
  else {
    iVar11 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
    *(int *)((int)DAT_005a7b78 + 0x54) = iVar11;
    iVar6 = *(int *)((int)pvVar4 + 0x50);
    *(undefined4 *)(iVar6 + iVar11 * 8) = 1;
    *(int *)(iVar6 + 4 + iVar11 * 8) = iVar1;
  }
  pvVar4 = DAT_005a7b78;
  iVar1 = param_1[3];
  if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
    *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
    FUN_004d4550(pvVar4);
    *(undefined4 *)((int)pvVar4 + 0x90) = 0;
    *(undefined4 *)((int)pvVar4 + 0xa4) = 0;
  }
  else {
    iVar11 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
    *(int *)((int)DAT_005a7b78 + 0x54) = iVar11;
    iVar6 = *(int *)((int)pvVar4 + 0x50);
    *(undefined4 *)(iVar6 + iVar11 * 8) = 1;
    *(int *)(iVar6 + 4 + iVar11 * 8) = iVar1;
  }
  pvVar4 = DAT_005a7b78;
  iVar1 = param_1[4];
  if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
    *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
    FUN_004d4550(pvVar4);
    *(undefined4 *)((int)pvVar4 + 0x90) = 0;
    *(undefined4 *)((int)pvVar4 + 0xa4) = 0;
  }
  else {
    iVar11 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
    *(int *)((int)DAT_005a7b78 + 0x54) = iVar11;
    iVar6 = *(int *)((int)pvVar4 + 0x50);
    *(undefined4 *)(iVar6 + iVar11 * 8) = 1;
    *(int *)(iVar6 + 4 + iVar11 * 8) = iVar1;
  }
  FUN_004d05e0(DAT_005a7b78,DAT_005a7cdc,DAT_005a7ce0);
  return 1;
#undef pvStack_24
#undef local_1c
#undef local_14
#undef pbStack_10
#undef iStack_c
}
