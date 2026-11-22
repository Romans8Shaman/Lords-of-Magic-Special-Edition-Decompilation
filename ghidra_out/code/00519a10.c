
undefined4 __fastcall FUN_00519a10(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar2 = DAT_005ae9b8;
  iVar3 = DAT_005ae9b4;
  if ((DAT_005ae9b4 != param_1[0x80b0]) || (DAT_005ae9b8 != param_1[0x80b1])) {
    FUN_00519980((int)param_1);
  }
  if (param_1[0x80ab] == 0) {
    iVar1 = iVar2 + 1;
    param_1[0x80ac] = iVar1;
    param_1[0x80b0] = iVar3;
    param_1[0x80b1] = iVar2;
    param_1[0x80ad] = iVar3 + 1;
    iVar3 = Ordinal_401(iVar1 * 4,s_C__lomse_source_storm_h_00555130,0x3fa,0);
    param_1[0x80ab] = iVar3;
    if (iVar3 == 0) {
      return 0;
    }
    iVar3 = 0;
    if (0 < param_1[0x80ac]) {
      do {
        iVar3 = iVar3 + 1;
        *(undefined4 *)(param_1[0x80ab] + -4 + iVar3 * 4) = 0;
      } while (iVar3 < param_1[0x80ac]);
    }
    iVar3 = 0;
    if (0 < param_1[0x80ac]) {
      do {
        uVar4 = Ordinal_401(param_1[0x80ad] << 3,s_C__lomse_source_storm_h_00555130,0x3fa,0);
        *(undefined4 *)(param_1[0x80ab] + iVar3 * 4) = uVar4;
        if (*(int *)(param_1[0x80ab] + iVar3 * 4) == 0) {
          FUN_00519980((int)param_1);
          return 0;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < param_1[0x80ac]);
    }
    param_1[0x6b] = param_1[0x6b] + (param_1[0x80ad] * 8 + 4) * param_1[0x80ac];
  }
  uVar4 = (/*IC:00519b13*/**(code **)(*param_1 + 0x1c))(param_1,1);
  return uVar4;
}


