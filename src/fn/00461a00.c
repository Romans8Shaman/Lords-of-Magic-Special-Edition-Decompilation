/* Rebuilt from lomse.exe FUN_00461a00 @ 0x00461a00 (1205 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005830f0 (*(int *)0x005830f0)
#define DAT_005830f4 (*(int *)0x005830f4)
#define DAT_005a7b78 (*(void * *)0x005a7b78)
#define DAT_005aa784 (*(int *)0x005aa784)
#define DAT_005ae8b8 (*(int *)0x005ae8b8)
#define DAT_005ae8bc (*(int *)0x005ae8bc)
#define DAT_005ae8c0 (*(undefined4 *)0x005ae8c0)
#define DAT_005d1e84 (*(int *)0x005d1e84)
#define FUN_004026a0 ((undefined4 (__cdecl *)(uint *, uint *, uint *, float *))0x004026a0)
#define FUN_00404ab0 ((undefined4 (__thiscall *)(void *, undefined4))0x00404ab0)
#define FUN_004176d0 ((undefined4 (__thiscall *)(void *, int))0x004176d0)
#define FUN_00420340 ((undefined4 (__thiscall *)(void *, int))0x00420340)
#define FUN_004203c0 ((undefined4 (__thiscall *)(void *, int))0x004203c0)
#define FUN_0045c7b0 ((undefined4 (__fastcall *)(int))0x0045c7b0)
#define FUN_00481b40 ((undefined4 (__fastcall *)(int))0x00481b40)
#define FUN_00482ac0 ((uint (__thiscall *)(void *, int, int))0x00482ac0)
#define FUN_00488540 ((undefined4 (__fastcall *)(int))0x00488540)
#define FUN_004885e0 ((undefined4 (__fastcall *)(int))0x004885e0)
#define FUN_004b7dd0 ((undefined4 (__fastcall *)(int))0x004b7dd0)
#define FUN_004d05e0 ((undefined4 (__thiscall *)(void *, uint, int *))0x004d05e0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define FUN_004fbe60 ((undefined4 (__thiscall *)(void *, int, int))0x004fbe60)
#define FUN_0050c7f0 ((undefined4 (__fastcall *)(int))0x0050c7f0)

#define LOM_SELF_00461a00 1
/* WARNING: Removing unreachable block (ram,0x00461d54) */
/* WARNING: Removing unreachable block (ram,0x00461d83) */
/* WARNING: Removing unreachable block (ram,0x00461d8d) */
/* WARNING: Removing unreachable block (ram,0x00461db4) */
/* WARNING: Removing unreachable block (ram,0x00461da4) */
/* WARNING: Removing unreachable block (ram,0x00461dd1) */

void __fastcall rb_00461a00(void *param_1)

