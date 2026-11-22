/* Rebuilt from lomse.exe FUN_004779b0 @ 0x004779b0 (581 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00583648 (*(int *)0x00583648)
#define FUN_00477910 ((undefined4 (__thiscall *)(void *, void *, uint))0x00477910)
#define FUN_00494e60 ((undefined4 (__thiscall *)(void *, int, int, int, int, uint))0x00494e60)
#define FUN_00495080 ((undefined4 (__fastcall *)(int *))0x00495080)
#define FUN_004950c0 ((undefined4 * (__thiscall *)(void *, int *))0x004950c0)
#define FUN_00495170 ((undefined4 (__thiscall *)(void *, undefined4, undefined4))0x00495170)
#define FUN_00495590 ((undefined4 (__fastcall *)(int *))0x00495590)
#define PeekMessageA (*(__typeof__(BOOL (__stdcall *)(LPMSG, HWND, UINT, UINT, UINT)) *)0x0054d284) /* USER32.DLL!PeekMessageA via IAT */
#define Sleep (*(__typeof__(void (__stdcall *)(DWORD)) *)0x0054d0d0) /* KERNEL32.DLL!Sleep via IAT */

#define LOM_SELF_004779b0 1
void __thiscall
rb_004779b0(void *this,int param_1,int param_2,int param_3,int param_4,uint param_5)

{
  bool bVar1;
  byte bVar2;
  BOOL BVar3;
  void *this_00;
  uchar _fr[0x58] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_50;
  typedef int _t_local_4c;
  typedef tagMSG _t_local_48;
  typedef int _t_local_2c[4];
  typedef undefined4 _t_local_1c;
  typedef undefined4 _t_local_14;
#define local_50 (*(_t_local_50 *)(_fr + 0x0))
#define local_4c (*(_t_local_4c *)(_fr + 0x4))
#define local_48 (*(_t_local_48 *)(_fr + 0x8))
#define local_2c (*(_t_local_2c *)(_fr + 0x24))
#define local_1c (*(_t_local_1c *)(_fr + 0x34))
#define local_14 (*(_t_local_14 *)(_fr + 0x3c))

  if ((param_3 < param_1) || (param_4 < param_2)) {
    return;
  }
  bVar1 = false;
  bVar2 = 0;
  local_50 = 0;
  local_4c = 0;
  PeekMessageA(&local_48,(HWND)0x0,0x201,0x201,1);
  PeekMessageA(&local_48,(HWND)0x0,0x202,0x202,1);
  PeekMessageA(&local_48,(HWND)0x0,0x100,0x108,1);
  FUN_004950c0(local_2c,*(int **)((int)this + 0x684));
  FUN_00495080(local_2c);
  do {
    if (!bVar1) goto LAB_00477a6a;
    do {
      if (!(bool)(bVar2 & 1)) goto LAB_00477b30;
LAB_00477a6a:
      FUN_00495170(local_2c,local_14,local_1c);
      if (bVar2 == 0) {
        local_50 = local_4c;
      }
      switch(local_50) {
      case 0:
        FUN_00494e60(local_2c,param_1,param_2,param_3,param_4,param_5);
        goto switchD_00477a9b_default;
      case 1:
        this_00 = (void *)((int)this + 0x22f2c);
        break;
      case 2:
        this_00 = (void *)((int)this + 0x22f74);
        break;
      case 3:
        this_00 = (void *)((int)this + 0x22f50);
        break;
      case 4:
        this_00 = (void *)((int)this + 0x22f08);
        break;
      default:
        goto switchD_00477a9b_default;
      }
      FUN_00477910(this_00,local_2c,0xffff);
switchD_00477a9b_default:
      FUN_00495080(local_2c);
      bVar2 = bVar2 + 1;
LAB_00477b30:
      if (bVar1) {
        DAT_00583648 = DAT_00583648 + -0x20;
        FUN_00495590(local_2c);
        return;
      }
      BVar3 = PeekMessageA(&local_48,(HWND)0x0,0x202,0x202,1);
      if (BVar3 == 0) {
        BVar3 = PeekMessageA(&local_48,(HWND)0x0,0x100,0x108,1);
        if ((BVar3 != 0) && (local_48.message == 0x101)) {
          if (local_48.wParam == 0x1b) {
            *(undefined4 *)((int)this + 0x4d5ac) = 0;
          }
          else if ((0x2f < (int)local_48.wParam) && ((int)local_48.wParam < 0x35)) {
            local_4c = local_48.wParam - 0x30;
            goto LAB_00477bad;
          }
          goto LAB_00477ba8;
        }
      }
      else {
        PeekMessageA(&local_48,(HWND)0x0,0x201,0x201,1);
LAB_00477ba8:
        bVar1 = true;
      }
LAB_00477bad:
    } while (bVar1);
    Sleep(100);
  } while( true );
#undef local_50
#undef local_4c
#undef local_48
#undef local_2c
#undef local_1c
#undef local_14
}
