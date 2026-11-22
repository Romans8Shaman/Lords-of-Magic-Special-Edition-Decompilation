
undefined4 __thiscall
FUN_00429380(void *this,int param_1,int param_2,int param_3,int param_4,int param_5)

{
  undefined4 *this_00;
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  puVar1 = FUN_00485080(this,param_1,0x2f);
  if ((((puVar1 == (undefined4 *)0x0) ||
       (puVar2 = FUN_00485080(this,param_3,0x2f), puVar2 == (undefined4 *)0x0)) || (param_2 < 0)) ||
     ((((int)puVar1[0x13] <= param_2 || (param_4 < 0)) || ((int)puVar2[0x13] <= param_4)))) {
    return 0;
  }
  this_00 = puVar1 + param_2 * 0x13 + 0x31;
  iVar3 = FUN_00428bf0(this_00,param_5);
  if (iVar3 == 0) {
    return 0;
  }
  if ((*(byte *)(iVar3 + 0x10) & 0x1f) != 0) {
    FUN_004282a0(this_00,puVar1[10],param_2,*(int *)(iVar3 + 0xc),0);
    iVar3 = FUN_00428bf0(this_00,param_5);
    if (iVar3 == 0) {
      iVar3 = FUN_00420560((int)puVar1);
      if (iVar3 == 0) {
        return 1;
      }
      if ((*(byte *)(puVar1 + 0xc) & 0x20) == 0) {
        return 1;
      }
      if (puVar1[0x12] != *(int *)(&DAT_005a7d90 + DAT_005a7d8c * 0x400)) {
        return 1;
      }
      iVar3 = FUN_0052d160((int)(&DAT_005a7d90 + DAT_005a7d8c * 0x400));
      if (puVar1[10] != iVar3) {
        return 1;
      }
      goto LAB_00429532;
    }
  }
  FUN_00428770(this_00,param_5);
  *(uint *)(iVar3 + 0x10) = *(uint *)(iVar3 + 0x10) | 1 << ((char)puVar2[0x12] + 8U & 0x1f);
  FUN_00428170(puVar2 + param_4 * 0x13 + 0x31,iVar3);
  FUN_004282a0(puVar2 + param_4 * 0x13 + 0x31,puVar2[10],param_4,*(int *)(iVar3 + 0xc),1);
  iVar3 = FUN_00420560((int)puVar1);
  if (iVar3 == 0) {
    return 1;
  }
  if ((*(byte *)(puVar1 + 0xc) & 0x20) == 0) {
    return 1;
  }
  if (puVar1[0x12] != *(int *)(&DAT_005a7d90 + DAT_005a7d8c * 0x400)) {
    return 1;
  }
  iVar3 = FUN_0052d160((int)(&DAT_005a7d90 + DAT_005a7d8c * 0x400));
  if (puVar1[10] != iVar3) {
    return 1;
  }
LAB_00429532:
  FUN_004d09a0(DAT_005a7b78,DAT_005a7be4,DAT_005a7be8,0);
  return 1;
}


