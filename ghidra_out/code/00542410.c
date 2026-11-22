
undefined4 FUN_00542410(void)

{
  undefined **ppuVar1;
  
  DAT_005d6a04 = HeapCreate(0,0x1000,0);
  if (DAT_005d6a04 == (HANDLE)0x0) {
    return 0;
  }
  ppuVar1 = FUN_00542450();
  if (ppuVar1 == (undefined **)0x0) {
    HeapDestroy(DAT_005d6a04);
    return 0;
  }
  return 1;
}