{
  int *piVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  void *this;
  uint uVar6;
  int iVar7;
  uchar _fr[0x28] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef float _t_local_20;
  typedef int _t_local_1c;
  typedef uint _t_local_18;
  typedef uint _t_local_14;
  typedef uint _t_local_10[4];
#define local_20 (*(_t_local_20 *)(_fr + 0x0))
#define local_1c (*(_t_local_1c *)(_fr + 0x4))
#define local_18 (*(_t_local_18 *)(_fr + 0x8))
#define local_14 (*(_t_local_14 *)(_fr + 0xc))
#define local_10 (*(_t_local_10 *)(_fr + 0x10))
  
  if ((*(int *)((int)param_1 + 0x4ff0) == 0 && *(int *)((int)param_1 + 0x4fec) == 0) &&
     (iVar7 = 0, DAT_005830f4 == 0)) {
    local_20 = 0.0;
    local_10[2] = 1;
    local_10[3] = 1;
    local_1c = 0;
    if (0 < *(int *)((int)param_1 + 0x5048)) {
      *(int *)((int)param_1 + 0x5048) = *(int *)((int)param_1 + 0x5048) + -1;
      return;
    }
    local_18 = 0;
    do {
      if (iVar7 == 0) {
        iVar5 = *(int *)((int)param_1 + 0x65c);
      }
      else {
        iVar5 = *(int *)((int)param_1 + 0x658);
      }
      iVar3 = FUN_00420340((void *)((int)param_1 + 0x4848),iVar5);
      if (iVar3 == 0) {
        if ((iVar5 < 0) || (0xf < iVar5)) {
          iVar3 = 0;
        }
        else {
          iVar3 = (int)param_1 + iVar5 * 0x1d84 + 0x5068;
        }
        if (iVar3 != 0) {
          iVar3 = *(int *)(iVar3 + 0x15dc);
          if (DAT_005d1e84 == 0) {
            iVar4 = 1;
          }
          else {
            iVar4 = FUN_004b7dd0(DAT_005d1e84);
          }
          if (iVar3 == iVar4) {
            local_18 = 1;
          }
        }
      }
      else {
        local_10[iVar7 + 2] = 0;
        local_20 = __BC(float, (__BC(int, local_20) + 1));
      }
      pvVar2 = (void *)((int)param_1 + 0x4848);
      iVar5 = FUN_004203c0(pvVar2,iVar5);
      if ((iVar5 != 0) && (local_10[iVar7 + 2] != 0)) {
        local_10[iVar7] = 1;
        local_1c = local_1c + 1;
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < 2);
    if (local_20 == 0.0) {
      *(undefined4 *)((int)param_1 + 0x5048) = 10;
      DAT_005830f0 = 0;
    }
    else {
      if (DAT_005830f0 == 0) {
        for (this = (void *)FUN_004fbe60(pvVar2,0,0); this != (void *)0x0;
            this = (void *)FUN_004fbe60(pvVar2,(int)this,0)) {
          if ((~*(uint *)((int)this + 0x30) & 0x100) != 0) {
            FUN_004176d0(this,0);
          }
        }
        *(undefined4 *)((int)param_1 + 0x5048) = 10;
        DAT_005830f0 = 1;
        return;
      }
      if (__BC(int, local_20) < 2) {
        if ((local_18 != 0) && (*(char *)((int)param_1 + 0x5040) != '\0')) {
          if (*(int *)((int)param_1 + 0x4794) == 0) {
            DAT_005830f4 = 1;
            FUN_004d05e0(DAT_005a7b78,*(uint *)((int)param_1 + 0x5040),
                         *(int **)((int)param_1 + 0x5044));
            pvVar2 = DAT_005a7b78;
            if (*(int *)((int)DAT_005a7b78 + 0x54) < *(int *)((int)DAT_005a7b78 + 0x58)) {
              piVar1 = (int *)((int)DAT_005a7b78 + 0x50);
              iVar7 = *(int *)((int)DAT_005a7b78 + 0x54) + 1;
              *(int *)((int)DAT_005a7b78 + 0x54) = iVar7;
              local_10[0] = *(uint *)(*piVar1 + -8 + iVar7 * 8);
              local_10[1] = *(int *)(*piVar1 + -4 + iVar7 * 8);
            }
            else {
              FUN_00404ab0(DAT_005a7b78,6);
              local_10[0] = 0;
              local_10[1] = local_10[3];
            }
            iVar7 = FUN_004026a0(local_10,&local_18,&local_14,&local_20);
            if (iVar7 == 0) {
              *(undefined4 *)((int)pvVar2 + 0x90) = 0xe;
              FUN_004d4550(pvVar2);
              *(undefined4 *)((int)pvVar2 + 0x90) = 0;
              *(undefined4 *)((int)pvVar2 + 0xa4) = 0;
            }
            DAT_005830f4 = 0;
            DAT_005ae8c0 = 1;
          }
          if (((local_18 != 0) || (iVar7 = FUN_00481b40((int)param_1), iVar7 != 0)) ||
             (*(int *)((int)param_1 + 0x478c) != 0)) {
            if (*(int *)((int)param_1 + 0x4798) < 0) {
              if (local_10[3] != 0) {
                *(undefined4 *)((int)param_1 + 0x230c0) = 1;
              }
              if ((*(int *)((int)param_1 + 0x478c) == 0) || (local_10[3] == 0)) goto LAB_00461e8e;
              if (DAT_005ae8bc == 0) {
                DAT_005ae8bc = 1;
                FUN_004885e0((int)param_1);
                return;
              }
            }
            else if (local_1c == 0) {
              FUN_00488540((int)param_1);
              return;
            }
          }
        }
      }
      else {
        uVar6 = FUN_00482ac0(param_1,*(int *)((int)param_1 + 0x4774),1);
        if ((uVar6 != 0) && (iVar7 = FUN_0050c7f0(uVar6), iVar7 == 0)) {
          iVar5 = 0;
          iVar7 = -9999;
          for (iVar3 = FUN_004fbe60((void *)((int)param_1 + 0x4848),0,0); iVar3 != 0;
              iVar3 = FUN_004fbe60((void *)((int)param_1 + 0x4848),iVar3,0)) {
            if ((*(int *)(iVar3 + 0x48) == *(int *)((int)param_1 + 0x658)) &&
               ((iVar5 == 0 || (iVar7 < *(int *)(iVar3 + 200))))) {
              iVar7 = *(int *)(iVar3 + 200);
              iVar5 = iVar3;
            }
          }
        }
        if ((DAT_005aa784 < 0) || (0xf < DAT_005aa784)) {
          iVar7 = 0;
        }
        else {
          iVar7 = (int)param_1 + DAT_005aa784 * 0x1d84 + 0x5068;
        }
        if (iVar7 != 0) {
          iVar7 = *(int *)(iVar7 + 0x15dc);
          if (DAT_005d1e84 == 0) {
            iVar5 = 1;
          }
          else {
            iVar5 = FUN_004b7dd0(DAT_005d1e84);
          }
          if (iVar7 == iVar5) {
            if (-1 < *(int *)((int)param_1 + 0x4798)) {
              FUN_00488540((int)param_1);
              return;
            }
            if (DAT_005ae8b8 == 0) {
              FUN_0045c7b0((int)param_1);
              return;
            }
            if (DAT_005ae8bc == 0) {
              DAT_005ae8bc = 1;
              FUN_004885e0((int)param_1);
              return;
            }
LAB_00461e8e:
            FUN_0045c7b0((int)param_1);
            return;
          }
        }
      }
    }
  }
  return;
#undef local_20
#undef local_1c
#undef local_18
#undef local_14
#undef local_10
}
