/* Rebuilt from lomse.exe FUN_0048d000 @ 0x0048d000 (1076 bytes, __stdcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_0055b574 (*(uint *)0x0055b574)
#define DAT_0055b578 (*(undefined4 *)0x0055b578)
#define DAT_0055c1d4 (*(undefined *)0x0055c1d4)
#define DAT_005732f4 (*(undefined4 *)0x005732f4)
#define DAT_005732f8 (*(undefined4 *)0x005732f8)
#define DAT_005732fc (*(undefined4 *)0x005732fc)
#define DAT_00573428 (*(uint *)0x00573428)
#define DAT_00583550 (*(undefined4 *)0x00583550)
#define DAT_0058355c (*(int *)0x0058355c)
#define DAT_00583560 (*(uint *)0x00583560)
#define DAT_00583564 (*(uint *)0x00583564)
#define DAT_0058356c (*(undefined4 *)0x0058356c)
#define DAT_00583574 (*(undefined4 *)0x00583574)
#define DAT_0058357c (*(undefined4 *)0x0058357c)
#define DAT_00583588 (*(undefined4 *)0x00583588)
#define DAT_0058358c (*(undefined4 *)0x0058358c)
#define DAT_005835dc (*(undefined4 *)0x005835dc)
#define DAT_005835ec (*(int *)0x005835ec)
#define DAT_00583ff8 (*(undefined1 *)0x00583ff8)
#define DAT_00584604 (*(uint *)0x00584604)
#define DAT_00584d54 (*(HWND *)0x00584d54)
#define DAT_005851a0 (*(int *)0x005851a0)
#define DAT_005aa64c (*(undefined *)0x005aa64c)
#define DAT_005aeef4 (*(undefined4 *)0x005aeef4)
#define DAT_005af150 (*(undefined4 *)0x005af150)
#define DAT_005af154 (*(undefined4 *)0x005af154)
#define DAT_005af194 (*(undefined *)0x005af194)
#define DAT_005b0770 (*(undefined4 *)0x005b0770)
#define DAT_005b24f4 (*(undefined4 *)0x005b24f4)
#define DAT_005b4278 (*(undefined4 *)0x005b4278)
#define DAT_005b5ffc (*(undefined4 *)0x005b5ffc)
#define DAT_005cc9d4 (*(undefined4 *)0x005cc9d4)
#define DAT_005cd2c4 (*(undefined *)0x005cd2c4)
#define DAT_005d1e84 (*(int *)0x005d1e84)
#define DrawTextA (*(__typeof__(int (__stdcall *)(HDC, LPCSTR, int, LPRECT, UINT)) *)0x0054d288) /* USER32.DLL!DrawTextA via IAT */
#define FUN_0048c2b0 ((int (__fastcall *)(int))0x0048c2b0)
#define FUN_0048c960 ((uint (__fastcall *)(int))0x0048c960)
#define FUN_004b1db0 ((undefined * (__thiscall *)(void *, undefined1))0x004b1db0)
#define FUN_004b6030 ((undefined4 (__stdcall *)(int))0x004b6030)
#define FUN_004b7dd0 ((undefined4 (__fastcall *)(int))0x004b7dd0)
#define FUN_004c4cf0 ((undefined4 (__fastcall *)(void *))0x004c4cf0)
#define FUN_004c4d00 ((int (__fastcall *)(int *))0x004c4d00)
#define FUN_004c4d30 ((undefined4 (__thiscall *)(void *, undefined4))0x004c4d30)
#define FUN_005262b0 ((undefined4 (__fastcall *)(undefined4 *))0x005262b0)
#define FUN_0053a090 ((int (__cdecl *)(undefined1 *, ...))0x0053a090)
#define GetDC (*(__typeof__(HDC (__stdcall *)(HWND)) *)0x0054d27c) /* USER32.DLL!GetDC via IAT */
#define Ordinal_109 ((undefined4 (__stdcall *)(undefined4, undefined4, undefined4))0x005338ac) /* thunk -> STORM.DLL!Ordinal_109 */
#define ReleaseDC (*(__typeof__(int (__stdcall *)(HWND, HDC)) *)0x0054d2dc) /* USER32.DLL!ReleaseDC via IAT */
#define s_GS_Checksum__d__numcomputers__d_t_0055c048 (*(char (*)[])0x0055c048)
#define s_Timer_stopped_for__d_ticks_0055c314 (*(char (*)[])0x0055c314)
#define s_gameseed__d_random_count__d_late_0055c1d8 (*(char (*)[])0x0055c1d8)
#define timeGetTime (*(__typeof__(DWORD (__stdcall *)(void)) *)0x0054d33c) /* WINMM.DLL!timeGetTime via IAT */

#define LOM_SELF_0048d000 1
void __stdcall rb_0048d000(void)

