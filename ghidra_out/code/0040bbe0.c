
undefined4 __thiscall FUN_0040bbe0(void *this,int *param_1)

{
  uint uVar1;
  int iVar2;
  char *pcVar3;
  
  uVar1 = FUN_00539660(this,4,1,param_1);
  if (uVar1 != 1) {
    return 0;
  }
  uVar1 = FUN_00539660((char *)((int)this + 4),4,1,param_1);
  if (uVar1 != 1) {
    return 0;
  }
  uVar1 = FUN_00539660((char *)((int)this + 8),4,1,param_1);
  if (uVar1 != 1) {
    return 0;
  }
  uVar1 = FUN_00539660((char *)((int)this + 0xc),4,1,param_1);
  if (uVar1 != 1) {
    return 0;
  }
  uVar1 = FUN_00539660((char *)((int)this + 0x10),4,1,param_1);
  if (uVar1 != 1) {
    return 0;
  }
  iVar2 = FUN_004d5f20(DAT_005a7b78,*(uint *)((int)this + 0x14),*(int *)((int)this + 0x18),param_1);
  if (iVar2 == 0) {
    return 0;
  }
  uVar1 = FUN_00539660((char *)((int)this + 0x44),4,1,param_1);
  if (uVar1 != 1) {
    return 0;
  }
  iVar2 = 0;
  if (0 < *(int *)((int)this + 0x44)) {
    pcVar3 = (char *)((int)this + 0x1c);
    do {
      uVar1 = FUN_00539660(pcVar3,4,1,param_1);
      if (uVar1 != 1) {
        return 0;
      }
      iVar2 = iVar2 + 1;
      pcVar3 = pcVar3 + 4;
    } while (iVar2 < *(int *)((int)this + 0x44));
  }
  uVar1 = FUN_00539660((char *)((int)this + 0x4c),4,1,param_1);
  return (uint)(uVar1 == 1);
}


