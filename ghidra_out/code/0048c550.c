
int FUN_0048c550(void)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar1 = FUN_0048a400(0x584ae8);
  if ((((iVar1 == 2) || (DAT_005aeef4 != 0)) || (DAT_005aeef8 != 0)) || (DAT_005af12c != 0)) {
    iVar1 = 0;
  }
  else {
    iVar1 = 1;
  }
  if ((iVar1 != 0) && (iVar2 = FUN_00417890(0x5aa12c), iVar2 == 0)) {
    puVar3 = FUN_004fbed0(&DAT_005ae974,0);
    if (puVar3 == (undefined4 *)0x0) {
      return iVar1;
    }
    while ((((int)puVar3[0x14e] < 0 || ((puVar3[0xc] & 8) != 0)) || ((puVar3[0xc] & 0x1000) != 0)))
    {
      puVar3 = FUN_004fbed0(&DAT_005ae974,(int)puVar3);
      if (puVar3 == (undefined4 *)0x0) {
        return iVar1;
      }
    }
  }
  return 0;
}


