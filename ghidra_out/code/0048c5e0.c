
void FUN_0048c5e0(void)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  uint *puVar4;
  uint uVar5;
  undefined4 local_108;
  char local_104;
  byte local_100;
  
  iVar2 = FUN_0048c550();
  if (iVar2 != 0) {
    FUN_0048cc40((int)&local_108);
    uVar3 = FUN_005262b0((undefined4 *)&DAT_005cd2c4);
    uVar5 = DAT_0055b574;
    iVar2 = FUN_004c4c60(&DAT_005cd2c4,&local_108);
    while (iVar2 != 0) {
      puVar4 = (uint *)FUN_0048c2b0((int)&local_108);
      if (((puVar4 != (uint *)0x0) &&
          (((((local_100 & 2) == 0 || (local_104 == '1')) || (local_104 == '2')) &&
           ((puVar4[1] == 0 && (uVar1 = *puVar4, uVar1 != 0xfffffffe)))))) && (uVar1 < uVar5)) {
        uVar5 = uVar1;
      }
      iVar2 = FUN_004c4c60(&DAT_005cd2c4,&local_108);
    }
    FUN_004c4d30(&DAT_005cd2c4,uVar3);
    if ((uVar5 != 0xffffffff) && (DAT_00583560 < uVar5)) {
      FUN_004b6ef0(s__NEXT_MESSAGE__0055c038,uVar5);
    }
  }
  return;
}


