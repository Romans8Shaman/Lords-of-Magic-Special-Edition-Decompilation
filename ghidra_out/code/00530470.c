
void FUN_00530470(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = *param_1;
  for (puVar2 = FUN_004fbed0(&DAT_005ae974,0); puVar2 != (undefined4 *)0x0;
      puVar2 = FUN_004fbed0(&DAT_005ae974,(int)puVar2)) {
    if (puVar2[0x12] == iVar1) {
      puVar2[0xc] = puVar2[0xc] & 0xfffffff7;
    }
  }
  DAT_005aeef4 = 1;
  return;
}


