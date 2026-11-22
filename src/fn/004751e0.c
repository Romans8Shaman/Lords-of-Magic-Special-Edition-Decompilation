/* Rebuilt from lomse.exe FUN_004751e0 @ 0x004751e0 (371 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match.
 * v1.2: 640x480x16 exclusive DirectDraw (DDSCL_EXCLUSIVE|DDSCL_FULLSCREEN)
 * is what silent-exits on Windows 10/11 without the XP compatibility shim.
 * If SetCooperativeLevel or SetDisplayMode fails, retry DDSCL_NORMAL
 * (the already-existing windowed path when offset 0x6ac is 0).
 * v1.3: if exclusive 16-bit fails, try exclusive 640x480x32 before
 * windowed (modern DWM often allows 32-bit exclusive when 16-bit fails,
 * which keeps a fullscreen primary and avoids 16-bit GetDC/DWM text loss).
 * A windowed HWND clipper was tried and withdrawn: in Wine it produced a
 * black primary, so it is not shipped.
 * v1.5: exclusive 640x480x32 (or a 32-bpp windowed primary) left the game's
 * 16-bit blitters, 555/565 detector and Smacker writing 16-bit pixels into
 * 32-bpp surfaces (magenta/green noise, image on the left). 16-bit exclusive
 * is still tried first. If the primary is not 16-bpp, it is stashed at +0x900
 * and a 16-bit RGB565 fake primary is used; presents Blt-convert onto the
 * real primary. */
#include "lom.h"

#define DirectDrawCreate ((undefined4 (__stdcall *)(undefined4, undefined4, undefined4))0x00533840) /* thunk -> DDRAW.DLL!DirectDrawCreate */
#define FUN_00474f30 ((undefined4 (__thiscall *)(void *, int))0x00474f30)
#define FUN_004750b0 ((undefined4 (__thiscall *)(void *, int, undefined4, undefined4, int))0x004750b0)
#define FUN_004756f0 ((undefined4 (__cdecl *)(int, ...))0x004756f0)
#define s_DDOBJECT__gt_CreateSurface__ddsd__D_005586b4 (*(char (*)[])0x005586b4)
#define s_DDOBJECT__gt_SetCooperativeLevel_hW_005586ec (*(char (*)[])0x005586ec)
#define s_DDOBJECT__gt_SetCooperativeLevel_hW_0055876c (*(char (*)[])0x0055876c)
#define s_DDOBJECT__gt_SetDisplayMode_ScreenW_00558724 (*(char (*)[])0x00558724)
#define s_DirectDrawCreate_NULL__DDOBJECT__005587b8 (*(char (*)[])0x005587b8)

#define LOM_SELF_004751e0 1
undefined4 __fastcall rb_004751e0(void *param_1)

