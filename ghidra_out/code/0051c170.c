
undefined4 __fastcall FUN_0051c170(int *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int *piStack_4;
  
  iVar3 = DAT_005cc9d4;
  piStack_4 = param_1;
  iVar1 = (/*IC:0051c17d*/**(code **)(*param_1 + 0x3c))(param_1);
  if (iVar1 != iVar3) {
    return 0;
  }
  uVar2 = FUN_00419460((int)param_1);
  if (uVar2 != 0) {
    return 0;
  }
  if (-1 < param_1[0x14e]) {
    return 0;
  }
  if ((param_1[0xc] & 0x241082U) != 0) {
    return 0;
  }
  iVar3 = FUN_004102e0(param_1,(int *)&piStack_4);
  if ((iVar3 == 0) || ((*(byte *)(iVar3 + 0x10) & 1) != 0)) {
    return 1;
  }
  return 0;
}


