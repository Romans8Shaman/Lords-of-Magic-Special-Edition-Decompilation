
int __fastcall FUN_004ead10(int param_1)

{
  HMODULE pHVar1;
  FARPROC pFVar2;
  HANDLE pvVar3;
  code *pcVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 local_1c;
  undefined4 local_18;
  DWORD DStack_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined *local_4;
  
  local_10 = DAT_00572d34;
  uVar5 = 0;
  local_c = DAT_00572d38;
  local_8 = DAT_00572d3c;
  local_4 = PTR_DAT_00572d40;
  local_18 = 0;
  local_1c = 0;
  iVar6 = -1;
  pHVar1 = LoadLibraryA(s_SNWValid_dll_00572d24);
  *(HMODULE *)(param_1 + 0x24) = pHVar1;
  pcVar4 = MessageBoxA_exref;
  if (pHVar1 == (HMODULE)0x0) {
    MessageBoxA(*(HWND *)(param_1 + 0x14),s_SNWValid_dll_not_found_in_Window_00572c28,
                s_File_load_error_00572c8c,0x10);
  }
  else {
    pFVar2 = GetProcAddress(pHVar1,s_SNWValidate_00572d18);
    pcVar4 = MessageBoxA_exref;
    *(FARPROC *)(param_1 + 0x28) = pFVar2;
    if (pFVar2 == (FARPROC)0x0) {
      MessageBoxA(*(HWND *)(param_1 + 0x14),s_There_was_a_problem_Initializing_00572c9c,
                  s_Initialization_Error_00572d00,0x10);
    }
    else {
      iVar6 = (/*IC:004ead96*/*pFVar2)(*(undefined4 *)(param_1 + 0x18),&local_10,&local_18,&local_1c,
                        *(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x20),
                        *(undefined4 *)(param_1 + 0x14));
    }
    FreeLibrary(*(HMODULE *)(param_1 + 0x24));
    if (iVar6 != -2) {
      if (iVar6 == -1) {
        uVar5 = 0;
      }
      else {
        if (iVar6 != 0) goto LAB_004eaebb;
        uVar5 = 1;
      }
    }
  }
  if (iVar6 == 0) {
    *(undefined4 *)(param_1 + 0x24) = 0;
    pHVar1 = LoadLibraryA(s_SierraNW_dll_00572c18);
    *(HMODULE *)(param_1 + 0x24) = pHVar1;
    if (pHVar1 != (HMODULE)0x0) {
      iVar6 = FUN_004eaed0(param_1);
      if (iVar6 == 0) {
        FreeLibrary(*(HMODULE *)(param_1 + 0x24));
        (/*IC:004eae97*/*pcVar4)(*(undefined4 *)(param_1 + 0x14),s_There_was_a_problem_Initializing_00572bb4,
                  s_Initialization_Error_00572d00,0x10);
        *(undefined4 *)(param_1 + 4) = 0;
        return -1;
      }
      iVar6 = (/*IC:004eae2b*/**(code **)(param_1 + 0x2c))(&local_10,local_18,local_1c);
      if (iVar6 == 0) {
        FreeLibrary(*(HMODULE *)(param_1 + 0x24));
        *(undefined4 *)(param_1 + 0x24) = 0;
        *(undefined4 *)(param_1 + 4) = 0;
        return -1;
      }
      pvVar3 = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,FUN_004eb3e0,(LPVOID)0x0,0,&DStack_14);
      *(HANDLE *)(param_1 + 0x10) = pvVar3;
      *(undefined4 *)(param_1 + 4) = uVar5;
      return 0;
    }
    (/*IC:004eaeb6*/*pcVar4)(*(undefined4 *)(param_1 + 0x14),s_SierraNW_dll_not_found_in_Window_00572b50,
              s_File_load_error_00572c8c,0x10);
    iVar6 = -1;
  }
LAB_004eaebb:
  *(undefined4 *)(param_1 + 4) = uVar5;
  return iVar6;
}


