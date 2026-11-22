
void __thiscall FUN_0051f440(void *this,int param_1)

{
  int iVar1;
  undefined4 uVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  uint local_8;
  int *local_4;
  
  DAT_005d2ed4 = *(undefined4 *)(param_1 + 0x28);
  DAT_005d2ed0 = 0x15;
  iVar1 = *(int *)(param_1 + 0x550);
  iVar4 = FUN_0051d200(this,&local_8,0xb);
  pvVar3 = DAT_005a7b78;
  if (iVar4 != 0) {
    uVar2 = *(undefined4 *)((int)this + 100);
    if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
      *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
      FUN_004d4550(pvVar3);
      *(undefined4 *)((int)pvVar3 + 0x90) = 0;
      *(undefined4 *)((int)pvVar3 + 0xa4) = 0;
    }
    else {
      iVar4 = *(int *)((int)DAT_005a7b78 + 0x50);
      iVar5 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
      *(int *)((int)DAT_005a7b78 + 0x54) = iVar5;
      *(undefined4 *)(iVar4 + iVar5 * 8) = 1;
      *(undefined4 *)(iVar4 + 4 + iVar5 * 8) = uVar2;
    }
    FUN_004d09a0(DAT_005a7b78,local_8,local_4,-1);
  }
  FUN_0040c9c0(&DAT_005aeea0,iVar1);
  return;
}


