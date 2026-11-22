
undefined4 __thiscall FUN_0040b180(void *this,int *param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  
  uVar2 = FUN_00539660(this,4,1,param_1);
  if (uVar2 != 1) {
    return 0;
  }
  uVar2 = FUN_00539660((char *)((int)this + 4),4,1,param_1);
  if (uVar2 != 1) {
    return 0;
  }
  uVar2 = FUN_00539660((char *)((int)this + 8),4,1,param_1);
  if (uVar2 != 1) {
    return 0;
  }
  uVar2 = FUN_00539660((char *)((int)this + 0xc),4,1,param_1);
  if (uVar2 != 1) {
    return 0;
  }
  iVar3 = FUN_004d5f20(DAT_005a7b78,*(uint *)((int)this + 0x10),*(int *)((int)this + 0x14),param_1);
  if (iVar3 == 0) {
    return 0;
  }
  piVar1 = (int *)((int)this + 0x40);
  uVar2 = FUN_00539660((char *)piVar1,4,1,param_1);
  if (uVar2 != 1) {
    return 0;
  }
  iVar3 = 0;
  if (0 < *piVar1) {
    pcVar4 = (char *)((int)this + 0x18);
    do {
      uVar2 = FUN_00539660(pcVar4,4,1,param_1);
      if (uVar2 != 1) {
        return 0;
      }
      iVar3 = iVar3 + 1;
      pcVar4 = pcVar4 + 4;
    } while (iVar3 < *piVar1);
  }
  uVar2 = FUN_00539660((char *)((int)this + 0x48),4,1,param_1);
  return (uint)(uVar2 == 1);
}


