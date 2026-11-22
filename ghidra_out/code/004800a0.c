
undefined4 FUN_004800a0(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  bool bVar4;
  int local_108;
  undefined1 local_104;
  undefined4 local_f3;
  
  FUN_0048cc40((int)&local_108);
  if (DAT_005d1e84 == 0) {
    bVar4 = true;
  }
  else {
    iVar1 = *(int *)(DAT_005d1e84 + 0x390);
    iVar2 = FUN_004b7dd0(DAT_005d1e84);
    bVar4 = iVar1 == iVar2;
  }
  if (bVar4) {
    if (DAT_005d1e84 != 0) {
      FUN_005047d0(s_host_requested_game___ignored_re_0055b1c0);
    }
    return 0;
  }
  local_104 = 0x20;
  if (DAT_005d1e84 == 0) {
    local_f3 = 1;
  }
  else {
    local_f3 = FUN_004b7dd0(DAT_005d1e84);
  }
  uVar3 = FUN_00489b70(&DAT_00584ae8,&local_108);
  return uVar3;
}


