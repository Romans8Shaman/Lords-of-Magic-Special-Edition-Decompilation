/* Rebuilt from lomse.exe FUN_004e3a70 @ 0x004e3a70 (213 bytes, __stdcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define GetTickCount (*(__typeof__(DWORD (__stdcall *)(void)) *)0x0054d0e8) /* KERNEL32.DLL!GetTickCount via IAT */
#define PeekMessageA (*(__typeof__(BOOL (__stdcall *)(LPMSG, HWND, UINT, UINT, UINT)) *)0x0054d284) /* USER32.DLL!PeekMessageA via IAT */
#define Sleep (*(__typeof__(void (__stdcall *)(DWORD)) *)0x0054d0d0) /* KERNEL32.DLL!Sleep via IAT */

#define LOM_SELF_004e3a70 1
void __stdcall rb_004e3a70(int param_1)

{
  uint uVar1;
  DWORD DVar2;
  BOOL BVar3;
  uchar _fr[0x28] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef tagMSG _t_local_1c;
#define local_1c (*(_t_local_1c *)(_fr + 0x4))
  
  Sleep(0xfa);
  PeekMessageA(&local_1c,(HWND)0x0,0x201,0x201,1);
  PeekMessageA(&local_1c,(HWND)0x0,0x202,0x202,1);
  PeekMessageA(&local_1c,(HWND)0x0,0x100,0x108,1);
  DVar2 = GetTickCount();
  uVar1 = (DVar2 - 0xfa) + param_1;
  DVar2 = GetTickCount();
  if (DVar2 < uVar1) {
    while( true ) {
      Sleep(100);
      BVar3 = PeekMessageA(&local_1c,(HWND)0x0,0x202,0x202,1);
      if (BVar3 != 0) break;
      BVar3 = PeekMessageA(&local_1c,(HWND)0x0,0x100,0x108,1);
      if (BVar3 != 0) {
        return;
      }
      DVar2 = GetTickCount();
      if (uVar1 <= DVar2) {
        return;
      }
    }
    PeekMessageA(&local_1c,(HWND)0x0,0x201,0x201,1);
  }
  return;
#undef local_1c
}
