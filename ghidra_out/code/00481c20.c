
undefined4 __thiscall FUN_00481c20(void *this,int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  undefined4 local_8;
  
  local_8 = 1;
  iVar1 = *(int *)((int)this + 0x6a8);
  if ((iVar1 < 0) || (0xf < iVar1)) {
    iVar4 = 0;
  }
  else {
    iVar4 = (int)this + iVar1 * 0x1d84 + 0x5068;
  }
  iVar2 = *(int *)((int)this + 0xc84);
  if ((iVar2 < 0) || (0xf < iVar2)) {
    iVar3 = 0;
  }
  else {
    iVar3 = (int)this + iVar2 * 0x1d84 + 0x5068;
  }
  switch((char)param_1[1]) {
  case '\r':
  case '\x1e':
  case 'D':
  case 'E':
    if ((iVar1 < 0) || (0xf < iVar1)) {
      iVar1 = 0;
    }
    else {
      iVar1 = (int)this + iVar1 * 0x1d84 + 0x5068;
    }
    if ((iVar2 < 0) || (0xf < iVar2)) {
      iVar2 = 0;
    }
    else {
      iVar2 = (int)this + iVar2 * 0x1d84 + 0x5068;
    }
    if ((iVar1 == 0) || (iVar2 == 0)) goto switchD_00481d3e_default;
    break;
  default:
    goto switchD_00481d3e_default;
  }
  switch(((byte)(*(uint *)(iVar3 + 0x15d8) >> 1) & 1) << 1 |
         (byte)(*(uint *)(iVar4 + 0x15d8) >> 1) & 1) {
  case 0:
    if ((char)param_1[1] != ':') goto switchD_00481d3e_default;
    iVar1 = *(int *)(iVar1 + 0x15dc);
    if (DAT_005d1e84 == 0) goto LAB_00481d82;
    iVar4 = FUN_004b7dd0(DAT_005d1e84);
    goto LAB_00481d87;
  case 1:
    iVar1 = *(int *)(iVar2 + 0x15dc);
    break;
  case 2:
    iVar1 = *(int *)(iVar1 + 0x15dc);
    break;
  case 3:
    if (DAT_005d1e84 == 0) {
      bVar5 = true;
    }
    else {
      iVar1 = *(int *)(DAT_005d1e84 + 0x390);
      iVar4 = FUN_004b7dd0(DAT_005d1e84);
      bVar5 = iVar1 == iVar4;
    }
    if (!bVar5) {
      local_8 = 0;
    }
  default:
    goto switchD_00481d3e_default;
  }
  if (DAT_005d1e84 == 0) {
LAB_00481d82:
    iVar4 = 1;
  }
  else {
    iVar4 = FUN_004b7dd0(DAT_005d1e84);
  }
LAB_00481d87:
  if (iVar1 != iVar4) {
    local_8 = 0;
  }
switchD_00481d3e_default:
  iVar1 = FUN_00481e40(this,param_1);
  if (iVar1 == 0) {
    local_8 = 0;
  }
  return local_8;
}


