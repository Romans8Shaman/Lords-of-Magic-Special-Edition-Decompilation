/* Rebuilt from lomse.exe FUN_0046f3f0 @ 0x0046f3f0 (825 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00557a78 (*(undefined4 *)0x00557a78)
#define DAT_00557ab8 (*(undefined *)0x00557ab8)
#define DAT_00583138 (*(undefined1 *)0x00583138)
#define DAT_005831d8 (*(int *)0x005831d8)
#define DAT_005831dc (*(undefined4 * *)0x005831dc)
#define DAT_005831e0 (*(undefined4 *)0x005831e0)
#define DAT_00584d54 (*(undefined4 *)0x00584d54)
#define DebugBreak (*(__typeof__(void (__stdcall *)(void)) *)0x0054d0c0) /* KERNEL32.DLL!DebugBreak via IAT */
#define FUN_004b6520 ((undefined4 (__stdcall *)(undefined4))0x004b6520)
#define FUN_004b7dd0 ((undefined4 (__fastcall *)(int))0x004b7dd0)
#define FUN_004b8b80 ((undefined4 (__fastcall *)(int))0x004b8b80)
#define FUN_004eab10 ((undefined4 (__fastcall *)(undefined4 *))0x004eab10)
#define FUN_004eab70 ((int (__thiscall *)(void *, undefined4, undefined4, undefined4, undefined4))0x004eab70)
#define FUN_004eacf0 ((undefined4 (__fastcall *)(undefined4 *))0x004eacf0)
#define FUN_004eb080 ((undefined4 (__fastcall *)(undefined4 *))0x004eb080)
#define FUN_004eb110 ((undefined4 (__fastcall *)(undefined4 *))0x004eb110)
#define FUN_004eb230 ((undefined4 (__fastcall *)(int))0x004eb230)
#define FUN_004eb270 ((undefined4 (__fastcall *)(int))0x004eb270)
#define FUN_004eb280 ((undefined4 (__fastcall *)(int))0x004eb280)
#define FUN_004eb290 ((undefined4 (__fastcall *)(int))0x004eb290)
#define FUN_004eb2a0 ((undefined4 (__thiscall *)(void *, char *, size_t, undefined4))0x004eb2a0)
#define FUN_0053a090 ((int (__cdecl *)(undefined1 *, ...))0x0053a090)
#define FUN_0053a8b0 ((undefined4 (__cdecl *)(byte *, byte *, byte *, byte *, byte *))0x0053a8b0)
#define GetModuleFileNameA (*(__typeof__(DWORD (__stdcall *)(HMODULE, LPSTR, DWORD)) *)0x0054d048) /* KERNEL32.DLL!GetModuleFileNameA via IAT */
#define GetModuleHandleA (*(__typeof__(HMODULE (__stdcall *)(LPCSTR)) *)0x0054d098) /* KERNEL32.DLL!GetModuleHandleA via IAT */
#define Ordinal_401 ((undefined4 (__stdcall *)(undefined4, undefined4, undefined4, undefined4))0x00533864) /* thunk -> STORM.DLL!Ordinal_401 */
#define Ordinal_403 ((undefined4 (__stdcall *)(undefined4, undefined4, undefined4, undefined4))0x0053385e) /* thunk -> STORM.DLL!Ordinal_403 */
#define OutputDebugStringA (*(__typeof__(void (__stdcall *)(LPCSTR)) *)0x0054d0f8) /* KERNEL32.DLL!OutputDebugStringA via IAT */
#define PostQuitMessage (*(__typeof__(void (__stdcall *)(int)) *)0x0054d29c) /* USER32.DLL!PostQuitMessage via IAT */
#define _strncpy ((char * (__cdecl *)(char *, char *, size_t))0x0053a220)
#define s_C__lomse_source_storm_h_00555130 (*(char (*)[])0x00555130)
#define s_InitializeSIGS___got_FAILED_TO_U_00557a7c (*(char (*)[])0x00557a7c)
#define s_LOM_SE_00557ab0 (*(char (*)[])0x00557ab0)
#define s_SIGS_Game_00557aa4 (*(char (*)[])0x00557aa4)

#define LOM_SELF_0046f3f0 1
undefined4 __fastcall rb_0046f3f0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  HMODULE pHVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  int *piVar9;
  int *piVar10;
  int *piVar11;
  undefined4 *puVar12;
  uchar _fr[0x360] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef undefined4 * _t_puStack_354;
  typedef byte _t_abStack_350[4];
  typedef int _t_local_34c;
  typedef byte _t_abStack_348[312];
  typedef undefined1 _t_auStack_210[260];
  typedef byte _t_abStack_10c[256];
