
undefined4 __fastcall FUN_00446610(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  
  if (((param_1[0x16] == 0xe) && (-1 < param_1[0x21])) && (0 < param_1[0x22])) {
    iVar1 = (/*IC:0044663d*/**(code **)(*param_1 + 0x3c))(param_1);
    if ((iVar1 < 0) || (0xf < iVar1)) {
      puVar3 = (undefined *)0x0;
    }
    else {
      puVar3 = &DAT_005af194 + iVar1 * 0x1d84;
    }
    iVar1 = FUN_004efe80(&DAT_005aee6c,param_1[0x21]);
    if ((iVar1 == 0) || (puVar3 == (undefined *)0x0)) {
      param_1[0x21] = -1;
      param_1[0x22] = 0;
    }
    else {
      iVar2 = FUN_004beef0(puVar3 + 0x34,param_1[0x21]);
      if ((iVar2 == 0) && (*(int *)(iVar1 + 0x30) <= param_1[0x22])) {
        FUN_004bef40(puVar3 + 0x34,param_1[0x21]);
        param_1[0x22] = 0;
        return 1;
      }
    }
  }
  return 0;
}


