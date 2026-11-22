
undefined4 __thiscall FUN_0040c650(void *this,int *param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  
  iVar2 = FUN_004d5f20(DAT_005a7b78,*(uint *)this,*(int *)((int)this + 4),param_1);
  if (iVar2 == 0) {
    return 0;
  }
  piVar1 = (int *)((int)this + 0x30);
  uVar3 = FUN_00539660((char *)piVar1,4,1,param_1);
  if (uVar3 != 1) {
    return 0;
  }
  iVar2 = 0;
  if (0 < *piVar1) {
    pcVar4 = (char *)((int)this + 8);
    do {
      uVar3 = FUN_00539660(pcVar4,4,1,param_1);
      if (uVar3 != 1) {
        return 0;
      }
      iVar2 = iVar2 + 1;
      pcVar4 = pcVar4 + 4;
    } while (iVar2 < *piVar1);
  }
  uVar3 = FUN_00539660((char *)((int)this + 0x34),4,1,param_1);
  return (uint)(uVar3 == 1);
}


