
int FUN_0048c340(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 local_108 [66];
  
  iVar3 = 0;
  FUN_0048cc40((int)local_108);
  uVar1 = FUN_005262b0((undefined4 *)&DAT_005cd2c4);
  iVar2 = FUN_004c4c60(&DAT_005cd2c4,local_108);
  while ((iVar2 != 0 && (iVar3 == 0))) {
    iVar2 = FUN_0048c2b0((int)local_108);
    if (iVar2 != 0) {
      iVar3 = 1;
    }
    iVar2 = FUN_004c4c60(&DAT_005cd2c4,local_108);
  }
  FUN_004c4d30(&DAT_005cd2c4,uVar1);
  return iVar3;
}


