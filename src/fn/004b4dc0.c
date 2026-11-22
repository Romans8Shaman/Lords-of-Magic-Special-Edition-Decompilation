/* Rebuilt from lomse.exe FUN_004b4dc0 @ 0x004b4dc0 (1765 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00556168 (*(undefined *)0x00556168)
#define DAT_005572ec (*(undefined *)0x005572ec)
#define DAT_00583560 (*(undefined4 *)0x00583560)
#define DAT_00583ff8 (*(undefined1 *)0x00583ff8)
#define DAT_005a7b78 (*(void * *)0x005a7b78)
#define DAT_005a7d8c (*(int *)0x005a7d8c)
#define DAT_005a8078 (*(undefined4 *)0x005a8078)
#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define DAT_005aa168 (*(uint *)0x005aa168)
#define DAT_005aa16c (*(int * *)0x005aa16c)
#define DAT_005af194 (*(undefined *)0x005af194)
#define DAT_005af1d8 (*(undefined1 *)0x005af1d8)
#define FUN_00453ab0 ((undefined4 (__stdcall *)(void))0x00453ab0)
#define FUN_00482af0 ((undefined4 (__thiscall *)(void *, LPCSTR))0x00482af0)
#define FUN_0048a4e0 ((undefined * (__cdecl *)(uint))0x0048a4e0)
#define FUN_004b4940 ((undefined4 (__stdcall *)(void))0x004b4940)
#define FUN_004b4b60 ((int (__thiscall *)(void *, int))0x004b4b60)
#define FUN_004b4b90 ((undefined4 (__fastcall *)(void *))0x004b4b90)
#define FUN_004b7dd0 ((undefined4 (__fastcall *)(int))0x004b7dd0)
#define FUN_004b9870 ((uint (__fastcall *)(int))0x004b9870)
#define FUN_004d05e0 ((undefined4 (__thiscall *)(void *, uint, int *))0x004d05e0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define FUN_005394d0 ((undefined4 (__cdecl *)(int *))0x005394d0)
#define FUN_00539610 ((undefined4 (__cdecl *)(LPCSTR, char *))0x00539610)
#define FUN_00539660 ((uint (__cdecl *)(char *, uint, uint, int *))0x00539660)
#define FUN_005397f0 ((uint (__cdecl *)(char *, uint, uint, int *))0x005397f0)
#define FUN_0053a090 ((int (__cdecl *)(undefined1 *, ...))0x0053a090)
#define FUN_00548e10 ((DWORD (__cdecl *)(uint))0x00548e10)
#define FUN_00548ec0 ((undefined4 (__cdecl *)(int))0x00548ec0)
#define Ordinal_401 ((undefined4 (__stdcall *)(undefined4, undefined4, undefined4, undefined4))0x00533864) /* thunk -> STORM.DLL!Ordinal_401 */
#define Ordinal_403 ((undefined4 (__stdcall *)(undefined4, undefined4, undefined4, undefined4))0x0053385e) /* thunk -> STORM.DLL!Ordinal_403 */
#define _DAT_005a79c4 (*(undefined4 *)0x005a79c4)
#define s_C__lomse_source_storm_h_00555130 (*(char (*)[])0x00555130)
#define s_Error__Checksum_queue_is_full_fo_0055d278 (*(char (*)[])0x0055d278)
#define s_Value_for_computer___d__d__value_0055cfe0 (*(char (*)[])0x0055cfe0)
#define s___Computer___d___s__has_a_differ_0055d094 (*(char (*)[])0x0055d094)
#define s___Computer___d___s__has_differen_0055d194 (*(char (*)[])0x0055d194)
#define s___Computer___d___s__has_differen_0055d1e0 (*(char (*)[])0x0055d1e0)
#define s___Computer___d___s__now_has_a_di_0055d0e4 (*(char (*)[])0x0055d0e4)
#define s___Computer___d___s__now_has_a_di_0055d140 (*(char (*)[])0x0055d140)
#define s___Computer___d___s__now_has_diff_0055d228 (*(char (*)[])0x0055d228)
#define s_multisav_multi_0055cfd0 (*(char (*)[])0x0055cfd0)

#define LOM_SELF_004b4dc0 1
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall rb_004b4dc0(void *this,int *param_1)

