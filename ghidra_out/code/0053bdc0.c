
undefined4 __cdecl FUN_0053bdc0(uint param_1)

{
  int iVar1;
  int iVar2;
  HANDLE hObject;
  BOOL BVar3;
  DWORD DVar4;
  
  iVar1 = FUN_00542f00(param_1);
  if (iVar1 != -1) {
    if ((param_1 == 1) || (param_1 == 2)) {
      iVar1 = FUN_00542f00(1);
      iVar2 = FUN_00542f00(2);
      if (iVar1 == iVar2) goto LAB_0053be16;
    }
    hObject = (HANDLE)FUN_00542f00(param_1);
    BVar3 = CloseHandle(hObject);
    if (BVar3 == 0) {
      DVar4 = GetLastError();
      goto LAB_0053be18;
    }
  }
LAB_0053be16:
  DVar4 = 0;
LAB_0053be18:
  FUN_00542e60(param_1);
  *(undefined1 *)((&DAT_005d6a20)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) = 0;
  if (DVar4 == 0) {
    return 0;
  }
  FUN_0053b440(DVar4);
  return 0xffffffff;
}


