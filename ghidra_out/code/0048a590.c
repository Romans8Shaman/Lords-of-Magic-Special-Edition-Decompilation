
void FUN_0048a590(void)

{
  int iVar1;
  
  if (DAT_005d1e84 == (void *)0x0) {
    iVar1 = 1;
  }
  else {
    iVar1 = FUN_004b78c0(DAT_005d1e84);
  }
  if ((iVar1 < 2) || (DAT_00583574 != 0)) {
    DAT_0055b578 = 1;
  }
  else if (DAT_0055b574 == DAT_00583560) {
    DAT_0058358c = DAT_0058358c + 1;
    if (DAT_005835e4 != 0) {
      DAT_00583588 = DAT_00583588 + 1;
    }
    DAT_005835e4 = 0;
    DAT_0055b578 = DAT_0058358c / DAT_00583588;
  }
  else {
    if (DAT_005835e4 == 0) {
      DAT_00583588 = DAT_00583588 + 1;
    }
    DAT_005835e4 = 1;
    DAT_0055b578 = DAT_0058358c / DAT_00583588;
  }
  iVar1 = 1;
  if (0 < DAT_005cc9d8) {
    iVar1 = DAT_005cc9d8;
  }
  if ((uint)(1000 / (longlong)iVar1) <= DAT_0055b578) {
    iVar1 = 1;
    if (0 < DAT_005cc9d8) {
      iVar1 = DAT_005cc9d8;
    }
    DAT_0055b578 = (uint)(1000 / (longlong)iVar1);
  }
  if (DAT_0055b578 == 0) {
    DAT_0055b578 = 1;
  }
  return;
}


