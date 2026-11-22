/* Rebuilt from lomse.exe FUN_00531120 @ 0x00531120 (460 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00584ae8 (*(undefined *)0x00584ae8)
#define DAT_005867c0 (*(undefined4 *)0x005867c0)
#define FUN_004750b0 ((undefined4 (__thiscall *)(void *, int, undefined4, undefined4, int))0x004750b0)
#define FUN_004fe670 ((LPCSTR (__thiscall *)(void *, LPCSTR))0x004fe670)
#define FUN_00530f00 ((undefined4 (__fastcall *)(int *))0x00530f00)
#define FUN_00531030 ((undefined4 (__fastcall *)(undefined4 *))0x00531030)
#define FUN_00531930 ((undefined4 (__thiscall *)(void *))0x00531930)
#define FUN_0053c1f0 ((undefined4 (__cdecl *)(uint))0x0053c1f0)
#define Ordinal_14 (*(__typeof__(undefined4 (__stdcall *)(undefined4, undefined4, undefined4)) *)0x0054d370) /* SMACKW32.DLL!Ordinal_14 via IAT */
#define Ordinal_17 (*(__typeof__(undefined4 (__stdcall *)(undefined4, undefined4)) *)0x0054d36c) /* SMACKW32.DLL!Ordinal_17 via IAT */
#define Ordinal_19 (*(__typeof__(undefined4 (__stdcall *)(undefined4)) *)0x0054d360) /* SMACKW32.DLL!Ordinal_19 via IAT */
#define Ordinal_21 (*(__typeof__(undefined4 (__stdcall *)(undefined4)) *)0x0054d358) /* SMACKW32.DLL!Ordinal_21 via IAT */
#define Ordinal_23 (*(__typeof__(undefined4 (__stdcall *)(undefined4, undefined4, undefined4, undefined4, undefined4, undefined4, undefined4)) *)0x0054d368) /* SMACKW32.DLL!Ordinal_23 via IAT */
#define Ordinal_32 (*(__typeof__(undefined4 (__stdcall *)(undefined4)) *)0x0054d354) /* SMACKW32.DLL!Ordinal_32 via IAT */
#define PeekMessageA (*(__typeof__(BOOL (__stdcall *)(LPMSG, HWND, UINT, UINT, UINT)) *)0x0054d284) /* USER32.DLL!PeekMessageA via IAT */

#define LOM_SELF_00531120 1
undefined4 __thiscall rb_00531120(void *this,LPCSTR unused_stack_4,int in_stack_8)

{
  LPCSTR arg1;
  int iVar1;
  undefined4 uVar2;
  uchar _fr[0x28] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef tagMSG _t_tStack_1c;
#define tStack_1c (*(_t_tStack_1c *)(_fr + 0x4))
  
  if (*(int *)((int)this + 4) != 0) {
    FUN_00531030(this);
  }
  if (*(int *)((int)this + 0x224) == 0) {
    FUN_004750b0(&DAT_00584ae8,4,0x280,0x1e0,0x10);
  }
  arg1 = FUN_004fe670(&DAT_00584ae8,unused_stack_4);
  iVar1 = Ordinal_14(arg1,0xfe000,0xffffffff);
  *(int *)this = iVar1;
  if (iVar1 == 0) {
    return 0;
  }
  FUN_00531930(this);
  uVar2 = FUN_0053c1f0(*(int *)(*(int *)this + 4) * *(int *)(*(int *)this + 8));
  *(undefined4 *)((int)this + 8) = uVar2;
  iVar1 = *(int *)this;
  *(int *)((int)this + 0x210) = *(int *)((int)this + 0x220);
  *(int *)((int)this + 0x20c) = *(int *)((int)this + 0x21c);
  *(int *)((int)this + 0x218) = *(int *)(iVar1 + 8) + *(int *)((int)this + 0x220);
  *(int *)((int)this + 0x214) = *(int *)(iVar1 + 4) + *(int *)((int)this + 0x21c);
  Ordinal_17(iVar1,1);
  iVar1 = *(int *)this;
  *(undefined4 *)((int)this + 4) = 1;
  Ordinal_23(iVar1,0,0,*(undefined4 *)(iVar1 + 4),*(undefined4 *)(iVar1 + 8),
             *(undefined4 *)((int)this + 8),0);
  Ordinal_19(*(undefined4 *)this);
  Ordinal_21(*(undefined4 *)this);
  if (in_stack_8 == 1) {
    iVar1 = *(int *)((int)this + 4);
    while (iVar1 != 0) {
      FUN_00530f00(&DAT_005867c0);
      iVar1 = Ordinal_32(DAT_005867c0);
      while (iVar1 != 0) {
        iVar1 = Ordinal_32(DAT_005867c0);
      }
      if (*(int *)(DAT_005867c0 + 0x374) == *(int *)(DAT_005867c0 + 0xc) + -1) {
        FUN_00531030(&DAT_005867c0);
      }
      PeekMessageA(&tStack_1c,(HWND)0x0,0x100,0x108,1);
      if (tStack_1c.message == 0x100) {
        FUN_00531030(&DAT_005867c0);
      }
      PeekMessageA(&tStack_1c,(HWND)0x0,0x200,0x209,1);
      if (tStack_1c.message == 0x202) {
        FUN_00531030(&DAT_005867c0);
      }
      if (tStack_1c.message == 0x205) {
        FUN_00531030(&DAT_005867c0);
      }
      iVar1 = *(int *)((int)this + 4);
    }
  }
  return 1;
#undef tStack_1c
}
