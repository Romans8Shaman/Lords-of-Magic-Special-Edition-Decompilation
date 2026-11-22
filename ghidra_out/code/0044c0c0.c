
undefined4 * FUN_0044c0c0(int param_1,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  
  puVar1 = FUN_004fbed0(&DAT_005ae974,0);
  if (puVar1 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  do {
    iVar2 = 0;
    if (0 < (int)puVar1[0x13]) {
      piVar3 = puVar1 + 0x39;
      do {
        if (*piVar3 == param_1) {
          *param_2 = iVar2;
          return puVar1;
        }
        iVar2 = iVar2 + 1;
        piVar3 = piVar3 + 0x13;
      } while (iVar2 < (int)puVar1[0x13]);
    }
    puVar1 = FUN_004fbed0(&DAT_005ae974,(int)puVar1);
  } while (puVar1 != (undefined4 *)0x0);
  return (undefined4 *)0x0;
}