{
  char cVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  HDC pHVar7;
  undefined4 uVar8;
  int iVar9;
  uint *puVar10;
  char *pcVar11;
  undefined *puVar12;
  DWORD DVar13;
  LONG LVar14;
  undefined4 uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  char *pcVar21;
  char *pcVar22;
  tagRECT *ptVar23;
  uchar _fr[0x4f0] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef undefined * _t_local_4e8;
  typedef tagRECT _t_local_4e0;
  typedef HDC _t_local_4d0;
  typedef undefined4 _t_local_4cc;
  typedef undefined4 _t_local_4c8;
  typedef undefined4 _t_local_4c4;
  typedef tagRECT _t_tStack_4c0;
  typedef char _t_acStack_4b0[100];
  typedef char _t_acStack_44c[100];
  typedef char _t_acStack_3e8[1000];
#define local_4e8 (*(_t_local_4e8 *)(_fr + 0x0))
#define local_4e0 (*(_t_local_4e0 *)(_fr + 0x8))
#define local_4d0 (*(_t_local_4d0 *)(_fr + 0x18))
#define local_4cc (*(_t_local_4cc *)(_fr + 0x1c))
#define local_4c8 (*(_t_local_4c8 *)(_fr + 0x20))
#define local_4c4 (*(_t_local_4c4 *)(_fr + 0x24))
#define tStack_4c0 (*(_t_tStack_4c0 *)(_fr + 0x28))
#define acStack_4b0 (*(_t_acStack_4b0 *)(_fr + 0x38))
#define acStack_44c (*(_t_acStack_44c *)(_fr + 0x9c))
#define acStack_3e8 (*(_t_acStack_3e8 *)(_fr + 0x100))
  
  if (DAT_005835ec != 0) {
    if (((DAT_005851a0 == 0) && (DAT_0055b574 != 0xffffffff)) && (DAT_0055b574 != DAT_00583560)) {
      pHVar7 = GetDC(DAT_00584d54);
      local_4e0.right = 0x154;
      local_4e0.left = 0x32;
      local_4e0.top = 0x32;
      local_4e0.bottom = 0x46;
      FUN_0053a090(&DAT_00583ff8,s_Timer_stopped_for__d_ticks_0055c314,DAT_0055b574 - DAT_00583560);
      uVar16 = 0xffffffff;
      pcVar11 = &DAT_00583ff8;
      do {
        if (uVar16 == 0) break;
        uVar16 = uVar16 - 1;
        cVar1 = *pcVar11;
        pcVar11 = pcVar11 + 1;
      } while (cVar1 != '\0');
      DrawTextA(pHVar7,&DAT_00583ff8,~uVar16 - 1,&local_4e0,0);
      ReleaseDC(DAT_00584d54,pHVar7);
    }
    local_4d0 = GetDC(DAT_00584d54);
    iVar20 = 0;
    iVar19 = 0;
    uVar8 = FUN_005262b0((undefined4 *)&DAT_005cd2c4);
    local_4e8 = (undefined *)FUN_004c4d00((int *)&DAT_005cd2c4);
    if (0 < (int)local_4e8) {
      do {
        iVar9 = FUN_004c4cf0(&DAT_005cd2c4);
        puVar10 = (uint *)FUN_0048c2b0(iVar9);
        if (puVar10 != (uint *)0x0) {
          if ((*puVar10 < DAT_00583560) && (*puVar10 != 0xfffffffe)) {
            iVar19 = iVar19 + 1;
          }
          uVar16 = FUN_0048c960(iVar9);
          if (uVar16 == 0) {
            iVar20 = iVar20 + 1;
          }
        }
        local_4e8 = (undefined *)((int)local_4e8 + -1);
      } while (local_4e8 != (undefined *)0x0);
    }
    FUN_004c4d30(&DAT_005cd2c4,uVar8);
    Ordinal_109(&local_4c4,&local_4c8,&local_4cc);
    pcVar11 = FUN_004b1db0(&DAT_005aa64c,9);
    cVar1 = *pcVar11;
    puVar12 = FUN_004b1db0(&DAT_005aa64c,9);
    cVar2 = puVar12[4];
    uVar16 = DAT_00583564;
    if (DAT_00583564 < 2) {
      uVar16 = 1;
    }
    DVar13 = timeGetTime();
    FUN_0053a090(acStack_3e8,s_gameseed__d_random_count__d_late_0055c1d8,DAT_00573428,0,DAT_0055b578
                 ,DAT_0058358c,DAT_00583588,DAT_00583550,(DVar13 - DAT_0058355c) / uVar16,
                 (int)cVar2 * (int)cVar1,DAT_00583574,DAT_00583560,DAT_0055b574,DAT_0058356c,
                 DAT_0058357c,DAT_005835dc,iVar20,iVar19,0,DAT_005aeef4,DAT_005af150,DAT_005af154);
    tStack_4c0.left = 0x96;
    tStack_4c0.top = 0x96;
    uVar16 = 0xffffffff;
    pcVar11 = acStack_3e8;
    do {
      if (uVar16 == 0) break;
      uVar16 = uVar16 - 1;
      cVar1 = *pcVar11;
      pcVar11 = pcVar11 + 1;
    } while (cVar1 != '\0');
    tStack_4c0.right = 0x280;
    tStack_4c0.bottom = 0x1e0;
    DrawTextA(local_4d0,acStack_3e8,~uVar16 - 1,&tStack_4c0,0);
    uVar16 = 0;
    acStack_4b0[0] = '\0';
    local_4e8 = &DAT_005af194;
    iVar19 = 0;
    do {
      if ((iVar19 < 0) || (puVar12 = local_4e8, 0x1d83f < iVar19)) {
        puVar12 = (undefined *)0x0;
      }
      iVar20 = *(int *)(puVar12 + 0x15dc);
      if (DAT_005d1e84 == 0) {
        iVar9 = 1;
      }
      else {
        iVar9 = FUN_004b7dd0(DAT_005d1e84);
      }
      if (iVar20 == iVar9) {
        FUN_0053a090(acStack_44c,&DAT_0055c1d4,uVar16);
        uVar17 = 0xffffffff;
        pcVar11 = acStack_44c;
        do {
          pcVar22 = pcVar11;
          if (uVar17 == 0) break;
          uVar17 = uVar17 - 1;
          pcVar22 = pcVar11 + 1;
          cVar1 = *pcVar11;
          pcVar11 = pcVar22;
        } while (cVar1 != '\0');
        uVar17 = ~uVar17;
        iVar20 = -1;
        pcVar11 = acStack_4b0;
        do {
          pcVar21 = pcVar11;
          if (iVar20 == 0) break;
          iVar20 = iVar20 + -1;
          pcVar21 = pcVar11 + 1;
          cVar1 = *pcVar11;
          pcVar11 = pcVar21;
        } while (cVar1 != '\0');
        pcVar11 = pcVar22 + -uVar17;
        pcVar22 = pcVar21 + -1;
        for (uVar18 = uVar17 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
          *(undefined4 *)pcVar22 = *(undefined4 *)pcVar11;
          pcVar11 = pcVar11 + 4;
          pcVar22 = pcVar22 + 4;
        }
        for (uVar17 = uVar17 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
          *pcVar22 = *pcVar11;
          pcVar11 = pcVar11 + 1;
          pcVar22 = pcVar22 + 1;
        }
      }
      iVar19 = iVar19 + 0x1d84;
      uVar16 = uVar16 + 1;
      local_4e8 = local_4e8 + 0x1d84;
    } while (iVar19 < 0x1d840);
    iVar19 = 0;
    local_4e0.left = -1;
    local_4e0.top = -1;
    local_4e0.right = -1;
    local_4e0.bottom = -1;
    ptVar23 = &local_4e0;
    do {
      LVar14 = FUN_004b6030(iVar19);
      uVar6 = DAT_005cc9d4;
      uVar5 = DAT_005b5ffc;
      uVar4 = DAT_005b4278;
      uVar3 = DAT_005b24f4;
      uVar8 = DAT_005b0770;
      ptVar23->left = LVar14;
      iVar19 = iVar19 + 1;
      ptVar23 = (tagRECT *)&ptVar23->top;
    } while (iVar19 < 4);
    if (DAT_005d1e84 == 0) {
      uVar15 = 1;
    }
    else {
      uVar15 = FUN_004b7dd0(DAT_005d1e84);
    }
    if ((DAT_005d1e84 == 0) || (iVar19 = *(int *)(DAT_005d1e84 + 0x100), iVar19 < 1)) {
      iVar19 = 1;
    }
    FUN_0053a090(acStack_3e8,s_GS_Checksum__d__numcomputers__d_t_0055c048,DAT_00584604,iVar19,uVar15
                 ,acStack_4b0,uVar8,uVar3,uVar4,uVar5,DAT_005732fc,DAT_005732f8,DAT_005732f4,
                 local_4e0.left,local_4e0.top,local_4e0.right,local_4e0.bottom,uVar6,local_4cc,
                 local_4c4,local_4c8);
    pHVar7 = local_4d0;
    uVar16 = 0xffffffff;
    pcVar11 = acStack_3e8;
    do {
      if (uVar16 == 0) break;
      uVar16 = uVar16 - 1;
      cVar1 = *pcVar11;
      pcVar11 = pcVar11 + 1;
    } while (cVar1 != '\0');
    tStack_4c0.left = 0x15e;
    DrawTextA(local_4d0,acStack_3e8,~uVar16 - 1,&tStack_4c0,0);
    ReleaseDC(DAT_00584d54,pHVar7);
  }
  return;
#undef local_4e8
#undef local_4e0
#undef local_4d0
#undef local_4cc
#undef local_4c8
#undef local_4c4
#undef tStack_4c0
#undef acStack_4b0
#undef acStack_44c
#undef acStack_3e8
}