{
  char cVar1;
  int iVar2;
  void *pvVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined *puVar9;
  undefined *puVar10;
  LPCSTR pCVar11;
  int *piVar12;
  DWORD arg1;
  int iVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  int *piVar18;
  char *pcVar19;
  char *pcVar20;
  bool bVar21;
  int iVar22;
  char *pcVar23;
  uchar _fr[0x410] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int * _t_local_408;
  typedef int _t_local_404;
  typedef char _t_local_3e8[1000];
#define local_408 (*(_t_local_408 *)(_fr + 0x0))
#define local_404 (*(_t_local_404 *)(_fr + 0x4))
#define local_3e8 (*(_t_local_3e8 *)(_fr + 0x20))
  
  local_408 = (int *)FUN_004b4b60(this,param_1[1]);
  if (local_408 == (int *)0x0) {
    local_408 = (int *)FUN_004b4b90(this);
    if (local_408 == (int *)0x0) {
      iVar6 = FUN_0053a090(&DAT_00583ff8,s_Error__Checksum_queue_is_full_fo_0055d278,param_1[1]);
      return iVar6;
    }
    if (*(int *)((int)this + 0x4b2c) == 0) {
      bVar4 = 1;
    }
    else {
      uVar7 = FUN_004b7dd0(*(int *)((int)this + 0x4b2c));
      bVar4 = (byte)uVar7;
    }
    uVar8 = FUN_004b9870((int)this);
    local_408[0x2f] = uVar8 | 1 << (bVar4 & 0x1f);
  }
  if (*(int *)((int)this + 0x4b2c) == 0) {
    bVar4 = 1;
  }
  else {
    uVar7 = FUN_004b7dd0(*(int *)((int)this + 0x4b2c));
    bVar4 = (byte)uVar7;
  }
  uVar8 = FUN_004b9870((int)this);
  piVar12 = param_1;
  piVar18 = local_408 + *param_1 * 10 + -9;
  for (iVar6 = 10; iVar6 != 0; iVar6 = iVar6 + -1) {
    *piVar18 = *piVar12;
    piVar12 = piVar12 + 1;
    piVar18 = piVar18 + 1;
  }
  *local_408 = param_1[1];
  local_408[0x2f] =
       local_408[0x2f] & ~(1 << ((byte)*param_1 & 0x1f)) & (uVar8 | 1 << (bVar4 & 0x1f));
  bVar21 = false;
  bVar4 = 0;
  local_404 = 0;
LAB_004b4ec4:
  if (*(int *)((int)this + local_404 * 4 + 0x14) != 0) {
    if (*(int *)((int)this + 0x4b2c) == 0) {
      bVar5 = 1;
    }
    else {
      uVar7 = FUN_004b7dd0(*(int *)((int)this + 0x4b2c));
      bVar5 = (byte)uVar7;
    }
    uVar8 = FUN_004b9870((int)this);
    uVar8 = uVar8 | 1 << (bVar5 & 0x1f);
    if (local_408[local_404 + 0x29] == 0) {
      uVar16 = 1;
      piVar12 = local_408 + local_404 + 5;
      do {
        uVar14 = 1 << ((byte)uVar16 & 0x1f);
        if ((((uVar14 & uVar8) != 0) && ((local_408[0x2f] & uVar14) == 0)) &&
           (piVar18 = piVar12, uVar14 = uVar16, (int)uVar16 < 4)) {
LAB_004b4f4e:
          uVar17 = uVar14 + 1;
          uVar15 = 1 << ((byte)uVar17 & 0x1f);
          if (((uVar15 & uVar8) == 0) || ((local_408[0x2f] & uVar15) != 0)) goto LAB_004b4f74;
          iVar6 = *piVar12;
          iVar13 = piVar18[10];
          if (iVar6 == iVar13) goto LAB_004b4f74;
          local_408[local_404 + 0x29] = 1;
          bVar21 = true;
          switch(local_404) {
          case 0:
            if (((int)uVar14 < 0) || (0xf < (int)uVar14)) {
              puVar10 = (undefined *)0x0;
            }
            else {
              puVar10 = &DAT_005af194 + uVar14 * 0x1d84;
            }
            iVar2 = uVar16 - 1;
            if ((iVar2 < 0) || (0xf < iVar2)) {
              puVar9 = (undefined *)0x0;
            }
            else {
              puVar9 = &DAT_005af194 + iVar2 * 0x1d84;
            }
            puVar10 = puVar10 + 0x44;
            puVar9 = puVar9 + 0x44;
            pcVar23 = s___Computer___d___s__has_a_differ_0055d094;
            goto LAB_004b524e;
          case 1:
            if (((int)uVar14 < 0) || (0xf < (int)uVar14)) {
              puVar10 = (undefined *)0x0;
            }
            else {
              puVar10 = &DAT_005af194 + uVar14 * 0x1d84;
            }
            iVar2 = uVar16 - 1;
            if ((iVar2 < 0) || (0xf < iVar2)) {
              puVar10 = puVar10 + 0x44;
              puVar9 = (undefined *)0x44;
              pcVar23 = s___Computer___d___s__has_differen_0055d1e0;
            }
            else {
              puVar10 = puVar10 + 0x44;
              puVar9 = &DAT_005af1d8 + iVar2 * 0x1d84;
              pcVar23 = s___Computer___d___s__has_differen_0055d1e0;
            }
LAB_004b524e:
            FUN_0053a090(&DAT_00583ff8,pcVar23,uVar16,puVar9,uVar17,puVar10);
            bVar4 = 1;
            break;
          case 2:
            if (((int)uVar14 < 0) || (0xf < (int)uVar14)) {
              puVar10 = (undefined *)0x0;
            }
            else {
              puVar10 = &DAT_005af194 + uVar14 * 0x1d84;
            }
            iVar2 = uVar16 - 1;
            if ((iVar2 < 0) || (0xf < iVar2)) {
              puVar9 = (undefined *)0x0;
            }
            else {
              puVar9 = &DAT_005af194 + iVar2 * 0x1d84;
            }
            FUN_0053a090(&DAT_00583ff8,s___Computer___d___s__now_has_a_di_0055d140,uVar16,
                         puVar9 + 0x44,uVar17,puVar10 + 0x44);
            break;
          case 3:
            if (((int)uVar14 < 0) || (0xf < (int)uVar14)) {
              puVar10 = (undefined *)0x0;
            }
            else {
              puVar10 = &DAT_005af194 + uVar14 * 0x1d84;
            }
            iVar2 = uVar16 - 1;
            if ((iVar2 < 0) || (0xf < iVar2)) {
              puVar9 = (undefined *)0x0;
            }
            else {
              puVar9 = &DAT_005af194 + iVar2 * 0x1d84;
            }
            FUN_0053a090(&DAT_00583ff8,s___Computer___d___s__now_has_diff_0055d228,uVar16,
                         puVar9 + 0x44,uVar17,puVar10 + 0x44);
            break;
          case 4:
            if (((int)uVar14 < 0) || (0xf < (int)uVar14)) {
              puVar10 = (undefined *)0x0;
            }
            else {
              puVar10 = &DAT_005af194 + uVar14 * 0x1d84;
            }
            iVar2 = uVar16 - 1;
            if ((iVar2 < 0) || (0xf < iVar2)) {
              puVar9 = (undefined *)0x0;
            }
            else {
              puVar9 = &DAT_005af194 + iVar2 * 0x1d84;
            }
            FUN_0053a090(&DAT_00583ff8,s___Computer___d___s__has_differen_0055d194,uVar16,
                         puVar9 + 0x44,uVar17,puVar10 + 0x44);
            break;
          case 5:
            if (((int)uVar14 < 0) || (0xf < (int)uVar14)) {
              puVar10 = (undefined *)0x0;
            }
            else {
              puVar10 = &DAT_005af194 + uVar14 * 0x1d84;
            }
            iVar2 = uVar16 - 1;
            if ((iVar2 < 0) || (0xf < iVar2)) {
              puVar9 = (undefined *)0x0;
            }
            else {
              puVar9 = &DAT_005af194 + iVar2 * 0x1d84;
            }
            FUN_0053a090(&DAT_00583ff8,s___Computer___d___s__now_has_a_di_0055d0e4,uVar16,
                         puVar9 + 0x44,uVar17,puVar10 + 0x44);
          }
          iVar2 = *local_408;
          iVar22 = param_1[3];
          uVar7 = DAT_00583560;
          puVar10 = FUN_0048a4e0(param_1[2]);
          FUN_0053a090(local_3e8,s_Value_for_computer___d__d__value_0055cfe0,uVar16,iVar6,uVar17,
                       iVar13,iVar2,puVar10,iVar22,uVar7);
          uVar8 = 0xffffffff;
          pcVar23 = local_3e8;
          goto code_r0x004b52b0;
        }
LAB_004b4f80:
        uVar16 = uVar16 + 1;
        piVar12 = piVar12 + 10;
      } while ((int)uVar16 < 5);
    }
  }
  goto LAB_004b52e8;
LAB_004b4f74:
  piVar18 = piVar18 + 10;
  uVar14 = uVar17;
  if (3 < (int)uVar17) goto LAB_004b4f80;
  goto LAB_004b4f4e;
  while( true ) {
    uVar8 = uVar8 - 1;
    pcVar20 = pcVar23 + 1;
    cVar1 = *pcVar23;
    pcVar23 = pcVar20;
    if (cVar1 == '\0') break;
code_r0x004b52b0:
    pcVar20 = pcVar23;
    if (uVar8 == 0) break;
  }
  uVar8 = ~uVar8;
  iVar6 = -1;
  pcVar23 = &DAT_00583ff8;
  do {
    pcVar19 = pcVar23;
    if (iVar6 == 0) break;
    iVar6 = iVar6 + -1;
    pcVar19 = pcVar23 + 1;
    cVar1 = *pcVar23;
    pcVar23 = pcVar19;
  } while (cVar1 != '\0');
  pcVar23 = pcVar20 + -uVar8;
  pcVar20 = pcVar19 + -1;
  for (uVar16 = uVar8 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
    *(undefined4 *)pcVar20 = *(undefined4 *)pcVar23;
    pcVar23 = pcVar23 + 4;
    pcVar20 = pcVar20 + 4;
  }
  for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
    *pcVar20 = *pcVar23;
    pcVar23 = pcVar23 + 1;
    pcVar20 = pcVar20 + 1;
  }
  FUN_004b4940();
