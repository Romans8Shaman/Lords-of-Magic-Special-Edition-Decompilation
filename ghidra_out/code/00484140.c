
undefined4 FUN_00484140(void)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int local_108 [5];
  uint local_f3;
  
  if (DAT_005d1e84 == 0) {
    bVar3 = true;
  }
  else {
    iVar1 = *(int *)(DAT_005d1e84 + 0x390);
    iVar2 = FUN_004b7dd0(DAT_005d1e84);
    bVar3 = iVar1 == iVar2;
  }
  if (bVar3) {
    FUN_0048cc70(local_108,0x4c);
    local_f3 = DAT_005d2ca4;
    if (DAT_005d2ca4 == 0) {
      local_f3 = FUN_0053a110();
    }
    DAT_005843e0 = local_f3;
    FUN_00489b70(&DAT_00584ae8,local_108);
  }
  return 1;
}


