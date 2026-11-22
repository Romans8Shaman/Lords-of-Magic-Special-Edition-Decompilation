
int __thiscall FUN_004c54b0(void *this,int param_1,int param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined4 *this_00;
  uint uVar3;
  int iVar4;
  
  puVar1 = FUN_004c6fc0();
  iVar2 = FUN_004fbe60(puVar1 + 0x1c,param_2,3);
  if (iVar2 == 0) {
    return 0;
  }
  do {
    if (*(int *)(iVar2 + 0x68) == param_1) {
      iVar4 = *(int *)(iVar2 + 0x1c);
      this_00 = FUN_004c6fb0();
      uVar3 = FUN_004c5e60(this_00,iVar4);
      if (uVar3 == *(uint *)((int)this + 0x14)) {
        return iVar2;
      }
    }
    puVar1 = FUN_004c6fc0();
    iVar2 = FUN_004fbe60(puVar1 + 0x1c,iVar2,3);
  } while (iVar2 != 0);
  return 0;
}


