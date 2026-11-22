
int __fastcall FUN_004517e0(int param_1)

{
  undefined *this;
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = 0;
  iVar2 = *(int *)(param_1 + 0x1c);
  do {
    uVar4 = 0x80000;
    iVar1 = iVar3;
    this = FUN_004c6fc0();
    iVar1 = FUN_004a4c70(this,iVar2,iVar1,uVar4);
    iVar2 = *(int *)(param_1 + 0x1c);
    if (iVar1 != iVar2) {
      return iVar1;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 8);
  return -1;
}


