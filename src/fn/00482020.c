/* Rebuilt from lomse.exe FUN_00482020 @ 0x00482020 (352 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00583ff8 (*(undefined1 *)0x00583ff8)
#define DAT_00584d54 (*(HWND *)0x00584d54)
#define DAT_005a7d8c (*(int *)0x005a7d8c)
#define DAT_005a7d90 (*(undefined *)0x005a7d90)
#define DAT_005d1e84 (*(int *)0x005d1e84)
#define DAT_005d1f24 (*(int *)0x005d1f24)
#define DrawTextA (*(__typeof__(int (__stdcall *)(HDC, LPCSTR, int, LPRECT, UINT)) *)0x0054d288) /* USER32.DLL!DrawTextA via IAT */
#define FUN_00480060 ((undefined4 (__stdcall *)(undefined4))0x00480060)
#define FUN_0048c420 ((int (__cdecl *)(uint))0x0048c420)
#define FUN_004b1d40 ((undefined4 (__fastcall *)(void *))0x004b1d40)
#define FUN_004b7dd0 ((undefined4 (__fastcall *)(int))0x004b7dd0)
#define FUN_004ffed0 ((undefined4 (__fastcall *)(int))0x004ffed0)
#define FUN_0053a090 ((int (__cdecl *)(undefined1 *, ...))0x0053a090)
#define GetDC (*(__typeof__(HDC (__stdcall *)(HWND)) *)0x0054d27c) /* USER32.DLL!GetDC via IAT */
#define s_Time_left____d_Seconds_0055b230 (*(char (*)[])0x0055b230)
#define timeGetTime (*(__typeof__(DWORD (__stdcall *)(void)) *)0x0054d33c) /* WINMM.DLL!timeGetTime via IAT */

#define LOM_SELF_00482020 1
void __fastcall rb_00482020(int param_1)

{
  char cVar1;
  DWORD DVar2;
  int iVar3;
  int iVar4;
  HDC hdc;
  uint uVar5;
  char *pcVar6;
  uchar _fr[0x18] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef tagRECT _t_local_10;
#define local_10 (*(_t_local_10 *)(_fr + 0x0))
  
  DVar2 = timeGetTime();
  iVar3 = DVar2 - *(int *)(param_1 + 0x5058);
  if ((iVar3 != 0) &&
     ((*(int *)(param_1 + 0x5058) = *(int *)(param_1 + 0x5058) + iVar3,
      *(int *)(param_1 + 0x5060) != 0 || (DAT_005d1f24 != 0)))) {
    *(int *)(param_1 + 0x505c) = *(int *)(param_1 + 0x505c) + iVar3;
  }
  iVar3 = FUN_004b1d40((void *)(param_1 + 0x520));
  uVar5 = (uint)(iVar3 + (*(int *)(param_1 + 0x505c) - *(int *)(param_1 + 0x5058))) / 1000;
  if (uVar5 == 0) {
    iVar3 = *(int *)(param_1 + 0x228a8);
    if ((iVar3 < 0) || (0xf < iVar3)) {
      iVar3 = 0;
    }
    else {
      iVar3 = param_1 + 0x5068 + iVar3 * 0x1d84;
    }
    iVar3 = *(int *)(iVar3 + 0x15dc);
    if (DAT_005d1e84 == 0) {
      iVar4 = 1;
    }
    else {
      iVar4 = FUN_004b7dd0(DAT_005d1e84);
    }
    if (iVar3 == iVar4) {
      iVar3 = FUN_0048c420(0x18);
      if (iVar3 == 0) {
        FUN_004ffed0(0x584ae8);
        FUN_00480060(*(undefined4 *)(param_1 + 0x228a8));
      }
    }
  }
  if ((uVar5 < 0x1f) &&
     (*(int *)(&DAT_005a7d90 + DAT_005a7d8c * 0x400) == *(int *)(param_1 + 0x228a8))) {
    hdc = GetDC(DAT_00584d54);
    local_10.left = 0x32;
    local_10.right = 300;
    local_10.top = 0x1e;
    local_10.bottom = 0x50;
    FUN_0053a090(&DAT_00583ff8,s_Time_left____d_Seconds_0055b230,uVar5);
    uVar5 = 0xffffffff;
    pcVar6 = &DAT_00583ff8;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    DrawTextA(hdc,&DAT_00583ff8,~uVar5 - 1,&local_10,0);
  }
  return;
#undef local_10
}
