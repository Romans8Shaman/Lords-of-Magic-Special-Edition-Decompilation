
undefined4 __fastcall FUN_00489ff0(void *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint *puVar5;
  
  uVar1 = FUN_0048a400(0x584ae8);
  iVar2 = FUN_004c4d00((int *)&DAT_005cd2c4);
  uVar3 = FUN_005262b0((undefined4 *)((int)param_1 + 0x487dc));
  if (0 < iVar2) {
    do {
      iVar4 = FUN_004c4cf0(&DAT_005cd2c4);
      if (*(byte *)(iVar4 + 7) == uVar1) {
        puVar5 = (uint *)FUN_0048c2b0(iVar4);
        if ((((puVar5 != (uint *)0x0) && (puVar5[1] == 0)) && (*puVar5 != 0xfffffffe)) &&
           (DAT_00583560 < *puVar5)) {
          *puVar5 = DAT_00583560;
        }
      }
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_004c4d30((undefined4 *)((int)param_1 + 0x487dc),uVar3);
  FUN_0048a1b0(param_1);
  return 1;
}


