
undefined4 __thiscall FUN_0040bd10(void *this,int *param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  
  uVar2 = FUN_005397f0(this,4,1,param_1);
  if (uVar2 != 1) {
    return 0;
  }
  uVar2 = FUN_005397f0((char *)((int)this + 4),4,1,param_1);
  if (uVar2 != 1) {
    return 0;
  }
  uVar2 = FUN_005397f0((char *)((int)this + 8),4,1,param_1);
  if (uVar2 != 1) {
    return 0;
  }
  uVar2 = FUN_005397f0((char *)((int)this + 0xc),4,1,param_1);
  if (uVar2 != 1) {
    return 0;
  }
  uVar2 = FUN_005397f0((char *)((int)this + 0x10),4,1,param_1);
  if (uVar2 != 1) {
    return 0;
  }
  iVar3 = FUN_004d5fa0(DAT_005a7b78,(undefined4 *)((int)this + 0x14),param_1);
  if (iVar3 == 0) {
    return 0;
  }
  piVar1 = (int *)((int)this + 0x44);
  uVar2 = FUN_005397f0((char *)piVar1,4,1,param_1);
  if (uVar2 != 1) {
    return 0;
  }
  iVar3 = 0;
  if (0 < *piVar1) {
    pcVar4 = (char *)((int)this + 0x1c);
    do {
      uVar2 = FUN_005397f0(pcVar4,4,1,param_1);
      if (uVar2 != 1) {
        return 0;
      }
      iVar3 = iVar3 + 1;
      pcVar4 = pcVar4 + 4;
    } while (iVar3 < *piVar1);
  }
  uVar2 = FUN_005397f0((char *)((int)this + 0x4c),4,1,param_1);
  return (uint)(uVar2 == 1);
}


