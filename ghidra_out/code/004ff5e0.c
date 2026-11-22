
LRESULT FUN_004ff5e0(HWND param_1,uint param_2,WPARAM param_3,uint param_4)

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


