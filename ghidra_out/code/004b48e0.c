
undefined4 FUN_004b48e0(void)

{
  DWORD DVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if (DAT_00584418 == 2) {
    DVar1 = timeGetTime();
    if (100 < DVar1 - DAT_00584420) {
      if (((char)DAT_005843f8 == '\x06') && ((DAT_005843f8 & 0x100) == 0)) {
        FUN_004d05e0(DAT_005a7b78,DAT_005843f8,DAT_005843fc);
      }
      uVar2 = 1;
      DAT_00584420 = DVar1;
    }
  }
  return uVar2;
}


