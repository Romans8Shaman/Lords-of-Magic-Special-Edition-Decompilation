/* Rebuilt from lomse.exe FUN_00495b00 @ 0x00495b00 (247 bytes, __thiscall).
 * HAND (2026-11-13): gen.py REJECT extraout_. FUN_00474e70 only uses param_4 & 0xffff, so the
 * leftover high half of the push-ecx after `mov cx, [src]` is ignored. FUN_004756f0 is called
 * with 2 cdecl args (HRESULT + message string); add esp,8 in the original. The `neg/sbb/neg`
 * epilogue returns (FUN_004756f0(...) != 0). */
#include "lom.h"

#define FUN_00474e70 ((uint (__thiscall *)(void *, uint *, uint *, uint *, uint))0x00474e70)
#define FUN_004756f0 ((undefined4 (__cdecl *)(int, char *))0x004756f0)
#define GetDC (*(__typeof__(HDC (__stdcall *)(HWND)) *)0x0054d27c)
#define ReleaseDC (*(__typeof__(int (__stdcall *)(HWND, HDC)) *)0x0054d2dc)
#define GetSystemPaletteEntries (*(__typeof__(UINT (__stdcall *)(HDC, UINT, UINT, LPPALETTEENTRY)) *)0x0054d034)
#define s_DDOBJECT_CreatePalette_0055c698 ((char *)0x0055c698)

#define LOM_SELF_00495b00 1
bool __thiscall rb_00495b00(void *this, int param_1)
{
  HDC hdc;
  undefined1 *puVar1;
  int iVar2;
  uint r, g, b;
  int *dd;
  undefined4 ok;
  LPPALETTEENTRY local_4;

  hdc = GetDC(*(HWND *)((int)this + 0x26c));
  local_4 = (LPPALETTEENTRY)((int)this + 0x280);
  GetSystemPaletteEntries(hdc, 0, 10, local_4);
  GetSystemPaletteEntries(hdc, 0xf6, 10, (LPPALETTEENTRY)((int)this + 0x658));
  ReleaseDC(*(HWND *)((int)this + 0x26c), hdc);
  puVar1 = (undefined1 *)((int)this + 0x65b);
  iVar2 = 10;
  do {
    puVar1[-0x3d8] = 0x40;
    *puVar1 = 0x40;
    puVar1 = puVar1 + 4;
    iVar2 = iVar2 - 1;
  } while (iVar2 != 0);
  iVar2 = 0x14;
  puVar1 = (undefined1 *)((int)this + 0x2a9);
  do {
    FUN_00474e70(this, &r, &g, &b, (uint)*(ushort *)(*(int *)(param_1 + 0x10) + iVar2));
    iVar2 = iVar2 + 2;
    puVar1[-1] = (undefined1)r;
    *puVar1 = (undefined1)g;
    puVar1[1] = (undefined1)b;
    puVar1[2] = 0x40;
    puVar1 = puVar1 + 4;
  } while (iVar2 < 0x1ec);
  dd = *(int **)((int)this + 0x680);
  iVar2 = ((int (__stdcall *)(int *, int, LPPALETTEENTRY, undefined1 *, int))(*(int *)(*dd + 0x14)))
            (dd, 4, local_4, (undefined1 *)((int)this + 0x698), 0);
  ok = FUN_004756f0(iVar2, s_DDOBJECT_CreatePalette_0055c698);
  return ok != 0;
}