{
  int *a1;
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  char *pcVar4;
  uchar _fr[0x78] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef undefined4 _t_uStack_6c;
  typedef undefined4 _t_uStack_68;
  typedef undefined4 _t_uStack_4;
#define uStack_6c (*(_t_uStack_6c *)(_fr + 0x4))
#define uStack_68 (*(_t_uStack_68 *)(_fr + 0x8))
#define uStack_4 (*(_t_uStack_4 *)(_fr + 0x6c))
  
  iVar2 = 5;
  puVar3 = (undefined4 *)((int)param_1 + 0x680);
  puVar1 = (undefined4 *)((int)param_1 + 0x698);
  *puVar3 = 0;
  do {
    puVar1[-5] = 0;
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  pcVar4 = s_DirectDrawCreate_NULL__DDOBJECT__005587b8;
  *(undefined4 *)((int)param_1 + 0x900) = 0;
  iVar2 = DirectDrawCreate(0,puVar3,0);
  iVar2 = FUN_004756f0(iVar2,pcVar4);
  if (iVar2 == 0) {
    return 0;
  }
  a1 = (int *)*puVar3;
  if (*(int *)((int)param_1 + 0x6ac) == 0) {
    pcVar4 = s_DDOBJECT__gt_SetCooperativeLevel_hW_005586ec;
    iVar2 = ((undefined4 (__stdcall *)(__typeof__(a1), __typeof__(*(undefined4 *)((int)param_1 + 0x26c)), __typeof__(8)))(**(code **)(*a1 + 0x50)))(a1,*(undefined4 *)((int)param_1 + 0x26c),8);
    iVar2 = FUN_004756f0(iVar2,pcVar4);
  }
  else {
    pcVar4 = s_DDOBJECT__gt_SetCooperativeLevel_hW_0055876c;
    iVar2 = ((undefined4 (__stdcall *)(__typeof__(a1), __typeof__(*(undefined4 *)((int)param_1 + 0x26c)), __typeof__(0x11)))(**(code **)(*a1 + 0x50)))(a1,*(undefined4 *)((int)param_1 + 0x26c),0x11);
    iVar2 = FUN_004756f0(iVar2,pcVar4);
    if (iVar2 != 0) {
      pcVar4 = s_DDOBJECT__gt_SetDisplayMode_ScreenW_00558724;
      iVar2 = ((undefined4 (__stdcall *)(__typeof__((int *)*puVar3), __typeof__(0x280), __typeof__(0x1e0), __typeof__(0x10)))(**(code **)(*(int *)*puVar3 + 0x54)))
                        ((int *)*puVar3,0x280,0x1e0,0x10);
      iVar2 = FUN_004756f0(iVar2,pcVar4);
    }
#ifdef LOM_FORCE32
    /* Wine verification only: pretend 16-bit exclusive failed so the 32-bpp
     * conversion path is exercised. Not defined in shipped builds. */
    iVar2 = 0;
#endif
    /* v1.3: exclusive 640x480x16 failed — try exclusive 640x480x32 first. */
    if (iVar2 == 0) {
      pcVar4 = s_DDOBJECT__gt_SetCooperativeLevel_hW_0055876c;
      iVar2 = ((undefined4 (__stdcall *)(__typeof__((int *)*puVar3), __typeof__(*(undefined4 *)((int)param_1 + 0x26c)), __typeof__(0x11)))(**(code **)(*(int *)*puVar3 + 0x50)))
                        ((int *)*puVar3,*(undefined4 *)((int)param_1 + 0x26c),0x11);
      iVar2 = FUN_004756f0(iVar2,pcVar4);
      if (iVar2 != 0) {
        pcVar4 = s_DDOBJECT__gt_SetDisplayMode_ScreenW_00558724;
        iVar2 = ((undefined4 (__stdcall *)(__typeof__((int *)*puVar3), __typeof__(0x280), __typeof__(0x1e0), __typeof__(0x20)))(**(code **)(*(int *)*puVar3 + 0x54)))
                          ((int *)*puVar3,0x280,0x1e0,0x20);
        iVar2 = FUN_004756f0(iVar2,pcVar4);
      }
    }
    /* v1.2/v1.3: exclusive modes failed — use the windowed DDSCL_NORMAL path. */
    if (iVar2 == 0) {
      *(undefined4 *)((int)param_1 + 0x6ac) = 0;
      pcVar4 = s_DDOBJECT__gt_SetCooperativeLevel_hW_005586ec;
      iVar2 = ((undefined4 (__stdcall *)(__typeof__((int *)*puVar3), __typeof__(*(undefined4 *)((int)param_1 + 0x26c)), __typeof__(8)))(**(code **)(*(int *)*puVar3 + 0x50)))
                        ((int *)*puVar3,*(undefined4 *)((int)param_1 + 0x26c),8);
      iVar2 = FUN_004756f0(iVar2,pcVar4);
    }
  }
  if (iVar2 == 0) {
    return 0;
  }
  pcVar4 = s_DDOBJECT__gt_CreateSurface__ddsd__D_005586b4;
  uStack_6c = 0x6c;
  uStack_68 = 1;
  uStack_4 = 0x200;
  iVar2 = ((undefined4 (__stdcall *)(__typeof__((int *)*puVar3), __typeof__(&uStack_6c), __typeof__((int)param_1 + 0x684), __typeof__(0)))(**(code **)(*(int *)*puVar3 + 0x18)))((int *)*puVar3,&uStack_6c,(int)param_1 + 0x684,0);
  iVar2 = FUN_004756f0(iVar2,pcVar4);
  if (iVar2 == 0) {
    return 0;
  }
  /* v1.5: if the primary is not 16-bpp (Win11 exclusive 32-bpp or a 32-bpp
   * windowed desktop), stash it at +0x900 and put a 16-bit RGB565 fake
   * primary in slot 0 so blitters, 555/565 detection and Smacker stay 16-bit.
   * Present sites then Blt-convert the fake primary onto the real one. */
  {
    undefined4 v15desc[0x1b];
    int v15i;
    int v15bpp;
    for (v15i = 0; v15i < 0x1b; v15i = v15i + 1) {
      v15desc[v15i] = 0;
    }
    v15desc[0] = 0x6c;
    v15desc[1] = 0x1000;
    ((undefined4 (__stdcall *)(int *, undefined4 *))(**(code **)(**(int **)((int)param_1 + 0x684) + 0x58)))
              (*(int **)((int)param_1 + 0x684),v15desc);
    v15bpp = (int)v15desc[0x15];
    if (v15bpp != 0x10) {
      *(undefined4 *)((int)param_1 + 0x900) = *(undefined4 *)((int)param_1 + 0x684);
      *(undefined4 *)((int)param_1 + 0x684) = 0;
      if (FUN_004750b0(param_1,0,0x280,0x1e0,0x10) == 0) {
        return 0;
      }
    }
    else {
      *(undefined4 *)((int)param_1 + 0x900) = 0;
    }
  }
  puVar3 = (undefined4 *)((int)param_1 + 0x6e4);
  for (iVar2 = 0x1b; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)((int)param_1 + 0x6e4) = 0x6c;
  FUN_00474f30(param_1,0);
  FUN_004750b0(param_1,1,0x280,0x1e0,0x10);
  FUN_004750b0(param_1,2,*(int *)((int)param_1 + 0x2dd4) * 2 + 0x280,
               *(int *)((int)param_1 + 0x2dd8) * 2 + 0x180,0x10);
  return 1;
#undef uStack_6c
#undef uStack_68
#undef uStack_4
}
