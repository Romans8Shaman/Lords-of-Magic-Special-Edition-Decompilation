
undefined4 FUN_004291a0(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  void *pvVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  
  if ((((param_2 < 0) || (*(int *)(param_1 + 0x4c) <= param_2)) || (param_4 < 0)) ||
     (*(int *)(param_3 + 0x4c) <= param_4)) {
    return 0;
  }
  pvVar1 = (void *)(param_1 + 0xc4 + param_2 * 0x4c);
  piVar2 = (int *)FUN_00428bf0(pvVar1,param_5);
  if (piVar2 == (int *)0x0) {
    return 0;
  }
  if ((*(byte *)(piVar2 + 4) & 0x1f) != 0) {
    FUN_004282a0(pvVar1,*(undefined4 *)(param_1 + 0x28),param_2,piVar2[3],0);
    piVar2 = (int *)FUN_00428bf0(pvVar1,param_5);
    if (piVar2 == (int *)0x0) {
      iVar3 = FUN_00420560(param_1);
      if (iVar3 == 0) {
        return 1;
      }
      if ((*(byte *)(param_1 + 0x30) & 0x20) == 0) {
        return 1;
      }
      if (*(int *)(param_1 + 0x48) != *(int *)(&DAT_005a7d90 + DAT_005a7d8c * 0x400)) {
        return 1;
      }
      iVar3 = FUN_0052d160((int)(&DAT_005a7d90 + DAT_005a7d8c * 0x400));
      if (*(int *)(param_1 + 0x28) != iVar3) {
        return 1;
      }
      goto LAB_00429354;
    }
  }
  FUN_00428770(pvVar1,param_5);
  uVar4 = piVar2[4] | 1 << ((char)*(undefined4 *)(param_3 + 0x48) + 8U & 0x1f);
  piVar2[4] = uVar4;
  if (*(int *)(param_1 + 0x48) != *(int *)(param_3 + 0x48)) {
    piVar2[4] = 1 << ((char)*(int *)(param_1 + 0x48) + 8U & 0x1f) | uVar4;
  }
  pvVar1 = (void *)(param_3 + 0xc4 + param_4 * 0x4c);
  FUN_00428170(pvVar1,(int)piVar2);
  iVar3 = FUN_00427b80(*piVar2);
  if ((*(byte *)(iVar3 + 0x18) & 0x10) != 0) {
    FUN_004282a0(pvVar1,*(undefined4 *)(param_3 + 0x28),param_4,piVar2[3],1);
  }
  iVar3 = FUN_00420560(param_1);
  if (iVar3 == 0) {
    return 1;
  }
  if ((*(byte *)(param_1 + 0x30) & 0x20) == 0) {
    return 1;
  }
  if (*(int *)(param_1 + 0x48) != *(int *)(&DAT_005a7d90 + DAT_005a7d8c * 0x400)) {
    return 1;
  }
  iVar3 = FUN_0052d160((int)(&DAT_005a7d90 + DAT_005a7d8c * 0x400));
  if (*(int *)(param_1 + 0x28) != iVar3) {
    return 1;
  }
LAB_00429354:
  FUN_004d09a0(DAT_005a7b78,DAT_005a7be4,DAT_005a7be8,0);
  return 1;
}


