/* Rebuilt from lomse.exe FUN_004a2e60 @ 0x004a2e60 (535 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00583898 (*(int *)0x00583898)
#define DAT_005a7b78 (*(void * *)0x005a7b78)
#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define DAT_005ae958 (*(undefined *)0x005ae958)
#define FUN_004193e0 ((undefined4 (__thiscall *)(void *, int))0x004193e0)
#define FUN_0041dc10 ((undefined4 (__thiscall *)(void *, int))0x0041dc10)
#define FUN_0041efa0 ((undefined4 (__thiscall *)(void *, uint))0x0041efa0)
#define FUN_00424080 ((undefined4 (__fastcall *)(void *))0x00424080)
#define FUN_00482ac0 ((uint (__thiscall *)(void *, int, int))0x00482ac0)
#define FUN_004a2d80 ((undefined4 (__thiscall *)(void *, int))0x004a2d80)
#define FUN_004a35c0 ((undefined4 (__fastcall *)(uint *))0x004a35c0)
#define FUN_004a8b50 ((int (__thiscall *)(void *, int, int))0x004a8b50)
#define FUN_004d05e0 ((undefined4 (__thiscall *)(void *, uint, int *))0x004d05e0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)

#define LOM_SELF_004a2e60 1
void __fastcall rb_004a2e60(int *param_1)

{
  byte *pbVar1;
  undefined4 uVar2;
  void *pvVar3;
  void *this;
  int iVar4;
  int iVar5;
  int iVar6;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_4;
#define local_4 (*(_t_local_4 *)(_fr + 0x4))
  
  iVar6 = 0;
  local_4 = 0;
  if (0 < *param_1) {
    do {
      pvVar3 = (void *)FUN_00482ac0(&DAT_005aa12c,*(int *)(iVar6 + 4 + param_1[6]),0);
      this = (void *)FUN_00482ac0(&DAT_005aa12c,*(int *)(iVar6 + 0xc + param_1[6]),0);
      if (((pvVar3 != (void *)0x0) && (this != (void *)0x0)) &&
         ((*(byte *)(iVar6 + param_1[6]) & 2) != 0)) {
        if (((~*(uint *)((int)pvVar3 + 0x30) & 0x100) == 0) ||
           ((~*(uint *)((int)this + 0x30) & 0x100) == 0)) {
          FUN_0041dc10(this,0);
          FUN_004a2d80((void *)(iVar6 + param_1[6]),0);
        }
        if (*(int *)((int)pvVar3 + 0x1c) == *(int *)((int)this + 0x1c)) {
          iVar4 = *(int *)((int)pvVar3 + 0x44);
        }
        else {
          iVar4 = FUN_004a8b50(&DAT_005ae958,*(int *)((int)pvVar3 + 0x1c),*(int *)((int)this + 0x1c)
                              );
        }
        if (*(int *)((int)pvVar3 + 0x44) == iVar4) {
          FUN_004a35c0((uint *)(iVar6 + param_1[6]));
          if ((*(byte *)(iVar6 + param_1[6]) & 4) == 0) {
            FUN_0041efa0(pvVar3,*(uint *)(iVar6 + param_1[6] + 0x14));
            *(uint *)(param_1[6] + iVar6) = *(uint *)(param_1[6] + iVar6) | 4;
          }
          *(int *)(iVar6 + 0x24 + param_1[6]) = *(int *)(iVar6 + 0x24 + param_1[6]) + -1;
          pbVar1 = (byte *)(iVar6 + param_1[6]);
          if ((*(int *)(iVar6 + 0x24 + param_1[6]) < 0) ||
             (((*pbVar1 & 4) != 0 && (*(int *)(pbVar1 + 0x14) != *(int *)((int)pvVar3 + 0x544))))) {
            FUN_0041dc10(this,0);
            pvVar3 = DAT_005a7b78;
            uVar2 = *(undefined4 *)(iVar6 + 4 + param_1[6]);
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
            uVar2 = *(undefined4 *)(iVar6 + 0xc + param_1[6]);
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
            DAT_00583898 = iVar6 + param_1[6];
            FUN_004d05e0(DAT_005a7b78,*(uint *)(iVar6 + 0x48 + param_1[6]),
                         *(int **)(iVar6 + 0x4c + param_1[6]));
            FUN_00424080(this);
            DAT_00583898 = 0;
            FUN_004a2d80((void *)(iVar6 + param_1[6]),0);
            param_1[1] = param_1[1] + -1;
          }
        }
        else {
          FUN_004193e0(pvVar3,iVar4);
        }
      }
      local_4 = local_4 + 1;
      iVar6 = iVar6 + 0x58;
    } while (local_4 < *param_1);
  }
  return;
#undef local_4
}