#define puStack_354 (*(_t_puStack_354 *)(_fr + 0x4))
#define abStack_350 (*(_t_abStack_350 *)(_fr + 0x8))
#define local_34c (*(_t_local_34c *)(_fr + 0xc))
#define abStack_348 (*(_t_abStack_348 *)(_fr + 0x10))
#define auStack_210 (*(_t_auStack_210 *)(_fr + 0x148))
#define abStack_10c (*(_t_abStack_10c *)(_fr + 0x24c))

  local_34c = param_1;
  if (DAT_005831d8 != 0) {
    DAT_005831d8 = 0;
    FUN_004eb110(DAT_005831dc);
  }
  if (DAT_005831dc != (undefined4 *)0x0) {
    FUN_004eb110(DAT_005831dc);
    FUN_004eb080(DAT_005831dc);
    puVar2 = DAT_005831dc;
    if (DAT_005831dc != (undefined4 *)0x0) {
      FUN_004eacf0(DAT_005831dc);
      Ordinal_403(puVar2,s_C__lomse_source_storm_h_00555130,0x3eb,0);
    }
    DAT_005831dc = (undefined4 *)0x0;
  }
  puVar2 = (undefined4 *)Ordinal_401(0x78,s_C__lomse_source_storm_h_00555130,0x3ef,0);
  if (puVar2 == (undefined4 *)0x0) {
    DAT_005831dc = (undefined4 *)0x0;
  }
  else {
    DAT_005831dc = (undefined4 *)FUN_004eab10(puVar2);
  }
  if (DAT_005831dc == (undefined4 *)0x0) goto LAB_0046f681;
  GetModuleFileNameA((HMODULE)0x0,(LPSTR)abStack_348,0x104);
  pHVar3 = GetModuleHandleA((LPCSTR)abStack_348);
  if (pHVar3 == (HMODULE)0x0) {
    DebugBreak();
  }
  FUN_0053a8b0(abStack_348,abStack_350,abStack_10c,(byte *)0x0,(byte *)0x0);
  FUN_0053a090(auStack_210,&DAT_00557ab8,(uint)abStack_350,abStack_10c);
  iVar4 = FUN_004eab70(DAT_005831dc,DAT_00584d54,auStack_210,abStack_348,s_LOM_SE_00557ab0);
  if (iVar4 == -2) {
    PostQuitMessage(0);
    return 0;
  }
  if (iVar4 == -1) {
    OutputDebugStringA(s_InitializeSIGS___got_FAILED_TO_U_00557a7c);
  }
  else {
    if (iVar4 != 0) goto LAB_0046f681;
    iVar4 = FUN_004eb230((int)DAT_005831dc);
    if (iVar4 != 0) {
      *(undefined4 *)(param_1 + 0x36c) = 0;
      *(undefined4 *)(param_1 + 0xd4) = 1;
      *(undefined4 *)(param_1 + 0x390) = 1;
      *(undefined4 *)(param_1 + 0xd0) = 1;
      DAT_00557a78 = FUN_004eb290((int)DAT_005831dc);
      DAT_005831e0 = FUN_004eb270((int)DAT_005831dc);
      iVar4 = FUN_004eb270((int)DAT_005831dc);
      if (0 < iVar4) {
        puStack_354 = (undefined4 *)&DAT_00583138;
        piVar9 = (int *)(param_1 + 0x10);
        iVar5 = 0;
        do {
          iVar1 = iVar5 + 1;
          piVar9[-1] = iVar5;
          *piVar9 = iVar1;
          *(undefined4 *)((int)piVar9 + 0x1d) = 0;
          FUN_004eb2a0(DAT_005831dc,(char *)(piVar9 + 1),0x17,iVar5);
          uVar7 = 0xffffffff;
          piVar10 = piVar9 + 1;
          do {
            piVar11 = piVar10;
            if (uVar7 == 0) break;
            uVar7 = uVar7 - 1;
            piVar11 = (int *)((int)piVar10 + 1);
            iVar5 = *piVar10;
            piVar10 = piVar11;
          } while ((char)iVar5 != '\0');
          piVar9 = (int *)((int)piVar9 + 0x25);
          uVar7 = ~uVar7;
          puVar2 = (undefined4 *)((int)piVar11 - uVar7);
          puVar12 = puStack_354;
          for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
            *puVar12 = *puVar2;
            puVar2 = puVar2 + 1;
            puVar12 = puVar12 + 1;
          }
          for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
            *(undefined1 *)puVar12 = *(undefined1 *)puVar2;
            puVar2 = (undefined4 *)((int)puVar2 + 1);
            puVar12 = (undefined4 *)((int)puVar12 + 1);
          }
          iVar5 = iVar1;
          puStack_354 = puStack_354 + 10;
        } while (iVar1 < iVar4);
        param_1 = local_34c;
      }
      iVar5 = FUN_004eb290((int)DAT_005831dc);
      *(int *)(param_1 + 0x2c4) = iVar5 + 1;
      iVar5 = FUN_004eb290((int)DAT_005831dc);
      *(int *)(param_1 + 0x120) = iVar5 + 1;
      *(undefined4 *)(param_1 + 0xd0) = 1;
      *(int *)(param_1 + 0x100) = iVar4;
      FUN_004b8b80(param_1);
      iVar4 = FUN_004eb280((int)DAT_005831dc);
      if (iVar4 != 0) {
        uVar6 = FUN_004b7dd0(param_1);
        *(undefined4 *)(param_1 + 0x390) = uVar6;
      }
      goto LAB_0046f681;
    }
  }
  FUN_004eb080(DAT_005831dc);
  puVar2 = DAT_005831dc;
  if (DAT_005831dc != (undefined4 *)0x0) {
    FUN_004eacf0(DAT_005831dc);
    Ordinal_403(puVar2,s_C__lomse_source_storm_h_00555130,0x3eb,0);
  }
  DAT_005831dc = (undefined4 *)0x0;
LAB_0046f681:
  if (DAT_005831dc != (undefined4 *)0x0) {
    _strncpy((char *)(param_1 + 0xe0),s_SIGS_Game_00557aa4,0x1d);
    *(undefined1 *)(param_1 + 0xfd) = 0;
    if (DAT_005831dc != (undefined4 *)0x0) {
      FUN_004b6520(1);
      return 1;
    }
  }
  return 0;
#undef puStack_354
#undef abStack_350
#undef local_34c
#undef abStack_348
#undef auStack_210
#undef abStack_10c
}
