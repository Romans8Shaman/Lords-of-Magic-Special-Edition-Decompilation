/* Rebuilt from lomse.exe FUN_004808e0 @ 0x004808e0 (1584 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005a7b78 (*(void * *)0x005a7b78)
#define DAT_005a7bf4 (*(uint *)0x005a7bf4)
#define DAT_005a7bf8 (*(int * *)0x005a7bf8)
#define DAT_005a7d8c (*(int *)0x005a7d8c)
#define DAT_005a7d90 (*(undefined *)0x005a7d90)
#define DAT_005a9ddc (*(undefined4 *)0x005a9ddc)
#define DAT_005ae958 (*(undefined *)0x005ae958)
#define DAT_005aeef4 (*(undefined4 *)0x005aeef4)
#define FUN_00410af0 ((undefined4 (__thiscall *)(void *, uint))0x00410af0)
#define FUN_00414d00 ((undefined4 (__thiscall *)(void *, int))0x00414d00)
#define FUN_00414e50 ((undefined4 (__thiscall *)(void *, uint, int *))0x00414e50)
#define FUN_00415c20 ((undefined4 (__thiscall *)(void *, int *, int))0x00415c20)
#define FUN_0041ae90 ((undefined4 (__fastcall *)(int))0x0041ae90)
#define FUN_00420630 ((undefined4 (__fastcall *)(int))0x00420630)
#define FUN_00422d90 ((undefined4 (__fastcall *)(void *))0x00422d90)
#define FUN_00426b40 ((undefined4 (__thiscall *)(void *, int))0x00426b40)
#define FUN_00427820 ((int (__thiscall *)(void *, int))0x00427820)
#define FUN_00427950 ((undefined4 (__thiscall *)(void *, int *))0x00427950)
#define FUN_00482ac0 ((uint (__thiscall *)(void *, int, int))0x00482ac0)
#define FUN_00485080 ((undefined4 * (__thiscall *)(void *, int, byte))0x00485080)
#define FUN_004a6dd0 ((uint (__thiscall *)(void *, int *, int, int))0x004a6dd0)
#define FUN_004a7d50 ((int (__thiscall *)(void *, int *, int))0x004a7d50)
#define FUN_004ba8d0 ((undefined4 (__thiscall *)(void *, int))0x004ba8d0)
#define FUN_004bb140 ((undefined4 (__thiscall *)(void *, int))0x004bb140)
#define FUN_004c1b40 ((undefined4 (__stdcall *)(int, int))0x004c1b40)
#define FUN_004c1bc0 ((undefined4 (__thiscall *)(void *, undefined4 *))0x004c1bc0)
#define FUN_004c1c20 ((undefined4 (__thiscall *)(void *, int))0x004c1c20)
#define FUN_004c1c50 ((undefined4 (__fastcall *)(int))0x004c1c50)
#define FUN_004c1c90 ((undefined4 (__thiscall *)(void *, uint))0x004c1c90)
#define FUN_004c1d30 ((undefined4 (__fastcall *)(int))0x004c1d30)
#define FUN_004c2370 ((undefined4 (__fastcall *)(int))0x004c2370)
#define FUN_004d09a0 ((undefined4 (__thiscall *)(void *, uint, int *, int))0x004d09a0)
#define FUN_00506340 ((undefined4 (__fastcall *)(int))0x00506340)
#define FUN_0052bb10 ((undefined4 (__thiscall *)(void *, int, int))0x0052bb10)
#define FUN_0052ff40 ((undefined4 (__thiscall *)(void *, void *))0x0052ff40)

#define LOM_SELF_004808e0 1
undefined4 __thiscall rb_004808e0(void *this,int *param_1)

{
  byte bVar1;
  int *piVar2;
  uint uVar3;
  undefined4 *puVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  void *this_00;
  uchar _fr[0x108] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_100;
  typedef uint _t_local_fc;
  typedef uint _t_local_f8;
  typedef int _t_local_f4;
  typedef int _t_local_f0;
  typedef int _t_local_ec[4];
  typedef int _t_local_dc;
  typedef int _t_local_d8;
  typedef uint _t_local_d4;
  typedef int _t_local_d0;
  typedef uint _t_local_cc;
  typedef byte _t_abStack_c8[200];
#define local_100 (*(_t_local_100 *)(_fr + 0x0))
#define local_fc (*(_t_local_fc *)(_fr + 0x4))
#define local_f8 (*(_t_local_f8 *)(_fr + 0x8))
#define local_f4 (*(_t_local_f4 *)(_fr + 0xc))
#define local_f0 (*(_t_local_f0 *)(_fr + 0x10))
#define local_ec (*(_t_local_ec *)(_fr + 0x14))
#define local_dc (*(_t_local_dc *)(_fr + 0x24))
#define local_d8 (*(_t_local_d8 *)(_fr + 0x28))
#define local_d4 (*(_t_local_d4 *)(_fr + 0x2c))
#define local_d0 (*(_t_local_d0 *)(_fr + 0x30))
#define local_cc (*(_t_local_cc *)(_fr + 0x34))
#define abStack_c8 (*(_t_abStack_c8 *)(_fr + 0x38))
  
  piVar2 = param_1;
  piVar5 = local_ec;
  for (iVar6 = 0x3b; iVar6 != 0; iVar6 = iVar6 + -1) {
    *piVar5 = *piVar2;
    piVar2 = piVar2 + 1;
    piVar5 = piVar5 + 1;
  }
  uVar7 = 0;
  local_100 = -1;
  if (0 < local_ec[3]) {
    do {
      if ((uVar7 & 1) == 0) {
        bVar1 = *(byte *)(((int)uVar7 >> 1) + 0x24 + (int)param_1) & 0xf;
      }
      else {
        bVar1 = *(byte *)(((int)uVar7 >> 1) + 0x24 + (int)param_1) >> 4;
      }
      abStack_c8[uVar7] = bVar1;
      uVar7 = uVar7 + 1;
    } while ((int)uVar7 < local_ec[3]);
  }
  piVar2 = FUN_00485080(this,local_ec[0],0x2f);
  if (piVar2 == (int *)0x0) {
    return 0;
  }
  DAT_005aeef4 = 1;
  iVar6 = piVar2[0x12];
  if ((iVar6 < 0) || (0xf < iVar6)) {
    this_00 = (void *)0x0;
  }
  else {
    this_00 = (void *)((int)this + iVar6 * 0x1d84 + 0x5068);
  }
  uVar7 = piVar2[0xc];
  piVar2[0xc] = uVar7 & 0xffc43f37;
  piVar2[0xc] = local_d4 & 0x3bc0c8 | uVar7 & 0xffc02f35;
  if (-1 < piVar2[0x14e]) {
    FUN_00427950((void *)((int)this + 0x4dd0),piVar2 + 0x14e);
  }
  if ((piVar2[0xc] & 0x8000U) != 0) {
    FUN_00426b40(piVar2,(int)local_ec);
  }
  piVar2[0x152] = local_d8;
  if (local_cc == 0) {
    piVar2[0x153] = local_ec[1];
  }
  else {
    piVar2[0x153] = -1;
  }
  if (((-1 < piVar2[0x154]) && (piVar2[0x154] != local_d0)) && (this_00 != (void *)0x0)) {
    FUN_004bb140(this_00,(int)piVar2);
  }
  piVar2[0x154] = local_d0;
  if (local_ec[3] < 1) {
    if ((-1 < local_d0) && (this_00 != (void *)0x0)) {
      FUN_004bb140(this_00,(int)piVar2);
    }
    return 0;
  }
  uVar7 = FUN_00482ac0(this,local_ec[0],2);
  local_f8 = uVar7;
  local_fc = FUN_00482ac0(this,local_ec[0],3);
  uVar3 = FUN_00482ac0(this,local_ec[0],1);
  if ((piVar2[0x12] == *(int *)(&DAT_005a7d90 + DAT_005a7d8c * 0x400)) &&
     ((*(byte *)(piVar2 + 0xc) & 0x20) != 0)) {
    local_f4 = piVar2[10];
  }
  else {
    local_f4 = -1;
  }
  if (uVar7 == 0) {
    if (local_fc == 0) {
      if (uVar3 != 0) {
        *(undefined4 *)(uVar3 + 0x58) = 0;
        piVar2[0xc] = piVar2[0xc] & 0xfeffffff;
        iVar6 = FUN_004a7d50((void *)((int)this + 0x482c),piVar2,*(int *)(uVar3 + 0x1c));
        if (piVar2[0x16d] != -1) {
          uVar7 = FUN_00482ac0(this,piVar2[0x16d],0);
          if (uVar7 != 0) {
            *(int *)(uVar7 + 0x5b0) = iVar6;
          }
        }
      }
    }
    else {
      piVar2[0xc] = piVar2[0xc] & 0xffbfffff;
      iVar6 = FUN_004a7d50((void *)((int)this + 0x482c),piVar2,*(int *)(local_fc + 0x1c));
      if (piVar2[0x16d] != -1) {
        uVar7 = FUN_00482ac0(this,piVar2[0x16d],0);
        if (uVar7 != 0) {
          *(int *)(uVar7 + 0x5b0) = iVar6;
        }
      }
      *(undefined4 *)(local_fc + 0x44) = 0;
    }
  }
  else {
    piVar2[0xc] = piVar2[0xc] & 0xff7fffff;
    iVar6 = FUN_004a7d50((void *)((int)this + 0x482c),piVar2,*(int *)(local_f8 + 0x1c));
    if (piVar2[0x16d] != -1) {
      uVar7 = FUN_00482ac0(this,piVar2[0x16d],0);
      if (uVar7 != 0) {
        *(int *)(uVar7 + 0x5b0) = iVar6;
      }
    }
    *(undefined4 *)(local_f8 + 0x48) = 0;
  }
  local_f0 = FUN_004c1c50((int)piVar2);
  iVar6 = FUN_00414d00(piVar2,(int)local_ec);
  if (iVar6 != 0) {
    iVar6 = FUN_00414e50(piVar2,local_ec[2],&local_100);
    if (iVar6 == 0) {
      ((undefined4 (__thiscall *)(__typeof__(piVar2)))(**(code **)(*piVar2 + 0x2c)))(piVar2);
    }
    else {
      FUN_00415c20(piVar2,(int *)0x0,-1);
      iVar6 = FUN_00506340((int)piVar2);
      if (iVar6 == 0) {
        piVar2[0x173] = 0;
        piVar2[0xc] = piVar2[0xc] & 0xdfffffff;
      }
      puVar4 = FUN_00485080(this,local_100,0x2f);
      if (puVar4 != (undefined4 *)0x0) {
        FUN_00415c20(puVar4,(int *)0x0,-1);
        if (puVar4 != (undefined4 *)0x0) {
          iVar6 = FUN_00506340((int)piVar2);
          if (iVar6 == 0) {
            puVar4[0x173] = 0;
            puVar4[0xc] = puVar4[0xc] & 0xdfffffff;
          }
        }
      }
      if (local_f8 == 0) {
        if (local_fc == 0) {
          if (uVar3 != 0) {
            *(undefined4 *)(uVar3 + 0x58) = 0;
            if (puVar4 != (undefined4 *)0x0) {
              puVar4[0xc] = puVar4[0xc] | 0x1000000;
              FUN_00422d90(puVar4);
              puVar4[10] = *(undefined4 *)(uVar3 + 0x28);
              local_100 = *(int *)(uVar3 + 0x28);
            }
            *(undefined4 **)(uVar3 + 0x58) = puVar4;
          }
        }
        else {
          *(undefined4 *)(local_fc + 0x44) = 0;
          if (puVar4 != (undefined4 *)0x0) {
            puVar4[0xc] = puVar4[0xc] | 0x400000;
            FUN_00422d90(puVar4);
            puVar4[10] = *(undefined4 *)(local_fc + 0x28);
            local_100 = *(int *)(local_fc + 0x28);
          }
          *(undefined4 **)(local_fc + 0x44) = puVar4;
        }
      }
      else {
        *(undefined4 *)(local_f8 + 0x48) = 0;
        if (puVar4 != (undefined4 *)0x0) {
          FUN_00422d90(puVar4);
          puVar4[0xc] = puVar4[0xc] | 0x800000;
          puVar4[10] = *(undefined4 *)(local_f8 + 0x28);
          local_100 = *(int *)(local_f8 + 0x28);
        }
        *(undefined4 **)(local_f8 + 0x48) = puVar4;
      }
    }
  }
  if (piVar2[7] != local_dc) {
    FUN_004a6dd0(&DAT_005ae958,piVar2,piVar2[7],local_dc);
  }
  iVar6 = FUN_00427820((void *)((int)this + 0x4dd0),(int)local_ec);
  piVar2[0x14e] = iVar6;
  piVar2[0x16] = 0;
  piVar2[0xc] = piVar2[0xc] | 0x10;
  FUN_0041ae90((int)piVar2);
  if (local_cc != 0) {
    puVar4 = FUN_00485080(this,local_ec[1],0x2f);
    if (puVar4 != (undefined4 *)0x0) {
      iVar6 = FUN_004c1c90(puVar4,local_cc);
      if (iVar6 == 0) {
        iVar6 = FUN_00414e50(puVar4,local_cc,&local_100);
        if (iVar6 != 0) {
          FUN_004c1b40(puVar4[10],piVar2[10]);
        }
      }
      else {
        FUN_004c1b40(puVar4[10],piVar2[10]);
      }
    }
    goto LAB_00480e42;
  }
  if ((local_f0 == 0) || (local_100 == -1)) goto LAB_00480e42;
  puVar4 = FUN_00485080(this,piVar2[0x16d],0x2f);
  FUN_004c2370((int)piVar2);
  FUN_00420630((int)piVar2);
  piVar5 = FUN_00485080(this,local_100,0x2f);
  if (piVar5 != (int *)0x0) {
    FUN_004c2370((int)piVar5);
    FUN_00420630((int)piVar5);
  }
  if (puVar4 == (undefined4 *)0x0) goto LAB_00480e42;
  if (piVar5 == (int *)0x0) {
LAB_00480e29:
    FUN_004c1bc0(puVar4,piVar2);
    FUN_00410af0(puVar4,0xffffffff);
    piVar5 = piVar2;
  }
  else {
    iVar6 = FUN_004c1d30((int)piVar5);
    if (iVar6 != 0) goto LAB_00480e29;
    FUN_004c1bc0(puVar4,piVar5);
    FUN_00410af0(puVar4,0xffffffff);
  }
  FUN_004c1c20(piVar5,(int)puVar4);
LAB_00480e42:
  if ((piVar2[10] != local_ec[0]) && ((piVar2[0xc] & 0x8000U) != 0)) {
    puVar4 = FUN_00485080(this,local_ec[1],0x2f);
    if ((puVar4 != (undefined4 *)0x0) &&
       (((puVar4[0xc] & 0x8000) != 0 && (puVar4[0x153] == local_ec[0])))) {
      puVar4[0x153] = piVar2[10];
    }
  }
  DAT_005aeef4 = 1;
  if (-1 < local_f4) {
    FUN_0052bb10(&DAT_005a7d90 + DAT_005a7d8c * 0x400,local_f4,piVar2[10]);
  }
  FUN_004ba8d0(&DAT_005a9ddc,(int)piVar2);
  FUN_0052ff40(&DAT_005a7d90 + DAT_005a7d8c * 0x400,piVar2);
  if (piVar2[0x12] == DAT_005a7d8c) {
    FUN_004d09a0(DAT_005a7b78,DAT_005a7bf4,DAT_005a7bf8,0);
  }
  piVar2[8] = 0;
  return 1;
#undef local_100
#undef local_fc
#undef local_f8
#undef local_f4
#undef local_f0
#undef local_ec
#undef local_dc
#undef local_d8
#undef local_d4
#undef local_d0
#undef local_cc
#undef abStack_c8
}
