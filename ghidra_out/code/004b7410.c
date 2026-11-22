
undefined4 __thiscall FUN_004b7410(void *this,char param_1,int param_2,short param_3)

{
  int *this_00;
  LPVOID pvVar1;
  LPVOID pvVar2;
  LPCSTR lpFileName;
  HANDLE hFile;
  HANDLE hFileMappingObject;
  DWORD DVar3;
  LPVOID lpBaseAddress;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int local_14c;
  LPVOID local_140;
  DWORD local_13c;
  undefined1 *local_134;
  int local_130;
  undefined4 local_120;
  undefined4 local_11c;
  int local_108 [5];
  char local_f3;
  byte local_f2;
  short local_f1;
  int local_ef;
  int local_eb;
  int local_e7;
  undefined1 local_e3 [227];
  
  lpFileName = (LPCSTR)FUN_004b9570(param_1,param_3);
  FUN_0048cc70(local_108,0x1f);
  local_f3 = param_1;
  iVar8 = 0;
  local_f1 = param_3;
  local_f2 = (byte)param_2;
  hFile = CreateFileA(lpFileName,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0x8000000,(HANDLE)0x0);
  if (hFile == (HANDLE)0xffffffff) {
    return 0;
  }
  hFileMappingObject = CreateFileMappingA(hFile,(LPSECURITY_ATTRIBUTES)0x0,2,0,0,(LPCSTR)0x0);
  if (hFileMappingObject == (HANDLE)0x0) {
    return 0;
  }
  DVar3 = GetFileSize(hFile,(LPDWORD)0x0);
  lpBaseAddress = MapViewOfFile(hFileMappingObject,4,0,0,0);
  local_134 = local_e3;
  local_130 = 0x78;
  local_120 = 0;
  local_11c = 0;
  local_140 = lpBaseAddress;
  local_13c = DVar3;
  iVar4 = FUN_00533900((int)&local_140,-1,s_1_0_7_0055d368,0x38);
  if (iVar4 != 0) {
    return 0;
  }
  local_14c = -5;
  while( true ) {
    pvVar1 = local_140;
    local_134 = local_e3;
    local_130 = 0x78;
    local_eb = 0x78;
    local_ef = iVar8;
    uVar5 = FUN_00533be0((int *)&local_140,4);
    pvVar2 = local_140;
    local_eb = local_eb - local_130;
    if ((uVar5 != 0) && (uVar5 != 1)) {
      local_ef = 0;
      local_eb = 0;
      FUN_00489b70(&DAT_00584ae8,local_108);
      UnmapViewOfFile(lpBaseAddress);
      CloseHandle(hFileMappingObject);
      CloseHandle(hFile);
      FUN_00533f50((int)&local_140);
      return 0;
    }
    this_00 = *(int **)((int)this + 0x4b2c);
    if (this_00 != (int *)0x0) {
      (/*IC:004b758c*/**(code **)(*this_00 + 0x30))(this_00);
    }
    if (param_2 == 0) {
      iVar4 = 1;
      while( true ) {
        iVar6 = *(int *)((int)this + 0x4b2c);
        if ((iVar6 == 0) || (iVar7 = *(int *)(iVar6 + 0x100), iVar7 < 1)) {
          iVar7 = 1;
        }
        if (iVar7 < iVar4) break;
        if (iVar6 == 0) {
          iVar6 = 1;
        }
        else {
          iVar6 = FUN_004b7dd0(iVar6);
        }
        if (iVar4 != iVar6) {
          *(uint *)this = 1 << ((byte)iVar4 & 0x1f) | *(uint *)this;
        }
        iVar4 = iVar4 + 1;
      }
    }
    else {
      *(int *)this = 1 << ((byte)param_2 & 0x1f);
    }
    iVar4 = (iVar8 * 100) / (int)DVar3;
    local_e7 = iVar4;
    FUN_00489b70(&DAT_00584ae8,local_108);
    iVar6 = FUN_004b6f10();
    if (iVar6 == 0) break;
    if ((param_1 == 'M') && (4 < iVar4 - local_14c)) {
      local_14c = iVar4;
    }
    iVar8 = (int)pvVar2 + (iVar8 - (int)pvVar1);
    if (uVar5 == 1) {
      UnmapViewOfFile(lpBaseAddress);
      CloseHandle(hFileMappingObject);
      CloseHandle(hFile);
      FUN_00533f50((int)&local_140);
      local_ef = 1;
      local_eb = 0;
      FUN_00489b70(&DAT_00584ae8,local_108);
      return 1;
    }
  }
  UnmapViewOfFile(lpBaseAddress);
  CloseHandle(hFileMappingObject);
  CloseHandle(hFile);
  FUN_00533f50((int)&local_140);
  return 0;
}


