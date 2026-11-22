/* Rebuilt from lomse.exe FUN_0047b920 @ 0x0047b920 (530 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005832fc (*(int *)0x005832fc)
#define FUN_0047fde0 ((undefined4 (__stdcall *)(undefined4, undefined4))0x0047fde0)
#define FUN_0047fe30 ((undefined4 (__stdcall *)(undefined4, undefined4, undefined4))0x0047fe30)
#define FUN_004a61e0 ((undefined4 (__stdcall *)(int, int))0x004a61e0)
#define FUN_00500bf0 ((undefined4 (__thiscall *)(void *, int, int))0x00500bf0)
#define ReleaseCapture (*(__typeof__(BOOL (__stdcall *)(void)) *)0x0054d2e8) /* USER32.DLL!ReleaseCapture via IAT */
#define SetCapture (*(__typeof__(HWND (__stdcall *)(HWND)) *)0x0054d2ec) /* USER32.DLL!SetCapture via IAT */

#define LOM_SELF_0047b920 1
undefined4 __thiscall rb_0047b920(void *this,undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  switch(param_1) {
  case 0x200:
    break;
  case 0x201:
    DAT_005832fc = FUN_004a61e0(param_2,param_3);
    SetCapture(*(HWND *)((int)this + 0x26c));
    iVar2 = *(int *)((int)this + 0x232a4) * 0x400;
    if (*(int *)(iVar2 + 0x232b0 + (int)this) == 0) {
      FUN_0047fde0(DAT_005832fc,*(undefined4 *)((int)this + iVar2 + 0x232ac));
      return 0;
    }
    *(float *)((int)this + iVar2 + 0x232b4) = ABS(*(float *)((int)this + iVar2 + 0x232b4));
    iVar2 = *(int *)((int)this + 0x232a4) * 0x400;
    FUN_0047fe30(DAT_005832fc,*(undefined4 *)((int)this + iVar2 + 0x232ac),
                 *(undefined4 *)(iVar2 + 0x232b4 + (int)this));
    return 0;
  case 0x202:
  case 0x205:
    ReleaseCapture();
    DAT_005832fc = -1;
  default:
    return 0;
  case 0x204:
    DAT_005832fc = FUN_004a61e0(param_2,param_3);
    SetCapture(*(HWND *)((int)this + 0x26c));
    iVar2 = *(int *)((int)this + 0x232a4);
    if (*(int *)((int)this + iVar2 * 0x400 + 0x232b0) == 0) {
      FUN_0047fde0(DAT_005832fc,*(undefined4 *)((int)this + iVar2 * 0x400 + 0x232ac));
      return 0;
    }
    *(float *)((int)this + iVar2 * 0x400 + 0x232b4) =
         -ABS(*(float *)((int)this + iVar2 * 0x400 + 0x232b4));
    iVar2 = *(int *)((int)this + 0x232a4) * 0x400;
    FUN_0047fe30(DAT_005832fc,*(undefined4 *)((int)this + iVar2 + 0x232ac),
                 *(undefined4 *)(iVar2 + 0x232b4 + (int)this));
    return 0;
  }
  if (((*(int *)((int)this + 0x252a8) != 0) || (*(int *)((int)this + 0x252c4) != 0)) &&
     (iVar2 = FUN_004a61e0(param_2,param_3), DAT_005832fc != iVar2)) {
    iVar1 = *(int *)((int)this + 0x232a4);
    DAT_005832fc = iVar2;
    if (*(int *)((int)this + iVar1 * 0x400 + 0x232b0) != 0) {
      FUN_0047fe30(iVar2,*(undefined4 *)((int)this + iVar1 * 0x400 + 0x232ac),
                   *(undefined4 *)((int)this + iVar1 * 0x400 + 0x232b4));
      FUN_00500bf0(this,param_2,param_3);
      return 0;
    }
    FUN_0047fde0(iVar2,*(undefined4 *)((int)this + iVar1 * 0x400 + 0x232ac));
  }
  FUN_00500bf0(this,param_2,param_3);
  return 0;
}
