/* Rebuilt from lomse.exe FUN_004eac00 @ 0x004eac00 (228 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00584718 (*(HANDLE *)0x00584718)
#define DispatchMessageA (*(__typeof__(LRESULT (__stdcall *)(MSG *)) *)0x0054d330) /* USER32.DLL!DispatchMessageA via IAT */
#define GetMessageA (*(__typeof__(BOOL (__stdcall *)(LPMSG, HWND, UINT, UINT)) *)0x0054d314) /* USER32.DLL!GetMessageA via IAT */
#define OutputDebugStringA (*(__typeof__(void (__stdcall *)(LPCSTR)) *)0x0054d0f8) /* KERNEL32.DLL!OutputDebugStringA via IAT */
#define PeekMessageA (*(__typeof__(BOOL (__stdcall *)(LPMSG, HWND, UINT, UINT, UINT)) *)0x0054d284) /* USER32.DLL!PeekMessageA via IAT */
#define ResetEvent (*(__typeof__(BOOL (__stdcall *)(HANDLE)) *)0x0054d088) /* KERNEL32.DLL!ResetEvent via IAT */
#define TranslateMessage (*(__typeof__(BOOL (__stdcall *)(MSG *)) *)0x0054d31c) /* USER32.DLL!TranslateMessage via IAT */
#define WaitForSingleObject (*(__typeof__(DWORD (__stdcall *)(HANDLE, DWORD)) *)0x0054d0c4) /* KERNEL32.DLL!WaitForSingleObject via IAT */
#define s_NewGame_ACK_00572b30 (*(char (*)[])0x00572b30)
#define s_NewGame_NAK_00572b40 (*(char (*)[])0x00572b40)

#define LOM_SELF_004eac00 1
undefined4 __fastcall rb_004eac00(int param_1)

{
  DWORD DVar1;
  int iVar2;
  BOOL BVar3;
  uchar _fr[0x28] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef tagMSG _t_local_1c;
#define local_1c (*(_t_local_1c *)(_fr + 0x4))
  
  DVar1 = WaitForSingleObject(DAT_00584718,300);
  while (DVar1 == 0x102) {
    iVar2 = PeekMessageA(&local_1c,(HWND)0x0,0,0,0);
    while (iVar2 != 0) {
      if (local_1c.message == 0x12) {
        return 0;
      }
      BVar3 = GetMessageA(&local_1c,(HWND)0x0,0,0);
      if (BVar3 != 0) {
        TranslateMessage(&local_1c);
        DispatchMessageA(&local_1c);
      }
      iVar2 = PeekMessageA(&local_1c,(HWND)0x0,0,0,0);
    }
    DVar1 = WaitForSingleObject(DAT_00584718,300);
  }
  ResetEvent(DAT_00584718);
  if (*(int *)(param_1 + 8) == 0) {
    OutputDebugStringA(s_NewGame_ACK_00572b30);
    return 1;
  }
  OutputDebugStringA(s_NewGame_NAK_00572b40);
  return 0;
#undef local_1c
}