LAB_004b52e8:
  local_404 = local_404 + 1;
  if (5 < local_404) {
    if (local_408[0x2f] == 0) {
      *local_408 = 0;
      local_408[0x2f] = 0;
      piVar12 = local_408 + 0x29;
      for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
        *piVar12 = 0;
        piVar12 = piVar12 + 1;
      }
    }
    uVar7 = 0;
    if (bVar21) {
      iVar6 = *(int *)((int)this + 0x4b2c);
      if (iVar6 == 0) {
        bVar21 = true;
      }
      else {
        iVar13 = *(int *)(iVar6 + 0x390);
        iVar6 = FUN_004b7dd0(iVar6);
        bVar21 = iVar13 == iVar6;
      }
      if (bVar21) {
        if ((&DAT_005a8078)[DAT_005a7d8c * 0x100] == 3) {
          pcVar23 = &DAT_005572ec;
          pCVar11 = (LPCSTR)FUN_00453ab0();
          piVar12 = (int *)FUN_00539610(pCVar11,pcVar23);
          if (piVar12 != (int *)0x0) {
            uVar8 = FUN_00548ec0((int)piVar12);
            arg1 = FUN_00548e10(uVar8);
            if ((int)arg1 < 1) {
              pcVar23 = (char *)0x0;
            }
            else {
              pcVar23 = (char *)Ordinal_401(arg1,s_C__lomse_source_storm_h_00555130,0x3fa,0);
            }
            if (pcVar23 != (char *)0x0) {
              FUN_005397f0(pcVar23,arg1,1,piVar12);
            }
            FUN_005394d0(piVar12);
            if (pcVar23 != (char *)0x0) {
              piVar12 = (int *)FUN_00539610(s_multisav_multi_0055cfd0,&DAT_00556168);
              if (piVar12 != (int *)0x0) {
                FUN_00539660(pcVar23,arg1,1,piVar12);
                FUN_005394d0(piVar12);
              }
              Ordinal_403(pcVar23,s_C__lomse_source_storm_h_00555130,0x3f6,0);
            }
          }
        }
        else {
          FUN_00482af0(&DAT_005aa12c,s_multisav_multi_0055cfd0);
        }
      }
      pvVar3 = DAT_005a7b78;
      _DAT_005a79c4 = 1;
      if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
        *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
        FUN_004d4550(pvVar3);
        *(undefined4 *)((int)pvVar3 + 0x90) = 0;
        *(undefined4 *)((int)pvVar3 + 0xa4) = 0;
      }
      else {
        iVar13 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
        *(int *)((int)DAT_005a7b78 + 0x54) = iVar13;
        iVar6 = *(int *)((int)pvVar3 + 0x50);
        *(undefined4 *)(iVar6 + iVar13 * 8) = 1;
        *(uint *)(iVar6 + 4 + iVar13 * 8) = -(uint)bVar4;
      }
      uVar7 = FUN_004d05e0(DAT_005a7b78,DAT_005aa168,DAT_005aa16c);
    }
    return uVar7;
  }
  goto LAB_004b4ec4;
#undef local_408
#undef local_404
#undef local_3e8
}
