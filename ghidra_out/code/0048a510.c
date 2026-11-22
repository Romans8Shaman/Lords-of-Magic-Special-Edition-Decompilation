
void FUN_0048a510(void)

{
  int iVar1;
  DWORD DVar2;
  int local_108 [5];
  undefined4 local_f3;
  undefined4 local_ef;
  
  if (DAT_005d1e84 != (void *)0x0) {
    iVar1 = FUN_004b78c0(DAT_005d1e84);
    if (1 < iVar1) {
      DVar2 = timeGetTime();
      if (DAT_0058441c < DVar2 - 0xfa) {
        FUN_0048cc70(local_108,0x50);
        if (DAT_005d1e84 == (void *)0x0) {
          local_f3 = 1;
        }
        else {
          local_f3 = FUN_004b7dd0((int)DAT_005d1e84);
        }
        local_ef = DAT_00583560;
        FUN_00489b70(&DAT_00584ae8,local_108);
        DAT_0058441c = DVar2;
      }
    }
  }
  return;
}


