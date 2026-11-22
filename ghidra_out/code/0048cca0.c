
undefined4 __fastcall FUN_0048cca0(int *param_1)

{
  uint *puVar1;
  undefined4 uVar2;
  int *piVar3;
  uint *puVar4;
  uint uVar5;
  
  puVar1 = (uint *)FUN_0048c2b0((int)param_1);
  if (puVar1 == (uint *)0x0) {
    return 1;
  }
  uVar2 = FUN_005262b0((undefined4 *)&DAT_005cd2c4);
  piVar3 = (int *)FUN_004c4cf0(&DAT_005cd2c4);
  if (piVar3 == (int *)0x0) {
    FUN_004c4d30(&DAT_005cd2c4,uVar2);
    return 0;
  }
  while( true ) {
    puVar4 = (uint *)FUN_0048c2b0((int)piVar3);
    if ((puVar4 != (uint *)0x0) && (*piVar3 == *param_1)) break;
    piVar3 = (int *)FUN_004c4cf0(&DAT_005cd2c4);
    if (piVar3 == (int *)0x0) {
      FUN_004c4d30(&DAT_005cd2c4,uVar2);
      return 0;
    }
  }
  uVar5 = *puVar1;
  if (*puVar1 < *puVar4) {
    uVar5 = *puVar4;
  }
  *puVar4 = uVar5;
  puVar4[1] = puVar4[1] & puVar1[1];
  uVar5 = FUN_0048a400(0x584ae8);
  if (*(byte *)((int)piVar3 + 7) == uVar5) {
    uVar5 = puVar1[2];
    if ((uVar5 <= DAT_00583560) && (uVar5 < DAT_00583560)) {
      DAT_0058357c = DAT_00583560 - uVar5;
    }
  }
  FUN_004c4d30(&DAT_005cd2c4,uVar2);
  return 1;
}


