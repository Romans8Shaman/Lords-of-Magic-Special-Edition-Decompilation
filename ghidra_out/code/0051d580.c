
undefined4 __thiscall FUN_0051d580(void *this,int *param_1)

{
  undefined4 *this_00;
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined *puVar5;
  
  iVar2 = param_1[7];
  this_00 = FUN_004c6fb0();
  uVar1 = FUN_004c5e60(this_00,iVar2);
  iVar2 = FUN_004c5ec0(this_00,uVar1);
  iVar3 = FUN_0051c100(this,iVar2);
  if (iVar3 == 0) {
    return 1;
  }
  iVar3 = *(int *)((int)this + 0x68);
  iVar4 = (/*IC:0051d5c5*/**(code **)(*param_1 + 0x3c))(param_1);
  if (iVar4 == iVar3) {
    return 1;
  }
  if ((iVar3 < 0) || (0xf < iVar3)) {
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar5 = &DAT_005af194 + iVar3 * 0x1d84;
  }
  if (puVar5 == (undefined *)0x0) {
    FUN_005047d0(s_no_player_0055c710);
    return 0;
  }
  iVar3 = (/*IC:0051d61d*/**(code **)(*param_1 + 0x3c))(param_1);
  if ((iVar3 < 0) || (0xf < iVar3)) {
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar5 = puVar5 + iVar3 * 0x88 + 0xd28;
  }
  if (puVar5 != (undefined *)0x0) {
    if ((puVar5[8] & 0x20) != 0) {
      return 1;
    }
    iVar3 = FUN_004c8660(iVar2);
    iVar4 = (/*IC:0051d662*/**(code **)(*param_1 + 0x3c))(param_1);
    if ((iVar3 == iVar4) && ((puVar5[8] & 2) != 0)) {
      return 1;
    }
    iVar2 = FUN_004c8660(iVar2);
    if ((iVar2 != *(int *)((int)this + 0x68)) && ((puVar5[8] & 8) != 0)) {
      return 1;
    }
  }
  return 0;
}


