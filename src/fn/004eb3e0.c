/* Rebuilt from lomse.exe FUN_004eb3e0 @ 0x004eb3e0 (273 bytes, __stdcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define CloseHandle (*(__typeof__(BOOL (__stdcall *)(HANDLE)) *)0x0054d054) /* KERNEL32.DLL!CloseHandle via IAT */
#define DAT_00584718 (*(HANDLE *)0x00584718)
#define DAT_0058471c (*(int * *)0x0058471c)
#define DAT_00584d54 (*(HWND *)0x00584d54)
#define FUN_004eb130 ((undefined4 (__fastcall *)(int *))0x004eb130)
#define FUN_004eb230 ((undefined4 (__fastcall *)(int))0x004eb230)
#define IsIconic (*(__typeof__(BOOL (__stdcall *)(HWND)) *)0x0054d324) /* USER32.DLL!IsIconic via IAT */
#define OutputDebugStringA (*(__typeof__(void (__stdcall *)(LPCSTR)) *)0x0054d0f8) /* KERNEL32.DLL!OutputDebugStringA via IAT */
#define SetEvent (*(__typeof__(BOOL (__stdcall *)(HANDLE)) *)0x0054d050) /* KERNEL32.DLL!SetEvent via IAT */
#define SetFocus (*(__typeof__(HWND (__stdcall *)(HWND)) *)0x0054d334) /* USER32.DLL!SetFocus via IAT */
#define SetForegroundWindow (*(__typeof__(BOOL (__stdcall *)(HWND)) *)0x0054d310) /* USER32.DLL!SetForegroundWindow via IAT */
#define ShowWindow (*(__typeof__(BOOL (__stdcall *)(HWND, int)) *)0x0054d2c0) /* USER32.DLL!ShowWindow via IAT */
#define Sleep (*(__typeof__(void (__stdcall *)(DWORD)) *)0x0054d0d0) /* KERNEL32.DLL!Sleep via IAT */
#define s_MonitorThread_Birth_0057302c (*(char (*)[])0x0057302c)
#define s_MonitorThread_Death_00572fc4 (*(char (*)[])0x00572fc4)
#define s_MonitorThread_Disconnect_00572fdc (*(char (*)[])0x00572fdc)
#define s_MonitorThread_GameEnd_00572ff8 (*(char (*)[])0x00572ff8)
#define s_MonitorThread_GameStart_00573010 (*(char (*)[])0x00573010)

#define LOM_SELF_004eb3e0 1
undefined4 __stdcall rb_004eb3e0(void)

{
  int iVar1;
  BOOL BVar2;
  
  OutputDebugStringA(s_MonitorThread_Birth_0057302c);
  iVar1 = DAT_0058471c[2];
  do {
    if (iVar1 != 0) {
LAB_004eb4d6:
      OutputDebugStringA(s_MonitorThread_Death_00572fc4);
      CloseHandle(DAT_00584718);
      return 0;
    }
    iVar1 = FUN_004eb230((int)DAT_0058471c);
    if (iVar1 == 0) {
      OutputDebugStringA(s_MonitorThread_Disconnect_00572fdc);
      DAT_0058471c[2] = 1;
      SetEvent(DAT_00584718);
      goto LAB_004eb4d6;
    }
    iVar1 = FUN_004eb130(DAT_0058471c);
    if (iVar1 != 0) {
      OutputDebugStringA(s_MonitorThread_GameStart_00573010);
      SetEvent(DAT_00584718);
      BVar2 = IsIconic(DAT_00584d54);
      if (BVar2 != 0) {
        ShowWindow(DAT_00584d54,9);
      }
      SetForegroundWindow(DAT_00584d54);
      SetFocus(DAT_00584d54);
      iVar1 = FUN_004eb130(DAT_0058471c);
      while (iVar1 != 0) {
        Sleep(0x15e);
        iVar1 = FUN_004eb130(DAT_0058471c);
      }
      OutputDebugStringA(s_MonitorThread_GameEnd_00572ff8);
    }
    Sleep(0x15e);
    iVar1 = DAT_0058471c[2];
  } while( true );
}
