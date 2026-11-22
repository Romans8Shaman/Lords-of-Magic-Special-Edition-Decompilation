
undefined4 __fastcall FUN_004b2310(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  bool bVar6;
  int local_108;
  undefined1 local_104;
  undefined4 local_f3 [60];
  
  if (DAT_005d1e84 == 0) {
    bVar6 = true;
  }
  else {
    iVar3 = *(int *)(DAT_005d1e84 + 0x390);
    iVar1 = FUN_004b7dd0(DAT_005d1e84);
    bVar6 = iVar3 == iVar1;
  }
  if (bVar6) {
    FUN_0048cc40((int)&local_108);
    local_104 = 0x59;
    puVar4 = (undefined4 *)(param_1 + 0x520);
    puVar5 = local_f3;
    for (iVar3 = 0x29; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    uVar2 = FUN_00489b70(&DAT_00584ae8,&local_108);
    return uVar2;
  }
  return 0;
}


