
void FUN_004b7f90(void)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  
  if (DAT_005d1e84 == (void *)0x0) {
    bVar3 = true;
  }
  else {
    iVar2 = *(int *)((int)DAT_005d1e84 + 0x390);
    iVar1 = FUN_004b7dd0((int)DAT_005d1e84);
    bVar3 = iVar2 == iVar1;
  }
  if (bVar3) {
    iVar2 = FUN_0048a400(0x584ae8);
    if (iVar2 == 0) {
      if (DAT_005d1e84 == (void *)0x0) {
        iVar2 = 1;
      }
      else {
        iVar2 = FUN_004b78c0(DAT_005d1e84);
      }
      FUN_004b1cc0(&DAT_005aa64c,1,(byte)(2 - iVar2) & (2 - iVar2 < 0) - 1U,0);
      FUN_004b1d00(&DAT_005aa64c,1,'\b' - (char)iVar2,1);
    }
  }
  return;
}


