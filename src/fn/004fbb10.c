/* Rebuilt from lomse.exe FUN_004fbb10 @ 0x004fbb10 (277 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_0055d648 (*(int *)0x0055d648)
#define DAT_005a9ddc (*(undefined4 *)0x005a9ddc)
#define DAT_005a9de0 (*(undefined4 *)0x005a9de0)
#define FUN_004ba1c0 ((undefined4 (__thiscall *)(void *, int))0x004ba1c0)
#define FUN_004f5a90 ((undefined4 (__thiscall *)(void *, int))0x004f5a90)
#define FUN_004f5b30 ((undefined4 (__thiscall *)(void *, uint))0x004f5b30)
#define FUN_004f5b70 ((undefined4 (__thiscall *)(void *, int))0x004f5b70)
#define FUN_004f5cb0 ((int (__thiscall *)(void *, int))0x004f5cb0)
#define FUN_004f62f0 ((undefined4 (__fastcall *)(int))0x004f62f0)
#define GetCursorPos (*(__typeof__(BOOL (__stdcall *)(LPPOINT)) *)0x0054d290) /* USER32.DLL!GetCursorPos via IAT */

#define LOM_SELF_004fbb10 1
undefined4 __thiscall rb_004fbb10(void *this,undefined4 param_1,int param_2)

{
  int iVar1;
  byte *pbVar2;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef tagPOINT _t_tStack_8;
#define tStack_8 (*(_t_tStack_8 *)(_fr + 0x0))
  
  FUN_004f5cb0(this,param_2);
  iVar1 = 0;
  if (*(int *)((int)this + 0x24) < 1) {
    return 0;
  }
  pbVar2 = (byte *)(*(int *)((int)this + 0x1c) + 0x30);
  do {
    if ((*pbVar2 & 2) != 0) {
      iVar1 = iVar1 * 0x58;
      FUN_004ba1c0((void *)(*(int *)((int)this + 0x1c) + iVar1),1);
      *(undefined4 *)(*(int *)((int)this + 0x1c) + 0x1c + iVar1) = param_1;
      FUN_004f5a90((void *)(*(int *)((int)this + 0x1c) + iVar1),DAT_0055d648);
      FUN_004f5b30((void *)(*(int *)((int)this + 0x1c) + iVar1),4);
      *(undefined4 *)(*(int *)((int)this + 0x1c) + 0x44 + iVar1) = 4;
      ((undefined4 (__thiscall *)(void *))(**(code **)(*(int *)(*(int *)((int)this + 0x1c) + iVar1) + 0x1c)))((void *)(*(int *)((int)this + 0x1c) + iVar1)); /* ECX = object (lea ecx,[eax+esi]) */
      FUN_004f5b70((void *)(*(int *)((int)this + 0x1c) + iVar1),0);
      ((undefined4 (__thiscall *)(void *))(**(code **)(*(int *)(*(int *)((int)this + 0x1c) + iVar1) + 0x1c)))((void *)(*(int *)((int)this + 0x1c) + iVar1)); /* ECX = object (lea ecx,[eax+esi]) */
      *(int *)(*(int *)((int)this + 0x1c) + 0x4c + iVar1) = param_2;
      *(undefined4 *)(*(int *)((int)this + 0x1c) + 0x48 + iVar1) = DAT_005a9de0;
      *(undefined4 *)(*(int *)((int)this + 0x1c) + 0x50 + iVar1) = 1;
      GetCursorPos(&tStack_8);
      *(LONG *)(*(int *)((int)this + 0x1c) + 0xc + iVar1) = tStack_8.x;
      *(LONG *)(*(int *)((int)this + 0x1c) + 0x10 + iVar1) = tStack_8.y;
      DAT_005a9ddc = 1;
      FUN_004f62f0((int)this);
      return 1;
    }
    iVar1 = iVar1 + 1;
    pbVar2 = pbVar2 + 0x58;
  } while (iVar1 < *(int *)((int)this + 0x24));
  return 0;
#undef tStack_8
}
