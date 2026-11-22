
uint __cdecl FUN_0053be50(LPCSTR param_1,uint param_2,uint param_3,undefined4 param_4)

{
  uint uVar1;
  HANDLE hFile;
  int iVar2;
  DWORD *pDVar3;
  DWORD DVar4;
  DWORD dwCreationDisposition;
  DWORD dwFlagsAndAttributes;
  int iVar5;
  bool bVar6;
  byte local_11;
  uint local_10;
  _SECURITY_ATTRIBUTES local_c;
  
  bVar6 = (param_2 & 0x80) == 0;
  local_c.nLength = 0xc;
  local_c.lpSecurityDescriptor = (LPVOID)0x0;
  if (bVar6) {
    local_11 = 0;
  }
  else {
    local_11 = 0x10;
  }
  local_c.bInheritHandle = (BOOL)bVar6;
  if (((param_2 & 0x8000) == 0) && (((param_2 & 0x4000) != 0 || (DAT_005d5554 != 0x8000)))) {
    local_11 = local_11 | 0x80;
  }
  uVar1 = param_2 & 3;
  if (uVar1 == 0) {
    local_10 = 0x80000000;
  }
  else if (uVar1 == 1) {
    local_10 = 0x40000000;
  }
  else {
    if (uVar1 != 2) goto switchD_0053bee8_caseD_11;
    local_10 = 0xc0000000;
  }
  switch(param_3) {
  case 0x10:
    DVar4 = 0;
    break;
  default:
    goto switchD_0053bee8_caseD_11;
  case 0x20:
    DVar4 = 1;
    break;
  case 0x30:
    DVar4 = 2;
    break;
  case 0x40:
    DVar4 = 3;
  }
  uVar1 = param_2 & 0x700;
  if (uVar1 < 0x101) {
    if (uVar1 == 0x100) {
      dwCreationDisposition = 4;
    }
    else {
      if (uVar1 != 0) goto switchD_0053bee8_caseD_11;
LAB_0053bf56:
      dwCreationDisposition = 3;
    }
  }
  else if (uVar1 < 0x301) {
    if (uVar1 == 0x300) {
      dwCreationDisposition = 2;
    }
    else {
      if (uVar1 != 0x200) goto switchD_0053bee8_caseD_11;
LAB_0053bf76:
      dwCreationDisposition = 5;
    }
  }
  else {
    if (uVar1 < 0x501) {
      if (uVar1 != 0x500) {
        if (uVar1 != 0x400) goto switchD_0053bee8_caseD_11;
        goto LAB_0053bf56;
      }
    }
    else {
      if (uVar1 == 0x600) goto LAB_0053bf76;
      if (uVar1 != 0x700) {
switchD_0053bee8_caseD_11:
        pDVar3 = FUN_0053b4c0();
        *pDVar3 = 0x16;
        pDVar3 = FUN_0053b4d0();
        *pDVar3 = 0;
        return 0xffffffff;
      }
    }
    dwCreationDisposition = 1;
  }
  dwFlagsAndAttributes = 0x80;
  if (((param_2 & 0x100) != 0) && (((byte)param_4 & ~(byte)DAT_005d52b0 & 0x80) == 0)) {
    dwFlagsAndAttributes = 1;
  }
  if ((param_2 & 0x40) != 0) {
    dwFlagsAndAttributes = dwFlagsAndAttributes | 0x4000000;
    local_10 = local_10 | 0x10000;
  }
  if ((param_2 & 0x1000) != 0) {
    dwFlagsAndAttributes = dwFlagsAndAttributes | 0x100;
  }
  if ((param_2 & 0x20) == 0) {
    if ((param_2 & 0x10) != 0) {
      dwFlagsAndAttributes = dwFlagsAndAttributes | 0x10000000;
    }
  }
  else {
    dwFlagsAndAttributes = dwFlagsAndAttributes | 0x8000000;
  }
  uVar1 = FUN_00542c40();
  if (uVar1 == 0xffffffff) {
    pDVar3 = FUN_0053b4c0();
    *pDVar3 = 0x18;
    pDVar3 = FUN_0053b4d0();
    *pDVar3 = 0;
    return 0xffffffff;
  }
  hFile = CreateFileA(param_1,local_10,DVar4,&local_c,dwCreationDisposition,dwFlagsAndAttributes,
                      (HANDLE)0x0);
  if (hFile != (HANDLE)0xffffffff) {
    DVar4 = GetFileType(hFile);
    if (DVar4 != 0) {
      if (DVar4 == 2) {
        local_11 = local_11 | 0x40;
      }
      else if (DVar4 == 3) {
        local_11 = local_11 | 8;
      }
      FUN_00542db0(uVar1,hFile);
      iVar5 = (uVar1 & 0x1f) * 0x24;
      *(byte *)(iVar5 + 4 + (&DAT_005d6a20)[(int)uVar1 >> 5]) = local_11 | 1;
      param_1._0_1_ = local_11 & 0x48;
      if ((((local_11 & 0x48) == 0) && ((local_11 & 0x80) != 0)) && ((param_2 & 2) != 0)) {
        DVar4 = FUN_0053f600(uVar1,-1,2);
        if (DVar4 == 0xffffffff) {
          pDVar3 = FUN_0053b4d0();
          if (*pDVar3 != 0x83) goto LAB_0053c136;
        }
        else {
          param_3 = param_3 & 0xffffff00;
          iVar2 = FUN_0053e290(uVar1,(char *)&param_3,1);
          if ((((iVar2 == 0) && ((char)param_3 == '\x1a')) &&
              (iVar2 = FUN_00542ff0((char)uVar1,DVar4), iVar2 == -1)) ||
             (DVar4 = FUN_0053f600(uVar1,0,0), DVar4 == 0xffffffff)) {
LAB_0053c136:
            FUN_0053bd50(uVar1);
            FUN_00542fc0(uVar1);
            return 0xffffffff;
          }
        }
      }
      if (((byte)param_1 == 0) && ((param_2 & 8) != 0)) {
        *(byte *)(iVar5 + 4 + (&DAT_005d6a20)[(int)uVar1 >> 5]) =
             *(byte *)(iVar5 + 4 + (&DAT_005d6a20)[(int)uVar1 >> 5]) | 0x20;
      }
      FUN_00542fc0(uVar1);
      return uVar1;
    }
    CloseHandle(hFile);
  }
  DVar4 = GetLastError();
  FUN_0053b440(DVar4);
  FUN_00542fc0(uVar1);
  return 0xffffffff;
}


