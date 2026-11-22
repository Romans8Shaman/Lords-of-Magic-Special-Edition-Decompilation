
int FUN_004be000(int param_1,uint param_2)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  uint local_14 [5];
  
  iVar6 = 0;
  iVar5 = 0;
  puVar1 = FUN_0052d240((int)(&DAT_005a7d90 + DAT_005a7d8c * 0x400));
  if ((puVar1 == (undefined4 *)0x0) || (iVar2 = FUN_004c1cf0((int)puVar1), iVar2 != 0)) {
    return 0;
  }
  if (0 < (int)puVar1[0x13]) {
    puVar4 = puVar1 + 0x31;
    do {
      uVar3 = FUN_00525f10((int)puVar4);
      if ((uVar3 == 0) &&
         ((((param_2 & 1 << ((byte)iVar6 & 0x1f)) != 0 || (param_2 == 0)) &&
          (iVar2 = FUN_00522350(puVar1[10],iVar6,local_14), iVar2 != 0)))) {
        iVar5 = iVar5 + local_14[param_1];
      }
      iVar6 = iVar6 + 1;
      puVar4 = puVar4 + 0x13;
    } while (iVar6 < (int)puVar1[0x13]);
  }
  return iVar5 >> 8;
}


