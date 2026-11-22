/* Rebuilt from lomse.exe FUN_004ff5e0 @ 0x004ff5e0 (685 bytes, __stdcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00584ae8 (*(undefined *)0x00584ae8)
#define DAT_00584d54 (*(WPARAM *)0x00584d54)
#define DAT_00584d58 (*(int *)0x00584d58)
#define DAT_005876cc (*(int *)0x005876cc)
#define DAT_005a7adc (*(int *)0x005a7adc)
#define DAT_005d1e84 (*(void * *)0x005d1e84)
#define DAT_005d2ca0 (*(int *)0x005d2ca0)
#define DefWindowProcA (*(__typeof__(LRESULT (__stdcall *)(HWND, UINT, WPARAM, LPARAM)) *)0x0054d2f4) /* USER32.DLL!DefWindowProcA via IAT */
#define FUN_004753d0 ((undefined4 (__fastcall *)(int))0x004753d0)
#define FUN_004b7870 ((undefined4 (__fastcall *)(int))0x004b7870)
#define FUN_004b7940 ((undefined4 (__thiscall *)(void *, int))0x004b7940)
#define FUN_004fe370 ((undefined4 (__fastcall *)(void *))0x004fe370)
#define FUN_00503790 ((undefined4 (__thiscall *)(void *, int, uint, int))0x00503790)
#define FUN_005043f0 ((int (__thiscall *)(void *, int, int, int))0x005043f0)
#define FUN_00504740 ((undefined4 (__thiscall *)(void *, uint))0x00504740)
#define FUN_00504ce0 ((undefined4 (__thiscall *)(void *, int, int))0x00504ce0)
#define GetForegroundWindow (*(__typeof__(HWND (__stdcall *)(void)) *)0x0054d320) /* USER32.DLL!GetForegroundWindow via IAT */
#define OutputDebugStringA (*(__typeof__(void (__stdcall *)(LPCSTR)) *)0x0054d0f8) /* KERNEL32.DLL!OutputDebugStringA via IAT */
#define PostQuitMessage (*(__typeof__(void (__stdcall *)(int)) *)0x0054d29c) /* USER32.DLL!PostQuitMessage via IAT */
#define ValidateRect (*(__typeof__(BOOL (__stdcall *)(HWND, RECT *)) *)0x0054d318) /* USER32.DLL!ValidateRect via IAT */
#define s_Received_WM_CLOSE_0057350c (*(char (*)[])0x0057350c)

#define LOM_SELF_004ff5e0 1
LRESULT __stdcall rb_004ff5e0(HWND param_1,uint param_2,WPARAM param_3,uint param_4)

{
  LRESULT LVar1;
  HWND pHVar2;
  int iVar3;
  
  if (param_2 < 6) {
    if (param_2 == 5) {
      if (param_3 == 0) {
        if (DAT_005876cc == 1) {
          FUN_00504ce0(&DAT_00584ae8,0,0);
          DAT_005876cc = 0;
          return 0;
        }
        return 0;
      }
      if (param_3 == 1) {
        DAT_005876cc = 1;
        return 0;
      }
      return 0;
    }
    if (param_2 == 2) {
      DAT_005d2ca0 = 1;
      FUN_004fe370(&DAT_00584ae8);
      PostQuitMessage(0);
      return 0;
    }
  }
  else if (param_2 < 0x10) {
    if (param_2 == 0xf) {
      if (DAT_00584d58 == 0) {
        ValidateRect(param_1,(RECT *)0x0);
        FUN_004753d0(0x584ae8);
        return 0;
      }
      return 0;
    }
    if (param_2 == 7) {
      if (param_3 == DAT_00584d54) {
        return 0;
      }
      DAT_005a7adc = 1;
      FUN_00504ce0(&DAT_00584ae8,1,0);
      return 0;
    }
    if (param_2 == 8) {
      if (param_3 == DAT_00584d54) {
        return 0;
      }
      DAT_005a7adc = 0;
      return 0;
    }
  }
  else if (param_2 < 0x1d) {
    if (param_2 == 0x1c) {
      if ((param_3 == 0) || (pHVar2 = GetForegroundWindow(), pHVar2 != param_1)) {
        DAT_005a7adc = 0;
      }
      else {
        DAT_005a7adc = 1;
      }
      if (DAT_005a7adc == 0) {
        return 0;
      }
      FUN_00504ce0(&DAT_00584ae8,1,0);
      return 0;
    }
    if (param_2 == 0x10) {
      OutputDebugStringA(s_Received_WM_CLOSE_0057350c);
    }
  }
  else if (param_2 < 0x112) {
    if (param_2 == 0x111) {
      iVar3 = FUN_00504740(&DAT_00584ae8,param_3);
      if (iVar3 == 0) {
        return 0;
      }
      if ((param_3 & 0xffff) == 0x67) {
        if (DAT_005d1e84 == (void *)0x0) {
          return 0;
        }
        FUN_004b7870((int)DAT_005d1e84);
        return 0;
      }
      if ((param_3 & 0xffff) != 0x68) {
        return 0;
      }
      if (DAT_005d1e84 == (void *)0x0) {
        return 0;
      }
      FUN_004b7940(DAT_005d1e84,param_4);
      return 0;
    }
    if (param_2 == 0x100) {
      if (DAT_005d2ca0 == 0) {
        FUN_005043f0(&DAT_00584ae8,param_3,0,0);
        return 0;
      }
      return 0;
    }
    if (param_2 == 0x101) {
      if (DAT_005d2ca0 == 0) {
        FUN_005043f0(&DAT_00584ae8,param_3,0,1);
        return 0;
      }
      return 0;
    }
    if (param_2 == 0x102) {
      if (DAT_005d2ca0 == 0) {
        FUN_005043f0(&DAT_00584ae8,param_3,1,0);
        return 0;
      }
      return 0;
    }
  }
  else if ((0x1ff < param_2) && (param_2 < 0x206)) {
    if (DAT_005d2ca0 == 0) {
      FUN_00503790(&DAT_00584ae8,param_2,param_4 & 0xffff,param_4 >> 0x10);
      return 0;
    }
    return 0;
  }
  LVar1 = DefWindowProcA(param_1,param_2,param_3,param_4);
  return LVar1;
}
