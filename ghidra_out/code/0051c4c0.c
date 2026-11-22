
void __thiscall FUN_0051c4c0(void *this,int param_1)

{
  undefined4 uVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  uint local_8;
  int *local_4;
  
  iVar3 = FUN_0051d200(this,&local_8,0xf);
  pvVar2 = DAT_005a7b78;
  if (iVar3 != 0) {
    uVar1 = *(undefined4 *)(param_1 + 0x28);
    if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
      *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
      FUN_004d4550(pvVar2);
      *(undefined4 *)((int)pvVar2 + 0x90) = 0;
      *(undefined4 *)((int)pvVar2 + 0xa4) = 0;
    }
    else {
      iVar4 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
      *(int *)((int)DAT_005a7b78 + 0x54) = iVar4;
      iVar3 = *(int *)((int)pvVar2 + 0x50);
      *(undefined4 *)(iVar3 + iVar4 * 8) = 1;
      *(undefined4 *)(iVar3 + 4 + iVar4 * 8) = uVar1;
    }
    FUN_004d09a0(DAT_005a7b78,local_8,local_4,-1);
  }
  return;
}


