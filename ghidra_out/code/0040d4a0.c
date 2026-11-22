
undefined4 __thiscall FUN_0040d4a0(void *this,int *param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  
  iVar2 = FUN_004d5fa0(DAT_005a7b78,this,param_1);
  if (iVar2 == 0) {
    return 0;
  }
  uVar3 = FUN_005397f0((char *)((int)this + 8),4,1,param_1);
  if (uVar3 != 1) {
    return 0;
  }
  iVar2 = FUN_004d5fa0(DAT_005a7b78,(undefined4 *)((int)this + 0xc),param_1);
  if (iVar2 == 0) {
    return 0;
  }
  piVar1 = (int *)((int)this + 0x3c);
  uVar3 = FUN_005397f0((char *)piVar1,4,1,param_1);
  if (uVar3 != 1) {
    return 0;
  }
  iVar2 = 0;
  if (0 < *piVar1) {
    pcVar4 = (char *)((int)this + 0x14);
    do {
      uVar3 = FUN_005397f0(pcVar4,4,1,param_1);
      if (uVar3 != 1) {
        return 0;
      }
      iVar2 = iVar2 + 1;
      pcVar4 = pcVar4 + 4;
    } while (iVar2 < *piVar1);
  }
  uVar3 = FUN_005397f0((char *)((int)this + 0x44),4,1,param_1);
  return (uint)(uVar3 == 1);
}


