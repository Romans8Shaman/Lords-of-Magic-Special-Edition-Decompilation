
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void entry(void)

{
  byte bVar1;
  DWORD DVar2;
  int iVar3;
  uint unused_stack_12;
  HMODULE pHVar4;
  UINT UVar5;
  byte *pbVar7;
  byte *pbVar6;
  undefined4 uVar8;
  undefined1 auStack_6a [10];
  _STARTUPINFOA local_60;
  undefined1 *local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_0054eed8;
  puStack_10 = &LAB_0053b9f8;
  local_14 = ExceptionList;
  local_1c = auStack_6a + -0xe;
  ExceptionList = &local_14;
  DVar2 = GetVersion();
  _DAT_005d52c0 = DVar2 >> 8 & 0xff;
  _DAT_005d52bc = DVar2 & 0xff;
  _DAT_005d52b8 = _DAT_005d52bc * 0x100 + _DAT_005d52c0;
  _DAT_005d52b4 = DVar2 >> 0x10;
  iVar3 = FUN_00542410();
  if (iVar3 == 0) {
    FUN_0053c4a0(0x1c);
  }
  iVar3 = FUN_0053ef20();
  if (iVar3 == 0) {
    FUN_0053c4a0(0x10);
  }
  local_8 = 0;
  FUN_00540c20();
  FUN_00540910();
  DAT_005d6b38 = (byte *)GetCommandLineA();
  DAT_005d5238 = FUN_00543560();
  if ((DAT_005d5238 == (LPSTR)0x0) || (DAT_005d6b38 == (byte *)0x0)) {
    FUN_0053f220(0xffffffff);
  }
  FUN_005432b0();
  FUN_005431c0();
  FUN_0053f1f0();
  pbVar6 = DAT_005d6b38;
  if (*DAT_005d6b38 == 0x22) {
    while( true ) {
      pbVar7 = pbVar6;
      pbVar6 = pbVar7 + 1;
      bVar1 = *pbVar6;
      if ((bVar1 == 0x22) || (bVar1 == 0)) break;
      iVar3 = FUN_00543160((uint)bVar1);
      if (iVar3 != 0) {
        pbVar6 = pbVar7 + 2;
      }
    }
    if (*pbVar6 == 0x22) {
      pbVar6 = pbVar7 + 2;
    }
  }
  else {
    for (; 0x20 < *pbVar6; pbVar6 = pbVar6 + 1) {
    }
  }
  for (; (*pbVar6 != 0 && (*pbVar6 < 0x21)); pbVar6 = pbVar6 + 1) {
  }
  local_60.dwFlags = 0;
  GetStartupInfoA(&local_60);
  if ((local_60.dwFlags & 1) == 0) {
    unused_stack_12 = 10;
  }
  else {
    unused_stack_12 = (uint)local_60.wShowWindow;
  }
  uVar8 = 0;
  pHVar4 = GetModuleHandleA((LPCSTR)0x0);
  UVar5 = FUN_004ff8b0(pHVar4,uVar8,(char *)pbVar6,unused_stack_12);
  FUN_0053f220(UVar5);
  ExceptionList = local_14;
  return;
}


