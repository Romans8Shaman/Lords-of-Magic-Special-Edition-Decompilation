/* Rebuilt from lomse.exe FUN_004ffa80 @ 0x004ffa80 (522 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00583558 (*(int *)0x00583558)
#define DAT_005d2ca0 (*(int *)0x005d2ca0)
#define DispatchMessageA (*(__typeof__(LRESULT (__stdcall *)(MSG *)) *)0x0054d330) /* USER32.DLL!DispatchMessageA via IAT */
#define FUN_004739e0 ((undefined4 (__fastcall *)(int))0x004739e0)
#define FUN_00482230 ((uint (__fastcall *)(void *))0x00482230)
#define FUN_0048a1b0 ((undefined4 (__fastcall *)(void *))0x0048a1b0)
#define FUN_0048a510 ((undefined4 (__stdcall *)(void))0x0048a510)
#define FUN_004b2fb0 ((undefined4 (__fastcall *)(undefined4 *))0x004b2fb0)
#define FUN_004b40b0 ((undefined4 (__thiscall *)(void *, int))0x004b40b0)
#define FUN_004b4200 ((undefined4 (__fastcall *)(int))0x004b4200)
#define FUN_004b6e80 ((undefined4 (__cdecl *)(int))0x004b6e80)
#define FUN_004fe1b0 ((undefined4 (__fastcall *)(int))0x004fe1b0)
#define FUN_004ffdd0 ((int (__fastcall *)(int))0x004ffdd0)
#define FUN_004fffc0 ((undefined4 (__thiscall *)(void *, uint))0x004fffc0)
#define FUN_00530f00 ((undefined4 (__fastcall *)(int *))0x00530f00)
#define FUN_00531030 ((undefined4 (__fastcall *)(undefined4 *))0x00531030)
#define GetTickCount (*(__typeof__(DWORD (__stdcall *)(void)) *)0x0054d0e8) /* KERNEL32.DLL!GetTickCount via IAT */
#define IsDialogMessageA (*(__typeof__(BOOL (__stdcall *)(HWND, LPMSG)) *)0x0054d2fc) /* USER32.DLL!IsDialogMessageA via IAT */
#define Ordinal_32 (*(__typeof__(undefined4 (__stdcall *)(undefined4)) *)0x0054d354) /* SMACKW32.DLL!Ordinal_32 via IAT */
#define OutputDebugStringA (*(__typeof__(void (__stdcall *)(LPCSTR)) *)0x0054d0f8) /* KERNEL32.DLL!OutputDebugStringA via IAT */
#define PeekMessageA (*(__typeof__(BOOL (__stdcall *)(LPMSG, HWND, UINT, UINT, UINT)) *)0x0054d284) /* USER32.DLL!PeekMessageA via IAT */
#define TranslateAcceleratorA (*(__typeof__(int (__stdcall *)(HWND, HACCEL, LPMSG)) *)0x0054d2f8) /* USER32.DLL!TranslateAcceleratorA via IAT */
#define TranslateMessage (*(__typeof__(BOOL (__stdcall *)(MSG *)) *)0x0054d31c) /* USER32.DLL!TranslateMessage via IAT */
#define s_Received_WM_QUIT_005735a8 (*(char (*)[])0x005735a8)

#define LOM_SELF_004ffa80 1
void __fastcall rb_004ffa80(void *param_1)

{
  DWORD DVar1;
  uint uVar2;
  int iVar3;
  BOOL BVar4;
  int *piVar5;
  uchar _fr[0x28] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef tagMSG _t_tStack_1c;
#define tStack_1c (*(_t_tStack_1c *)(_fr + 0x4))
  
  if (*(int *)((int)param_1 + 0x1cdc) == 0) {
    FUN_00482230((void *)((int)param_1 + 0x25644));
    if (DAT_005d2ca0 != 0) {
      return;
    }
    FUN_004b6e80(DAT_00583558);
  }
  if (DAT_005d2ca0 == 0) {
    if ((*(int *)((int)param_1 + 0x25634) != 0) &&
       (DVar1 = GetTickCount(), *(uint *)((int)param_1 + 0x25634) <= DVar1)) {
      uVar2 = FUN_004ffdd0((int)param_1);
      FUN_004fffc0(param_1,uVar2);
    }
    if (*(int *)((int)param_1 + 0x1cdc) != 0) {
      piVar5 = (int *)((int)param_1 + 0x1cd8);
      FUN_00530f00(piVar5);
      iVar3 = Ordinal_32(*piVar5);
      while (iVar3 != 0) {
        iVar3 = Ordinal_32(*piVar5);
      }
      if (*(int *)(*piVar5 + 0x374) == *(int *)(*piVar5 + 0xc) + -1) {
        FUN_00531030(piVar5);
      }
    }
    if ((*(int *)((int)param_1 + 0x1904) != 0) && (*(int *)((int)param_1 + 0x18fc) == 1)) {
      if (*(int *)(*(int *)((int)param_1 + 0x232a4) * 0x400 + 0x23590 + (int)param_1) == 2) {
        FUN_004b40b0((void *)((int)param_1 + 0x920),*(int *)((int)param_1 + 0x232a4));
      }
      else {
        FUN_004b4200((int)param_1 + 0x920);
      }
    }
    if ((*(int *)((int)param_1 + 0x25354) == 1) || (*(int *)((int)param_1 + 0x25354) == 2)) {
      FUN_004739e0((int)param_1 + 0x2531c);
    }
    if (*(int *)((int)param_1 + 0x22ecc) != 0) {
      FUN_004fe1b0((int)param_1);
    }
    piVar5 = (int *)((int)param_1 + 0x257e4);
    iVar3 = 4;
    do {
      if (*piVar5 != 0) {
        FUN_004b2fb0(piVar5);
      }
      piVar5 = piVar5 + 0x32;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    if (*(int *)((int)param_1 + 0x25630) < 1) {
      FUN_0048a1b0(param_1);
      if (DAT_005d2ca0 != 0) {
        return;
      }
    }
    else {
      FUN_0048a510();
    }
    iVar3 = PeekMessageA(&tStack_1c,(HWND)0x0,0,0,1);
    while (iVar3 != 0) {
      iVar3 = TranslateAcceleratorA
                        (*(HWND *)((int)param_1 + 0x26c),*(HACCEL *)((int)param_1 + 0x274),
                         &tStack_1c);
      if (iVar3 == 0) {
        if (tStack_1c.message == 0x12) {
          OutputDebugStringA(s_Received_WM_QUIT_005735a8);
          DAT_005d2ca0 = 1;
        }
        if ((*(HWND *)((int)param_1 + 0x270) == (HWND)0x0) ||
           (BVar4 = IsDialogMessageA(*(HWND *)((int)param_1 + 0x270),&tStack_1c), BVar4 == 0)) {
          TranslateMessage(&tStack_1c);
          DispatchMessageA(&tStack_1c);
        }
      }
      iVar3 = PeekMessageA(&tStack_1c,(HWND)0x0,0,0,1);
    }
  }
  return;
#undef tStack_1c
}
